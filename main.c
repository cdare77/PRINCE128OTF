//
//  main.c
//  PRINCE128OTF
//
//  Created by Dare, Christopher E. (Assoc) on 6/28/16.
//  Copyright © 2016 Dare, Christopher E. (Assoc). All rights reserved.
//

#include "prince.h"
#include <stdio.h>

int main()
{
    uint8_t in[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    uint8_t key[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    
    
    printf("0x");
    for (int8_t i = 0; i < 8; i++)
    {
        printf("%02x", ((in[i] << 4) | (in[i] >> 4)) & 0xFF);
    }
    printf("\n");
    
    cipher(in, key);
    printf("0x");
    for (int8_t i = 0; i < 8; i++)
    {
        printf("%02x", ((in[i] << 4) | (in[i] >> 4)) & 0xFF);
    }
    printf("\n");
    
    decipher(in, key);
    
    printf("0x");
    for (int8_t i = 0; i < 8; i++)
    {
        printf("%02x", ((in[i] << 4) | (in[i] >> 4)) & 0xFF);
    }
    printf("\n");
    
    return 0;
} // End main()
