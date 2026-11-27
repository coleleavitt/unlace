/* Packet-construction and command-parsing shapes of a socket client, for the
 * netstruct stage tests: one raw IPv4/TCP header built in a stack buffer and
 * sent once, a sockaddr_in filled field by field for connect, a command buffer
 * read with recv and checked with strncmp, and a line buffer built with
 * snprintf and sent. Build recipe: build.sh beside this file. */
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

__attribute__((noinline)) unsigned short csum(unsigned short *p, int n)
{
    unsigned long sum = 0;
    while (n > 1) {
        sum += *p++;
        n -= 2;
    }
    if (n == 1)
        sum += *(unsigned char *)p;
    sum = (sum >> 16) + (sum & 0xffff);
    sum += sum >> 16;
    return (unsigned short)~sum;
}

__attribute__((noinline)) int send_syn(int fd, unsigned int saddr, unsigned int daddr,
                                       unsigned short sport, unsigned short dport)
{
    char packet[sizeof(struct iphdr) + sizeof(struct tcphdr)];
    struct iphdr *ip = (struct iphdr *)packet;
    struct tcphdr *tcp = (struct tcphdr *)(packet + sizeof(struct iphdr));
    struct sockaddr_in to;

    memset(packet, 0, sizeof packet);
    ip->ihl = 5;
    ip->version = 4;
    ip->tos = 0x10;
    ip->tot_len = htons(sizeof packet);
    ip->id = htons(0x1234);
    ip->frag_off = 0;
    ip->ttl = 64;
    ip->protocol = IPPROTO_TCP;
    ip->saddr = saddr;
    ip->daddr = daddr;
    tcp->source = htons(sport);
    tcp->dest = htons(dport);
    tcp->seq = htonl(1);
    tcp->doff = 5;
    tcp->syn = 1;
    tcp->window = htons(5840);
    ip->check = csum((unsigned short *)packet, sizeof(struct iphdr));

    memset(&to, 0, sizeof to);
    to.sin_family = AF_INET;
    to.sin_port = tcp->dest;
    to.sin_addr.s_addr = daddr;
    return (int)sendto(fd, packet, sizeof packet, 0, (struct sockaddr *)&to, sizeof to);
}

__attribute__((noinline)) int connect_to(const char *host, int port)
{
    struct sockaddr_in sa;
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0)
        return -1;
    sa.sin_family = AF_INET;
    sa.sin_port = htons(port);
    sa.sin_addr.s_addr = inet_addr(host);
    if (connect(fd, (struct sockaddr *)&sa, sizeof sa) < 0) {
        close(fd);
        return -1;
    }
    return fd;
}

__attribute__((noinline)) int read_command(int fd)
{
    char buf[1024];
    ssize_t n = recv(fd, buf, sizeof buf - 1, 0);
    if (n <= 0)
        return -1;
    buf[n] = 0;
    if (strncmp(buf, "SH ", 3) == 0)
        return 1;
    if (strncmp(buf, "PING", 4) == 0)
        return 2;
    return 0;
}

int main(int argc, char **argv)
{
    char dest[1024];
    int fd = connect_to(argc > 1 ? argv[1] : "127.0.0.1", 6667);
    if (fd < 0)
        return 1;
    snprintf(dest, sizeof dest, "NICK %s\r\n", argc > 2 ? argv[2] : "probe");
    send(fd, dest, strlen(dest), 0);
    strcpy(dest, "\n");
    send(fd, dest, strlen(dest), 0);
    int r = read_command(fd);
    if (r == 1)
        send_syn(fd, inet_addr("10.0.0.1"), inet_addr("10.0.0.2"), 1234, 80);
    close(fd);
    return r;
}
