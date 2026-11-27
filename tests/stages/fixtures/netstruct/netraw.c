/* Raw-socket senders for the pkthdr stage test: a UDP datagram whose IPv4
 * header the program supplies (an IPPROTO_RAW socket) with a header length it
 * reads at run time, so no constant first byte marks it, and an ICMP echo
 * request on an IPPROTO_ICMP raw socket, whose IP header the kernel builds.
 * Build recipe: build.sh beside this file. */
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/ip_icmp.h>
#include <netinet/udp.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

__attribute__((noinline)) int send_udp(unsigned int daddr, unsigned short dport, unsigned int ihl)
{
    char packet[sizeof(struct iphdr) + sizeof(struct udphdr)];
    struct iphdr *ip = (struct iphdr *)packet;
    struct udphdr *udp = (struct udphdr *)(packet + sizeof(struct iphdr));
    struct sockaddr_in to;
    int fd = socket(AF_INET, SOCK_RAW, IPPROTO_RAW);
    if (fd < 0)
        return -1;
    memset(packet, 0, sizeof packet);
    ip->ihl = ihl;
    ip->version = 4;
    ip->tot_len = htons(sizeof packet);
    ip->ttl = 64;
    ip->protocol = IPPROTO_UDP;
    ip->daddr = daddr;
    udp->source = htons(4000);
    udp->dest = htons(dport);
    udp->len = htons(sizeof(struct udphdr));
    memset(&to, 0, sizeof to);
    to.sin_family = AF_INET;
    to.sin_addr.s_addr = daddr;
    int r = (int)sendto(fd, packet, sizeof packet, 0, (struct sockaddr *)&to, sizeof to);
    close(fd);
    return r;
}

__attribute__((noinline)) int send_ping(unsigned int daddr, unsigned short id)
{
    struct icmphdr icmp;
    struct sockaddr_in to;
    int fd = socket(AF_INET, SOCK_RAW, IPPROTO_ICMP);
    if (fd < 0)
        return -1;
    memset(&icmp, 0, sizeof icmp);
    icmp.type = ICMP_ECHO;
    icmp.code = 0;
    icmp.un.echo.id = htons(id);
    icmp.un.echo.sequence = htons(1);
    memset(&to, 0, sizeof to);
    to.sin_family = AF_INET;
    to.sin_addr.s_addr = daddr;
    int r = (int)sendto(fd, &icmp, sizeof icmp, 0, (struct sockaddr *)&to, sizeof to);
    close(fd);
    return r;
}

int main(int argc, char **argv)
{
    unsigned int daddr = inet_addr(argc > 1 ? argv[1] : "127.0.0.1");
    int r = send_udp(daddr, 53, argc > 2 ? (unsigned int)atoi(argv[2]) : 5);
    return r < 0 ? 1 : send_ping(daddr, (unsigned short)argc) < 0;
}
