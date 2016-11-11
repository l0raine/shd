
#ifdef SHD_SYS
#include "shd.h"
#else
#endif

#define SHD_CHECK_SSDT_POINTERS 0x00004000
#define SHD_CHECK_SSDT_INLINE 0x00004001
#define SHD_GET_SSDT_SIZE 0x00004002

// IOCTL CODES for S12
#define SHD_IOCTL_CHECK_SSDT_POINTERS			CTL_CODE(FILE_DEVICE_UNKNOWN, SHD_CHECK_SSDT_POINTERS, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)
#define SHD_IOCTL_CHECK_SSDT_INLINE				CTL_CODE(FILE_DEVICE_UNKNOWN, SHD_CHECK_SSDT_INLINE, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)
#define SHD_IOCTL_GET_SSDT_SIZE					CTL_CODE(FILE_DEVICE_UNKNOWN, SHD_GET_SSDT_SIZE, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)