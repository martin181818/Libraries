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

#import "TarsObjectV2.h"

@interface MttUserBase : TarsObjectV2

@property (nonatomic, retain, JV2_PROP_GS_V2(sIMEI,setSIMEI:)) NSString* JV2_PROP_NM(r,0,sIMEI);
@property (nonatomic, retain, JV2_PROP_GS_V2(sGUID,setSGUID:)) NSData* JV2_PROP_NM(r,1,sGUID);
@property (nonatomic, retain, JV2_PROP_GS_V2(sQUA,setSQUA:)) NSString* JV2_PROP_NM(r,2,sQUA);
@property (nonatomic, retain, JV2_PROP_GS_V2(sLC,setSLC:)) NSString* JV2_PROP_NM(r,3,sLC);
@property (nonatomic, retain, JV2_PROP_GS_V2(sCellphone,setSCellphone:)) NSString* JV2_PROP_NM(r,4,sCellphone);
@property (nonatomic, retain, JV2_PROP_GS_V2(sUin,setSUin:)) NSString* JV2_PROP_NM(r,5,sUin);
@property (nonatomic, retain, JV2_PROP_GS_V2(sCellid,setSCellid:)) NSString* JV2_PROP_NM(o,6,sCellid);
@property (nonatomic, assign, JV2_PROP_GS_V2(iServerVer,setIServerVer:)) TarsInt32 JV2_PROP_NM(o,7,iServerVer);
@property (nonatomic, assign, JV2_PROP_GS_V2(bSave,setBSave:)) TarsBool JV2_PROP_NM(o,8,bSave);
@property (nonatomic, retain, JV2_PROP_GS_V2(sChannel,setSChannel:)) NSString* JV2_PROP_NM(o,9,sChannel);
@property (nonatomic, retain, JV2_PROP_GS_V2(sLAC,setSLAC:)) NSString* JV2_PROP_NM(o,10,sLAC);
@property (nonatomic, retain, JV2_PROP_GS_V2(sUA,setSUA:)) NSString* JV2_PROP_NM(o,11,sUA);
@property (nonatomic, assign, JV2_PROP_GS_V2(iLanguageType,setILanguageType:)) TarsInt32 JV2_PROP_NM(o,12,iLanguageType);
@property (nonatomic, assign, JV2_PROP_GS_V2(iMCC,setIMCC:)) TarsInt16 JV2_PROP_NM(o,13,iMCC);
@property (nonatomic, assign, JV2_PROP_GS_V2(iMNC,setIMNC:)) TarsInt16 JV2_PROP_NM(o,14,iMNC);
@property (nonatomic, retain, JV2_PROP_GS_V2(sAPN,setSAPN:)) NSString* JV2_PROP_NM(o,15,sAPN);
@property (nonatomic, retain, JV2_PROP_GS_V2(sCellNumber,setSCellNumber:)) NSString* JV2_PROP_NM(o,16,sCellNumber);
@property (nonatomic, retain, JV2_PROP_GS_V2(sMac,setSMac:)) NSData* JV2_PROP_NM(o,17,sMac);

@end
