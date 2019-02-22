#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


int main() {
    char buf[10];
    int fd = open("/private/var/root/halt.sh", O_RDONLY);
    /*int status = read(fd, buf, 10);*/
    int status = 0;
    printf("%d, %d, %s\n", status, errno, strerror(errno));
}
