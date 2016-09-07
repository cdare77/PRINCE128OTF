//
//  prince.h
//  PRINCE128OTF
//
//  Created by Dare, Christopher E. (Assoc) on 6/28/16.
//  Copyright © 2016 Dare, Christopher E. (Assoc). All rights reserved.
//

#ifndef prince_h
#define prince_h

#include <stdint.h>

/*****************************************************************************/
/* Function Declarations:                                                    */
/*****************************************************************************/
void cipher(uint8_t * const state, uint8_t const * const Key);
void decipher(uint8_t * const state, uint8_t * const Key);

#endif /* prince_h */
