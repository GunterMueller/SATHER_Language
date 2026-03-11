/* * Last edited: Mar 12 13:09 1993 (mauch) */
#include <errno.h>

int get_EPERM(void) { /*  Not owner */ return EPERM;}
int get_ENOENT(void) { /*  No such file or directory */ return ENOENT;}
int get_ESRCH(void) { /*  No such process */ return ESRCH;}
int get_EINTR(void) { /*  Interrupted system call */ return EINTR;}
int get_EIO(void) { /*  I/O error */ return EIO;}
int get_ENXIO(void) { /*  No such device or address */ return ENXIO;}
int get_E2BIG(void) { /*  Arg list too long */ return E2BIG;}
int get_ENOEXEC(void) { /*  Exec format error */ return ENOEXEC;}
int get_EBADF(void) { /*  Bad file number */ return EBADF;}
int get_ECHILD(void) { /*  No children */ return ECHILD;}
int get_EAGAIN(void) { /*  No more processes */ return EAGAIN;}
int get_ENOMEM(void) { /*  Not enough memory */ return ENOMEM;}
int get_EACCES(void) { /*  Permission denied */ return EACCES;}
int get_EFAULT(void) { /*  Bad address */ return EFAULT;}
int get_ENOTBLK(void) { /*  Block device required */ return ENOTBLK;}
int get_EBUSY(void) { /*  Device busy */ return EBUSY;}
int get_EEXIST(void) { /*  File exists */ return EEXIST;}
int get_EXDEV(void) { /*  Cross-device link */ return EXDEV;}
int get_ENODEV(void) { /*  No such device */ return ENODEV;}
int get_ENOTDIR(void) { /*  Not a directory */ return ENOTDIR;}
int get_EISDIR(void) { /*  Is a directory */ return EISDIR;}
int get_EINVAL(void) { /*  Invalid argument */ return EINVAL;}
int get_ENFILE(void) { /*  File table overflow */ return ENFILE;}
int get_EMFILE(void) { /*  Too many open files */ return EMFILE;}
int get_ENOTTY(void) { /*  Inappropriate ioctl for device */ return ENOTTY;}
int get_EFBIG(void) { /*  File too large */ return EFBIG;}
int get_ENOSPC(void) { /*  No space left on device */ return ENOSPC;}
int get_ESPIPE(void) { /*  Illegal seek */ return ESPIPE;}
int get_EROFS(void) { /*  Read-only file system */ return EROFS;}
int get_EMLINK(void) { /*  Too many links */ return EMLINK;}
int get_EPIPE(void) { /*  Broken piope */ return EPIPE;}
int get_EDOM(void) { /*  Math argument */ return EDOM;}
int get_ERANGE(void) { /*  Result too large */ return ERANGE;}
int get_EWOULDBLOCK(void) { /*  Operation would block */ return EWOULDBLOCK;}
int get_EINPROGRESS(void) { /*  Operation now in progress */ return EINPROGRESS;}
int get_EALREADY(void) { /*  Operation already in progress */ return EALREADY;}
int get_ENOTSOCK(void) { /*  Socket operation on non-socket */ return ENOTSOCK;}
int get_EDESTADDRREQ(void) { /*  Destination address required */ return EDESTADDRREQ;}
int get_EMSGSIZE(void) { /*  Message too long */ return EMSGSIZE;}
int get_EPROTOTYPE(void) { /*  Protocol wrong type for socket */ return EPROTOTYPE;}
int get_ENOPROTOOPT(void) { /*  Option not supported by protocol */ return ENOPROTOOPT;}
int get_EPROTONOSUPPORT(void) { /*  Protocol not supported */ return EPROTONOSUPPORT;}
int get_ESOCKTNOSUPPORT(void) { /*  Socket type not supported */ return ESOCKTNOSUPPORT;}
int get_EOPNOTSUPP(void) { /*  Operation not supported on socket */ return EOPNOTSUPP;}
int get_EPFNOSUPPORT(void) { /*  Protocol family not supported */ return EPFNOSUPPORT;}
int get_EAFNOSUPPORT(void) { /*  Address family not supported by protocol family */ return EAFNOSUPPORT;}
int get_EADDRINUSE(void) { /*  Address already in use */ return EADDRINUSE;}
int get_EADDRNOTAVAIL(void) { /*  Can't assign requested address */ return EADDRNOTAVAIL;}
int get_ENETDOWN(void) { /*  Network is down */ return ENETDOWN;}
int get_ENETUNREACH(void) { /*  Network is unreachable */ return ENETUNREACH;}
int get_ENETRESET(void) { /*  Network dropped connection on reset */ return ENETRESET;}
int get_ECONNABORTED(void) { /*  Software caused connection abort */ return ECONNABORTED;}
int get_ECONNRESET(void) { /*  Connection reset by peer */ return ECONNRESET;}
int get_ENOBUFS(void) { /*  No buffer space available */ return ENOBUFS;}
int get_EISCONN(void) { /*  Socket is already connected */ return EISCONN;}
int get_ENOTCONN(void) { /*  Socket is not connected */ return ENOTCONN;}
int get_ESHUTDOWN(void) { /*  Can't send after socket shutdown */ return ESHUTDOWN;}
int get_ETIMEDOUT(void) { /*  Connection timed out */ return ETIMEDOUT;}
int get_ECONNREFUSED(void) { /*  Connection refused */ return ECONNREFUSED;}
int get_ELOOP(void) { /*  Too many levels of symbolic links */ return ELOOP;}
int get_ENAMETOOLONG(void) { /*  File name too long */ return ENAMETOOLONG;}
int get_EHOSTDOWN(void) { /*  Host is down */ return EHOSTDOWN;}
int get_EHOSTUNREACH(void) { /*  Host is unreachable */ return EHOSTUNREACH;}
int get_ENOTEMPTY(void) { /*  Directory not empty */ return ENOTEMPTY;}
int get_EDQUOT(void) { /*  Disc quota exceeded */ return EDQUOT;}
int get_ESTALE(void) { /*  Stale NFS file handle */ return ESTALE;}
int get_EREMOTE(void) { /*  Too many levels of remote in path */ return EREMOTE;}
int get_ENOSTR(void) { /*  Not a stream device */ return ENOSTR;}
int get_ETIME(void) { /*  Timer expired */ return ETIME;}
int get_ENOSR(void) { /*  Out of stream resources */ return ENOSR;}
int get_ENOMSG(void) { /*  No message of desired type */ return ENOMSG;}
int get_EBADMSG(void) { /*  Not a data message */ return EBADMSG;}
int get_EIDRM(void) { /*  Identifier removed */ return EIDRM;}
