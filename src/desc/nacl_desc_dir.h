
/*
 * Copyright (c) 2011 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/*
 * NaCl service runtime.  NaClDescDirDesc subclass of NaClDesc.
 */
#ifndef NATIVE_CLIENT_SRC_TRUSTED_DESC_NACL_DESC_DIR_H_
#define NATIVE_CLIENT_SRC_TRUSTED_DESC_NACL_DESC_DIR_H_

#include "include/nacl_base.h"
#include "src/desc/nacl_desc_base.h"

EXTERN_C_BEGIN

struct NaClDescEffector;
struct NaClDescXferState;

/*
 * Directory descriptors
 */

struct NaClDescDirDesc {
  struct NaClDesc           base NACL_IS_REFCOUNT_SUBCLASS;
  struct NaClHostDir        *hd;
};

int NaClDescDirInternalize(struct NaClDesc          **baseptr,
                           struct NaClDescXferState *xfer)
    NACL_WUR;

EXTERN_C_END

#endif  // NATIVE_CLIENT_SRC_TRUSTED_DESC_NACL_DESC_DIR_H_
