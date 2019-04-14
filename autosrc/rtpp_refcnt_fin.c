/* Auto-generated by genfincode_stat.sh - DO NOT EDIT! */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "rtpp_types.h"
#include "rtpp_debug.h"
#include "rtpp_refcnt.h"
#include "rtpp_refcnt_fin.h"
static void refcnt_attach_fin(void *pub) {
    fprintf(stderr, "Method rtpp_refcnt@%p::attach (refcnt_attach) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void refcnt_decref_fin(void *pub) {
    fprintf(stderr, "Method rtpp_refcnt@%p::decref (refcnt_decref) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void refcnt_getdata_fin(void *pub) {
    fprintf(stderr, "Method rtpp_refcnt@%p::getdata (refcnt_getdata) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void refcnt_incref_fin(void *pub) {
    fprintf(stderr, "Method rtpp_refcnt@%p::incref (refcnt_incref) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void refcnt_reg_pd_fin(void *pub) {
    fprintf(stderr, "Method rtpp_refcnt@%p::reg_pd (refcnt_reg_pd) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void refcnt_traceen_fin(void *pub) {
    fprintf(stderr, "Method rtpp_refcnt@%p::traceen (refcnt_traceen) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static const struct rtpp_refcnt_smethods rtpp_refcnt_smethods_fin = {
    .attach = (refcnt_attach_t)&refcnt_attach_fin,
    .decref = (refcnt_decref_t)&refcnt_decref_fin,
    .getdata = (refcnt_getdata_t)&refcnt_getdata_fin,
    .incref = (refcnt_incref_t)&refcnt_incref_fin,
    .reg_pd = (refcnt_reg_pd_t)&refcnt_reg_pd_fin,
    .traceen = (refcnt_traceen_t)&refcnt_traceen_fin,
};
void rtpp_refcnt_fin(struct rtpp_refcnt *pub) {
    RTPP_DBG_ASSERT(pub->smethods->attach != (refcnt_attach_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods->decref != (refcnt_decref_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods->getdata != (refcnt_getdata_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods->incref != (refcnt_incref_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods->reg_pd != (refcnt_reg_pd_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods->traceen != (refcnt_traceen_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods != &rtpp_refcnt_smethods_fin &&
      pub->smethods != NULL);
    pub->smethods = &rtpp_refcnt_smethods_fin;
}
#if defined(RTPP_FINTEST)
#include <assert.h>
#include <stddef.h>
#include "rtpp_mallocs.h"
#include "rtpp_refcnt.h"
#include "rtpp_linker_set.h"
#define CALL_TFIN(pub, fn) ((void (*)(typeof(pub)))((pub)->smethods->fn))(pub)

void
rtpp_refcnt_fintest()
{
    int naborts_s;

    struct {
        struct rtpp_refcnt pub;
    } *tp;

    naborts_s = _naborts;
    tp = rtpp_rzmalloc(sizeof(*tp), offsetof(typeof(*tp), pub.rcnt));
    assert(tp != NULL);
    assert(tp->pub.rcnt != NULL);
    static const struct rtpp_refcnt_smethods dummy = {
        .attach = (refcnt_attach_t)((void *)0x1),
        .decref = (refcnt_decref_t)((void *)0x1),
        .getdata = (refcnt_getdata_t)((void *)0x1),
        .incref = (refcnt_incref_t)((void *)0x1),
        .reg_pd = (refcnt_reg_pd_t)((void *)0x1),
        .traceen = (refcnt_traceen_t)((void *)0x1),
    };
    tp->pub.smethods = &dummy;
    CALL_SMETHOD(tp->pub.rcnt, attach, (rtpp_refcnt_dtor_t)&rtpp_refcnt_fin,
      &tp->pub);
    CALL_SMETHOD(tp->pub.rcnt, decref);
    CALL_TFIN(&tp->pub, attach);
    CALL_TFIN(&tp->pub, decref);
    CALL_TFIN(&tp->pub, getdata);
    CALL_TFIN(&tp->pub, incref);
    CALL_TFIN(&tp->pub, reg_pd);
    CALL_TFIN(&tp->pub, traceen);
    assert((_naborts - naborts_s) == 6);
}
const static void *_rtpp_refcnt_ftp = (void *)&rtpp_refcnt_fintest;
DATA_SET(rtpp_fintests, _rtpp_refcnt_ftp);
#endif /* RTPP_FINTEST */
