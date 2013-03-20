//
//  main.c
//  Addresses
//
//  Created by Angelos Tzelepis on 3/13/13.
//  Copyright (c) 2013 Angelos Tzelepis. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 17;
    int *addressOfI = &i;
    printf("i is %d\n", i);
    printf("i stores its value at %p\n", addressOfI);
    *addressOfI = 89;
    printf("Now i is %d\n", i);
    printf("The int i takes up %zu bytes\n", sizeof(i));
    printf("The pointer for i takes up %zu bytes\n\n", sizeof(addressOfI));
    
    float k = 20.6543823747839847698475869345624;
    float *addressOfK = &k;
    printf("k is %f\n", k);
    printf("k stores its value at %p\n", addressOfK);
    *addressOfK = 40.48883947560984576094875604641;
    printf("Now k is %f\n", k);
    printf("The float k takes up %zu bytes\n", sizeof(k));
    printf("The pointer for k takes up %zu bytes\n\n", sizeof(addressOfK));

   
}

