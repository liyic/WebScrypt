#ifndef _SYSENDIAN_H_
#define _SYSENDIAN_H_

#include <stdint.h>



static inline uint16_t
be16dec(const void * pp)
{
	const uint8_t * p = (uint8_t const *)pp;

	return ((uint16_t)(p[1]) + ((uint16_t)(p[0]) << 8));
}

static inline void
be16enc(void * pp, uint16_t x)
{
	uint8_t * p = (uint8_t *)pp;

	p[1] = x & 0xff;
	p[0] = (x >> 8) & 0xff;
}

static inline uint32_t
be32dec(const void * pp)
{
	const uint8_t * p = (uint8_t const *)pp;

	return ((uint32_t)(p[3]) + ((uint32_t)(p[2]) << 8) +
	    ((uint32_t)(p[1]) << 16) + ((uint32_t)(p[0]) << 24));
}

static inline void
be32enc(void * pp, uint32_t x)
{
	uint8_t * p = (uint8_t *)pp;

	p[3] = x & 0xff;
	p[2] = (x >> 8) & 0xff;
	p[1] = (x >> 16) & 0xff;
	p[0] = (x >> 24) & 0xff;
}

static inline uint64_t
be64dec(const void * pp)
{
	const uint8_t * p = (uint8_t const *)pp;

	return ((uint64_t)(p[7]) + ((uint64_t)(p[6]) << 8) +
	    ((uint64_t)(p[5]) << 16) + ((uint64_t)(p[4]) << 24) +
	    ((uint64_t)(p[3]) << 32) + ((uint64_t)(p[2]) << 40) +
	    ((uint64_t)(p[1]) << 48) + ((uint64_t)(p[0]) << 56));
}

static inline void
be64enc(void * pp, uint64_t x)
{
	uint8_t * p = (uint8_t *)pp;

	p[7] = x & 0xff;
	p[6] = (x >> 8) & 0xff;
	p[5] = (x >> 16) & 0xff;
	p[4] = (x >> 24) & 0xff;
	p[3] = (x >> 32) & 0xff;
	p[2] = (x >> 40) & 0xff;
	p[1] = (x >> 48) & 0xff;
	p[0] = (x >> 56) & 0xff;
}

static inline uint16_t
le16dec(const void * pp)
{
	const uint8_t * p = (uint8_t const *)pp;

	return ((uint16_t)(p[0]) + ((uint16_t)(p[1]) << 8));
}

static inline void
le16enc(void * pp, uint16_t x)
{
	uint8_t * p = (uint8_t *)pp;

	p[0] = x & 0xff;
	p[1] = (x >> 8) & 0xff;
}

static inline uint32_t
le32dec(const void * pp)
{
	const uint8_t * p = (uint8_t const *)pp;

	return ((uint32_t)(p[0]) + ((uint32_t)(p[1]) << 8) +
	    ((uint32_t)(p[2]) << 16) + ((uint32_t)(p[3]) << 24));
}

static inline void
le32enc(void * pp, uint32_t x)
{
	uint8_t * p = (uint8_t *)pp;

	p[0] = x & 0xff;
	p[1] = (x >> 8) & 0xff;
	p[2] = (x >> 16) & 0xff;
	p[3] = (x >> 24) & 0xff;
}

static inline uint64_t
le64dec(const void * pp)
{
	const uint8_t * p = (uint8_t const *)pp;

	return ((uint64_t)(p[0]) + ((uint64_t)(p[1]) << 8) +
	    ((uint64_t)(p[2]) << 16) + ((uint64_t)(p[3]) << 24) +
	    ((uint64_t)(p[4]) << 32) + ((uint64_t)(p[5]) << 40) +
	    ((uint64_t)(p[6]) << 48) + ((uint64_t)(p[7]) << 56));
}

static inline void
le64enc(void * pp, uint64_t x)
{
	uint8_t * p = (uint8_t *)pp;

	p[0] = x & 0xff;
	p[1] = (x >> 8) & 0xff;
	p[2] = (x >> 16) & 0xff;
	p[3] = (x >> 24) & 0xff;
	p[4] = (x >> 32) & 0xff;
	p[5] = (x >> 40) & 0xff;
	p[6] = (x >> 48) & 0xff;
	p[7] = (x >> 56) & 0xff;
}

#endif /* !_SYSENDIAN_H_ */
