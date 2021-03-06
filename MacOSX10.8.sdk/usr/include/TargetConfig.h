// TargetConfig.h is auto-generated by tconf(1); Do not edit.
// Wed Jun 20 13:25:44 2012
// Target: MacOSX

#ifndef _TARGETCONFIG_H_
#define _TARGETCONFIG_H_

#include <sys/cdefs.h>
#include <TargetConditionals.h>

#if defined(__i386__)

#  ifndef TARGET_CPU_X86
#    define TARGET_CPU_X86 1
#  endif /* !TARGET_CPU_X86 */

#  ifndef TARGET_RT_LITTLE_ENDIAN
#    define TARGET_RT_LITTLE_ENDIAN 1
#  endif /* !TARGET_RT_LITTLE_ENDIAN */

#endif /* __i386__ */

#if defined(__ppc__)

#  ifndef TARGET_CPU_PPC
#    define TARGET_CPU_PPC 1
#  endif /* !TARGET_CPU_PPC */

#  ifndef TARGET_RT_BIG_ENDIAN
#    define TARGET_RT_BIG_ENDIAN 1
#  endif /* !TARGET_RT_BIG_ENDIAN */

#endif /* __ppc__ */

#if defined(__x86_64__)

#  ifndef TARGET_CPU_X86_64
#    define TARGET_CPU_X86_64 1
#  endif /* !TARGET_CPU_X86_64 */

#  ifndef TARGET_RT_64_BIT
#    define TARGET_RT_64_BIT 1
#  endif /* !TARGET_RT_64_BIT */

#  ifndef TARGET_RT_LITTLE_ENDIAN
#    define TARGET_RT_LITTLE_ENDIAN 1
#  endif /* !TARGET_RT_LITTLE_ENDIAN */

#endif /* __x86_64__ */

#ifndef TARGET_HAVE_IPV6
#  define TARGET_HAVE_IPV6 1
#endif /* !TARGET_HAVE_IPV6 */

#ifndef TARGET_HAVE_PPP
#  define TARGET_HAVE_PPP 1
#endif /* !TARGET_HAVE_PPP */

#ifndef TARGET_HAVE_QUARANTINE
#  define TARGET_HAVE_QUARANTINE 1
#endif /* !TARGET_HAVE_QUARANTINE */

#ifndef TARGET_HAVE_SANDBOX
#  define TARGET_HAVE_SANDBOX 1
#endif /* !TARGET_HAVE_SANDBOX */

#ifndef TARGET_OS_MAC
#  define TARGET_OS_MAC 1
#endif /* !TARGET_OS_MAC */

#ifndef TARGET_RT_MAC_MACHO
#  define TARGET_RT_MAC_MACHO 1
#endif /* !TARGET_RT_MAC_MACHO */

#endif /* _TARGETCONFIG_H_ */
