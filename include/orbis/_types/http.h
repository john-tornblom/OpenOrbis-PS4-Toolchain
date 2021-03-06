#pragma once 

#define SSL_POOLSIZE 	(128 * 1024U)
#define LIBHTTP_POOLSIZE 	(128 * 1024)

typedef enum{
	ORBIS_METHOD_GET,
	ORBIS_METHOD_POST,
	ORBIS_METHOD_HEAD,
	ORBIS_METHOD_OPTIONS,
	ORBIS_METHOD_PUT,
	ORBIS_METHOD_DELETE,
	ORBIS_METHOD_TRACE,
	ORBIS_CONNECT
} OrbisMethods;