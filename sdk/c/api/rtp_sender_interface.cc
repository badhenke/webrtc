/*
 *  Copyright 2019 pixiv Inc. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree.
 */

#include "sdk/c/api/rtp_sender_interface.h"

extern "C" void webrtcRtpSenderInterfaceRelease(
    const WebrtcRtpSenderInterface* sender) {
  rtc::ToCplusplus(sender)->Release();
}
