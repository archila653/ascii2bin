#include<stdio.h> 
#include<unistd.h>
int main(int argc, char * argv[], char ** envp) {

int offset = 0x30;
int number = 0;
char ascii_value;
int digit;
int retval; 
	

 retval = read(0, &ascii_value, 1);
 
	
	while ((retval == 1)&&(ascii_value!='\n')) {
       	digit = ascii_value - offset;
	if((digit ==1)||(digit==0))
        number = (number << 1) + digit;  
        retval = read(0, &ascii_value, 1);
       

	 }
    printf("%u\n", number);
    return 0;
	 
  }
