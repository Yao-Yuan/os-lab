#include "kernel/types.h"
#include "user/user.h"


int
main(int argc, char *argv[])
{
    char error_msg[] = "Error: no parameter passed in.\n";
    if(argc < 2)
        write(1, error_msg, strlen(error_msg));
    else {
        sleep(atoi(*(argv+1)));
    }
    exit(0);
}