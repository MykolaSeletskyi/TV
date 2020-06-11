#pragma once
#include <iostream>
class TV
{
	bool status = false;
	size_t volume = 0;
	size_t channelNumber = 0;
	const size_t NUMBER_OF_CHANNELS;
	const size_t MAXIMUM_VOLUME;
public:
	TV(size_t NUMBER_OF_CHANNELS = 10, size_t MAXIMUM_VOLUME = 100) :
		NUMBER_OF_CHANNELS(NUMBER_OF_CHANNELS),
		MAXIMUM_VOLUME(MAXIMUM_VOLUME) {};
	void power();
	void nextChannel();
	void prevChannel();
	void incVolume();
	void decVolume();
	void print() {
		std::cout << "status = " << status << std::endl;
		std::cout << "volume = " << volume << "/"<< MAXIMUM_VOLUME<<std::endl;
		std::cout << "channelNumber = " << channelNumber << "/" << NUMBER_OF_CHANNELS<<std::endl;		
	}
	friend class Remote;
};
class Remote
{
	TV* tv=nullptr;
public:
	Remote(TV* tv) :tv(tv) {};
	void setTv(TV* tv)
	{
		this->tv = tv;
	};
	void power() {
		tv->power();
	};
	void operator++()
	{
		tv->nextChannel();
	};
	void operator--()
	{
		tv->prevChannel();
	};
	void operator+()
	{
		tv->incVolume();
	};
	void operator-()
	{
	tv->decVolume();
	};
	void goChannel(size_t chanel)
	{
		if (tv->status && tv->NUMBER_OF_CHANNELS >= chanel)
		{
			tv->channelNumber= chanel;
		}
	};
};
