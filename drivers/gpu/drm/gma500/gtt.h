/**************************************************************************
 * Copyright (c) 2007-2008, Intel Corporation.
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *
 **************************************************************************/

#ifndef _PSB_GTT_H_
#define _PSB_GTT_H_

#include <drm/drmP.h>

struct psb_gtt {
	uint32_t gatt_start;
	uint32_t mmu_gatt_start;
	uint32_t gtt_start;
	uint32_t gtt_phys_start;
	unsigned gtt_pages;
	unsigned gatt_pages;
	unsigned long stolen_size;
	unsigned long vram_stolen_size;
	struct rw_semaphore sem;
};

extern int psb_gtt_init(struct drm_device *dev, int resume);
extern void psb_gtt_takedown(struct drm_device *dev);

struct gtt_range {
	struct resource resource;	
	u32 offset;			
	struct drm_gem_object gem;	
	int in_gart;			
	bool stolen;			
	bool mmapping;			
	struct page **pages;		
	int npage;			
	int roll;			
};

extern struct gtt_range *psb_gtt_alloc_range(struct drm_device *dev, int len,
						const char *name, int backed);
extern void psb_gtt_kref_put(struct gtt_range *gt);
extern void psb_gtt_free_range(struct drm_device *dev, struct gtt_range *gt);
extern int psb_gtt_pin(struct gtt_range *gt);
extern void psb_gtt_unpin(struct gtt_range *gt);
extern void psb_gtt_roll(struct drm_device *dev,
					struct gtt_range *gt, int roll);

#endif
