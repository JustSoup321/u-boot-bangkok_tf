#ifndef __MT6765_H
#define __MT6765_H

/* Uboot definition */
#define CFG_SYS_UBOOT_BASE                   CONFIG_TEXT_BASE

/* SPL -> Uboot */
#define CFG_SYS_UBOOT_START		CONFIG_TEXT_BASE
/* DRAM */
#define CFG_SYS_SDRAM_BASE		0x40000000

#endif