//
//  Product.h
//  FeelSecure
//
//  Created by Makara Khloth on 6/8/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
 Product Id			: 4701
 Protocol Language	: 1
 Protocol Version	: 9
 Product Version	: x.x.x
 Product Name		: Panic+
 Product Description: Panic+ Polymorphic Client
 Language			: English
 Hash Tail			: UNxS3LEICEUZ06P8n7PZEVUHJjSVuI4E
 */

unsigned char kProductInfoCipher[] = {0x91,0x22,0x3d,0x63,0x4,0xf,0x9,0x41,0x82,0x5,0xfa,0x8e,0xb4,0xa9,0xd3,0xa6,0x7c,
                                        0xb6,0xf1,0x3e,0x48,0x40,0xcb,0xe3,0x3,0x92,0x5b,0x74,0x45,0x25,0xa1,0xba,0xee,
                                        0xc,0xbb,0x7f,0x74,0x69,0x8,0x2d,0x50,0xb3,0xa5,0xc7,0x3,0x1d,0xb,0x96,0xa9,0x93,
                                        0x6c,0x70,0xc8,0x52,0x9d,0xda,0xeb,0xf8,0x1f,0x3a,0xb0,0x93,0x60,0xdf,0x4a,0x6f,
                                        0xeb,0x6d,0x80,0xea,0x32,0x94,0xb9,0x57,0x9a,0x3d,0x49,0x29,0xc8,0x5a,0xd5,0xf2,
                                        0x2f,0xed,0xdd,0x9f,0x35,0x3c,0xf5,0x35,0x6b,0xb7,0x4e,0x36,0x8f,0xac,0xa8,0xb8,
                                        0xcc,0x75,0x0,0x49,0x25,0x2f,0x76,0x2c,0x88,0x6,0xdb,0x79,0x76,0xc1};

//=========================================================================================================================
// Server url

// [Test] http://test-csmobile.mobilefonex.com
//unsigned char kServerUrl[] = {0x4a,0x35,0x74,0x8c,0x7f,0xa5,0xce,0xd1,0xb5,0x8e,0xe4,0x63,0xcf,0x3f,0x47,0x8e,0xc4,
//								0xa4,0xe8,0x5b,0x52,0x80,0xf1,0x23,0x76,0xa8,0x30,0x6e,0x52,0xbb,0x2b,0x8f,0xfe,0x67,
//								0xdf,0xfd,0x8c,0x29,0xf8,0xd,0xde,0x76,0xe9,0xed,0x47,0x47,0x28,0xc4};

// [Production] http://csmobile.mobilefonex.com
unsigned char kServerUrl[] = {0x83,0xe7,0xc1,0x83,0xe9,0xa2,0xc8,0x58,0x86,0xb9,0x9c,0x6a,0x45,0x69,0x5d,0x8c,
								0x5a,0x70,0x4b,0xbc,0x8c,0xe4,0x6f,0x13,0xa5,0x39,0x2e,0x76,0xab,0x7b,0xc5,0x7e,0x52,
								0xd0,0xa,0x4,0x8a,0x15,0xd1,0xff,0xc3,0xfe,0x91,0x6d,0x3a,0x43,0xd4,0x4a};

// [Sandbox] http://sbx-mobile.flexispy.com
//unsigned char kServerUrl[] = {0xfa,0x62,0xb5,0xce,0xed,0x8e,0x1b,0xf7,0x11,0x1e,0xd9,0x27,0xd,0x7d,0x80,0xc0,0x45,
//								0xc5,0x1b,0x6c,0x6d,0x62,0xec,0x1c,0xd4,0x73,0x44,0x4a,0x30,0x67,0xe1,0xb2,0xb3,0x2a,
//								0x9b,0xcb,0x22,0x83,0x7,0xfc,0x28,0x94,0x98,0xdc,0xbd,0x2a,0x20,0xb8};
