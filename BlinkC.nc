// $Id: BlinkC.nc,v 1.4 2006/12/12 18:22:48 vlahan Exp $

/*									tab:4
 * "Copyright (c) 2000-2005 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

#include "puff.h"

module BlinkC {
  uses {
    interface Boot;
    interface Leds;
  }
}

implementation {
  event void Boot.booted() {
/*
    unsigned char data[] = { 
      0x2b, 0xcf, 0x57, 0xc8, 0x2c, 0x2e, 0x51, 0x48, 0x49, 0x2d, 0x52, 0x48, 0xca, 0xcf, 0x4, 0x0, 0x26, 0x9, 0x5, 0xc
    };

    unsigned long data_len = sizeof(data); 
*/

// binary code block, compressed

unsigned char data[] = {
  0x6d, 0x93, 0x4f, 0x68, 0x13, 0x41, 0x14, 0xc6, 0x67, 0x53, 0x4b, 0x25,
  0x06, 0x36, 0x55, 0x0f, 0x55, 0x8a, 0x0d, 0x22, 0xa2, 0x37, 0xc1, 0x8b,
  0x52, 0x91, 0x5e, 0x06, 0xe6, 0x58, 0x90, 0x9c, 0xbc, 0x08, 0x42, 0x10,
  0x41, 0xec, 0x21, 0x8b, 0x1e, 0xdc, 0xc4, 0xb8, 0x99, 0xc3, 0x30, 0xac,
  0xf5, 0x60, 0x60, 0x0f, 0x9e, 0x3d, 0x79, 0x95, 0x04, 0xc1, 0x92, 0x36,
  0xe2, 0xd6, 0x8b, 0x8d, 0x50, 0x24, 0x48, 0x0f, 0x7b, 0x88, 0xb2, 0x71,
  0x73, 0xa8, 0x1a, 0x71, 0xad, 0x6b, 0xc6, 0x37, 0x93, 0xcd, 0x3f, 0x10,
  0x42, 0x66, 0xf2, 0xe6, 0x7b, 0xbf, 0xf7, 0xcd, 0x9b, 0x17, 0xd7, 0xff,
  0xf2, 0x53, 0x08, 0xb6, 0x45, 0x6e, 0x36, 0x72, 0xec, 0x29, 0x5e, 0xfd,
  0x2b, 0x84, 0x85, 0x3d, 0x8d, 0x63, 0x6f, 0x19, 0xef, 0x3d, 0x68, 0x04,
  0xa7, 0x60, 0x47, 0x1c, 0xbd, 0x5a, 0x46, 0x37, 0x96, 0x56, 0x90, 0x43,
  0x9c, 0x9c, 0x5b, 0x56, 0x2a, 0x84, 0xa4, 0xce, 0x32, 0xbd, 0xa3, 0x85,
  0x3d, 0x62, 0xdb, 0x32, 0x44, 0x6c, 0xfa, 0xf0, 0x40, 0x88, 0x57, 0xc7,
  0x10, 0x42, 0x84, 0xbd, 0x27, 0xcc, 0xf5, 0xbb, 0xbf, 0x01, 0x8e, 0xdb,
  0x96, 0xd9, 0x46, 0xf9, 0x64, 0x2d, 0x12, 0x42, 0x74, 0x50, 0x02, 0x21,
  0x17, 0x7b, 0xa0, 0x41, 0x9d, 0xa4, 0x06, 0x4a, 0xbb, 0x22, 0xb3, 0x08,
  0xa7, 0xb7, 0xe4, 0xc2, 0x3e, 0xca, 0xbc, 0xab, 0xa1, 0xcc, 0xf3, 0x2d,
  0xd3, 0xd7, 0x8b, 0x27, 0xc0, 0x02, 0xcf, 0xfa, 0x50, 0x7a, 0xc2, 0x60,
  0x67, 0x07, 0x49, 0x4c, 0x57, 0x62, 0x40, 0x95, 0x36, 0x56, 0xc0, 0x0a,
  0x32, 0x92, 0xb5, 0x3f, 0xb2, 0xc6, 0x33, 0xe0, 0x42, 0x96, 0xe5, 0x6b,
  0xca, 0xbb, 0xca, 0x72, 0x18, 0xee, 0xc6, 0x45, 0x36, 0x12, 0xca, 0xa1,
  0xeb, 0x7f, 0xed, 0x01, 0xad, 0x3e, 0x03, 0x95, 0x82, 0x2b, 0x40, 0x99,
  0x37, 0x16, 0x87, 0x8a, 0x99, 0x58, 0xb1, 0x3d, 0x56, 0x9c, 0x1c, 0x9e,
  0xcd, 0xc5, 0x67, 0x2f, 0xd4, 0xd9, 0x11, 0x38, 0xe3, 0xf0, 0xc9, 0x7a,
  0x76, 0x2a, 0xc1, 0x71, 0x8b, 0x67, 0x77, 0xed, 0x43, 0x89, 0xcb, 0x9b,
  0x85, 0x4c, 0xed, 0x40, 0x7a, 0x49, 0x0f, 0xbc, 0xf0, 0x6c, 0x77, 0xfa,
  0x06, 0x81, 0xf6, 0x04, 0x4a, 0x22, 0xbd, 0x52, 0xb7, 0xee, 0xf8, 0x5a,
  0xb9, 0x6e, 0x7c, 0x1a, 0x25, 0x2f, 0x63, 0x4f, 0x5f, 0x6f, 0xf7, 0x85,
  0xd0, 0xab, 0x74, 0x15, 0x18, 0x39, 0x5a, 0x87, 0x9b, 0xfd, 0x92, 0xb4,
  0x2d, 0xa8, 0x0d, 0xa2, 0xe9, 0x8e, 0xc7, 0xcd, 0x2e, 0x86, 0xa3, 0x66,
  0xdf, 0x5f, 0x92, 0xdf, 0x85, 0x0c, 0x58, 0x96, 0x02, 0xbd, 0x8a, 0x1c,
  0xc8, 0x62, 0x1f, 0xce, 0x6f, 0xb2, 0x6d, 0x2b, 0xd4, 0xf2, 0x73, 0x35,
  0x78, 0x18, 0x11, 0xdc, 0xe3, 0x78, 0x97, 0x38, 0xc4, 0x3e, 0x0e, 0xaf,
  0x40, 0x15, 0x50, 0x6b, 0xf2, 0x6c, 0x0b, 0xe8, 0x6b, 0x0a, 0xfb, 0x96,
  0xb0, 0x1d, 0xff, 0xdc, 0x7f, 0xb1, 0x6b, 0x23, 0x6c, 0x6b, 0x12, 0x1b,
  0x4a, 0x6c, 0x06, 0xde, 0x54, 0x01, 0x6c, 0x7b, 0xea, 0x69, 0x95, 0xcb,
  0xdb, 0x50, 0x99, 0x94, 0xde, 0x38, 0xb3, 0x08, 0x5d, 0x7f, 0xd7, 0xc8,
  0x12, 0xf6, 0x99, 0x94, 0xba, 0x17, 0xe4, 0x20, 0xb0, 0xd7, 0x7e, 0x5f,
  0xca, 0x5e, 0x7a, 0x6a, 0xa9, 0xb4, 0xd4, 0x62, 0x37, 0xfb, 0x0a, 0x31,
  0x38, 0xa3, 0xfb, 0x83, 0x5f, 0x4a, 0xc2, 0x21, 0x87, 0x86, 0x72, 0xe7,
  0x52, 0x24, 0xe4, 0x4c, 0x02, 0x85, 0xd3, 0x41, 0x1e, 0x3d, 0x2c, 0x94,
  0xb2, 0x39, 0x52, 0xa6, 0x85, 0x52, 0x2e, 0xc4, 0x4a, 0x97, 0x66, 0x46,
  0xbb, 0x33, 0xc3, 0x6c, 0x7b, 0x50, 0xc0, 0xaa, 0x5f, 0x92, 0x5e, 0xcf,
  0x7e, 0x13, 0x82, 0xd6, 0xf3, 0x29, 0x17, 0x47, 0x72, 0x64, 0x3a, 0x8f,
  0xc7, 0x92, 0x0d, 0x2d, 0x9e, 0x82, 0xe7, 0xdf, 0x65, 0x7b, 0x7a, 0xc3,
  0xf0, 0x70, 0xb4, 0xd6, 0x55, 0x38, 0xb4, 0xcc, 0x10, 0x19, 0xf3, 0x43,
  0x2c, 0xc4, 0xef, 0xfe, 0x80, 0x06, 0x5d, 0x84, 0xb0, 0x36, 0x15, 0x2e,
  0x41, 0x83, 0x82, 0x45, 0x08, 0x27, 0xa6, 0xc2, 0x8f, 0x60, 0x9c, 0x83,
  0xd9, 0x1a, 0xb8, 0x03, 0x58, 0x64, 0x99, 0x11, 0x32, 0x52, 0x96, 0xd9,
  0x43, 0x7a, 0xd9, 0x90, 0x8d, 0x96, 0x23, 0x14, 0xa1, 0xe2, 0x69, 0xc2,
  0x2b, 0x48, 0x8c, 0xfb, 0xc2, 0xd2, 0x10, 0x58, 0x98, 0xb8, 0x3e, 0x4b,
  0x73, 0x1c, 0x0d, 0x9a, 0x7d, 0x8d, 0x30, 0xd3, 0x23, 0xf2, 0x5f, 0xcd,
  0xf0, 0xbe, 0x8b, 0xff, 0x01, 0xcc, 0xf1, 0x44, 0x86
};
unsigned long data_len = 633;

    unsigned char msg[1024];
    unsigned long msg_len = 1024;

    unsigned long i = 0, u = 0;

    for(i = 0; i < 1024; i++) {
      if(puff(msg, &msg_len, data, &data_len)) {
        u++;
      } else {
        u--;
      }
    }

    if(u > 0)
      call Leds.led0Toggle();
  }
}

