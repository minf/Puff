
#include "puff.h"

main() {
  unsigned char data[] = { 
    0xcf, 0x2b, 0xc8, 0x57, 0x2e, 0x2c, 0x48, 0x51, 
    0x2d, 0x49, 0x48, 0x52, 0xcf, 0xca, 0x00, 0x04, 
    0x09, 0x26, 0x0c, 0x05 
  };  

  unsigned long data_len = sizeof(data); 

  unsigned char msg[32];
  unsigned long msg_len = 32; 

  if(puff(msg, &msg_len, data, &data_len)) {
    printf("err");
  } else {
    printf("ok");
  }   

  puts(msg);
}

