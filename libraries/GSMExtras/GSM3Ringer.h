#ifndef _GSM3RINGER_
#define _GSM3RINGER_

#include <GSM3GenericCommand.h>

class GSM3Ringer : public GSM3GenericCommand {
public:
	void setRinger(int);
	void setVolume(int);
	int getRinger() { return ringer; }
	int getVolume() { return volume; }
private:
	int ringer;
  int volume;
};

#endif
