#ifndef MDSO_OUTPUT_H
#define MDSO_OUTPUT_H

#include <stdint.h>

#define MDSO_PRETTY(x)			((uint64_t)x << 32)

/* output actions */
#define MDSO_OUTPUT_EXPORT_SYMS		0x00000001


/* pretty-printer flags */
#define MDSO_PRETTY_LIST		MDSO_PRETTY(0x00000001)
#define MDSO_PRETTY_TABLE		MDSO_PRETTY(0x00000002)
#define MDSO_PRETTY_READOBJ		MDSO_PRETTY(0x00000004)
#define MDSO_PRETTY_OBJDUMP		MDSO_PRETTY(0x00000008)
#define MDSO_PRETTY_YAML		MDSO_PRETTY(0x00000010)

#endif
