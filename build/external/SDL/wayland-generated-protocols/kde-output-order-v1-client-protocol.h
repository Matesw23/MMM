/* Generated by wayland-scanner 1.22.0 */

#ifndef KDE_OUTPUT_ORDER_V1_CLIENT_PROTOCOL_H
#define KDE_OUTPUT_ORDER_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_kde_output_order_v1 The kde_output_order_v1 protocol
 * @section page_ifaces_kde_output_order_v1 Interfaces
 * - @subpage page_iface_kde_output_order_v1 - announce order of outputs
 * @section page_copyright_kde_output_order_v1 Copyright
 * <pre>
 *
 * SPDX-FileCopyrightText: 2022 Xaver Hugl <xaver.hugl@gmail.com>
 *
 * SPDX-License-Identifier: MIT-CMU
 * </pre>
 */
struct kde_output_order_v1;

#ifndef KDE_OUTPUT_ORDER_V1_INTERFACE
#define KDE_OUTPUT_ORDER_V1_INTERFACE
/**
 * @page page_iface_kde_output_order_v1 kde_output_order_v1
 * @section page_iface_kde_output_order_v1_desc Description
 *
 * Announce the order in which desktop environment components should be placed on outputs.
 * The compositor will send the list of outputs when the global is bound and whenever there is a change.
 * @section page_iface_kde_output_order_v1_api API
 * See @ref iface_kde_output_order_v1.
 */
/**
 * @defgroup iface_kde_output_order_v1 The kde_output_order_v1 interface
 *
 * Announce the order in which desktop environment components should be placed on outputs.
 * The compositor will send the list of outputs when the global is bound and whenever there is a change.
 */
extern const struct wl_interface kde_output_order_v1_interface;
#endif

/**
 * @ingroup iface_kde_output_order_v1
 * @struct kde_output_order_v1_listener
 */
struct kde_output_order_v1_listener {
	/**
	 * output name
	 *
	 * Specifies the output identified by their wl_output.name.
	 * @param output_name the name of the output
	 */
	void (*output)(void *data,
		       struct kde_output_order_v1 *kde_output_order_v1,
		       const char *output_name);
	/**
	 * done
	 *
	 * Specifies that the output list is complete. On the next output
	 * event, a new list begins.
	 */
	void (*done)(void *data,
		     struct kde_output_order_v1 *kde_output_order_v1);
};

/**
 * @ingroup iface_kde_output_order_v1
 */
static inline int
kde_output_order_v1_add_listener(struct kde_output_order_v1 *kde_output_order_v1,
				 const struct kde_output_order_v1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) kde_output_order_v1,
				     (void (**)(void)) listener, data);
}

#define KDE_OUTPUT_ORDER_V1_DESTROY 0

/**
 * @ingroup iface_kde_output_order_v1
 */
#define KDE_OUTPUT_ORDER_V1_OUTPUT_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_order_v1
 */
#define KDE_OUTPUT_ORDER_V1_DONE_SINCE_VERSION 1

/**
 * @ingroup iface_kde_output_order_v1
 */
#define KDE_OUTPUT_ORDER_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_kde_output_order_v1 */
static inline void
kde_output_order_v1_set_user_data(struct kde_output_order_v1 *kde_output_order_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) kde_output_order_v1, user_data);
}

/** @ingroup iface_kde_output_order_v1 */
static inline void *
kde_output_order_v1_get_user_data(struct kde_output_order_v1 *kde_output_order_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) kde_output_order_v1);
}

static inline uint32_t
kde_output_order_v1_get_version(struct kde_output_order_v1 *kde_output_order_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) kde_output_order_v1);
}

/**
 * @ingroup iface_kde_output_order_v1
 */
static inline void
kde_output_order_v1_destroy(struct kde_output_order_v1 *kde_output_order_v1)
{
	wl_proxy_marshal_flags((struct wl_proxy *) kde_output_order_v1,
			 KDE_OUTPUT_ORDER_V1_DESTROY, NULL, wl_proxy_get_version((struct wl_proxy *) kde_output_order_v1), WL_MARSHAL_FLAG_DESTROY);
}

#ifdef  __cplusplus
}
#endif

#endif
