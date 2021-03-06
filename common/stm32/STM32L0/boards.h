/*! \file
 * \brief Definitions of various boards based on the STM32L0
 *
 * Copyright (c) 2018, Archos S.A.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * * Neither the name of Archos nor the names of its contributors may be
 *   used to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS'' AND
 * AND EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ARCHOS S.A. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _BOARDS_H_
#define _BOARDS_H_

#include <gpio.h>

#if defined(CFG_murata_sychip_board)
#include "murata_syschip_board.h"
#elif defined(CFG_murata_discovery_board)
#include "murata_discovery_board.h"
#elif defined(CFG_murata_module_board)
#include "murata_module_board.h"
#elif defined(CFG_nucleo_board)
#include "nucleo_board.h"
#elif defined(CFG_picoshield_board)
#include "picoshield_board.h"
#elif defined(CFG_picoshieldv2_board)
#include "picoshieldv2_board.h"
#elif defined(CFG_picosmarttagv2_board)
#include "picosmarttagv2_board.h"
#else
#error Missing board configuration !
#endif

#endif /* _BOARDS_H_ */
