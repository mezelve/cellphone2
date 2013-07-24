#include <GSM3Ringer.h>

void GSM3Ringer::setRinger(int c)
{
  this->ringer = c;
  openGenericCommand();
  theGSM3ShieldV1ModemCore.genericCommand_rq(PSTR("AT+QSRT="), false);
  theGSM3ShieldV1ModemCore.print(c);
  theGSM3ShieldV1ModemCore.print("\r");
}

void GSM3Ringer::setVolume(int c)
{
	this->volume = c;
  openGenericCommand();
  theGSM3ShieldV1ModemCore.genericCommand_rq(PSTR("AT+CRSL="), false);
  theGSM3ShieldV1ModemCore.print(c);
  theGSM3ShieldV1ModemCore.print("\r");
}
