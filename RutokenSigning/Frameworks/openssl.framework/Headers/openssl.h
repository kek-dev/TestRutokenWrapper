#include <openssl/configuration.h>
#undef OPENSSL_NO_DEPRECATED
#define OPENSSL_SUPPRESS_DEPRECATED

#include <openssl/x509.h>
#include <openssl/cms.h>
