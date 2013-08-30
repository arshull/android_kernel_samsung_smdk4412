/*
 * include/linux/exynos_ion.h
 *
 * Copyright (C) 2011 Google, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _LINUX_EXYNOS_ION_H
#define _LINUX_EXYNOS_ION_H

#include <linux/ion.h>

enum {
	ION_HEAP_TYPE_EXYNOS_CONTIG = ION_HEAP_TYPE_CUSTOM + 1,
	ION_HEAP_TYPE_EXYNOS,
	ION_HEAP_TYPE_EXYNOS_USER,
};

#define EXYNOS_ION_HEAP_SYSTEM_ID 0
#define EXYNOS_ION_HEAP_SYSTEM_CONTIG_ID 1
#define EXYNOS_ION_HEAP_EXYNOS_CONTIG_ID 4
#define EXYNOS_ION_HEAP_EXYNOS_ID 5
#define EXYNOS_ION_HEAP_EXYNOS_USER_ID 6
#define EXYNOS_ION_HEAP_CHUNK_ID 7

#define ION_HEAP_EXYNOS_CONTIG_MASK	(1 << EXYNOS_ION_HEAP_EXYNOS_CONTIG_ID)
#define ION_HEAP_EXYNOS_MASK		(1 << EXYNOS_ION_HEAP_EXYNOS_ID)
#define ION_HEAP_EXYNOS_USER_MASK    (1 << EXYNOS_ION_HEAP_EXYNOS_USER_ID)
#define ION_EXYNOS_NONCACHE_MASK    (1 << (BITS_PER_LONG - 2))
#define ION_EXYNOS_WRITE_MASK       (1 << (BITS_PER_LONG - 1))

#endif /* _LINUX_ION_H */
