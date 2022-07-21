//
//  rtVcrPairing.h
//  pcsc-ios
//
//  Created by Андрей Трифонов on 18.10.2021.
//  Copyright © 2021 Aktiv Co. All rights reserved.
//

#ifndef rtVcrPairing_h
#define rtVcrPairing_h

#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * Function generates a BASE64-string object that contains the specified data of QR-code image in PNG format.
 *
 * @code
 * if let strBase64 = generatePairingQR(),
 *    let data = Data(base64Encoded: strBase64),
 *    let image = UIImage(data: data) {
 *        // ... work with image
 *    }
 * @endcode
 *
 * @return A BASE64-string object containing the QR-code data or nil if there was a problem generating the QR-code.
 */
NSString* generatePairingQR(void);

/**
 * Function returns all paired VCR's.
 *
 * @code
 * let vcrCerts: [[String: Any]] = listPairedVCR()
 * for item in vcrCerts {
 *     if let name = item["name"] as? String
 *        let cert = item["cert"] as? String,
 *        let fingerprint = item["fingerprint"] as? Data {
 *           // ... work with VCR
 *        }
 * }
 * @endcode
 *
 * @return Array @type [[String: Any]] of paired VCR's or empty array.
 * 
 * @remark Array's item has keys:
 *
 * @a name - VCR's name,
 *
 * @a cert - VCR's certificate in BASE64-string format,
 *
 * @a fingerprint - SHA1 digest of VCR's certificate,
 */
NSArray* listPairedVCR(void);

/**
 * Function unpairs VCR and removes all corresponding data.
 *
 * @code
 * let vcrCerts: [[String: Any]] = listPairedVCR()
 * for item in vcrCerts {
 *     if let name = item["name"] as? String
 *        let fingerprint = item["fingerprint"] as? Data {
 *           unpairVCR(fingerprint)
 *        }
 * }
 * @endcode
 *
 * @param vcrId - fingerprint, value obtained from listPairedVCR call.
 * 
 * @return This function returns true if VCR was unpaired or false if it wasn't.
 */
BOOL unpairVCR(NSData* vcrId);

#ifdef __cplusplus
}
#endif

#endif /* rtVcrPairing_h */


