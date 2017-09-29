#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
  FILE *fp;
  int i, type;
  unsigned int address, instr, retVal;
  unsigned int masked_addr;
  // open trace file for reading

  fp = fopen("sampleTrace.txt", "r");
 

  // read first 100 lines of trace file; 
  // address holds virtual address in unsigned int format;
  // N.B. - your program must read all 1,000,000 lines but
  //        you might want to test it on the first 100 lines
  //        or so before running it on the entire trace file!


while((retVal = fscanf(fp,"%x",&i))!=EOF)
{
    // read 1 line of trace file
    // output virtual address in hex 

    printf("retVal=%x\n", i);
  
}
  fclose(fp);


}
