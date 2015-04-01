/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MSG_H_RPCGEN
#define _MSG_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define MESSAGEPROG 0x20000002
#define PRINTMESSAGEVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define PRINTMSG 1
extern  int * printmsg_1(char *, CLIENT *);
extern  int * printmsg_1_svc(char *, struct svc_req *);
#define SQUAREIT 2
extern  int * squareit_1(int , CLIENT *);
extern  int * squareit_1_svc(int , struct svc_req *);
extern int messageprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define PRINTMSG 1
extern  int * printmsg_1();
extern  int * printmsg_1_svc();
#define SQUAREIT 2
extern  int * squareit_1();
extern  int * squareit_1_svc();
extern int messageprog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MSG_H_RPCGEN */
