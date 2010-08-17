/*
  Copyright (c) 2010 Gluster, Inc. <http://www.gluster.com>
  This file is part of GlusterFS.

  GlusterFS is free software; you can redistribute it and/or modify
  it under the terms of the GNU Affero General Public License as published
  by the Free Software Foundation; either version 3 of the License,
  or (at your option) any later version.

  GlusterFS is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Affero General Public License for more details.

  You should have received a copy of the GNU Affero General Public License
  along with this program.  If not, see
  <http://www.gnu.org/licenses/>.
*/


/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PORTMAP_H_RPCGEN
#define _PORTMAP_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct pmap_port_by_brick_req {
	char *brick;
};
typedef struct pmap_port_by_brick_req pmap_port_by_brick_req;

struct pmap_port_by_brick_rsp {
	int op_ret;
	int op_errno;
	int status;
	int port;
};
typedef struct pmap_port_by_brick_rsp pmap_port_by_brick_rsp;

struct pmap_brick_by_port_req {
	int port;
};
typedef struct pmap_brick_by_port_req pmap_brick_by_port_req;

struct pmap_brick_by_port_rsp {
	int op_ret;
	int op_errno;
	int status;
	char *brick;
};
typedef struct pmap_brick_by_port_rsp pmap_brick_by_port_rsp;

struct pmap_signup_req {
	char *brick;
	int port;
};
typedef struct pmap_signup_req pmap_signup_req;

struct pmap_signup_rsp {
	int op_ret;
	int op_errno;
};
typedef struct pmap_signup_rsp pmap_signup_rsp;

struct pmap_signin_req {
	char *brick;
	int port;
};
typedef struct pmap_signin_req pmap_signin_req;

struct pmap_signin_rsp {
	int op_ret;
	int op_errno;
};
typedef struct pmap_signin_rsp pmap_signin_rsp;

struct pmap_signout_req {
	char *brick;
	int port;
};
typedef struct pmap_signout_req pmap_signout_req;

struct pmap_signout_rsp {
	int op_ret;
	int op_errno;
};
typedef struct pmap_signout_rsp pmap_signout_rsp;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_pmap_port_by_brick_req (XDR *, pmap_port_by_brick_req*);
extern  bool_t xdr_pmap_port_by_brick_rsp (XDR *, pmap_port_by_brick_rsp*);
extern  bool_t xdr_pmap_brick_by_port_req (XDR *, pmap_brick_by_port_req*);
extern  bool_t xdr_pmap_brick_by_port_rsp (XDR *, pmap_brick_by_port_rsp*);
extern  bool_t xdr_pmap_signup_req (XDR *, pmap_signup_req*);
extern  bool_t xdr_pmap_signup_rsp (XDR *, pmap_signup_rsp*);
extern  bool_t xdr_pmap_signin_req (XDR *, pmap_signin_req*);
extern  bool_t xdr_pmap_signin_rsp (XDR *, pmap_signin_rsp*);
extern  bool_t xdr_pmap_signout_req (XDR *, pmap_signout_req*);
extern  bool_t xdr_pmap_signout_rsp (XDR *, pmap_signout_rsp*);

#else /* K&R C */
extern bool_t xdr_pmap_port_by_brick_req ();
extern bool_t xdr_pmap_port_by_brick_rsp ();
extern bool_t xdr_pmap_brick_by_port_req ();
extern bool_t xdr_pmap_brick_by_port_rsp ();
extern bool_t xdr_pmap_signup_req ();
extern bool_t xdr_pmap_signup_rsp ();
extern bool_t xdr_pmap_signin_req ();
extern bool_t xdr_pmap_signin_rsp ();
extern bool_t xdr_pmap_signout_req ();
extern bool_t xdr_pmap_signout_rsp ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PORTMAP_H_RPCGEN */
