/*
 * (C) Copyright 2004-Present
 * Teddy Reed <reed@fb.com>, Facebook, Inc.
 *
 * SPDX-License-Identifier: GPL-2.0+
 */

#ifndef __FBBACKPACK_CONFIG_H
#define __FBBACKPACK_CONFIG_H

#define CONFIG_IDENT_STRING "\nFacebook Backpack OpenBMC"
#define CONFIG_FBBACKPACK 1

#define CONFIG_SYS_LONGHELP

#define CONFIG_BOOTARGS   "debug console=ttyS0,9600n8 root=/dev/ram rw"
#define CONFIG_BOOTFILE   "flash-galaxy100"

/*
 * Serial configuration
 */
#define CONFIG_SYS_NS16550_COM1 AST_UART0_BASE
#define CONFIG_CONS_INDEX       1
#define CONFIG_ASPEED_COM       AST_UART0_BASE
#define CONFIG_BAUDRATE         9600

/*
 * UART configurtion
 */
#define CONFIG_ASPEED_UART1_ENABLE
#define CONFIG_ASPEED_UART1_BMC // by default, src is LPC for UART1
#define CONFIG_ASPEED_UART2_ENABLE
#define CONFIG_ASPEED_UART2_BMC // by default, src is LPC for UART2
#define CONFIG_ASPEED_UART3_ENABLE
#define CONFIG_ASPEED_UART4_ENABLE

/*
 * NIC configuration
 */
#define CONFIG_MAC2_ENABLE
#define CONFIG_MAC1_PHY_SETTING     0
#define CONFIG_MAC2_PHY_SETTING     0
#define CONFIG_ASPEED_MAC_NUMBER    2
#define CONFIG_ASPEED_MAC_CONFIG    2

#include "facebook_common.h"
#include "ast2500_common.h"

#endif  /* __FBBACKPACK_CONFIG_H */