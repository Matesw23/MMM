/* Generated by wayland-scanner 1.22.0 */

/*
 * SPDX-FileCopyrightText: 2022 Xaver Hugl <xaver.hugl@gmail.com>
 *
 * SPDX-License-Identifier: MIT-CMU
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif


static const struct wl_interface *kde_output_order_v1_types[] = {
	NULL,
};

static const struct wl_message kde_output_order_v1_requests[] = {
	{ "destroy", "", kde_output_order_v1_types + 0 },
};

static const struct wl_message kde_output_order_v1_events[] = {
	{ "output", "s", kde_output_order_v1_types + 0 },
	{ "done", "", kde_output_order_v1_types + 0 },
};

WL_PRIVATE const struct wl_interface kde_output_order_v1_interface = {
	"kde_output_order_v1", 1,
	1, kde_output_order_v1_requests,
	2, kde_output_order_v1_events,
};
