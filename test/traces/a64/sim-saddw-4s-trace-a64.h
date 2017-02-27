// Copyright 2015, ARM Limited
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//   * Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//   * Neither the name of ARM Limited nor the names of its contributors may be
//     used to endorse or promote products derived from this software without
//     specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


// ---------------------------------------------------------------------
// This file is auto generated using tools/generate_simulator_traces.py.
//
// PLEASE DO NOT EDIT.
// ---------------------------------------------------------------------

#ifndef VIXL_SIM_SADDW_4S_TRACE_A64_H_
#define VIXL_SIM_SADDW_4S_TRACE_A64_H_

const uint32_t kExpected_NEON_saddw_4S[] = {
  0x00007e7e, 0x00007f7f, 0x00803033, 0x00005555,
  0x00007e7f, 0x0000b233, 0x00805255, 0x00007ffd,
  0x0000b133, 0x0000d455, 0x00807cfd, 0x00007ffe,
  0x0000d355, 0x0000fefd, 0x00807cfe, 0x00007fff,
  0x0000fdfd, 0x0000fefe, 0x00807cff, 0x00000000,
  0x0000fdfe, 0x0000feff, 0x007ffd00, 0x00000001,
  0x0000fdff, 0x00007f00, 0x007ffd01, 0x00000002,
  0x00007e00, 0x00007f01, 0x007ffd02, 0x00000010,
  0x00007e01, 0x00007f02, 0x007ffd10, 0x0000007d,
  0x00007e02, 0x00007f10, 0x007ffd7d, 0x0000007e,
  0x00007e10, 0x00007f7d, 0x007ffd7e, 0x0000007f,
  0x00007e7d, 0x00007f7e, 0x007ffd7f, 0x00003333,
  0x00007e7e, 0x00007f7f, 0x00803033, 0x00005555,
  0x00007e7f, 0x0000b233, 0x00805255, 0x00007ffd,
  0x0000b133, 0x0000d455, 0x00807cfd, 0x00007ffe,
  0x0000d355, 0x0000fefd, 0x00807cfe, 0x00007fff,
  0x0000fdfd, 0x0000fefe, 0x00807cff, 0xffff8000,
  0x0000fdfe, 0x0000feff, 0x007f7d00, 0xffff8001,
  0x0000fdff, 0xffffff00, 0x007f7d01, 0xffffaaaa,
  0xfffffe00, 0xffffff01, 0x007fa7aa, 0xffffcccc,
  0xfffffe01, 0x000029aa, 0x007fc9cc, 0xffffff80,
  0x000028aa, 0x00004bcc, 0x007ffc80, 0xffffff81,
  0x00004acc, 0x00007e80, 0x007ffc81, 0xffffff82,
  0x00007d80, 0x00007e81, 0x007ffc82, 0xffffff83,
  0x00007e81, 0x007ffc82, 0xffffff83, 0xfffffff1,
  0x00007e82, 0x007ffc83, 0xfffffff0, 0xfffffffe,
  0x00007e83, 0x007ffcf0, 0xfffffffd, 0xffffffff,
  0x00007ef0, 0x007ffcfd, 0xfffffffe, 0x00000000,
  0x00007efd, 0x007ffcfe, 0xffffffff, 0x00000001,
  0x00007efe, 0x007ffcff, 0x00000000, 0x00000002,
  0x00007eff, 0x007ffd00, 0x00000001, 0x00000003,
  0x00007f00, 0x007ffd01, 0x00000002, 0x00000011,
  0x00007f01, 0x007ffd02, 0x00000010, 0x0000007e,
  0x00007f02, 0x007ffd10, 0x0000007d, 0x0000007f,
  0x00007f10, 0x007ffd7d, 0x0000007e, 0x00000080,
  0x00007f7d, 0x007ffd7e, 0x0000007f, 0x00003334,
  0x00007f7e, 0x007ffd7f, 0x00003333, 0x00005556,
  0x00007f7f, 0x00803033, 0x00005555, 0x00007ffe,
  0x0000b233, 0x00805255, 0x00007ffd, 0x00007fff,
  0x0000d455, 0x00807cfd, 0x00007ffe, 0x00008000,
  0x0000fefd, 0x00807cfe, 0x00007fff, 0xffff8001,
  0x0000fefe, 0x00807cff, 0xffff8000, 0xffff8002,
  0x0000feff, 0x007f7d00, 0xffff8001, 0xffffaaab,
  0xffffff00, 0x007f7d01, 0xffffaaaa, 0xffffcccd,
  0xffffff01, 0x007fa7aa, 0xffffcccc, 0xffffff81,
  0x000029aa, 0x007fc9cc, 0xffffff80, 0xffffff82,
  0x00004bcc, 0x007ffc80, 0xffffff81, 0xffffff83,
  0x00007e80, 0x007ffc81, 0xffffff82, 0xffffff84,
  0x007ffc81, 0xffffff82, 0xffffff84, 0xfffffff2,
  0x007ffc82, 0xffffff83, 0xfffffff1, 0xffffffff,
  0x007ffc83, 0xfffffff0, 0xfffffffe, 0x00000000,
  0x007ffcf0, 0xfffffffd, 0xffffffff, 0x00000001,
  0x007ffcfd, 0xfffffffe, 0x00000000, 0x00000002,
  0x007ffcfe, 0xffffffff, 0x00000001, 0x00000003,
  0x007ffcff, 0x00000000, 0x00000002, 0x00000004,
  0x007ffd00, 0x00000001, 0x00000003, 0x00000012,
  0x007ffd01, 0x00000002, 0x00000011, 0x0000007f,
  0x007ffd02, 0x00000010, 0x0000007e, 0x00000080,
  0x007ffd10, 0x0000007d, 0x0000007f, 0x00000081,
  0x007ffd7d, 0x0000007e, 0x00000080, 0x00003335,
  0x007ffd7e, 0x0000007f, 0x00003334, 0x00005557,
  0x007ffd7f, 0x00003333, 0x00005556, 0x00007fff,
  0x00803033, 0x00005555, 0x00007ffe, 0x00008000,
  0x00805255, 0x00007ffd, 0x00007fff, 0x00008001,
  0x00807cfd, 0x00007ffe, 0x00008000, 0xffff8002,
  0x00807cfe, 0x00007fff, 0xffff8001, 0xffff8003,
  0x00807cff, 0xffff8000, 0xffff8002, 0xffffaaac,
  0x007f7d00, 0xffff8001, 0xffffaaab, 0xffffccce,
  0x007f7d01, 0xffffaaaa, 0xffffcccd, 0xffffff82,
  0x007fa7aa, 0xffffcccc, 0xffffff81, 0xffffff83,
  0x007fc9cc, 0xffffff80, 0xffffff82, 0xffffff84,
  0x007ffc80, 0xffffff81, 0xffffff83, 0xffffff85,
  0xffffff81, 0xffffff83, 0xffffff85, 0x00000010,
  0xffffff82, 0xffffff84, 0xfffffff2, 0x0000001d,
  0xffffff83, 0xfffffff1, 0xffffffff, 0x0000001e,
  0xfffffff0, 0xfffffffe, 0x00000000, 0x0000001f,
  0xfffffffd, 0xffffffff, 0x00000001, 0x00000020,
  0xfffffffe, 0x00000000, 0x00000002, 0x00000021,
  0xffffffff, 0x00000001, 0x00000003, 0x00000022,
  0x00000000, 0x00000002, 0x00000004, 0x00000030,
  0x00000001, 0x00000003, 0x00000012, 0x0000009d,
  0x00000002, 0x00000011, 0x0000007f, 0x0000009e,
  0x00000010, 0x0000007e, 0x00000080, 0x0000009f,
  0x0000007d, 0x0000007f, 0x00000081, 0x00003353,
  0x0000007e, 0x00000080, 0x00003335, 0x00005575,
  0x0000007f, 0x00003334, 0x00005557, 0x0000801d,
  0x00003333, 0x00005556, 0x00007fff, 0x0000801e,
  0x00005555, 0x00007ffe, 0x00008000, 0x0000801f,
  0x00007ffd, 0x00007fff, 0x00008001, 0xffff8020,
  0x00007ffe, 0x00008000, 0xffff8002, 0xffff8021,
  0x00007fff, 0xffff8001, 0xffff8003, 0xffffaaca,
  0xffff8000, 0xffff8002, 0xffffaaac, 0xffffccec,
  0xffff8001, 0xffffaaab, 0xffffccce, 0xffffffa0,
  0xffffaaaa, 0xffffcccd, 0xffffff82, 0xffffffa1,
  0xffffcccc, 0xffffff81, 0xffffff83, 0xffffffa2,
  0xffffff80, 0xffffff82, 0xffffff84, 0xffffffa3,
  0xffffff82, 0xffffff84, 0xffffffa3, 0x0000006d,
  0xffffff83, 0xffffff85, 0x00000010, 0x0000007a,
  0xffffff84, 0xfffffff2, 0x0000001d, 0x0000007b,
  0xfffffff1, 0xffffffff, 0x0000001e, 0x0000007c,
  0xfffffffe, 0x00000000, 0x0000001f, 0x0000007d,
  0xffffffff, 0x00000001, 0x00000020, 0x0000007e,
  0x00000000, 0x00000002, 0x00000021, 0x0000007f,
  0x00000001, 0x00000003, 0x00000022, 0x0000008d,
  0x00000002, 0x00000004, 0x00000030, 0x000000fa,
  0x00000003, 0x00000012, 0x0000009d, 0x000000fb,
  0x00000011, 0x0000007f, 0x0000009e, 0x000000fc,
  0x0000007e, 0x00000080, 0x0000009f, 0x000033b0,
  0x0000007f, 0x00000081, 0x00003353, 0x000055d2,
  0x00000080, 0x00003335, 0x00005575, 0x0000807a,
  0x00003334, 0x00005557, 0x0000801d, 0x0000807b,
  0x00005556, 0x00007fff, 0x0000801e, 0x0000807c,
  0x00007ffe, 0x00008000, 0x0000801f, 0xffff807d,
  0x00007fff, 0x00008001, 0xffff8020, 0xffff807e,
  0x00008000, 0xffff8002, 0xffff8021, 0xffffab27,
  0xffff8001, 0xffff8003, 0xffffaaca, 0xffffcd49,
  0xffff8002, 0xffffaaac, 0xffffccec, 0xfffffffd,
  0xffffaaab, 0xffffccce, 0xffffffa0, 0xfffffffe,
  0xffffcccd, 0xffffff82, 0xffffffa1, 0xffffffff,
  0xffffff81, 0xffffff83, 0xffffffa2, 0x00000000,
  0xffffff83, 0xffffffa2, 0x00000000, 0x0000006e,
  0xffffff84, 0xffffffa3, 0x0000006d, 0x0000007b,
  0xffffff85, 0x00000010, 0x0000007a, 0x0000007c,
  0xfffffff2, 0x0000001d, 0x0000007b, 0x0000007d,
  0xffffffff, 0x0000001e, 0x0000007c, 0x0000007e,
  0x00000000, 0x0000001f, 0x0000007d, 0x0000007f,
  0x00000001, 0x00000020, 0x0000007e, 0x00000080,
  0x00000002, 0x00000021, 0x0000007f, 0x0000008e,
  0x00000003, 0x00000022, 0x0000008d, 0x000000fb,
  0x00000004, 0x00000030, 0x000000fa, 0x000000fc,
  0x00000012, 0x0000009d, 0x000000fb, 0x000000fd,
  0x0000007f, 0x0000009e, 0x000000fc, 0x000033b1,
  0x00000080, 0x0000009f, 0x000033b0, 0x000055d3,
  0x00000081, 0x00003353, 0x000055d2, 0x0000807b,
  0x00003335, 0x00005575, 0x0000807a, 0x0000807c,
  0x00005557, 0x0000801d, 0x0000807b, 0x0000807d,
  0x00007fff, 0x0000801e, 0x0000807c, 0xffff807e,
  0x00008000, 0x0000801f, 0xffff807d, 0xffff807f,
  0x00008001, 0xffff8020, 0xffff807e, 0xffffab28,
  0xffff8002, 0xffff8021, 0xffffab27, 0xffffcd4a,
  0xffff8003, 0xffffaaca, 0xffffcd49, 0xfffffffe,
  0xffffaaac, 0xffffccec, 0xfffffffd, 0xffffffff,
  0xffffccce, 0xffffffa0, 0xfffffffe, 0x00000000,
  0xffffff82, 0xffffffa1, 0xffffffff, 0x00000001,
  0xffffffa1, 0xffffffff, 0x00000001, 0x0000006f,
  0xffffffa2, 0x00000000, 0x0000006e, 0x0000007c,
  0xffffffa3, 0x0000006d, 0x0000007b, 0x0000007d,
  0x00000010, 0x0000007a, 0x0000007c, 0x0000007e,
  0x0000001d, 0x0000007b, 0x0000007d, 0x0000007f,
  0x0000001e, 0x0000007c, 0x0000007e, 0x00000080,
  0x0000001f, 0x0000007d, 0x0000007f, 0x00000081,
  0x00000020, 0x0000007e, 0x00000080, 0x0000008f,
  0x00000021, 0x0000007f, 0x0000008e, 0x000000fc,
  0x00000022, 0x0000008d, 0x000000fb, 0x000000fd,
  0x00000030, 0x000000fa, 0x000000fc, 0x000000fe,
  0x0000009d, 0x000000fb, 0x000000fd, 0x000033b2,
  0x0000009e, 0x000000fc, 0x000033b1, 0x000055d4,
  0x0000009f, 0x000033b0, 0x000055d3, 0x0000807c,
  0x00003353, 0x000055d2, 0x0000807b, 0x0000807d,
  0x00005575, 0x0000807a, 0x0000807c, 0x0000807e,
  0x0000801d, 0x0000807b, 0x0000807d, 0xffff807f,
  0x0000801e, 0x0000807c, 0xffff807e, 0xffff8080,
  0x0000801f, 0xffff807d, 0xffff807f, 0xffffab29,
  0xffff8020, 0xffff807e, 0xffffab28, 0xffffcd4b,
  0xffff8021, 0xffffab27, 0xffffcd4a, 0xffffffff,
  0xffffaaca, 0xffffcd49, 0xfffffffe, 0x00000000,
  0xffffccec, 0xfffffffd, 0xffffffff, 0x00000001,
  0xffffffa0, 0xfffffffe, 0x00000000, 0x00000002,
  0xfffffffe, 0x00000000, 0x00000002, 0x00007fed,
  0xffffffff, 0x00000001, 0x0000006f, 0x00007ffa,
  0x00000000, 0x0000006e, 0x0000007c, 0x00007ffb,
  0x0000006d, 0x0000007b, 0x0000007d, 0x00007ffc,
  0x0000007a, 0x0000007c, 0x0000007e, 0x00007ffd,
  0x0000007b, 0x0000007d, 0x0000007f, 0x00007ffe,
  0x0000007c, 0x0000007e, 0x00000080, 0x00007fff,
  0x0000007d, 0x0000007f, 0x00000081, 0x0000800d,
  0x0000007e, 0x00000080, 0x0000008f, 0x0000807a,
  0x0000007f, 0x0000008e, 0x000000fc, 0x0000807b,
  0x0000008d, 0x000000fb, 0x000000fd, 0x0000807c,
  0x000000fa, 0x000000fc, 0x000000fe, 0x0000b330,
  0x000000fb, 0x000000fd, 0x000033b2, 0x0000d552,
  0x000000fc, 0x000033b1, 0x000055d4, 0x0000fffa,
  0x000033b0, 0x000055d3, 0x0000807c, 0x0000fffb,
  0x000055d2, 0x0000807b, 0x0000807d, 0x0000fffc,
  0x0000807a, 0x0000807c, 0x0000807e, 0xfffffffd,
  0x0000807b, 0x0000807d, 0xffff807f, 0xfffffffe,
  0x0000807c, 0xffff807e, 0xffff8080, 0x00002aa7,
  0xffff807d, 0xffff807f, 0xffffab29, 0x00004cc9,
  0xffff807e, 0xffffab28, 0xffffcd4b, 0x00007f7d,
  0xffffab27, 0xffffcd4a, 0xffffffff, 0x00007f7e,
  0xffffcd49, 0xfffffffe, 0x00000000, 0x00007f7f,
  0xfffffffd, 0xffffffff, 0x00000001, 0x00007f80,
  0xffffffff, 0x00000001, 0x00007f80, 0x00007fee,
  0x00000000, 0x00000002, 0x00007fed, 0x00007ffb,
  0x00000001, 0x0000006f, 0x00007ffa, 0x00007ffc,
  0x0000006e, 0x0000007c, 0x00007ffb, 0x00007ffd,
  0x0000007b, 0x0000007d, 0x00007ffc, 0x00007ffe,
  0x0000007c, 0x0000007e, 0x00007ffd, 0x00007fff,
  0x0000007d, 0x0000007f, 0x00007ffe, 0x00008000,
  0x0000007e, 0x00000080, 0x00007fff, 0x0000800e,
  0x0000007f, 0x00000081, 0x0000800d, 0x0000807b,
  0x00000080, 0x0000008f, 0x0000807a, 0x0000807c,
  0x0000008e, 0x000000fc, 0x0000807b, 0x0000807d,
  0x000000fb, 0x000000fd, 0x0000807c, 0x0000b331,
  0x000000fc, 0x000000fe, 0x0000b330, 0x0000d553,
  0x000000fd, 0x000033b2, 0x0000d552, 0x0000fffb,
  0x000033b1, 0x000055d4, 0x0000fffa, 0x0000fffc,
  0x000055d3, 0x0000807c, 0x0000fffb, 0x0000fffd,
  0x0000807b, 0x0000807d, 0x0000fffc, 0xfffffffe,
  0x0000807c, 0x0000807e, 0xfffffffd, 0xffffffff,
  0x0000807d, 0xffff807f, 0xfffffffe, 0x00002aa8,
  0xffff807e, 0xffff8080, 0x00002aa7, 0x00004cca,
  0xffff807f, 0xffffab29, 0x00004cc9, 0x00007f7e,
  0xffffab28, 0xffffcd4b, 0x00007f7d, 0x00007f7f,
  0xffffcd4a, 0xffffffff, 0x00007f7e, 0x00007f80,
  0xfffffffe, 0x00000000, 0x00007f7f, 0x00007f81,
  0x00000000, 0x00007f7f, 0x00007f81, 0x00007fef,
  0x00000001, 0x00007f80, 0x00007fee, 0x00007ffc,
  0x00000002, 0x00007fed, 0x00007ffb, 0x00007ffd,
  0x0000006f, 0x00007ffa, 0x00007ffc, 0x00007ffe,
  0x0000007c, 0x00007ffb, 0x00007ffd, 0x00007fff,
  0x0000007d, 0x00007ffc, 0x00007ffe, 0x00008000,
  0x0000007e, 0x00007ffd, 0x00007fff, 0x00008001,
  0x0000007f, 0x00007ffe, 0x00008000, 0x0000800f,
  0x00000080, 0x00007fff, 0x0000800e, 0x0000807c,
  0x00000081, 0x0000800d, 0x0000807b, 0x0000807d,
  0x0000008f, 0x0000807a, 0x0000807c, 0x0000807e,
  0x000000fc, 0x0000807b, 0x0000807d, 0x0000b332,
  0x000000fd, 0x0000807c, 0x0000b331, 0x0000d554,
  0x000000fe, 0x0000b330, 0x0000d553, 0x0000fffc,
  0x000033b2, 0x0000d552, 0x0000fffb, 0x0000fffd,
  0x000055d4, 0x0000fffa, 0x0000fffc, 0x0000fffe,
  0x0000807c, 0x0000fffb, 0x0000fffd, 0xffffffff,
  0x0000807d, 0x0000fffc, 0xfffffffe, 0x00000000,
  0x0000807e, 0xfffffffd, 0xffffffff, 0x00002aa9,
  0xffff807f, 0xfffffffe, 0x00002aa8, 0x00004ccb,
  0xffff8080, 0x00002aa7, 0x00004cca, 0x00007f7f,
  0xffffab29, 0x00004cc9, 0x00007f7e, 0x00007f80,
  0xffffcd4b, 0x00007f7d, 0x00007f7f, 0x00007f81,
  0xffffffff, 0x00007f7e, 0x00007f80, 0x00007f82,
  0x00007f7e, 0x00007f80, 0x00007f82, 0x33333323,
  0x00007f7f, 0x00007f81, 0x00007fef, 0x33333330,
  0x00007f80, 0x00007fee, 0x00007ffc, 0x33333331,
  0x00007fed, 0x00007ffb, 0x00007ffd, 0x33333332,
  0x00007ffa, 0x00007ffc, 0x00007ffe, 0x33333333,
  0x00007ffb, 0x00007ffd, 0x00007fff, 0x33333334,
  0x00007ffc, 0x00007ffe, 0x00008000, 0x33333335,
  0x00007ffd, 0x00007fff, 0x00008001, 0x33333343,
  0x00007ffe, 0x00008000, 0x0000800f, 0x333333b0,
  0x00007fff, 0x0000800e, 0x0000807c, 0x333333b1,
  0x0000800d, 0x0000807b, 0x0000807d, 0x333333b2,
  0x0000807a, 0x0000807c, 0x0000807e, 0x33336666,
  0x0000807b, 0x0000807d, 0x0000b332, 0x33338888,
  0x0000807c, 0x0000b331, 0x0000d554, 0x3333b330,
  0x0000b330, 0x0000d553, 0x0000fffc, 0x3333b331,
  0x0000d552, 0x0000fffb, 0x0000fffd, 0x3333b332,
  0x0000fffa, 0x0000fffc, 0x0000fffe, 0x3332b333,
  0x0000fffb, 0x0000fffd, 0xffffffff, 0x3332b334,
  0x0000fffc, 0xfffffffe, 0x00000000, 0x3332dddd,
  0xfffffffd, 0xffffffff, 0x00002aa9, 0x3332ffff,
  0xfffffffe, 0x00002aa8, 0x00004ccb, 0x333332b3,
  0x00002aa7, 0x00004cca, 0x00007f7f, 0x333332b4,
  0x00004cc9, 0x00007f7e, 0x00007f80, 0x333332b5,
  0x00007f7d, 0x00007f7f, 0x00007f81, 0x333332b6,
  0x00007f7f, 0x00007f81, 0x333332b6, 0x55555545,
  0x00007f80, 0x00007f82, 0x33333323, 0x55555552,
  0x00007f81, 0x00007fef, 0x33333330, 0x55555553,
  0x00007fee, 0x00007ffc, 0x33333331, 0x55555554,
  0x00007ffb, 0x00007ffd, 0x33333332, 0x55555555,
  0x00007ffc, 0x00007ffe, 0x33333333, 0x55555556,
  0x00007ffd, 0x00007fff, 0x33333334, 0x55555557,
  0x00007ffe, 0x00008000, 0x33333335, 0x55555565,
  0x00007fff, 0x00008001, 0x33333343, 0x555555d2,
  0x00008000, 0x0000800f, 0x333333b0, 0x555555d3,
  0x0000800e, 0x0000807c, 0x333333b1, 0x555555d4,
  0x0000807b, 0x0000807d, 0x333333b2, 0x55558888,
  0x0000807c, 0x0000807e, 0x33336666, 0x5555aaaa,
  0x0000807d, 0x0000b332, 0x33338888, 0x5555d552,
  0x0000b331, 0x0000d554, 0x3333b330, 0x5555d553,
  0x0000d553, 0x0000fffc, 0x3333b331, 0x5555d554,
  0x0000fffb, 0x0000fffd, 0x3333b332, 0x5554d555,
  0x0000fffc, 0x0000fffe, 0x3332b333, 0x5554d556,
  0x0000fffd, 0xffffffff, 0x3332b334, 0x5554ffff,
  0xfffffffe, 0x00000000, 0x3332dddd, 0x55552221,
  0xffffffff, 0x00002aa9, 0x3332ffff, 0x555554d5,
  0x00002aa8, 0x00004ccb, 0x333332b3, 0x555554d6,
  0x00004cca, 0x00007f7f, 0x333332b4, 0x555554d7,
  0x00007f7e, 0x00007f80, 0x333332b5, 0x555554d8,
  0x00007f80, 0x333332b5, 0x555554d8, 0x7fffffed,
  0x00007f81, 0x333332b6, 0x55555545, 0x7ffffffa,
  0x00007f82, 0x33333323, 0x55555552, 0x7ffffffb,
  0x00007fef, 0x33333330, 0x55555553, 0x7ffffffc,
  0x00007ffc, 0x33333331, 0x55555554, 0x7ffffffd,
  0x00007ffd, 0x33333332, 0x55555555, 0x7ffffffe,
  0x00007ffe, 0x33333333, 0x55555556, 0x7fffffff,
  0x00007fff, 0x33333334, 0x55555557, 0x8000000d,
  0x00008000, 0x33333335, 0x55555565, 0x8000007a,
  0x00008001, 0x33333343, 0x555555d2, 0x8000007b,
  0x0000800f, 0x333333b0, 0x555555d3, 0x8000007c,
  0x0000807c, 0x333333b1, 0x555555d4, 0x80003330,
  0x0000807d, 0x333333b2, 0x55558888, 0x80005552,
  0x0000807e, 0x33336666, 0x5555aaaa, 0x80007ffa,
  0x0000b332, 0x33338888, 0x5555d552, 0x80007ffb,
  0x0000d554, 0x3333b330, 0x5555d553, 0x80007ffc,
  0x0000fffc, 0x3333b331, 0x5555d554, 0x7fff7ffd,
  0x0000fffd, 0x3333b332, 0x5554d555, 0x7fff7ffe,
  0x0000fffe, 0x3332b333, 0x5554d556, 0x7fffaaa7,
  0xffffffff, 0x3332b334, 0x5554ffff, 0x7fffccc9,
  0x00000000, 0x3332dddd, 0x55552221, 0x7fffff7d,
  0x00002aa9, 0x3332ffff, 0x555554d5, 0x7fffff7e,
  0x00004ccb, 0x333332b3, 0x555554d6, 0x7fffff7f,
  0x00007f7f, 0x333332b4, 0x555554d7, 0x7fffff80,
  0x333332b4, 0x555554d7, 0x7fffff80, 0x7fffffee,
  0x333332b5, 0x555554d8, 0x7fffffed, 0x7ffffffb,
  0x333332b6, 0x55555545, 0x7ffffffa, 0x7ffffffc,
  0x33333323, 0x55555552, 0x7ffffffb, 0x7ffffffd,
  0x33333330, 0x55555553, 0x7ffffffc, 0x7ffffffe,
  0x33333331, 0x55555554, 0x7ffffffd, 0x7fffffff,
  0x33333332, 0x55555555, 0x7ffffffe, 0x80000000,
  0x33333333, 0x55555556, 0x7fffffff, 0x8000000e,
  0x33333334, 0x55555557, 0x8000000d, 0x8000007b,
  0x33333335, 0x55555565, 0x8000007a, 0x8000007c,
  0x33333343, 0x555555d2, 0x8000007b, 0x8000007d,
  0x333333b0, 0x555555d3, 0x8000007c, 0x80003331,
  0x333333b1, 0x555555d4, 0x80003330, 0x80005553,
  0x333333b2, 0x55558888, 0x80005552, 0x80007ffb,
  0x33336666, 0x5555aaaa, 0x80007ffa, 0x80007ffc,
  0x33338888, 0x5555d552, 0x80007ffb, 0x80007ffd,
  0x3333b330, 0x5555d553, 0x80007ffc, 0x7fff7ffe,
  0x3333b331, 0x5555d554, 0x7fff7ffd, 0x7fff7fff,
  0x3333b332, 0x5554d555, 0x7fff7ffe, 0x7fffaaa8,
  0x3332b333, 0x5554d556, 0x7fffaaa7, 0x7fffccca,
  0x3332b334, 0x5554ffff, 0x7fffccc9, 0x7fffff7e,
  0x3332dddd, 0x55552221, 0x7fffff7d, 0x7fffff7f,
  0x3332ffff, 0x555554d5, 0x7fffff7e, 0x7fffff80,
  0x333332b3, 0x555554d6, 0x7fffff7f, 0x7fffff81,
  0x555554d6, 0x7fffff7f, 0x7fffff81, 0x7fffffef,
  0x555554d7, 0x7fffff80, 0x7fffffee, 0x7ffffffc,
  0x555554d8, 0x7fffffed, 0x7ffffffb, 0x7ffffffd,
  0x55555545, 0x7ffffffa, 0x7ffffffc, 0x7ffffffe,
  0x55555552, 0x7ffffffb, 0x7ffffffd, 0x7fffffff,
  0x55555553, 0x7ffffffc, 0x7ffffffe, 0x80000000,
  0x55555554, 0x7ffffffd, 0x7fffffff, 0x80000001,
  0x55555555, 0x7ffffffe, 0x80000000, 0x8000000f,
  0x55555556, 0x7fffffff, 0x8000000e, 0x8000007c,
  0x55555557, 0x8000000d, 0x8000007b, 0x8000007d,
  0x55555565, 0x8000007a, 0x8000007c, 0x8000007e,
  0x555555d2, 0x8000007b, 0x8000007d, 0x80003332,
  0x555555d3, 0x8000007c, 0x80003331, 0x80005554,
  0x555555d4, 0x80003330, 0x80005553, 0x80007ffc,
  0x55558888, 0x80005552, 0x80007ffb, 0x80007ffd,
  0x5555aaaa, 0x80007ffa, 0x80007ffc, 0x80007ffe,
  0x5555d552, 0x80007ffb, 0x80007ffd, 0x7fff7fff,
  0x5555d553, 0x80007ffc, 0x7fff7ffe, 0x7fff8000,
  0x5555d554, 0x7fff7ffd, 0x7fff7fff, 0x7fffaaa9,
  0x5554d555, 0x7fff7ffe, 0x7fffaaa8, 0x7fffcccb,
  0x5554d556, 0x7fffaaa7, 0x7fffccca, 0x7fffff7f,
  0x5554ffff, 0x7fffccc9, 0x7fffff7e, 0x7fffff80,
  0x55552221, 0x7fffff7d, 0x7fffff7f, 0x7fffff81,
  0x555554d5, 0x7fffff7e, 0x7fffff80, 0x7fffff82,
  0x7fffff7e, 0x7fffff80, 0x7fffff82, 0x7ffffff0,
  0x7fffff7f, 0x7fffff81, 0x7fffffef, 0x7ffffffd,
  0x7fffff80, 0x7fffffee, 0x7ffffffc, 0x7ffffffe,
  0x7fffffed, 0x7ffffffb, 0x7ffffffd, 0x7fffffff,
  0x7ffffffa, 0x7ffffffc, 0x7ffffffe, 0x80000000,
  0x7ffffffb, 0x7ffffffd, 0x7fffffff, 0x80000001,
  0x7ffffffc, 0x7ffffffe, 0x80000000, 0x80000002,
  0x7ffffffd, 0x7fffffff, 0x80000001, 0x80000010,
  0x7ffffffe, 0x80000000, 0x8000000f, 0x8000007d,
  0x7fffffff, 0x8000000e, 0x8000007c, 0x8000007e,
  0x8000000d, 0x8000007b, 0x8000007d, 0x8000007f,
  0x8000007a, 0x8000007c, 0x8000007e, 0x80003333,
  0x8000007b, 0x8000007d, 0x80003332, 0x80005555,
  0x8000007c, 0x80003331, 0x80005554, 0x80007ffd,
  0x80003330, 0x80005553, 0x80007ffc, 0x80007ffe,
  0x80005552, 0x80007ffb, 0x80007ffd, 0x80007fff,
  0x80007ffa, 0x80007ffc, 0x80007ffe, 0x7fff8000,
  0x80007ffb, 0x80007ffd, 0x7fff7fff, 0x7fff8001,
  0x80007ffc, 0x7fff7ffe, 0x7fff8000, 0x7fffaaaa,
  0x7fff7ffd, 0x7fff7fff, 0x7fffaaa9, 0x7fffcccc,
  0x7fff7ffe, 0x7fffaaa8, 0x7fffcccb, 0x7fffff80,
  0x7fffaaa7, 0x7fffccca, 0x7fffff7f, 0x7fffff81,
  0x7fffccc9, 0x7fffff7e, 0x7fffff80, 0x7fffff82,
  0x7fffff7d, 0x7fffff7f, 0x7fffff81, 0x7fffff83,
  0x7fffff7f, 0x7fffff81, 0x7fffff83, 0x7ffffff1,
  0x7fffff80, 0x7fffff82, 0x7ffffff0, 0x7ffffffe,
  0x7fffff81, 0x7fffffef, 0x7ffffffd, 0x7fffffff,
  0x7fffffee, 0x7ffffffc, 0x7ffffffe, 0x80000000,
  0x7ffffffb, 0x7ffffffd, 0x7fffffff, 0x80000001,
  0x7ffffffc, 0x7ffffffe, 0x80000000, 0x80000002,
  0x7ffffffd, 0x7fffffff, 0x80000001, 0x80000003,
  0x7ffffffe, 0x80000000, 0x80000002, 0x80000011,
  0x7fffffff, 0x80000001, 0x80000010, 0x8000007e,
  0x80000000, 0x8000000f, 0x8000007d, 0x8000007f,
  0x8000000e, 0x8000007c, 0x8000007e, 0x80000080,
  0x8000007b, 0x8000007d, 0x8000007f, 0x80003334,
  0x8000007c, 0x8000007e, 0x80003333, 0x80005556,
  0x8000007d, 0x80003332, 0x80005555, 0x80007ffe,
  0x80003331, 0x80005554, 0x80007ffd, 0x80007fff,
  0x80005553, 0x80007ffc, 0x80007ffe, 0x80008000,
  0x80007ffb, 0x80007ffd, 0x80007fff, 0x7fff8001,
  0x80007ffc, 0x80007ffe, 0x7fff8000, 0x7fff8002,
  0x80007ffd, 0x7fff7fff, 0x7fff8001, 0x7fffaaab,
  0x7fff7ffe, 0x7fff8000, 0x7fffaaaa, 0x7fffcccd,
  0x7fff7fff, 0x7fffaaa9, 0x7fffcccc, 0x7fffff81,
  0x7fffaaa8, 0x7fffcccb, 0x7fffff80, 0x7fffff82,
  0x7fffccca, 0x7fffff7f, 0x7fffff81, 0x7fffff83,
  0x7fffff7e, 0x7fffff80, 0x7fffff82, 0x7fffff84,
  0x7fffff80, 0x7fffff82, 0x7fffff84, 0xaaaaaa9a,
  0x7fffff81, 0x7fffff83, 0x7ffffff1, 0xaaaaaaa7,
  0x7fffff82, 0x7ffffff0, 0x7ffffffe, 0xaaaaaaa8,
  0x7fffffef, 0x7ffffffd, 0x7fffffff, 0xaaaaaaa9,
  0x7ffffffc, 0x7ffffffe, 0x80000000, 0xaaaaaaaa,
  0x7ffffffd, 0x7fffffff, 0x80000001, 0xaaaaaaab,
  0x7ffffffe, 0x80000000, 0x80000002, 0xaaaaaaac,
  0x7fffffff, 0x80000001, 0x80000003, 0xaaaaaaba,
  0x80000000, 0x80000002, 0x80000011, 0xaaaaab27,
  0x80000001, 0x80000010, 0x8000007e, 0xaaaaab28,
  0x8000000f, 0x8000007d, 0x8000007f, 0xaaaaab29,
  0x8000007c, 0x8000007e, 0x80000080, 0xaaaadddd,
  0x8000007d, 0x8000007f, 0x80003334, 0xaaaaffff,
  0x8000007e, 0x80003333, 0x80005556, 0xaaab2aa7,
  0x80003332, 0x80005555, 0x80007ffe, 0xaaab2aa8,
  0x80005554, 0x80007ffd, 0x80007fff, 0xaaab2aa9,
  0x80007ffc, 0x80007ffe, 0x80008000, 0xaaaa2aaa,
  0x80007ffd, 0x80007fff, 0x7fff8001, 0xaaaa2aab,
  0x80007ffe, 0x7fff8000, 0x7fff8002, 0xaaaa5554,
  0x7fff7fff, 0x7fff8001, 0x7fffaaab, 0xaaaa7776,
  0x7fff8000, 0x7fffaaaa, 0x7fffcccd, 0xaaaaaa2a,
  0x7fffaaa9, 0x7fffcccc, 0x7fffff81, 0xaaaaaa2b,
  0x7fffcccb, 0x7fffff80, 0x7fffff82, 0xaaaaaa2c,
  0x7fffff7f, 0x7fffff81, 0x7fffff83, 0xaaaaaa2d,
  0x7fffff81, 0x7fffff83, 0xaaaaaa2d, 0xccccccbc,
  0x7fffff82, 0x7fffff84, 0xaaaaaa9a, 0xccccccc9,
  0x7fffff83, 0x7ffffff1, 0xaaaaaaa7, 0xccccccca,
  0x7ffffff0, 0x7ffffffe, 0xaaaaaaa8, 0xcccccccb,
  0x7ffffffd, 0x7fffffff, 0xaaaaaaa9, 0xcccccccc,
  0x7ffffffe, 0x80000000, 0xaaaaaaaa, 0xcccccccd,
  0x7fffffff, 0x80000001, 0xaaaaaaab, 0xccccccce,
  0x80000000, 0x80000002, 0xaaaaaaac, 0xccccccdc,
  0x80000001, 0x80000003, 0xaaaaaaba, 0xcccccd49,
  0x80000002, 0x80000011, 0xaaaaab27, 0xcccccd4a,
  0x80000010, 0x8000007e, 0xaaaaab28, 0xcccccd4b,
  0x8000007d, 0x8000007f, 0xaaaaab29, 0xccccffff,
  0x8000007e, 0x80000080, 0xaaaadddd, 0xcccd2221,
  0x8000007f, 0x80003334, 0xaaaaffff, 0xcccd4cc9,
  0x80003333, 0x80005556, 0xaaab2aa7, 0xcccd4cca,
  0x80005555, 0x80007ffe, 0xaaab2aa8, 0xcccd4ccb,
  0x80007ffd, 0x80007fff, 0xaaab2aa9, 0xcccc4ccc,
  0x80007ffe, 0x80008000, 0xaaaa2aaa, 0xcccc4ccd,
  0x80007fff, 0x7fff8001, 0xaaaa2aab, 0xcccc7776,
  0x7fff8000, 0x7fff8002, 0xaaaa5554, 0xcccc9998,
  0x7fff8001, 0x7fffaaab, 0xaaaa7776, 0xcccccc4c,
  0x7fffaaaa, 0x7fffcccd, 0xaaaaaa2a, 0xcccccc4d,
  0x7fffcccc, 0x7fffff81, 0xaaaaaa2b, 0xcccccc4e,
  0x7fffff80, 0x7fffff82, 0xaaaaaa2c, 0xcccccc4f,
  0x7fffff82, 0xaaaaaa2c, 0xcccccc4f, 0xffff7ff0,
  0x7fffff83, 0xaaaaaa2d, 0xccccccbc, 0xffff7ffd,
  0x7fffff84, 0xaaaaaa9a, 0xccccccc9, 0xffff7ffe,
  0x7ffffff1, 0xaaaaaaa7, 0xccccccca, 0xffff7fff,
  0x7ffffffe, 0xaaaaaaa8, 0xcccccccb, 0xffff8000,
  0x7fffffff, 0xaaaaaaa9, 0xcccccccc, 0xffff8001,
  0x80000000, 0xaaaaaaaa, 0xcccccccd, 0xffff8002,
  0x80000001, 0xaaaaaaab, 0xccccccce, 0xffff8010,
  0x80000002, 0xaaaaaaac, 0xccccccdc, 0xffff807d,
  0x80000003, 0xaaaaaaba, 0xcccccd49, 0xffff807e,
  0x80000011, 0xaaaaab27, 0xcccccd4a, 0xffff807f,
  0x8000007e, 0xaaaaab28, 0xcccccd4b, 0xffffb333,
  0x8000007f, 0xaaaaab29, 0xccccffff, 0xffffd555,
  0x80000080, 0xaaaadddd, 0xcccd2221, 0xfffffffd,
  0x80003334, 0xaaaaffff, 0xcccd4cc9, 0xfffffffe,
  0x80005556, 0xaaab2aa7, 0xcccd4cca, 0xffffffff,
  0x80007ffe, 0xaaab2aa8, 0xcccd4ccb, 0xffff0000,
  0x80007fff, 0xaaab2aa9, 0xcccc4ccc, 0xffff0001,
  0x80008000, 0xaaaa2aaa, 0xcccc4ccd, 0xffff2aaa,
  0x7fff8001, 0xaaaa2aab, 0xcccc7776, 0xffff4ccc,
  0x7fff8002, 0xaaaa5554, 0xcccc9998, 0xffff7f80,
  0x7fffaaab, 0xaaaa7776, 0xcccccc4c, 0xffff7f81,
  0x7fffcccd, 0xaaaaaa2a, 0xcccccc4d, 0xffff7f82,
  0x7fffff81, 0xaaaaaa2b, 0xcccccc4e, 0xffff7f83,
  0xaaaaaa2b, 0xcccccc4e, 0xffff7f83, 0xffff7ff1,
  0xaaaaaa2c, 0xcccccc4f, 0xffff7ff0, 0xffff7ffe,
  0xaaaaaa2d, 0xccccccbc, 0xffff7ffd, 0xffff7fff,
  0xaaaaaa9a, 0xccccccc9, 0xffff7ffe, 0xffff8000,
  0xaaaaaaa7, 0xccccccca, 0xffff7fff, 0xffff8001,
  0xaaaaaaa8, 0xcccccccb, 0xffff8000, 0xffff8002,
  0xaaaaaaa9, 0xcccccccc, 0xffff8001, 0xffff8003,
  0xaaaaaaaa, 0xcccccccd, 0xffff8002, 0xffff8011,
  0xaaaaaaab, 0xccccccce, 0xffff8010, 0xffff807e,
  0xaaaaaaac, 0xccccccdc, 0xffff807d, 0xffff807f,
  0xaaaaaaba, 0xcccccd49, 0xffff807e, 0xffff8080,
  0xaaaaab27, 0xcccccd4a, 0xffff807f, 0xffffb334,
  0xaaaaab28, 0xcccccd4b, 0xffffb333, 0xffffd556,
  0xaaaaab29, 0xccccffff, 0xffffd555, 0xfffffffe,
  0xaaaadddd, 0xcccd2221, 0xfffffffd, 0xffffffff,
  0xaaaaffff, 0xcccd4cc9, 0xfffffffe, 0x00000000,
  0xaaab2aa7, 0xcccd4cca, 0xffffffff, 0xffff0001,
  0xaaab2aa8, 0xcccd4ccb, 0xffff0000, 0xffff0002,
  0xaaab2aa9, 0xcccc4ccc, 0xffff0001, 0xffff2aab,
  0xaaaa2aaa, 0xcccc4ccd, 0xffff2aaa, 0xffff4ccd,
  0xaaaa2aab, 0xcccc7776, 0xffff4ccc, 0xffff7f81,
  0xaaaa5554, 0xcccc9998, 0xffff7f80, 0xffff7f82,
  0xaaaa7776, 0xcccccc4c, 0xffff7f81, 0xffff7f83,
  0xaaaaaa2a, 0xcccccc4d, 0xffff7f82, 0xffff7f84,
  0xcccccc4d, 0xffff7f82, 0xffff7f84, 0xffff7ff2,
  0xcccccc4e, 0xffff7f83, 0xffff7ff1, 0xffff7fff,
  0xcccccc4f, 0xffff7ff0, 0xffff7ffe, 0xffff8000,
  0xccccccbc, 0xffff7ffd, 0xffff7fff, 0xffff8001,
  0xccccccc9, 0xffff7ffe, 0xffff8000, 0xffff8002,
  0xccccccca, 0xffff7fff, 0xffff8001, 0xffff8003,
  0xcccccccb, 0xffff8000, 0xffff8002, 0xffff8004,
  0xcccccccc, 0xffff8001, 0xffff8003, 0xffff8012,
  0xcccccccd, 0xffff8002, 0xffff8011, 0xffff807f,
  0xccccccce, 0xffff8010, 0xffff807e, 0xffff8080,
  0xccccccdc, 0xffff807d, 0xffff807f, 0xffff8081,
  0xcccccd49, 0xffff807e, 0xffff8080, 0xffffb335,
  0xcccccd4a, 0xffff807f, 0xffffb334, 0xffffd557,
  0xcccccd4b, 0xffffb333, 0xffffd556, 0xffffffff,
  0xccccffff, 0xffffd555, 0xfffffffe, 0x00000000,
  0xcccd2221, 0xfffffffd, 0xffffffff, 0x00000001,
  0xcccd4cc9, 0xfffffffe, 0x00000000, 0xffff0002,
  0xcccd4cca, 0xffffffff, 0xffff0001, 0xffff0003,
  0xcccd4ccb, 0xffff0000, 0xffff0002, 0xffff2aac,
  0xcccc4ccc, 0xffff0001, 0xffff2aab, 0xffff4cce,
  0xcccc4ccd, 0xffff2aaa, 0xffff4ccd, 0xffff7f82,
  0xcccc7776, 0xffff4ccc, 0xffff7f81, 0xffff7f83,
  0xcccc9998, 0xffff7f80, 0xffff7f82, 0xffff7f84,
  0xcccccc4c, 0xffff7f81, 0xffff7f83, 0xffff7f85,
  0xffff7f81, 0xffff7f83, 0xffff7f85, 0xffff7ff3,
  0xffff7f82, 0xffff7f84, 0xffff7ff2, 0xffff8000,
  0xffff7f83, 0xffff7ff1, 0xffff7fff, 0xffff8001,
  0xffff7ff0, 0xffff7ffe, 0xffff8000, 0xffff8002,
  0xffff7ffd, 0xffff7fff, 0xffff8001, 0xffff8003,
  0xffff7ffe, 0xffff8000, 0xffff8002, 0xffff8004,
  0xffff7fff, 0xffff8001, 0xffff8003, 0xffff8005,
  0xffff8000, 0xffff8002, 0xffff8004, 0xffff8013,
  0xffff8001, 0xffff8003, 0xffff8012, 0xffff8080,
  0xffff8002, 0xffff8011, 0xffff807f, 0xffff8081,
  0xffff8010, 0xffff807e, 0xffff8080, 0xffff8082,
  0xffff807d, 0xffff807f, 0xffff8081, 0xffffb336,
  0xffff807e, 0xffff8080, 0xffffb335, 0xffffd558,
  0xffff807f, 0xffffb334, 0xffffd557, 0x00000000,
  0xffffb333, 0xffffd556, 0xffffffff, 0x00000001,
  0xffffd555, 0xfffffffe, 0x00000000, 0x00000002,
  0xfffffffd, 0xffffffff, 0x00000001, 0xffff0003,
  0xfffffffe, 0x00000000, 0xffff0002, 0xffff0004,
  0xffffffff, 0xffff0001, 0xffff0003, 0xffff2aad,
  0xffff0000, 0xffff0002, 0xffff2aac, 0xffff4ccf,
  0xffff0001, 0xffff2aab, 0xffff4cce, 0xffff7f83,
  0xffff2aaa, 0xffff4ccd, 0xffff7f82, 0xffff7f84,
  0xffff4ccc, 0xffff7f81, 0xffff7f83, 0xffff7f85,
  0xffff7f80, 0xffff7f82, 0xffff7f84, 0xffff7f86,
  0xffff7f82, 0xffff7f84, 0xffff7f86, 0xffffff70,
  0xffff7f83, 0xffff7f85, 0xffff7ff3, 0xffffff7d,
  0xffff7f84, 0xffff7ff2, 0xffff8000, 0xffffff7e,
  0xffff7ff1, 0xffff7fff, 0xffff8001, 0xffffff7f,
  0xffff7ffe, 0xffff8000, 0xffff8002, 0xffffff80,
  0xffff7fff, 0xffff8001, 0xffff8003, 0xffffff81,
  0xffff8000, 0xffff8002, 0xffff8004, 0xffffff82,
  0xffff8001, 0xffff8003, 0xffff8005, 0xffffff90,
  0xffff8002, 0xffff8004, 0xffff8013, 0xfffffffd,
  0xffff8003, 0xffff8012, 0xffff8080, 0xfffffffe,
  0xffff8011, 0xffff807f, 0xffff8081, 0xffffffff,
  0xffff807e, 0xffff8080, 0xffff8082, 0x000032b3,
  0xffff807f, 0xffff8081, 0xffffb336, 0x000054d5,
  0xffff8080, 0xffffb335, 0xffffd558, 0x00007f7d,
  0xffffb334, 0xffffd557, 0x00000000, 0x00007f7e,
  0xffffd556, 0xffffffff, 0x00000001, 0x00007f7f,
  0xfffffffe, 0x00000000, 0x00000002, 0xffff7f80,
  0xffffffff, 0x00000001, 0xffff0003, 0xffff7f81,
  0x00000000, 0xffff0002, 0xffff0004, 0xffffaa2a,
  0xffff0001, 0xffff0003, 0xffff2aad, 0xffffcc4c,
  0xffff0002, 0xffff2aac, 0xffff4ccf, 0xffffff00,
  0xffff2aab, 0xffff4cce, 0xffff7f83, 0xffffff01,
  0xffff4ccd, 0xffff7f82, 0xffff7f84, 0xffffff02,
  0xffff7f81, 0xffff7f83, 0xffff7f85, 0xffffff03,
  0xffff7f83, 0xffff7f85, 0xffffff03, 0xffffff71,
  0xffff7f84, 0xffff7f86, 0xffffff70, 0xffffff7e,
  0xffff7f85, 0xffff7ff3, 0xffffff7d, 0xffffff7f,
  0xffff7ff2, 0xffff8000, 0xffffff7e, 0xffffff80,
  0xffff7fff, 0xffff8001, 0xffffff7f, 0xffffff81,
  0xffff8000, 0xffff8002, 0xffffff80, 0xffffff82,
  0xffff8001, 0xffff8003, 0xffffff81, 0xffffff83,
  0xffff8002, 0xffff8004, 0xffffff82, 0xffffff91,
  0xffff8003, 0xffff8005, 0xffffff90, 0xfffffffe,
  0xffff8004, 0xffff8013, 0xfffffffd, 0xffffffff,
  0xffff8012, 0xffff8080, 0xfffffffe, 0x00000000,
  0xffff807f, 0xffff8081, 0xffffffff, 0x000032b4,
  0xffff8080, 0xffff8082, 0x000032b3, 0x000054d6,
  0xffff8081, 0xffffb336, 0x000054d5, 0x00007f7e,
  0xffffb335, 0xffffd558, 0x00007f7d, 0x00007f7f,
  0xffffd557, 0x00000000, 0x00007f7e, 0x00007f80,
  0xffffffff, 0x00000001, 0x00007f7f, 0xffff7f81,
  0x00000000, 0x00000002, 0xffff7f80, 0xffff7f82,
  0x00000001, 0xffff0003, 0xffff7f81, 0xffffaa2b,
  0xffff0002, 0xffff0004, 0xffffaa2a, 0xffffcc4d,
  0xffff0003, 0xffff2aad, 0xffffcc4c, 0xffffff01,
  0xffff2aac, 0xffff4ccf, 0xffffff00, 0xffffff02,
  0xffff4cce, 0xffff7f83, 0xffffff01, 0xffffff03,
  0xffff7f82, 0xffff7f84, 0xffffff02, 0xffffff04,
  0xffff7f84, 0xffffff02, 0xffffff04, 0xffffff72,
  0xffff7f85, 0xffffff03, 0xffffff71, 0xffffff7f,
  0xffff7f86, 0xffffff70, 0xffffff7e, 0xffffff80,
  0xffff7ff3, 0xffffff7d, 0xffffff7f, 0xffffff81,
  0xffff8000, 0xffffff7e, 0xffffff80, 0xffffff82,
  0xffff8001, 0xffffff7f, 0xffffff81, 0xffffff83,
  0xffff8002, 0xffffff80, 0xffffff82, 0xffffff84,
  0xffff8003, 0xffffff81, 0xffffff83, 0xffffff92,
  0xffff8004, 0xffffff82, 0xffffff91, 0xffffffff,
  0xffff8005, 0xffffff90, 0xfffffffe, 0x00000000,
  0xffff8013, 0xfffffffd, 0xffffffff, 0x00000001,
  0xffff8080, 0xfffffffe, 0x00000000, 0x000032b5,
  0xffff8081, 0xffffffff, 0x000032b4, 0x000054d7,
  0xffff8082, 0x000032b3, 0x000054d6, 0x00007f7f,
  0xffffb336, 0x000054d5, 0x00007f7e, 0x00007f80,
  0xffffd558, 0x00007f7d, 0x00007f7f, 0x00007f81,
  0x00000000, 0x00007f7e, 0x00007f80, 0xffff7f82,
  0x00000001, 0x00007f7f, 0xffff7f81, 0xffff7f83,
  0x00000002, 0xffff7f80, 0xffff7f82, 0xffffaa2c,
  0xffff0003, 0xffff7f81, 0xffffaa2b, 0xffffcc4e,
  0xffff0004, 0xffffaa2a, 0xffffcc4d, 0xffffff02,
  0xffff2aad, 0xffffcc4c, 0xffffff01, 0xffffff03,
  0xffff4ccf, 0xffffff00, 0xffffff02, 0xffffff04,
  0xffff7f83, 0xffffff01, 0xffffff03, 0xffffff05,
  0xffffff01, 0xffffff03, 0xffffff05, 0xffffff73,
  0xffffff02, 0xffffff04, 0xffffff72, 0xffffff80,
  0xffffff03, 0xffffff71, 0xffffff7f, 0xffffff81,
  0xffffff70, 0xffffff7e, 0xffffff80, 0xffffff82,
  0xffffff7d, 0xffffff7f, 0xffffff81, 0xffffff83,
  0xffffff7e, 0xffffff80, 0xffffff82, 0xffffff84,
  0xffffff7f, 0xffffff81, 0xffffff83, 0xffffff85,
  0xffffff80, 0xffffff82, 0xffffff84, 0xffffff93,
  0xffffff81, 0xffffff83, 0xffffff92, 0x00000000,
  0xffffff82, 0xffffff91, 0xffffffff, 0x00000001,
  0xffffff90, 0xfffffffe, 0x00000000, 0x00000002,
  0xfffffffd, 0xffffffff, 0x00000001, 0x000032b6,
  0xfffffffe, 0x00000000, 0x000032b5, 0x000054d8,
  0xffffffff, 0x000032b4, 0x000054d7, 0x00007f80,
  0x000032b3, 0x000054d6, 0x00007f7f, 0x00007f81,
  0x000054d5, 0x00007f7e, 0x00007f80, 0x00007f82,
  0x00007f7d, 0x00007f7f, 0x00007f81, 0xffff7f83,
  0x00007f7e, 0x00007f80, 0xffff7f82, 0xffff7f84,
  0x00007f7f, 0xffff7f81, 0xffff7f83, 0xffffaa2d,
  0xffff7f80, 0xffff7f82, 0xffffaa2c, 0xffffcc4f,
  0xffff7f81, 0xffffaa2b, 0xffffcc4e, 0xffffff03,
  0xffffaa2a, 0xffffcc4d, 0xffffff02, 0xffffff04,
  0xffffcc4c, 0xffffff01, 0xffffff03, 0xffffff05,
  0xffffff00, 0xffffff02, 0xffffff04, 0xffffff06,
  0xffffff02, 0xffffff04, 0xffffff06, 0xffffffd0,
  0xffffff03, 0xffffff05, 0xffffff73, 0xffffffdd,
  0xffffff04, 0xffffff72, 0xffffff80, 0xffffffde,
  0xffffff71, 0xffffff7f, 0xffffff81, 0xffffffdf,
  0xffffff7e, 0xffffff80, 0xffffff82, 0xffffffe0,
  0xffffff7f, 0xffffff81, 0xffffff83, 0xffffffe1,
  0xffffff80, 0xffffff82, 0xffffff84, 0xffffffe2,
  0xffffff81, 0xffffff83, 0xffffff85, 0xfffffff0,
  0xffffff82, 0xffffff84, 0xffffff93, 0x0000005d,
  0xffffff83, 0xffffff92, 0x00000000, 0x0000005e,
  0xffffff91, 0xffffffff, 0x00000001, 0x0000005f,
  0xfffffffe, 0x00000000, 0x00000002, 0x00003313,
  0xffffffff, 0x00000001, 0x000032b6, 0x00005535,
  0x00000000, 0x000032b5, 0x000054d8, 0x00007fdd,
  0x000032b4, 0x000054d7, 0x00007f80, 0x00007fde,
  0x000054d6, 0x00007f7f, 0x00007f81, 0x00007fdf,
  0x00007f7e, 0x00007f80, 0x00007f82, 0xffff7fe0,
  0x00007f7f, 0x00007f81, 0xffff7f83, 0xffff7fe1,
  0x00007f80, 0xffff7f82, 0xffff7f84, 0xffffaa8a,
  0xffff7f81, 0xffff7f83, 0xffffaa2d, 0xffffccac,
  0xffff7f82, 0xffffaa2c, 0xffffcc4f, 0xffffff60,
  0xffffaa2b, 0xffffcc4e, 0xffffff03, 0xffffff61,
  0xffffcc4d, 0xffffff02, 0xffffff04, 0xffffff62,
  0xffffff01, 0xffffff03, 0xffffff05, 0xffffff63,
  0xffffff03, 0xffffff05, 0xffffff63, 0xffffffed,
  0xffffff04, 0xffffff06, 0xffffffd0, 0xfffffffa,
  0xffffff05, 0xffffff73, 0xffffffdd, 0xfffffffb,
  0xffffff72, 0xffffff80, 0xffffffde, 0xfffffffc,
  0xffffff7f, 0xffffff81, 0xffffffdf, 0xfffffffd,
  0xffffff80, 0xffffff82, 0xffffffe0, 0xfffffffe,
  0xffffff81, 0xffffff83, 0xffffffe1, 0xffffffff,
  0xffffff82, 0xffffff84, 0xffffffe2, 0x0000000d,
  0xffffff83, 0xffffff85, 0xfffffff0, 0x0000007a,
  0xffffff84, 0xffffff93, 0x0000005d, 0x0000007b,
  0xffffff92, 0x00000000, 0x0000005e, 0x0000007c,
  0xffffffff, 0x00000001, 0x0000005f, 0x00003330,
  0x00000000, 0x00000002, 0x00003313, 0x00005552,
  0x00000001, 0x000032b6, 0x00005535, 0x00007ffa,
  0x000032b5, 0x000054d8, 0x00007fdd, 0x00007ffb,
  0x000054d7, 0x00007f80, 0x00007fde, 0x00007ffc,
  0x00007f7f, 0x00007f81, 0x00007fdf, 0xffff7ffd,
  0x00007f80, 0x00007f82, 0xffff7fe0, 0xffff7ffe,
  0x00007f81, 0xffff7f83, 0xffff7fe1, 0xffffaaa7,
  0xffff7f82, 0xffff7f84, 0xffffaa8a, 0xffffccc9,
  0xffff7f83, 0xffffaa2d, 0xffffccac, 0xffffff7d,
  0xffffaa2c, 0xffffcc4f, 0xffffff60, 0xffffff7e,
  0xffffcc4e, 0xffffff03, 0xffffff61, 0xffffff7f,
  0xffffff02, 0xffffff04, 0xffffff62, 0xffffff80,
  0xffffff04, 0xffffff62, 0xffffff80, 0xffffffee,
  0xffffff05, 0xffffff63, 0xffffffed, 0xfffffffb,
  0xffffff06, 0xffffffd0, 0xfffffffa, 0xfffffffc,
  0xffffff73, 0xffffffdd, 0xfffffffb, 0xfffffffd,
  0xffffff80, 0xffffffde, 0xfffffffc, 0xfffffffe,
  0xffffff81, 0xffffffdf, 0xfffffffd, 0xffffffff,
  0xffffff82, 0xffffffe0, 0xfffffffe, 0x00000000,
  0xffffff83, 0xffffffe1, 0xffffffff, 0x0000000e,
  0xffffff84, 0xffffffe2, 0x0000000d, 0x0000007b,
  0xffffff85, 0xfffffff0, 0x0000007a, 0x0000007c,
  0xffffff93, 0x0000005d, 0x0000007b, 0x0000007d,
  0x00000000, 0x0000005e, 0x0000007c, 0x00003331,
  0x00000001, 0x0000005f, 0x00003330, 0x00005553,
  0x00000002, 0x00003313, 0x00005552, 0x00007ffb,
  0x000032b6, 0x00005535, 0x00007ffa, 0x00007ffc,
  0x000054d8, 0x00007fdd, 0x00007ffb, 0x00007ffd,
  0x00007f80, 0x00007fde, 0x00007ffc, 0xffff7ffe,
  0x00007f81, 0x00007fdf, 0xffff7ffd, 0xffff7fff,
  0x00007f82, 0xffff7fe0, 0xffff7ffe, 0xffffaaa8,
  0xffff7f83, 0xffff7fe1, 0xffffaaa7, 0xffffccca,
  0xffff7f84, 0xffffaa8a, 0xffffccc9, 0xffffff7e,
  0xffffaa2d, 0xffffccac, 0xffffff7d, 0xffffff7f,
  0xffffcc4f, 0xffffff60, 0xffffff7e, 0xffffff80,
  0xffffff03, 0xffffff61, 0xffffff7f, 0xffffff81,
  0xffffff61, 0xffffff7f, 0xffffff81, 0xffffffef,
  0xffffff62, 0xffffff80, 0xffffffee, 0xfffffffc,
  0xffffff63, 0xffffffed, 0xfffffffb, 0xfffffffd,
  0xffffffd0, 0xfffffffa, 0xfffffffc, 0xfffffffe,
  0xffffffdd, 0xfffffffb, 0xfffffffd, 0xffffffff,
  0xffffffde, 0xfffffffc, 0xfffffffe, 0x00000000,
  0xffffffdf, 0xfffffffd, 0xffffffff, 0x00000001,
  0xffffffe0, 0xfffffffe, 0x00000000, 0x0000000f,
  0xffffffe1, 0xffffffff, 0x0000000e, 0x0000007c,
  0xffffffe2, 0x0000000d, 0x0000007b, 0x0000007d,
  0xfffffff0, 0x0000007a, 0x0000007c, 0x0000007e,
  0x0000005d, 0x0000007b, 0x0000007d, 0x00003332,
  0x0000005e, 0x0000007c, 0x00003331, 0x00005554,
  0x0000005f, 0x00003330, 0x00005553, 0x00007ffc,
  0x00003313, 0x00005552, 0x00007ffb, 0x00007ffd,
  0x00005535, 0x00007ffa, 0x00007ffc, 0x00007ffe,
  0x00007fdd, 0x00007ffb, 0x00007ffd, 0xffff7fff,
  0x00007fde, 0x00007ffc, 0xffff7ffe, 0xffff8000,
  0x00007fdf, 0xffff7ffd, 0xffff7fff, 0xffffaaa9,
  0xffff7fe0, 0xffff7ffe, 0xffffaaa8, 0xffffcccb,
  0xffff7fe1, 0xffffaaa7, 0xffffccca, 0xffffff7f,
  0xffffaa8a, 0xffffccc9, 0xffffff7e, 0xffffff80,
  0xffffccac, 0xffffff7d, 0xffffff7f, 0xffffff81,
  0xffffff60, 0xffffff7e, 0xffffff80, 0xffffff82,
};
const unsigned kExpectedCount_NEON_saddw_4S = 744;

#endif  // VIXL_SIM_SADDW_4S_TRACE_A64_H_