#include <stddef.h>
#include <stdint.h>

void *AIBinder_Class_define(const char *interfaceDescriptor, void *onCreate, void *onDestroy, void *onTransact) {
    (void)interfaceDescriptor;
    (void)onCreate;
    (void)onDestroy;
    (void)onTransact;
    return (void *)1;
}

void AIBinder_Class_setHandleShellCommand(void *clazz, void *handleShellCommand) {
    (void)clazz;
    (void)handleShellCommand;
}

void AIBinder_Class_setOnDump(void *clazz, void *onDump) {
    (void)clazz;
    (void)onDump;
}

void AIBinder_markVintfStability(void *binder) { (void)binder; }
void AIBinder_incStrong(void *binder) { (void)binder; }
void AIBinder_decStrong(void *binder) { (void)binder; }
void *AIBinder_new(void *clazz, void *args) { (void)clazz; (void)args; return NULL; }
void *AIBinder_getUserData(void *binder) { (void)binder; return NULL; }
int AIBinder_isRemote(void *binder) { (void)binder; return 1; }
int AIBinder_associateClass(void *binder, void *clazz) { (void)binder; (void)clazz; return 0; }
int32_t AIBinder_prepareTransaction(void *binder, void **in) { (void)binder; (void)in; return -38; }
int32_t AIBinder_transact(void *binder, uint32_t code, void **in, void **out, uint32_t flags) {
    (void)binder; (void)code; (void)in; (void)out; (void)flags;
    return -38;
}
int32_t AIBinder_dump(void *binder, int fd, const char **args, uint32_t numArgs) {
    (void)binder; (void)fd; (void)args; (void)numArgs;
    return -38;
}
void *AIBinder_Weak_new(void *binder) { (void)binder; return NULL; }
void AIBinder_Weak_delete(void *weak) { (void)weak; }
void *AIBinder_Weak_promote(void *weak) { (void)weak; return NULL; }

void *AServiceManager_checkService(const char *instance) { (void)instance; return NULL; }

void AParcel_delete(void *parcel) { (void)parcel; }
int32_t AParcel_getDataPosition(const void *parcel) { (void)parcel; return 0; }
int32_t AParcel_setDataPosition(void *parcel, int32_t position) { (void)parcel; (void)position; return -38; }
void AParcel_markSensitive(void *parcel) { (void)parcel; }
int32_t AParcel_readBool(const void *parcel, int *val) { (void)parcel; (void)val; return -38; }
int32_t AParcel_writeBool(void *parcel, int val) { (void)parcel; (void)val; return -38; }
int32_t AParcel_readInt32(const void *parcel, int32_t *val) { (void)parcel; (void)val; return -38; }
int32_t AParcel_writeInt32(void *parcel, int32_t val) { (void)parcel; (void)val; return -38; }
int32_t AParcel_readInt64(const void *parcel, int64_t *val) { (void)parcel; (void)val; return -38; }
int32_t AParcel_writeInt64(void *parcel, int64_t val) { (void)parcel; (void)val; return -38; }
int32_t AParcel_readString(const void *parcel, void *stringData, void *allocator) { (void)parcel; (void)stringData; (void)allocator; return -38; }
int32_t AParcel_writeString(void *parcel, const char *str, int32_t len) { (void)parcel; (void)str; (void)len; return -38; }
int32_t AParcel_readByteArray(const void *parcel, void *arrayData, void *allocator) { (void)parcel; (void)arrayData; (void)allocator; return -38; }
int32_t AParcel_writeByteArray(void *parcel, const int8_t *data, int32_t len) { (void)parcel; (void)data; (void)len; return -38; }
int32_t AParcel_readStrongBinder(const void *parcel, void **binder) { (void)parcel; (void)binder; return -38; }
int32_t AParcel_writeStrongBinder(void *parcel, void *binder) { (void)parcel; (void)binder; return -38; }
int32_t AParcel_readParcelableArray(const void *parcel, void *arrayData, void *allocator, void *readElement) {
    (void)parcel; (void)arrayData; (void)allocator; (void)readElement;
    return -38;
}
int32_t AParcel_writeParcelableArray(void *parcel, const void *arrayData, int32_t len, void *writeElement) {
    (void)parcel; (void)arrayData; (void)len; (void)writeElement;
    return -38;
}
int32_t AParcel_readStatusHeader(const void *parcel, void **status) { (void)parcel; (void)status; return -38; }
int32_t AParcel_writeStatusHeader(void *parcel, const void *status) { (void)parcel; (void)status; return -38; }

void *AStatus_newOk(void) { return (void *)1; }
void *AStatus_fromStatus(int32_t status) { (void)status; return (void *)1; }
int AStatus_isOk(const void *status) { (void)status; return 0; }
int32_t AStatus_getExceptionCode(const void *status) { (void)status; return -8; }
int32_t AStatus_getServiceSpecificError(const void *status) { (void)status; return -1; }
int32_t AStatus_getStatus(const void *status) { (void)status; return -38; }
const char *AStatus_getMessage(const void *status) { (void)status; return ""; }
void AStatus_delete(void *status) { (void)status; }
