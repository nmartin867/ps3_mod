//
//  ps3_mod.h
//
//  Created by Nick Martin on 10/7/13.
//  Copyright (c) 2013 Nick Martin. All rights reserved.
//

#ifndef CTrain_ps3_mod_h
#define CTrain_ps3_mod_h


/** @brief Open PS# HID device using a Vendor ID () and Product ID
 ().
 
 @ingroup API
 @param vendor_id The Vendor ID (VID) of P3 HID to open.
 @param product_id The Product ID (PID) of P3 HID to open.
 
 @returns
 This function returns a pointer to a #hid_device object on
 success or NULL on failure.
 */
hid_device * open_ps_hid();

#endif
