#include "TV.h"

void TV::power()
{
	status = !status;
};

void TV::nextChannel()
{
	if (status && channelNumber < NUMBER_OF_CHANNELS)
	{
		channelNumber++;
	}
}

void TV::prevChannel()
{
	if (status && channelNumber > 0)
	{
		channelNumber--;
	}
}

void TV::incVolume()
{
	if (status && volume < MAXIMUM_VOLUME)
	{
		volume++;
	}
}

void TV::decVolume()
{
	if (status && volume > 0)
	{
		volume--;
	}
}
