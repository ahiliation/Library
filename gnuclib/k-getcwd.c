#include <unistd.h>
#include <stdio.h>

void main()
{
  char buf[256];
  getcwd(buf, sizeof(buf));

 printf("%s\n",buf);

}

/* https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.3.0/com.ibm.zos.v2r3.bpxbd00/rtgtc.htm */
/* https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.3.0/com.ibm.zos.v2r3.cbclx01/szofe.htm */
