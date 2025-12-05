#pragma once

#include "protobufs/steammessages_base.pb.h"
#include "protobufs/encrypted_app_ticket.pb.h"
#include "protobufs/steammessages_clientserver.pb.h"
#include "protobufs/steammessages_clientserver_userstats.pb.h"

#include <cstdint>

enum EMsgType : uint16_t
{
	EMSG_REQUEST_USERSTATS_RESPONSE = 0x333,
	EMSG_APPOWNERSHIPTICKET_RESPONSE = 0x35a,
	EMSG_ENCRYPTEDAPPTICKET_RESPONSE = 0x1597
};


class CProtoBufMsgBase
{
public:
	char __pad_0x0[0x14];	//0x0
	uint16_t type;			//0x14
	char __pad_0x18[0xA];	//0x16
	void* body;				//0x20
	char __pad_0x24[0x8];	//0x24
}; //0x2C


//Replaced by actual dumped & protoc generated classes
//TODO: Replace ticket.cpp implementation with proper class too
class CMsgAppOwnershipTicketResponse
{
public:
	char __pad_0x0[0x10];	//0x0
	//Ticket gets accessed like this: pTicket = *(int *)(*(uint *)(local_48.pBody_likely + 0x10) & 0xfffffffe);
	void** ppTicket;			//0x10
	uint32_t appId;			//0x14
	uint32_t result;		//0x18
}; //0x1C ?
