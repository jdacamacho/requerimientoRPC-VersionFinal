/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "interface3.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

bool_t *
admregistrarproductoofertar_3(nodo_producto *argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, admRegistrarProductoOfertar,
		(xdrproc_t) xdr_nodo_producto, (caddr_t) argp,
		(xdrproc_t) xdr_bool, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

listaProductos *
admlistarproductosofertar_3(void *argp, CLIENT *clnt)
{
	static listaProductos clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, admListarProductosOfertar,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_listaProductos, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
abrirsubasta_3(int *argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, abrirSubasta,
		(xdrproc_t) xdr_int, (caddr_t) argp,
		(xdrproc_t) xdr_bool, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

oferta *
cerrarsubasta_3(void *argp, CLIENT *clnt)
{
	static oferta clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, cerrarSubasta,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_oferta, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

listaProductos *
clntlistarproductos_3(void *argp, CLIENT *clnt)
{
	static listaProductos clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, clntListarProductos,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_listaProductos, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

nodo_producto *
consultarproducto_3(char **argp, CLIENT *clnt)
{
	static nodo_producto clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, consultarProducto,
		(xdrproc_t) xdr_wrapstring, (caddr_t) argp,
		(xdrproc_t) xdr_nodo_producto, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

nodo_producto *
consultardatosproductoactualsubastando_3(void *argp, CLIENT *clnt)
{
	static nodo_producto clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, consultarDatosProductoActualSubastando,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_nodo_producto, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
clntofreceroferta_3(oferta *argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, clntOfrecerOferta,
		(xdrproc_t) xdr_oferta, (caddr_t) argp,
		(xdrproc_t) xdr_bool, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
