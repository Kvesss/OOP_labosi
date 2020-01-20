#include <iostream>
#include <string>

class Device{
protected:
	bool PoweredOn;
	int deviceID;
	std::string manufacturer;
public:
	Device() :PoweredOn(false), deviceID(0){}
	Device(bool a, int b,std::string c) :PoweredOn(a), deviceID(b),manufacturer(c){}
	virtual void turnOFON() = 0;

};
//void device::turnofon(){
//	if (poweredon)
//		poweredon = false;
//	else
//		poweredon = true;
//}





class USBdevice : public virtual Device{
protected:
	bool connected;
	std::string USBstandard;
public:
	USBdevice() :connected(false), USBstandard("/"), Device(){}
	USBdevice(bool a,int b ,std::string c,bool d,std::string e) :connected(d), USBstandard(e),Device(a,b,c){}
	virtual void connect(){
		connected = !connected;
	}
};

class NetworkDevice : public virtual Device{
protected:
	bool connected;
	std::string networkStandard;
public:
	NetworkDevice() :Device(), connected(false), networkStandard("/"){}
	NetworkDevice(bool a, int b, std::string c, bool d, std::string e) :Device(a,b,c), connected(d), networkStandard(e){}
	virtual void connect(){
		connected = !connected;
	}

};

class WirelessAdapter : public  USBdevice,public  NetworkDevice{
private:
	int NoOfAntenas;
	int gain;
public:
	WirelessAdapter(): USBdevice(),NetworkDevice(),NoOfAntenas(0),gain(0) {}
	WirelessAdapter(bool a, int b, std::string c, bool d, std::string e,int f,int g) :
		USBdevice(a,b,c,d,e), NetworkDevice(a,b,c,d,e), NoOfAntenas(f), gain(g){}
	bool status(){
		if (USBdevice::connected && NetworkDevice::connected)
			return true;
		return false;
			
	}
	void turnOFON(){
		if (PoweredOn){
			PoweredOn = false;
			USBdevice::connected = false;
			NetworkDevice::connected = false;
		}
		else
			PoweredOn = true;
	}
	void connect(){
		USBdevice::connect();
		NetworkDevice::connect();
	}


};