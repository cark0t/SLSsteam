#pragma once

#include <cstdint>


class CAppTicket
{
public:
	uint32_t steamId;
	uint32_t size;
	uint8_t bytes[0x400];
};

class CEncryptedAppTicket
{
public:
	uint32_t steamId;
	uint32_t size;
	uint8_t bytes[0x1000];
};
