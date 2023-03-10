#ifndef ANONYMOUS_TOKENS_CPP_CRYPTO_CONSTANTS_H_
#define ANONYMOUS_TOKENS_CPP_CRYPTO_CONSTANTS_H_

#include <cstdint>

#include "absl/strings/string_view.h"


namespace anonymous_tokens {

// Returned integer on successful execution of BoringSSL methods
constexpr int kBsslSuccess = 1;

// RSA modulus size, 4096 bits
//
// Recommended size.
constexpr int kRsaModulusSizeInBits4096 = 4096;

// RSA modulus size, 512 bytes
constexpr int kRsaModulusSizeInBytes512 = 512;

// RSA modulus size, 2048 bits
//
// Recommended size for RSA Blind Signatures without Public Metadata.
//
// https://www.ietf.org/archive/id/draft-ietf-privacypass-protocol-08.html#name-token-type-blind-rsa-2048-b.
constexpr int kRsaModulusSizeInBits2048 = 2048;

// RSA modulus size, 256 bytes
constexpr int kRsaModulusSizeInBytes256 = 256;

// Salt length, 48 bytes
//
// Recommended size. The convention is to use hLen, the length of the output of
// the hash function in bytes. A salt length of zero will result in a
// deterministic signature value.
//
// https://datatracker.ietf.org/doc/draft-irtf-cfrg-rsa-blind-signatures/
constexpr int kSaltLengthInBytes48 = 48;

// Length of message mask, 32 bytes.
//
// https://datatracker.ietf.org/doc/draft-irtf-cfrg-rsa-blind-signatures/
constexpr int kRsaMessageMaskSizeInBytes32 = 32;

// Info used in HKDF for Public Metadata Hash.
constexpr absl::string_view kHkdfPublicMetadataInfo = "PBRSA";

constexpr int kHkdfPublicMetadataInfoSizeInBytes = 5;

}  // namespace anonymous_tokens


#endif  // ANONYMOUS_TOKENS_CPP_CRYPTO_CONSTANTS_H_