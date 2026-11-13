use std::env;
use std::path::PathBuf;
use std::process::Command;

fn main() {
    println!("cargo:rerun-if-changed=binder_ndk_stub.c");
    if env::var("CARGO_CFG_TARGET_OS").as_deref() != Ok("android") {
        return;
    }
    let out = PathBuf::from(env::var("OUT_DIR").expect("OUT_DIR"));
    let so = out.join("libbinder_ndk.so");
    let cc = env::var("CC_aarch64_linux_android")
        .or_else(|_| env::var("CC"))
        .unwrap_or_else(|_| {
            let ndk = env::var("ANDROID_NDK_HOME").expect("ANDROID_NDK_HOME or CC_aarch64_linux_android");
            format!("{ndk}/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android31-clang")
        });
    let status = Command::new(&cc)
        .args(["-shared", "-fPIC", "-O2", "-Wl,-soname,libbinder_ndk.so", "-o"])
        .arg(&so)
        .arg("binder_ndk_stub.c")
        .status()
        .unwrap_or_else(|e| panic!("run {cc}: {e}"));
    assert!(status.success(), "{cc} failed with {status}");
}
