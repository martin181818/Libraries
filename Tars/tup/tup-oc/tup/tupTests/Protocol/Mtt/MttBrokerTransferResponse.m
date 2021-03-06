/**
 * Tencent is pleased to support the open source community by making Tars available.
 *
 * Copyright (C) 2016THL A29 Limited, a Tencent company. All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use this file except 
 * in compliance with the License. You may obtain a copy of the License at
 *
 * https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software distributed 
 * under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR 
 * CONDITIONS OF ANY KIND, either express or implied. See the License for the 
 * specific language governing permissions and limitations under the License.
 */

// **********************************************************************
// This file was generated by a TARS parser!
// TARS version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/tars/upload/renjunyi/MTT.tars'
// **********************************************************************

#import "MttBrokerTransferResponse.h"

@implementation MttBrokerTransferResponse

@synthesize JV2_PROP_NM(r,0,sSession);
@synthesize JV2_PROP_NM(r,1,wTabId);
@synthesize JV2_PROP_NM(r,2,sPageEncodeName);
@synthesize JV2_PROP_NM(r,3,cDirectWap);
@synthesize JV2_PROP_NM(r,4,sDirectWapUrl);
@synthesize JV2_PROP_NM(r,5,iContentTimeStamp);
@synthesize JV2_PROP_NM(r,6,sFragKey);
@synthesize JV2_PROP_NM(r,7,iRspContentLen);
@synthesize JV2_PROP_NM(o,8,sUserSession);
@synthesize JV2_PROP_NM(o,9,stPushResp);
@synthesize JV2_PROP_NM(o,10,stSecurityResp);
@synthesize JV2_PROP_NM(o,11,cShare);

+ (void)initialize
{
    if (self == [MttBrokerTransferResponse class]) {
        [MttBrokerPushResponse initialize];
        [MttBrokerSecurityResponse initialize];
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(sSession) = DefaultTarsString;
        JV2_PROP(sPageEncodeName) = DefaultTarsString;
        JV2_PROP(sDirectWapUrl) = DefaultTarsString;
        JV2_PROP(sFragKey) = DefaultTarsString;
        JV2_PROP(sUserSession) = DefaultTarsString;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(sSession) = nil;
    JV2_PROP(sPageEncodeName) = nil;
    JV2_PROP(sDirectWapUrl) = nil;
    JV2_PROP(sFragKey) = nil;
    JV2_PROP(sUserSession) = nil;
    JV2_PROP(stPushResp) = nil;
    JV2_PROP(stSecurityResp) = nil;
    [super dealloc];
}

+ (NSString*)tarsType
{
    return @"MTT.BrokerTransferResponse";
}

@end
