#ifndef UDP_H_
#define UDP_H_

#include <stdint.h>
#include "skbuff.h"

struct udphdr {
    uint16_t sport;
    uint16_t dport;
    uint16_t len;
    uint16_t csum;
}__attribute__((packed));

void udp_in(struct sk_buff *skb);

#endif
