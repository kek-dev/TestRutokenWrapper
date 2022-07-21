//
//  rtnfc.h
//  pcsc-ios
//
//  Created by Андрей Трифонов on 13.04.2020.
//  Copyright © 2020 Aktiv Co. All rights reserved.
//

#ifndef rtnfc_h
#define rtnfc_h

#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef void (^ ErrorCallback)(NSError*);

void startNFC(ErrorCallback onError) DEPRECATED_MSG_ATTRIBUTE("This function will be removed, please use SCardControl API.");
void stopNFC(void) DEPRECATED_MSG_ATTRIBUTE("This function will be removed, please use SCardControl API.");

#ifdef __cplusplus
}
#endif

#endif /* rtnfc_h */
