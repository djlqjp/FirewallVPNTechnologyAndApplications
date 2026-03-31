#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main()
{
    struct hostent *host = gethostbyname("www.yxnu.edu.cn");
    if (!host)
    {
        herror("查询失败");
        return 1;
    }
    printf("IP: %s\n", inet_ntoa(*(struct in_addr *)host->h_addr));
    return 0;
}
