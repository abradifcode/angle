// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/ConvertVertex.comp.00000007.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kConvertVertex_comp_00000007[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x9d,0x98,0x79,0x94,0x8f,0x65,
    0x14,0xc7,0xdf,0x77,0x96,0xdf,0x8c,0x31,0x83,0xb1,0x8c,0x64,0xc9,0x44,0x45,0xc4,
    0x24,0x44,0x9a,0x42,0xb2,0x94,0x54,0x84,0x43,0x8a,0xc9,0xb4,0x50,0xb6,0x28,0xa5,
    0x49,0x42,0x22,0x4b,0xc8,0x12,0x2a,0x84,0x64,0xc9,0x5a,0x12,0xca,0x39,0x4e,0x92,
    0x73,0xc8,0xd2,0xa6,0xb4,0x3a,0x64,0x49,0x2a,0x95,0x25,0xa4,0xe7,0xbe,0xbf,0xcf,
    0x6d,0xae,0xe7,0xcc,0x5f,0xcd,0x39,0xef,0x79,0xdf,0xfb,0xbd,0xeb,0xf3,0x7d,0xee,
    0xb3,0xfc,0x26,0x31,0xa1,0x5a,0x4a,0x10,0x84,0x41,0x5a,0x90,0x1a,0x64,0x86,0x41,
    0xf4,0x97,0x19,0x24,0x04,0xf2,0x59,0x3c,0x88,0x45,0xef,0x56,0x6d,0x3b,0xb4,0xad,
    0x33,0x70,0x50,0x7e,0x9d,0xfa,0x0d,0x72,0x44,0x5f,0x22,0x48,0x8c,0xec,0x44,0x57,
    0xd2,0xd9,0x24,0xbb,0x77,0x92,0x7b,0xfa,0xe4,0xf5,0xea,0x2b,0xf8,0x6e,0xf7,0x94,
    0x72,0x78,0x52,0x14,0x2b,0x08,0x9a,0x62,0x2b,0x4f,0x6b,0x67,0x7d,0x59,0x3c,0x4d,
    0x50,0x8d,0xb7,0x62,0x21,0x58,0x92,0xc1,0x12,0xc0,0x52,0x0d,0x96,0x08,0x96,0x6e,
    0xb0,0x24,0xb0,0x52,0x06,0x4b,0x06,0x2b,0x6b,0xb0,0x18,0xd8,0x45,0x06,0x4b,0x01,
    0xab,0x64,0xb0,0x54,0xb0,0xaa,0x06,0x2b,0x06,0x56,0xdd,0x60,0x69,0x60,0x35,0x0c,
    0x56,0x1c,0xac,0xb6,0xc1,0xd2,0xc1,0x72,0x0c,0x96,0x01,0x56,0x5f,0x38,0x76,0xa3,
    0xd2,0xf1,0xb6,0x72,0xa3,0xe9,0x41,0xad,0xca,0x45,0x9e,0xc7,0x99,0xd8,0xe7,0xc1,
    0x85,0xd8,0xf7,0x74,0xef,0x4b,0xff,0xd3,0xc5,0xe5,0x6c,0x38,0x15,0x79,0x9b,0x17,
    0x6f,0x7b,0x11,0xf1,0xb6,0x9b,0x78,0x3b,0xbc,0x78,0x3b,0x88,0xa7,0xf2,0x6e,0xc6,
    0x59,0x09,0xb9,0x54,0x18,0x97,0x2b,0xb8,0xa7,0x8c,0x1b,0x45,0x42,0x64,0x9f,0x18,
    0xc5,0x93,0xef,0x72,0xce,0x26,0x06,0x9f,0x41,0xf4,0x4e,0x8a,0x78,0x4f,0xa1,0xae,
    0x6c,0x57,0x53,0x2a,0xdf,0x8a,0x67,0x39,0xef,0x4c,0x7c,0xb2,0x9d,0x7d,0x69,0xfa,
    0x29,0x05,0xff,0x2c,0xbe,0x33,0xd1,0x97,0xe7,0x3b,0x8b,0x78,0x15,0x4d,0xbc,0x2c,
    0x6c,0xaa,0x52,0x8f,0x60,0x55,0x5c,0xb7,0x68,0x4f,0xfc,0x9f,0x47,0x6a,0xb8,0x9c,
    0xbe,0x90,0x38,0x4d,0x90,0xaf,0x00,0x93,0x31,0xd7,0xa0,0x7e,0x99,0x87,0x5a,0xc8,
    0x35,0x8d,0xff,0x95,0xd8,0xc6,0xd0,0xcb,0xbb,0x2e,0xf3,0xa4,0xf6,0xf5,0xa8,0x59,
    0xf5,0x4d,0xe8,0x4f,0xd5,0x37,0xf7,0xe4,0xb6,0xf8,0x97,0x75,0x5e,0xb7,0x1b,0xbf,
    0xf6,0xcc,0xaf,0xc8,0xc2,0x53,0x67,0xe6,0xa2,0xb2,0x43,0xb5,0xdf,0xaa,0xd0,0x57,
    0x3d,0xa8,0xef,0x3e,0x72,0xe7,0x31,0x3e,0x91,0x7b,0x9a,0x7a,0x24,0x5f,0xbe,0x99,
    0xd3,0x07,0xd1,0xc5,0x8c,0xbe,0x37,0xfd,0xaf,0x75,0xf4,0xc1,0x5e,0xf5,0x83,0x58,
    0x47,0x2a,0x0f,0x31,0x75,0x8a,0xfc,0x94,0x7b,0xce,0x27,0x16,0xca,0x43,0x59,0x3b,
    0x1a,0xef,0x39,0xe3,0x2f,0xf2,0x44,0x8f,0xaf,0x59,0xcc,0x81,0xd4,0xf7,0x1a,0x73,
    0x5f,0xc3,0xc4,0x7f,0x5d,0xe2,0xbb,0x3f,0x95,0xe7,0x9b,0xf9,0x12,0x9e,0xde,0x8e,
    0xaa,0x1d,0x76,0xa3,0xf0,0xb4,0xcd,0xf0,0x24,0xeb,0x65,0x1b,0x71,0x3f,0x21,0xe7,
    0x76,0x78,0x12,0x79,0x07,0x58,0x79,0x27,0xef,0xc4,0x2f,0x11,0xfb,0x5d,0xe4,0xd8,
    0x89,0xfd,0x2e,0xf6,0xcd,0x10,0xfd,0xa7,0x7c,0xdb,0xbe,0x38,0x6a,0xea,0x12,0xb9,
    0x64,0x18,0xdf,0x5b,0x6b,0x3b,0x49,0xe2,0xc8,0x1a,0x14,0xec,0x28,0xb6,0x0d,0xdd,
    0x1a,0x48,0xa0,0x17,0x02,0x72,0x9f,0x72,0x48,0x32,0x39,0x85,0x87,0xfd,0xf0,0xa1,
    0xf2,0x01,0x4f,0x3e,0x66,0x64,0x59,0x43,0x67,0x3c,0xfd,0x59,0x4f,0x7f,0xde,0x93,
    0xa5,0x60,0x6b,0x9f,0x18,0x5e,0xa8,0x4f,0xf6,0xf4,0xe9,0xc8,0xcd,0x5c,0x95,0xc2,
    0xc1,0x37,0xf0,0x22,0x3d,0x93,0xcb,0xb8,0xbf,0x05,0x17,0x1b,0x59,0x3f,0xdf,0xb1,
    0xe6,0xf2,0x8d,0xcd,0xf7,0xe0,0xcb,0x9c,0x8d,0xac,0x81,0x1f,0xf0,0x13,0xfc,0xa4,
    0x63,0x62,0x1f,0x9c,0xfc,0xed,0xec,0x45,0xf7,0xa3,0x7b,0xf6,0xc1,0x8f,0x7c,0x9f,
    0x73,0x85,0xcb,0xb7,0x60,0x37,0x38,0xfb,0xfd,0xd4,0x20,0xdf,0x07,0xf8,0x3e,0xed,
    0xf4,0x3f,0xe1,0x23,0xef,0x13,0x2e,0xd6,0x21,0xf7,0x3e,0x4c,0x6c,0xd1,0x1f,0x41,
    0x7f,0xc4,0xd4,0xf6,0x33,0x3c,0xaf,0xa0,0xb6,0x5f,0xc0,0x8e,0x52,0x8f,0xc8,0x07,
    0xdd,0x73,0x08,0xdf,0x83,0x86,0x8f,0x5f,0x8b,0xe0,0xe3,0x37,0xf0,0x91,0xce,0x46,
    0xe4,0xdf,0xc1,0x8e,0x1a,0x9b,0xe3,0xe4,0x1c,0x86,0xcd,0x1f,0xd8,0x1d,0x67,0x4c,
    0xc7,0xc0,0xd4,0xfe,0x4f,0xe6,0x5e,0x39,0xfe,0x0b,0x8e,0xe7,0x1b,0x9b,0x13,0xe0,
    0xca,0xf1,0x49,0xfc,0x4e,0xc0,0xf1,0x69,0xc3,0xf1,0xc9,0x68,0x2c,0x41,0x84,0xc9,
    0x98,0x4e,0xc1,0x8f,0x8e,0xf1,0xb4,0x89,0x7b,0x8e,0xdc,0x52,0xd7,0x59,0xe4,0xc6,
    0x2e,0x87,0xac,0xc5,0x7f,0x38,0xcf,0xcf,0xa2,0x3f,0x03,0x96,0xcb,0x5a,0x0d,0xc3,
    0x78,0x8f,0x8a,0x4e,0x7a,0x4f,0x64,0xf5,0x4d,0x08,0xe3,0xe7,0x93,0xe0,0xa2,0x3f,
    0x0f,0xa6,0x79,0x93,0xc2,0xc2,0xbc,0xd2,0xa7,0x49,0x61,0x61,0xdc,0x58,0x18,0xef,
    0x6d,0xd1,0x49,0xcf,0xc6,0xa2,0xb8,0xb1,0xf8,0xf9,0x12,0xca,0x7e,0x10,0xef,0xed,
    0x64,0x13,0x2f,0x35,0x8c,0xaf,0xaf,0xcd,0x70,0x5e,0x2c,0x8c,0x63,0x29,0x61,0x61,
    0x4f,0x09,0x26,0x3c,0x1c,0x86,0x87,0xc3,0x86,0x87,0xb4,0xf0,0xc2,0x39,0x2b,0x1e,
    0xc6,0xb1,0xf9,0xa6,0x0f,0x8b,0x87,0x17,0xf6,0xe1,0x21,0xe3,0x9f,0x41,0x7e,0xb1,
    0x95,0x75,0x95,0x01,0x17,0xb2,0x27,0x94,0x08,0xe3,0xe7,0xbb,0xe0,0xd2,0xeb,0x8d,
    0xdc,0xd3,0x50,0xf3,0x30,0x6f,0x72,0xa6,0x5c,0xeb,0x7c,0x53,0x38,0xa3,0xf4,0x3b,
    0x8d,0x5c,0xe9,0x26,0x57,0x75,0x6c,0xb4,0x5f,0x6a,0xd1,0x2f,0x35,0x8d,0x4d,0x6d,
    0x70,0xed,0xd3,0xab,0xf0,0xab,0x6d,0x6c,0xea,0x10,0x5f,0x6d,0x72,0xc0,0xea,0x1a,
    0x1e,0xae,0xc6,0x37,0xc7,0xe4,0xbb,0x86,0x7c,0xf5,0x4c,0xac,0xfa,0xe0,0xea,0xd7,
    0x00,0xdf,0xfa,0x51,0xcf,0x24,0x44,0xb2,0x1d,0x77,0xc9,0x22,0xc6,0x9d,0x61,0xbe,
    0x4b,0x30,0xee,0x52,0x66,0xbf,0x6a,0xc4,0x7e,0xa7,0x39,0x1b,0xe3,0x33,0x86,0x98,
    0xd7,0x81,0xd5,0x35,0x63,0xba,0x1e,0xbc,0x09,0x73,0xd3,0x08,0x4c,0x63,0xe4,0x12,
    0x57,0x6a,0xcc,0x35,0x35,0x66,0xd2,0xfb,0xf2,0x57,0xda,0xd4,0x55,0x86,0xba,0xca,
    0x99,0xba,0x9a,0x7a,0xfb,0x74,0x4b,0x4f,0xee,0xe2,0xc9,0x5d,0x3d,0xb9,0x9b,0x27,
    0x77,0xf7,0xe4,0x01,0x9e,0x3c,0xd8,0x93,0x47,0x7a,0xf2,0x58,0x4f,0x9e,0xee,0xc9,
    0x33,0x8c,0x2c,0x67,0xf4,0x6c,0x4f,0xbf,0xda,0x3b,0x57,0x36,0x78,0xbc,0x37,0x83,
    0x07,0xed,0x87,0x9b,0xe8,0x87,0xe6,0xc6,0xa6,0x05,0xf8,0x28,0xe6,0xe1,0x66,0xfc,
    0x5a,0x30,0x0f,0x4d,0xc1,0xd4,0xbe,0x95,0x17,0xb3,0x75,0x11,0x31,0xdb,0x80,0xeb,
    0x7c,0xdf,0x82,0x5f,0x1b,0x62,0xb6,0x04,0x53,0xfb,0x5b,0x99,0x0b,0x8d,0x79,0x1b,
    0x31,0xdb,0x1a,0x9b,0x76,0xe0,0xba,0xaf,0xde,0x81,0x5f,0x3b,0x63,0x73,0x27,0x71,
    0xf4,0x0c,0xe9,0x00,0x26,0x77,0xbc,0x85,0x60,0x77,0xe1,0xdb,0x81,0xfd,0xb8,0x93,
    0xd9,0x8f,0x45,0xd7,0xd1,0x3d,0x9d,0xe8,0x9d,0x8e,0xf4,0x5b,0x67,0xe4,0x4e,0x26,
    0xd7,0xdd,0xf4,0x93,0x8c,0xa7,0x2b,0xb2,0xea,0xee,0xa1,0x0e,0xd1,0x75,0x43,0xd6,
    0x7d,0xf1,0x5e,0xf6,0x92,0xae,0xf4,0x93,0xd8,0x74,0x01,0x57,0xff,0xfb,0xe9,0x45,
    0x9d,0x93,0x07,0xc0,0xea,0x46,0x1c,0xc5,0xa2,0xfb,0xe4,0x43,0xdc,0x39,0xf3,0xd1,
    0xab,0x6f,0x2f,0x74,0x12,0xb7,0x3b,0xb2,0xf2,0xfa,0x30,0xbc,0xf6,0x36,0xf6,0x8f,
    0x80,0x2f,0x81,0x9f,0xbe,0x60,0x7d,0xe0,0xa7,0xbf,0xe1,0x47,0x74,0xfd,0xdc,0x33,
    0x0d,0x3e,0xfa,0x99,0x38,0x8f,0x32,0xe6,0xc5,0xc4,0x19,0x08,0x26,0xdc,0x2f,0x72,
    0x16,0x72,0x87,0x7c,0x0c,0xbc,0x1e,0xf7,0xdb,0x02,0x7c,0x1f,0x47,0x27,0x35,0x0f,
    0x40,0xd6,0xb8,0x4f,0x78,0x71,0x9f,0x04,0xb3,0x71,0x0b,0xc0,0x87,0x70,0x2f,0xd6,
    0xb8,0x4f,0xa3,0x93,0xb8,0x83,0x91,0x95,0x8b,0x67,0xe0,0x62,0xa8,0xc9,0x35,0x0c,
    0x5c,0xb9,0x78,0x16,0x4c,0xb9,0x18,0x61,0xb8,0x10,0xdd,0x70,0xf7,0x8c,0x86,0x8b,
    0xe1,0x26,0xce,0x28,0x6a,0xd6,0xbd,0xed,0x79,0xee,0xe3,0xa3,0xa8,0x65,0x24,0x98,
    0x9c,0x51,0x23,0xf0,0x1f,0x6d,0xfc,0xc7,0x78,0x63,0x7e,0x01,0xac,0x3d,0x75,0x8c,
    0x37,0x75,0x88,0x6e,0x9c,0x7b,0x26,0x10,0x67,0x1c,0x39,0xc6,0x9a,0xfb,0xd8,0x78,
    0x74,0x13,0x4c,0x8e,0x17,0xd9,0xaf,0x54,0x9e,0x44,0xce,0xe1,0xd4,0x3c,0x99,0xdf,
    0x0c,0x93,0xcc,0x38,0x5e,0xc2,0x6f,0xb2,0x39,0x3f,0xa6,0x80,0x4f,0x34,0x79,0xa7,
    0x78,0x79,0xc7,0x9b,0x3c,0x53,0xd9,0xf7,0x94,0x87,0xa9,0x1e,0x0f,0x23,0x90,0xfb,
    0x23,0x4f,0x33,0xbe,0x2f,0xb3,0x2e,0xc4,0x77,0x3a,0xb2,0x7c,0xcf,0x60,0x6d,0xe8,
    0x1a,0x9b,0xc9,0xb9,0x35,0x9d,0x3d,0x54,0x73,0xcd,0x34,0x3d,0x36,0xcb,0xc4,0x7d,
    0x05,0x2e,0x94,0xef,0x57,0xc1,0x66,0xc1,0xf7,0x5c,0xc3,0xb7,0xe8,0xe6,0xb8,0x67,
    0x1e,0xf5,0xcd,0x21,0xe6,0x6c,0x7e,0x33,0x49,0xed,0x73,0xd1,0xcd,0x33,0x39,0x16,
    0x90,0xe3,0x43,0x97,0x43,0x7a,0xf6,0x0d,0xee,0x8d,0x0b,0xe0,0xbc,0x46,0xb4,0x47,
    0x15,0xe2,0x1a,0x73,0xa1,0x17,0x73,0x2e,0x31,0xc5,0xfe,0x4d,0xce,0x04,0xed,0xf7,
    0x45,0x60,0xda,0xef,0x8b,0x3c,0x2e,0xfb,0x9b,0x7a,0x16,0x7b,0x7b,0xee,0x92,0x22,
    0xf6,0xdc,0xa5,0xe0,0xba,0xe7,0xbe,0x85,0xdf,0x52,0x63,0xb3,0xcc,0xeb,0xd5,0xe5,
    0x60,0x76,0xcf,0x5d,0x81,0xef,0x72,0xf8,0x5c,0x65,0xf8,0x14,0xdd,0x4a,0xf7,0xac,
    0xa1,0xc6,0x95,0x66,0x3c,0xef,0xf0,0x3b,0x53,0xc6,0xb3,0x1a,0x59,0xc6,0xb3,0x0a,
    0xdb,0x35,0xa6,0x8e,0x77,0x39,0x8f,0x55,0x5e,0xcb,0x79,0xbb,0x89,0x3e,0x7d,0x0f,
    0x9b,0xb5,0xc6,0x66,0x1d,0x67,0xf4,0x16,0x6c,0xd6,0x63,0xb7,0xce,0xe4,0x5c,0xef,
    0xe5,0x5c,0x65,0xfc,0xdf,0xe7,0x0c,0x2e,0xe0,0x3e,0xfc,0x01,0x98,0xf8,0x6e,0x40,
    0xd6,0xbb,0xf2,0x46,0xce,0x67,0x39,0x4f,0x36,0x7a,0xf7,0x97,0x0a,0xf0,0x51,0x9e,
    0xfb,0x4b,0x16,0xff,0x8b,0x93,0x7c,0x17,0x9b,0x18,0x9b,0xc0,0x25,0xc6,0x26,0xef,
    0x9e,0x56,0x85,0x18,0x15,0xcd,0x1d,0xa8,0x92,0x89,0x57,0x99,0x78,0x97,0x98,0xfb,
    0xc3,0x66,0x73,0x5f,0x90,0xf8,0x1f,0x61,0x57,0x40,0x7f,0x6d,0x01,0xd3,0xf9,0xf8,
    0x18,0x4c,0xc6,0xb7,0x19,0x59,0xb9,0xd8,0x4a,0x3c,0xa9,0x6d,0xab,0xa9,0x2d,0xc1,
    0xfc,0xcf,0xac,0xaa,0xa9,0x2d,0x9b,0x7a,0xaa,0x99,0xdf,0x71,0x9f,0x15,0xf1,0x3b,
    0xee,0x73,0x70,0xed,0xd3,0x2f,0xe8,0xd3,0x21,0xc6,0xe6,0x4b,0x70,0x3d,0x2f,0xf7,
    0x80,0xd9,0xfb,0xf1,0x57,0xc4,0xda,0x63,0xfc,0xbe,0xa6,0x0e,0x3d,0x53,0xf7,0xf2,
    0xff,0x89,0x7c,0xec,0x65,0x9c,0x7b,0xb1,0xd3,0xdf,0x03,0xff,0x02,0xae,0xa2,0x63,
    0x12,0x1c,0x16,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// layout(local_size_x = 64, local_size_y = 1, local_size_z = 1)in;
//
// layout(set = 0, binding = 0)buffer dest
// {
//     uint destData[];
// };
//
// layout(set = 0, binding = 1)buffer src
// {
//     uint srcData[];
// };
//
// layout(push_constant)uniform PushConstants
// {
//
//     uint outputCount;
//
//     uint componentCount;
//
//     uint srcOffset;
//     uint destOffset;
//
//     uint Ns;
//     uint Bs;
//     uint Ss;
//     uint Es;
//
//     uint Nd;
//     uint Bd;
//     uint Sd;
//     uint Ed;
//
//     bool isSrcHDR;
//     bool isSrcA2BGR10;
// } params;
//
// uint getSourceComponentOffset(uint vertex, uint component)
// {
//     return vertex * params . Ss + component * 4 + params . srcOffset;
// }
//
// uint getDestinationComponentOffset(uint vertex, uint component)
// {
//     return vertex * params . Sd + component * 4 + params . destOffset;
// }
//
// uint getShiftBits(uint offset, uint B)
// {
//
//     uint shift =(offset % 4)* 8;
//
//     return shift;
// }
//
//       float loadSourceComponent(uint cd)
// {
//
//     uint vertex = cd / params . Nd;
//     uint component = cd % params . Nd;
//
//     if(component >= params . Ns && component < 3)
//     {
//         return 0;
//     }
//
//     uint offset = getSourceComponentOffset(vertex, component);
//     uint block = srcData[offset / 4];
//
//     uint shiftBits;
//     uint valueBits;
//     uint valueMask;
//
//     if(params . isSrcHDR)
//     {
//         valueBits = component == 3 ? 2 : 10;
//         valueMask = component == 3 ? 0x03 : 0x3FF;
//         if(params . isSrcA2BGR10)
//         {
//             shiftBits = 10 * component;
//         }
//         else
//         {
//
//             shiftBits = component == 3 ? 0 :(valueBits *(2 - component)+ 2);
//         }
//     }
//     else
//     {
//         shiftBits = getShiftBits(offset, 4);
//         valueBits = 4 * 8;
//         valueMask = valueBits == 32 ? - 1 :(1 << valueBits)- 1;
//     }
//
//     uint valueAsUint;
//
//     if(component >= params . Ns && component == 3)
//     {
//
//         valueAsUint = floatBitsToUint(1.0);
//
//     }
//     else
//     {
//         valueAsUint =(block >> shiftBits)& valueMask;
//     }
//
//           float value = uintBitsToFloat(valueAsUint);
//
//     return value;
// }
//
//        float convertComponent(float srcValue)
// {
//
//     return srcValue;
// }
//
// uint makeDestinationComponent(uint cd, float value)
// {
//
//     uint valueAsUint = floatBitsToInt(value);
//
//     return valueAsUint;
// }
//
// void storeDestinationComponents(uint valueAsUint)
// {
//
//     destData[gl_GlobalInvocationID . x + params . destOffset / 4]= valueAsUint;
// }
//
// void main()
// {
//     if(gl_GlobalInvocationID . x >= params . outputCount)
//         return;
//
//     uint valueOut = 0;
//     for(uint i = 0;i < 1;++ i)
//     {
//         uint cd = gl_GlobalInvocationID . x * 1 + i;
//         if(cd >= params . componentCount)
//         {
//             break;
//         }
//
//               float srcValue = loadSourceComponent(cd);
//                float destValue = convertComponent(srcValue);
//         valueOut |= makeDestinationComponent(cd, destValue);
//     }
//
//     storeDestinationComponents(valueOut);
// }
