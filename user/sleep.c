#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, const char *argv[])
{
    // int i;

//   for(i = 1; i < argc; i++){
//     write(1, argv[i], strlen(argv[i]));
//     if(i + 1 < argc){
//       write(1, " ", 1);
//     } else {
//       write(1, "\n", 1);
//     }
//   }

    if(2 > argc){
        // write(1, " ", 1);
        fprintf(2, "usage: slEEp <time>\n");
        exit(1);
    }
    sleep(atoi(argv[1]));
    exit(0);
}


