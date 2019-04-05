/* Auto-generated by genfincode_stat.sh - DO NOT EDIT! */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "rtpp_types.h"
#include "rtpp_debug.h"
#include "rtpp_netaddr.h"
static void rtpp_netaddr_cmp_fin(void *pub) {
    fprintf(stderr, "Method %p->cmp (rtpp_netaddr_cmp) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_netaddr_cmphost_fin(void *pub) {
    fprintf(stderr, "Method %p->cmphost (rtpp_netaddr_cmphost) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_netaddr_copy_fin(void *pub) {
    fprintf(stderr, "Method %p->copy (rtpp_netaddr_copy) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_netaddr_get_fin(void *pub) {
    fprintf(stderr, "Method %p->get (rtpp_netaddr_get) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_netaddr_isaddrseq_fin(void *pub) {
    fprintf(stderr, "Method %p->isaddrseq (rtpp_netaddr_isaddrseq) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_netaddr_isempty_fin(void *pub) {
    fprintf(stderr, "Method %p->isempty (rtpp_netaddr_isempty) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_netaddr_set_fin(void *pub) {
    fprintf(stderr, "Method %p->set (rtpp_netaddr_set) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_netaddr_sip_print_fin(void *pub) {
    fprintf(stderr, "Method %p->sip_print (rtpp_netaddr_sip_print) is invoked after destruction\x0a", pub);
    abort();
}
static const struct rtpp_netaddr_smethods rtpp_netaddr_smethods_fin = {
    .cmp = (rtpp_netaddr_cmp_t)&rtpp_netaddr_cmp_fin,
    .cmphost = (rtpp_netaddr_cmphost_t)&rtpp_netaddr_cmphost_fin,
    .copy = (rtpp_netaddr_copy_t)&rtpp_netaddr_copy_fin,
    .get = (rtpp_netaddr_get_t)&rtpp_netaddr_get_fin,
    .isaddrseq = (rtpp_netaddr_isaddrseq_t)&rtpp_netaddr_isaddrseq_fin,
    .isempty = (rtpp_netaddr_isempty_t)&rtpp_netaddr_isempty_fin,
    .set = (rtpp_netaddr_set_t)&rtpp_netaddr_set_fin,
    .sip_print = (rtpp_netaddr_sip_print_t)&rtpp_netaddr_sip_print_fin,
};
void rtpp_netaddr_fin(struct rtpp_netaddr *pub) {
    RTPP_DBG_ASSERT(pub->smethods != &rtpp_netaddr_smethods_fin &&
      pub->smethods != NULL);
    pub->smethods = &rtpp_netaddr_smethods_fin;
}