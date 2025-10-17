
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "misc.h"

int main(int argc, char* argv[])
{
    int val = lopt(argv, "-a", 1);
    char* str = lopts(argv, "-s", "toto");
     
    printf("Value given after -a = %d\n", val);
    printf("Value given after -s = %s\n", str);
   
    return 0;
}
