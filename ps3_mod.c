//
//  ps3_mod.c
//
//  Created by Nick Martin on 10/7/13.
//  Copyright (c) 2013 Nick Martin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "hidapi.h"

int xtoi(char *hexstring){
	int	i = 0;
	
	if ((*hexstring == '0') && (*(hexstring+1) == 'x')){
        hexstring += 2;
    }
	while (*hexstring){
		char c = toupper(*hexstring++);
		if ((c < '0') || (c > 'F') || ((c > '9') && (c < 'A')))
			break;
		c -= '0';
		if (c > 9)
			c -= 7;
		i = (i << 4) + c;
	}
	return i;
}

hid_device * open_ps_hid(){
    return hid_open(1356, 616, NULL);
}

unsigned char* send_feature_report(hid_device *handle){
    unsigned char *buf = (unsigned char *) malloc(17 * sizeof(unsigned char));
    buf[0] = 0xf2;
    int res = hid_send_feature_report(handle, buf, 17);
    if(res == -1){
        return 0;
    }else{
        
    }
    return buf;
}









