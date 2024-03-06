#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Name
{
private:
	char* FName;
	char* LName;

public:
	Name(char* FN, char* LN);
	void setterFN(char* FN);
	void setterLN(char* LN);
	char* getterFN();
	char* getterLN();
	friend ostream& operator<<(ostream& out, const Name& N);
	~Name();

};

Name::Name(char* FN = nullptr, char* LN = nullptr)
{
	int i;
	int j;
	int size1; int size2;
	if (FN != nullptr)
	{
		for (i = 0; FN[i] != '\0'; i++)
		{
		}
		size1 = i + 1;
		FName = new char[size1];
		for (int i = 0; i < size1; i++)
		{
			FName[i] = FN[i];
		}
		FName[size1 - 1] = '\0';
	}
	if (LN != nullptr)
	{
		for (j = 0; LN[j] != '\0'; j++)
		{
		}
		size2 = j + 1;
		LName = new char[size2];
		for (int j = 0; j < size2; j++)
		{

			LName[j] = LN[j];
		}
		LName[size2 - 1] = '\0';
	}





}

void Name::setterFN(char* FN)
{
	int i;
	int s;
	for (i = 0; FN[i] != '\0'; i++)
	{
	}
	s = i + 1;
	FName = new char[s];
	for (int i = 0; i < s; i++)
	{
		FName[i] = FN[i];
	}
	FName[s - 1] = '\0';
}
void Name::setterLN(char* LN)
{
	int i;
	int s;
	for (i = 0; LN[i] != '\0'; i++)
	{
	}
	s = i + 1;
	LName = new char[s];
	for (int i = 0; i < s; i++)
	{
		LName[i] = LN[i];
	}
	LName[s - 1] = '\0';
}
char* Name::getterFN()
{
	char* fn = nullptr;
	int i;
	int size;
	for (i = 0; fn[i] != '\0'; i++)
	{
	}
	size = i + 1;
	fn = new char[size];
	for (int i = 0; i < size; i++)
	{
		fn[i] = FName[i];
	}
	fn[size - 1] = '\0';
	return fn;
}
char* Name::getterLN()
{
	char* ln = nullptr;
	int i;
	int size;
	for (i = 0; ln[i] != '\0'; i++)
	{
	}
	size = i + 1;
	ln = new char[size];
	for (int i = 0; i < size; i++)
	{
		ln[i] = LName[i];
	}
	ln[size - 1] = '\0';
	return ln;
}
ostream& operator<<(ostream& out, const Name& N)
{
	out << N.FName << " " << N.LName << endl;
	return out;
}


Name::~Name()
{
}

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date(int, int, int);
	void setterDate(int);
	void setterMonth(int);
	void setterYear(int);
	int getterDate();
	int getterMonth();
	int getterYear();
	friend ostream& operator<<(ostream& out, const Date& N);
	~Date();

};

Date::Date(int a = 1, int b = 1, int c = 2000)
{
	day = a;
	month = b;
	year = c;
}

void Date::setterDate(int a)
{
	day = a;
}
void Date::setterMonth(int b)
{
	month = b;
}
void Date::setterYear(int c)
{
	year = c;
}
int Date::getterDate()
{
	return day;
}
int Date::getterMonth()
{
	return month;
}
int Date::getterYear()
{
	return year;
}
ostream& operator<<(ostream& out, const Date& N)
{
	out << N.day << "/" << N.month << "/" << N.year << endl;
	return out;

}

Date::~Date()
{
}


class mTime
{
private:
	int hour;
	int min;
	int sec;

public:
	mTime(int, int, int);
	void setterHour(int);
	void setterMin(int);
	void setterSec(int);
	int getterHour();
	int getterMin();
	int getterSec();
	friend ostream& operator<<(ostream& out, const mTime& N);
	~mTime();

};

mTime::mTime(int a = 0, int b = 0, int c = 0)
{
	hour = a;
	min = b;
	sec = c;
}

void mTime::setterHour(int a)
{
	hour = a;
}
void mTime::setterMin(int b)
{
	min = b;
}
void mTime::setterSec(int c)
{
	sec = c;
}
int mTime::getterHour()
{
	return hour;
}
int mTime::getterMin()
{
	return min;
}
int mTime::getterSec()
{
	return sec;
}
ostream& operator<<(ostream& out, const mTime& N)
{
	out << N.hour << " : " << N.min << " : " << N.sec << endl;
	return out;
}

mTime::~mTime()
{
}

class Service              //char *,char *,float,Date, mTime, bool,float,int,int,int,int
{
private:
	char* source;
	char* destination;
	float distance;
	Date bookingDate;
	mTime bookingTime;
	int status;
	float fuelrate;
	int sID;
	int cID;
	int dID;
	int vID;

public:
	Service(char*, char*, float, Date, mTime, int, float, int, int, int, int);
	void setterSource(char*);
	void setterDestination(char*);
	void setterDistance(float);
	void setterBookingdate(Date&);
	void setterBookingTime(mTime&);
	void setterStatus(int);
	void setterFuelrate(float);
	void setterSID(int);
	void setterCID(int);
	void setterDID(int);
	void setterVID(int);
	char* getterSource();
	char* getterDestination();
	float getterDistance();
	Date getterBookingdate();
	mTime getterBookingTime();
	int getterStatus();
	float getterFuelrate();
	int getterSID();
	int getterCID();
	int getterDID();
	int getterVID();
	friend ostream& operator<<(ostream& out, const Service& S);
	~Service();

};

Service::Service(char* a = nullptr, char* b = nullptr, float c = 0.0, Date d = 0, mTime e = 0, int f = 0, float g = 0.0, int h = 0, int I = 0, int J = 0, int k = 0)
{
	int i, j;
	int s1, s2;
	for (i = 0; a[i] != '\0'; i++)
	{
	}
	s1 = i + 1;
	source = new char[s1];
	for (j = 0; b[j] != '\0'; j++)
	{
	}
	s2 = j + 1;
	destination = new char[s2];
	for (int i = 0; i < s1; i++)
	{
		source[i] = a[i];
	}
	for (int j = 0; j < s2; j++)
	{

		destination[j] = b[j];
	}
	source[s1 - 1] = '\0';
	destination[s2 - 1] = '\0';
	distance = c;
	bookingDate = d;
	bookingTime = e;
	status = f;
	fuelrate = g;
	sID = h;
	cID = I;
	dID = J;
	vID = k;
}

void Service::setterSource(char* S)
{
	int i;
	int s;
	for (i = 0; S[i] != '\0'; i++)
	{
	}
	s = i + 1;
	source = new char[s];
	for (int i = 0; i < s; i++)
	{
		source[i] = S[i];
	}
	source[s - 1] = '\0';
}
void Service::setterDestination(char* D)
{
	int i;
	int s;
	for (i = 0; D[i] != '\0'; i++)
	{
	}
	s = i + 1;
	destination = new char[s];
	for (int i = 0; i < s; i++)
	{
		destination[i] = D[i];
	}
	destination[s - 1] = '\0';
}

void Service::setterDistance(float d)
{
	distance = d;
}

void Service::setterBookingdate(Date& bD)
{
	bookingDate = bD;
}

void Service::setterBookingTime(mTime& bT)
{
	bookingTime = bT;
}

void Service::setterStatus(int st)
{
	status = st;
}

void Service::setterFuelrate(float fR)
{
	fuelrate = fR;
}

void Service::setterSID(int sid)
{
	sID = sid;
}

void Service::setterCID(int cid)
{
	cID = cid;
}

void Service::setterDID(int did)
{
	dID = did;
}

void Service::setterVID(int vid)
{
	vID = vid;
}

char* Service::getterSource()
{
	char* S = nullptr;
	int i;
	int size;
	for (i = 0; S[i] != '\0'; i++)
	{
	}
	size = i + 1;
	S = new char[size];
	for (int i = 0; i < size; i++)
	{
		S[i] = source[i];
	}
	S[size - 1] = '\0';
	return S;
}

char* Service::getterDestination()
{
	char* D = nullptr;
	int i;
	int size;
	for (i = 0; D[i] != '\0'; i++)
	{
	}
	size = i + 1;
	D = new char[size];
	for (int i = 0; i < size; i++)
	{
		D[i] = destination[i];
	}
	D[size - 1] = '\0';
	return D;
}

float Service::getterDistance()
{
	return distance;
}

Date Service::getterBookingdate()
{
	return bookingDate;
}

mTime Service::getterBookingTime()
{
	return bookingTime;
}

int Service::getterStatus()
{
	return status;
}

float Service::getterFuelrate()
{
	return fuelrate;
}

int Service::getterSID()
{
	return sID;
}

int Service::getterCID()
{
	return cID;
}

int Service::getterDID()
{
	return dID;
}

int Service::getterVID()
{
	return vID;
}

ostream& operator<<(ostream& out, const Service& S)
{
	out << "Source: " << S.source << endl;
	out << "Destination: " << S.destination << endl;
	out << "Distance: " << S.distance << " km" << endl;
	out << "Booking Date: " << S.bookingDate << endl;
	out << "Booking Time: " << S.bookingTime << endl;
	if (S.status == 1)
	{
		out << "Status: 1,  FREE " << endl;
	}
	else if (S.status == 2)
	{
		out << "Status: 2,  BOOKED " << endl;
	}
	else if (S.status == 3)
	{
		out << "Status: 3,  CANCELLED " << endl;
	}
	out << "Fuel Rate: " << S.fuelrate << endl;
	out << "CID: " << S.cID << endl;
	out << "DID: " << S.dID << endl;
	out << "VID: " << S.vID << endl;
	return out;
}

Service::~Service()
{
}

class Ride : public Service
{
private:
	int noOfPassengers;
	char* rideType;
	float DriverRanking;
	float VehicleRanking;

public:
	Ride(char*, char*, float, Date, mTime, int, float, int, int, int, int, int, char*, float, float);
	void setterNoOfpassenger(int);
	void setterRideType(char*);
	void setterDriverRanking(float);
	void setterVehicleRanking(float);
	int getterNoOfpassenger();
	char* getterRideType();
	float getterDriverRanking();
	float getterVehicleRanking();
	friend ostream& operator<<(ostream& out, const Ride& R);
	~Ride();



};

Ride::Ride(char* a = nullptr, char* b = nullptr, float c = 0.0, Date d = 0, mTime e = 0, int f = 0, float g = 0.0, int h = 0, int I = 0, int j = 0, int k = 0, int l = 0, char* m = nullptr, float n = 0.0, float o = 0.0) : Service(a, b, c, d, e, f, g, h, I, j, k)
{
	noOfPassengers = l;
	int i;
	int s1;
	for (i = 0; m[i] != '\0'; i++)
	{
	}
	s1 = i + 1;
	rideType = new char[s1];
	for (int i = 0; i < s1; i++)
	{
		rideType[i] = m[i];
	}
	rideType[s1 - 1] = '\0';

	DriverRanking = n;
	VehicleRanking = o;

}

void Ride::setterNoOfpassenger(int nop)
{
	noOfPassengers = nop;
}

void Ride::setterRideType(char* rt)
{
	int i;
	int s;
	for (i = 0; rt[i] != '\0'; i++)
	{
	}
	s = i + 1;
	rideType = new char[s];
	for (int i = 0; i < s; i++)
	{
		rideType[i] = rt[i];
	}
	rideType[s - 1] = '\0';
}

void Ride::setterDriverRanking(float dR)
{
	DriverRanking = dR;
}

void Ride::setterVehicleRanking(float vR)
{
	VehicleRanking = vR;
}

int Ride::getterNoOfpassenger()
{
	return noOfPassengers;
}

char* Ride::getterRideType()
{
	char* rt = nullptr;
	int i;
	int size;
	for (i = 0; rt[i] != '\0'; i++)
	{
	}
	size = i + 1;
	rt = new char[size];
	for (int i = 0; i < size; i++)
	{
		rt[i] = rideType[i];
	}
	rt[size - 1] = '\0';
	return rt;
}

float Ride::getterDriverRanking()
{
	return DriverRanking;
}

float Ride::getterVehicleRanking()
{
	return VehicleRanking;
}


Ride::~Ride()
{
}

class Delivery : public Service
{
private:
	float goodsWeight;
	char* goodsType;


public:
	Delivery(char*, char*, float, Date, mTime, int, float, int, int, int, int, float, char*);
	void setterGoodsweight(float);
	void setterGoodsType(char*);
	float getterGoodsweight();
	char* getterGoodsType();
	friend ostream& operator<<(ostream& out, const Delivery& D);
	~Delivery();


};

Delivery::Delivery(char* a = nullptr, char* b = nullptr, float c = 0.0, Date d = 0, mTime e = 0, int f = 0, float g = 0.0, int h = 0, int I = 0, int j = 0, int k = 0, float l = 0.0, char* m = nullptr) : Service(a, b, c, d, e, f, g, h, I, j, k)
{
	goodsWeight = l;
	int i;
	int s1;
	for (i = 0; m[i] != '\0'; i++)
	{
	}
	s1 = i + 1;
	goodsType = new char[s1];
	for (int i = 0; i < s1; i++)
	{
		goodsType[i] = m[i];
	}
	goodsType[s1 - 1] = '\0';
}

void Delivery::setterGoodsweight(float gW)
{
	goodsWeight = gW;
}

void Delivery::setterGoodsType(char* gT)
{
	int i;
	int s;
	for (i = 0; gT[i] != '\0'; i++)
	{
	}
	s = i + 1;
	goodsType = new char[s];
	for (int i = 0; i < s; i++)
	{
		goodsType[i] = gT[i];
	}
	goodsType[s - 1] = '\0';
}

float Delivery::getterGoodsweight()
{
	return goodsWeight;
}

char* Delivery::getterGoodsType()
{
	char* gt = nullptr;
	int i;
	int size;
	for (i = 0; gt[i] != '\0'; i++)
	{
	}
	size = i + 1;
	gt = new char[size];
	for (int i = 0; i < size; i++)
	{
		gt[i] = goodsType[i];
	}
	gt[size - 1] = '\0';
	return gt;
}


Delivery::~Delivery()
{
}

class Person
{
private:
	Name pName;
	Date DOB;
	int age;
	int Nid;

public:
	Person(Name, Date, int, int);
	void setterPName(Name&);
	void setterDOB(Date&);
	void setterAge(int);
	void setterNID(int);
	Name getterPName();
	Date getterDOB();
	int getterAge();
	int getterNID();
	friend ostream& operator<<(ostream& out, const Person& P);
	~Person();



};

Person::Person(Name a = 0, Date b = 0, int c = 0, int d = 0)
{
	pName = a;
	DOB = b;
	age = c;
	Nid = d;
}

void Person::setterPName(Name& pN)
{
	pName = pN;
}

void Person::setterDOB(Date& dob)
{
	DOB = dob;
}

void Person::setterAge(int a)
{
	age = a;
}

void Person::setterNID(int nid)
{
	Nid = nid;
}

Name Person::getterPName()
{
	return pName;
}

Date Person::getterDOB()
{
	return DOB;
}

int Person::getterAge()
{
	return age;
}

int Person::getterNID()
{
	return Nid;
}

ostream& operator<<(ostream& out, const Person& P)
{
	out << "Name is: " << P.pName;
	out << "DOB is: " << P.DOB ;
	out << "Age is: " << P.age << endl;
	out << "NID is: " << P.Nid <<endl;
	return out;
}

Person::~Person()
{
}

class Customer : public Person
{
private:
	int cID;
	Service** bookingHistory;


public:
	Customer(Name, Date, int, int, int, Service**);
	void setterCID(int);
	void setterBookinghistory(Service**);
	int getterCID();
	Service** getterBookinghistory();
	friend ostream& operator<<(ostream& out, const Customer& C);
	~Customer();


};

Customer::Customer(Name a = 0, Date b = 0, int c = 0, int d = 0, int e = 0, Service** f = nullptr) : Person(a, b, c, d)
{
	cID = e;
	//missing!!
}

void Customer::setterCID(int cid)
{
	cID = cid;
}

void Customer::setterBookinghistory(Service**)
{

}

int Customer::getterCID()
{
	return cID;
}

Service** Customer::getterBookinghistory()
{
	return bookingHistory;
}

ostream& operator<<(ostream& out, const Customer& C)
{
	Person obj = C;
	out << obj ;
	out << "CID is " <<C.cID << endl<<endl;
	return out;
}

Customer::~Customer()
{
}

class Driver : public Person
{
private:
	int dID;
	char** LiscenseList;
	int noOfLiscences;
	float overAllRanking;
	float salary;
	int experience;
	int status;
	Service** serviceHistory;


public:
	Driver(Name, Date, int, int, int, char**, int, float, float, int, int, Service**);
	void setterDID(int);
	void setterLiscencelist(char**);
	void setterNooliscences(int);
	void setterOverallranking(float);
	void setterSalary(float);
	void setterExperience(int);
	void setterStatus(int);
	void setterServicehistory(Service**);
	int getterDID();
	char** getterLiscencelist();
	int getterNooliscences();
	float getterOverallranking();
	float getterSalary();
	int getterExperience();
	int getterStatus();
	Service** getterServicehistory();
	friend ostream& operator<<(ostream& out, const Driver& D);
	~Driver();


};

Driver::Driver(Name a = 0, Date b = 0, int c = 0, int d = 0, int e = 0, char** f = nullptr, int g = 0, float h = 0.0, float I = 0.0, int J = 0, int k = 0, Service** l = nullptr) : Person(a, b, c, d)
{
	dID = e;
	//missing!!
	noOfLiscences = g;
	overAllRanking = h;
	salary = I;
	experience = J;
	status = k;
	//missing!!
}

void Driver::setterDID(int did)
{
	dID = did;
}

void Driver::setterLiscencelist(char**)
{

}

void Driver::setterNooliscences(int nol)
{
	noOfLiscences = nol;
}

void Driver::setterOverallranking(float oAR)
{
	overAllRanking = oAR;
}

void Driver::setterSalary(float s)
{
	salary = s;
}

void Driver::setterExperience(int e)
{
	experience = e;
}

void Driver::setterStatus(int st)
{
	status = st;
}

void Driver::setterServicehistory(Service**)
{

}

int Driver::getterDID()
{
	return dID;
}

char** Driver::getterLiscencelist()
{
	return LiscenseList;
}

int Driver::getterNooliscences()
{
	return noOfLiscences;
}

float Driver::getterOverallranking()
{
	return overAllRanking;
}

float Driver::getterSalary()
{
	return salary;
}

int Driver::getterExperience()
{
	return experience;
}

int Driver::getterStatus()
{
	return status;
}

Service** Driver::getterServicehistory()
{
	return serviceHistory;
}

ostream& operator<<(ostream& out, const Driver& D)
{
	out << "DID is: " << D.dID << endl;
	out << "Liscenese List : " << D.LiscenseList << endl;
	out << "Number of Liscenses: " << D.noOfLiscences << endl;
	out << "Over All Ranking is: " << D.overAllRanking << endl;
	out << "Salary is: " << D.salary << endl;
	out << "Experience is: " << D.dID << endl;
	if (D.status == 1)
	{
		out << "Status: 1,  FREE " << endl;
	}
	else if (D.status == 2)
	{
		out << "Status: 2,  BOOKED " << endl;
	}
	else if (D.status == 3)
	{
		out << "Status: 3,  CANCELLED " << endl;
	}
	out << "Service History is: " << D.serviceHistory << endl;
	return out;
}

Driver::~Driver()
{
}

class Feature
{
private:
	int fID;
	char* description;
	float cost;


public:
	Feature(int, char*, float);
	void setterFID(int);
	void setterDescription(char*);
	void setterCost(float);
	int getterFID();
	char* getterDescription();
	float getterCost();
	friend ostream& operator<<(ostream& out, const Feature& F);
	~Feature();


};

Feature::Feature(int a = 0, char* b = nullptr, float c = 0.0)
{
	fID = a;
	int i;
	int s1;
	for (i = 0; b[i] != '\0'; i++)
	{
	}
	s1 = i + 1;
	description = new char[s1];
	for (int i = 0; i < s1; i++)
	{
		description[i] = b[i];
	}
	description[s1 - 1] = '\0';
	cost = c;
}

void Feature::setterFID(int fid)
{
	fID = fid;
}

void Feature::setterDescription(char* D)
{
	int i;
	int s;
	for (i = 0; D[i] != '\0'; i++)
	{
	}
	s = i + 1;
	description = new char[s];
	for (int i = 0; i < s; i++)
	{
		description[i] = D[i];
	}
	description[s - 1] = '\0';
}

void Feature::setterCost(float c)
{
	cost = c;
}

int Feature::getterFID()
{
	return fID;
}

char* Feature::getterDescription()
{
	char* D = nullptr;
	int i;
	int size;
	for (i = 0; D[i] != '\0'; i++)
	{
	}
	size = i + 1;
	D = new char[size];
	for (int i = 0; i < size; i++)
	{
		D[i] = description[i];
	}
	D[size - 1] = '\0';
	return D;
}

float Feature::getterCost()
{
	return cost;
}

ostream& operator<<(ostream& out, const Feature& F)
{
	cout << "FID is: " << F.fID << endl;
	cout << "Description is: " << F.description << endl;
	cout << "Cost is: " << F.cost << endl;
	return out;
}

Feature::~Feature()
{
}

class Vehicle
{
private:
	int vID;
	int registrationNo;
	float avgMilage;
	char* LiscenceType;
	int status;
	char* fuelType;
	float overAllRanking;
	Date manufacturingDate;
	int NOFeatures;
	Feature* List;
	Service** serviceHistory;



public:
	Vehicle(int, int, float, char*, int, char*, float, Date, int, Feature*, Service**);
	Vehicle(const Vehicle&);
	void setterVID(int);
	void setterRegistrationno(int);
	void setterAvgmilage(float);
	void setterLiscenseType(char*);
	void setterStatus(int);
	void setterFuelType(char*);
	void setterOverallranking(float);
	void setterManufacturingDate(Date&);
	void setterNoofFeatures(int);
	void setterList(Feature*);
	void setterServicehistory(Service**);
	int getterVID();
	int getterRegistrationno();
	float getterAvgmilage();
	char* getterLiscenseType();
	int getterStatus();
	char* getterFuelType();
	float getterOverallranking();
	Date getterManufacturingDate();
	int getterNoofFeatures();
	Feature* getterList();
	Service** getterServicehistory();
	friend ostream& operator<<(ostream& out, const Vehicle& V);
	~Vehicle();


};

Vehicle::Vehicle(int a = 0, int b = 0, float c = 0.0, char* d = nullptr, int e = 0, char* f = nullptr, float g = 0.0, Date h = 0, int I = 0, Feature* J = 0, Service** K = nullptr)
{
	vID = a;
	registrationNo = b;
	avgMilage = c;
	int i, j, k;
	int s1, s2, s3;
	for (i = 0; d[i] != '\0'; i++)
	{
	}
	s1 = i + 1;
	LiscenceType = new char[s1];
	for (int i = 0; i < s1; i++)
	{
		LiscenceType[i] = d[i];
	}
	LiscenceType[s1 - 1] = '\0';
	status = e;

	for (j = 0; f[j] != '\0'; j++)
	{
	}
	s2 = j + 1;
	fuelType = new char[s2];
	for (int i = 0; i < s2; i++)
	{
		fuelType[i] = f[i];
	}
	fuelType[s2 - 1] = '\0';
	overAllRanking = g;
	manufacturingDate = h;
	NOFeatures = I;
	s3 = NOFeatures;
	List = new Feature[s3];
	for (int i = 0; i < s3; i++)
	{
		List[i] = J[i];
	}
	List[s3 - 1] = '\0';

	// j msiingg!

}

Vehicle::Vehicle(const Vehicle& obj)
{

}

void Vehicle::setterVID(int vid)
{
	vID = vid;
}

void Vehicle::setterRegistrationno(int rN)
{
	registrationNo = rN;
}

void Vehicle::setterAvgmilage(float avgm)
{
	avgMilage = avgm;
}

void Vehicle::setterLiscenseType(char* lT)
{
	int i;
	int s;
	for (i = 0; lT[i] != '\0'; i++)
	{
	}
	s = i + 1;
	LiscenceType = new char[s];
	for (int i = 0; i < s; i++)
	{
		LiscenceType[i] = lT[i];
	}
	LiscenceType[s - 1] = '\0';
}

void Vehicle::setterStatus(int st)
{
	status = st;
}

void Vehicle::setterFuelType(char* fT)
{
	int i;
	int s;
	for (i = 0; fT[i] != '\0'; i++)
	{
	}
	s = i + 1;
	fuelType = new char[s];
	for (int i = 0; i < s; i++)
	{
		fuelType[i] = fT[i];
	}
	fuelType[s - 1] = '\0';
}

void Vehicle::setterOverallranking(float oAR)
{
	overAllRanking = oAR;
}

void Vehicle::setterManufacturingDate(Date& d)
{
	manufacturingDate = d;
}

void Vehicle::setterNoofFeatures(int nof)
{
	NOFeatures = nof;
}

void Vehicle::setterList(Feature* F)
{
	for (int i = 0; i < NOFeatures; i++)
	{
		List[i] = F[i];
	}
	List[NOFeatures] = '\0';

}

void Vehicle::setterServicehistory(Service** s)
{

}

int Vehicle::getterVID()
{
	return vID;
}

int Vehicle::getterRegistrationno()
{
	return registrationNo;
}

float Vehicle::getterAvgmilage()
{
	return avgMilage;
}

char* Vehicle::getterLiscenseType()
{
	char* lt = nullptr;
	int i;
	int size;
	for (i = 0; lt[i] != '\0'; i++)
	{
	}
	size = i + 1;
	lt = new char[size];
	for (int i = 0; i < size; i++)
	{
		lt[i] = LiscenceType[i];
	}
	lt[size - 1] = '\0';
	return lt;
}

int Vehicle::getterStatus()
{
	return status;
}

char* Vehicle::getterFuelType()
{
	char* ft = nullptr;
	int i;
	int size;
	for (i = 0; ft[i] != '\0'; i++)
	{
	}
	size = i + 1;
	ft = new char[size];
	for (int i = 0; i < size; i++)
	{
		ft[i] = fuelType[i];
	}
	ft[size - 1] = '\0';
	return ft;
}

float Vehicle::getterOverallranking()
{
	return overAllRanking;
}

Date Vehicle::getterManufacturingDate()
{
	return manufacturingDate;
}

int Vehicle::getterNoofFeatures()
{
	return NOFeatures;
}

Feature* Vehicle::getterList()
{
	Feature* gt = nullptr;
	///isseu
	for (int i = 0; i < NOFeatures; i++)
	{
		gt[i] = List[i];
	}
	gt[NOFeatures] = '\0';
	return gt;
}

Service** Vehicle::getterServicehistory()
{
	return serviceHistory;
}

ostream& operator<<(ostream& out, const Vehicle& V)
{
	out << "VID is: " << V.vID << endl;
	out << "Registration Number is: " << V.registrationNo << endl;
	out << "Average Milage is: " << V.avgMilage << endl;
	out << "Liscense Type is: " << V.LiscenceType << endl;
	if (V.status == 1)
	{
		out << "Status: 1,  FREE " << endl;
	}
	else if (V.status == 2)
	{
		out << "Status: 2,  BOOKED " << endl;
	}
	else if (V.status == 3)
	{
		out << "Status: 3,  CANCELLED " << endl;
	}
	out << "Fuel Type is: " << V.fuelType << endl;
	out << "Over All Ranking is: " << V.overAllRanking << endl;
	out << "Manufacturing Date is: " << V.manufacturingDate << endl;
	out << "List is: " << V.List << endl;
	out << "Service History is: " << V.serviceHistory << endl;
	return out;
}

Vehicle::~Vehicle()
{
}

class TMS
{
private:
	Driver* Drivers;
	Customer* Customers;
	Vehicle* Vehicles;
	Ride* Rides;
	Delivery* Deliveries;
	int noOfDrivers;
	int noOfCustomers;
	int noOfVehicles;
	int noOfRides;
	int noOfDeliveries;

	//dynamic 15, inheritence 15,

public:
	TMS(Driver*, Customer*, Vehicle*, Ride*, Delivery*, int, int, int, int, int);
	//Taking From File
	void takeCustomers();
	void takeDrivers();
	void takeVehicles();
	void takeService();
	void takeRides();
	void takeDeliveries();

	//FUNCTIONS PERFORMEd
	void addNewCustomer();
	void AddorRemoveDriver();
	void AddorRemoveVehicle();
	void printListOfCustomers();
	void printListOfDrivers();
	void printListOfVehicles();
	void printServiceHistory();
	void printHistoryCustomer();
	void printHistoryDriver();
	void printDriversListAboveRating();
	void printMultipleLiscenseDrivers();
	void printUpdatedSalaryDrivers();
	void addService();
	void cancelBooking();
	void completeService();
	void printCustomerDetails();
	void printListDriversCompletedService();
	void printDetailsPendingservicesDate();
	void printDetailsPendingservicesDriver();
	void printDetailsCancelledService();

	//saving
	void saveCustomers();
	void saveDrivers();
	void saveVehicles();
	void saveRides();
	void saveServices();

	~TMS();



};

TMS::TMS(Driver* Ds = nullptr, Customer* Cs = nullptr, Vehicle* Vs = nullptr, Ride* Rs = nullptr, Delivery* ds = nullptr, int nod = 0, int noc = 0, int nov = 0, int nor = 0, int nods = 0)
{


	noOfDrivers = nod;
	noOfCustomers = noc;
	noOfVehicles = nov;
	noOfRides = nor;
	noOfDeliveries = nods;

}

void TMS::takeCustomers()
{
	Customers = new Customer[15];
	noOfCustomers = 0;
	int d, m, y, cid, age, nid;
	char fn[15], ln[15];
	ifstream obj;
	obj.open("customer.txt");

	while (!obj.eof())
	{
		obj.getline(fn, 15, ',');
		if (!strcmp(fn,""))
			break;
		obj.getline(ln, 15, ',');
		Name N(fn, ln);
		Customers[noOfCustomers].setterPName(N);

		obj.ignore();
		obj >> d;
		obj.ignore();
		obj >> m;
		obj.ignore();
		obj >> y;
		Date D(d, m, y);
		Customers[noOfCustomers].setterDOB(D);
	
		obj.ignore();
		obj >> age;
		Customers[noOfCustomers].setterAge(age);
	
		obj.ignore();
		obj >> nid;
		Customers[noOfCustomers].setterNID(nid);
		obj.ignore();
		obj >> cid;
		Customers[noOfCustomers].setterCID(cid);
		noOfCustomers++;
	}

	obj.close();
}

void TMS::takeDrivers()
{
	Drivers = new Driver[10];
	noOfDrivers = 0;
	int d, m, y, cid, age, nid;
	char fn[15], ln[15];
	ifstream obj;
	obj.open("driver.txt");

	while (!obj.eof())
	{
		obj.getline(fn, 15, ',');
		if (!strcmp(fn, ""))
			break;
		obj.getline(ln, 15, ',');
		Name N(fn, ln);
		Drivers[noOfDrivers].setterPName(N);

		obj.ignore();
		obj >> d;
		obj.ignore();
		obj >> m;
		obj.ignore();
		obj >> y;
		Date D(d, m, y);
		Drivers[noOfDrivers].setterDOB(D);

		obj.ignore();
		obj >> age;
		Drivers[noOfDrivers].setterAge(age);

		obj.ignore();
		obj >> nid;
		Drivers[noOfDrivers].setterNID(nid);
		obj.ignore();
		obj >> cid;
		Drivers[noOfDrivers].setterNID(cid);
		noOfDrivers++;
	}

	obj.close();
}

void TMS::takeVehicles()
{
	int d, m, y, cid, age, nid;

	ifstream obj;
	obj.open("vehicle.txt");
	while (!obj.eof())
	{
		//obj.getline(fn, 100, ',');
		//obj.getline(ln, 100, ',');
		///*obj >> fn;
		//obj >> ln;*/

		obj >> d;
		obj.ignore();
		obj >> m;
		obj.ignore();

		obj >> y;
		obj.ignore();

		obj >> age;
		obj.ignore();

		obj >> nid;
		obj.ignore();

		obj >> cid;
		// cout << fn << " " << ln << " " << d << "/" << m << "/" << y << " " << age << " " << nid << " " << cid << endl;
	}



	obj.close();
}

void TMS::takeService()
{
	int d, m, y, cid, age, nid;

	ifstream obj;
	obj.open("services.txt");
	while (!obj.eof())
	{
		//obj.getline(fn, 100, ',');
		//obj.getline(ln, 100, ',');
		///*obj >> fn;
		//obj >> ln;*/

		obj >> d;
		obj.ignore();
		obj >> m;
		obj.ignore();

		obj >> y;
		obj.ignore();

		obj >> age;
		obj.ignore();

		obj >> nid;
		obj.ignore();

		obj >> cid;
		//cout << fn << " " << ln << " " << d << "/" << m << "/" << y << " " << age << " " << nid << " " << cid << endl;
	}



	obj.close();
}

void TMS::takeRides()
{
	int d, m, y, cid, age, nid;

	ifstream obj;
	obj.open("customer.txt");
	while (!obj.eof())
	{
		//obj.getline(fn, 100, ',');
		//obj.getline(ln, 100, ',');
		///*obj >> fn;
		//obj >> ln;*/

		obj >> d;
		obj.ignore();
		obj >> m;
		obj.ignore();

		obj >> y;
		obj.ignore();

		obj >> age;
		obj.ignore();

		obj >> nid;
		obj.ignore();

		obj >> cid;
		//cout << fn << " " << ln << " " << d << "/" << m << "/" << y << " " << age << " " << nid << " " << cid << endl;
	}



	obj.close();
}

void TMS::takeDeliveries()
{

}


//FUNCTIONS PERFORMEd
void TMS::addNewCustomer()
{
	char fname[10], lname[10];
	int day, month, year;
	int age, nic, cid;
	cout << "Function 1 will be implemented Now..:" << endl << endl;
	cout << "Enter First Name: "; cin >> fname;
	cout << "Enter Last Name: "; cin >> lname;
	Name N(fname, lname);
	Customers[noOfCustomers].setterPName(N);
	cout << "Enter Day of Birth: "; cin >> day;
	cout << "Enter Month of Birth: "; cin >> month;
	cout << "Enter Year of Birth: "; cin >> year;
	Date D(day, month, year);
	Customers[noOfCustomers].setterDOB(D);
	cout << "Enter Age: "; cin >> age;
	Customers[noOfCustomers].setterAge(age);
	cout << "Enter NID: "; cin >> nic;
	Customers[noOfCustomers].setterNID(nic);
	cout << "Enter CID: "; cin >> cid;
	Customers[noOfCustomers].setterCID(cid);
	noOfCustomers++;

	cout << "CUSTOMER ADDED!" << endl;
}

void TMS::AddorRemoveDriver()
{
	int choice;
	char fname[10], lname[10], liscenseType[20];
	int day, month, year;
	int age, nic, did, cid, nol, status;
	double rating;
	cout << "Enter First Name: "; cin >> fname;
	cout << "Enter Last Name: "; cin >> lname;
	Name N(fname, lname);
	Drivers[noOfDrivers].setterPName(N);
	cout << "Enter Day of Birth: "; cin >> day;
	cout << "Enter Month of Birth: "; cin >> month;
	cout << "Enter Year of Birth: "; cin >> year;
	Date D(day, month, year);
	Drivers[noOfDrivers].setterDOB(D);
	cout << "Enter Age: "; cin >> age;
	Drivers[noOfDrivers].setterAge(age);
	cout << "Enter NID: "; cin >> nic;
	Drivers[noOfDrivers].setterNID(nic);
	cout << "Enter CID: "; cin >> cid;
	Drivers[noOfDrivers].setterCID(cid);
	noOfDrivers++;
	cout << "Enter No Of Liscenses: "; cin >> nol;
	for (int i = 0; i < nol; i++)
	{
		cout << "Enter Liscense Type: "; cin >> liscenseType;
	}

	cout << "Enter  Rating: "; cin >> rating;
	cout << "Enter Status: "; cin >> status;
	cout << "Enter  DID: "; cin >> did;
	cout << "DRIVER ADDED!" << endl;
}

void TMS::AddorRemoveVehicle()
{
	char fname[10], lname[10];
	int day, month, year;
	int age, nic, cid;


	cout << "Enter Age: "; cin >> age;
	cout << "Enter NIC: "; cin >> nic;
	cout << "Enter CID: "; cin >> cid;
}

void TMS::printListOfCustomers()
{
	for (int i = 0; i < noOfCustomers; i++)
	{
		cout << Customers[i];
	}
}

void TMS::printListOfDrivers()
{
	char fname[10], lname[10];
	int day, month, year;
	int age, nic, cid;

	cout << " First Name: "; cin >> fname;
	cout << " Last Name: "; cin >> lname;
	cout << " Day of Birth: "; cin >> day;
	cout << " Month of Birth: "; cin >> month;
	cout << " Year of Birth: "; cin >> year;
	cout << " Age: "; cin >> age;
	cout << " NIC: "; cin >> nic;
	cout << " CID: "; cin >> cid;
}

void TMS::printListOfVehicles()
{
	char fname[10], lname[10];
	int day, month, year;
	int age, nic, cid;

	cout << " NIC: "; cin >> nic;
	cout << " CID: "; cin >> cid;
}

void TMS::printServiceHistory()
{

}

void TMS::printHistoryCustomer()
{

}

void TMS::printHistoryDriver()
{

}

void TMS::printDriversListAboveRating()
{

}

void TMS::printMultipleLiscenseDrivers()
{

}

void TMS::printUpdatedSalaryDrivers()
{

}

void TMS::addService()
{

}

void TMS::cancelBooking()
{

}

void TMS::completeService()
{

}

void TMS::printCustomerDetails()
{

}

void TMS::printListDriversCompletedService()
{

}

void TMS::printDetailsPendingservicesDate()
{

}

void TMS::printDetailsPendingservicesDriver()
{

}

void TMS::printDetailsCancelledService()
{

}

void TMS::saveCustomers()
{

}

void TMS::saveDrivers()
{

}

void TMS::saveVehicles()
{

}

void TMS::saveRides()
{

}

void TMS::saveServices()
{

}


TMS::~TMS()
{
}



int main()
{
	TMS OBJ;
	OBJ.takeCustomers();
	for (int i = 0; i < 2; i++)
	{


		cout << " WELCOME TO USMAN'S RIDE MANAGEMENT SYSTEM " << endl;
		cout << endl << "Choose An Option From The Following Menu: " << endl;
		cout << endl;
		int choice;
		cout << "1. Add a new Customer" << endl;
		cout << "2. Add or remove a Driver" << endl;
		cout << "3. Add or remove a Vehicle" << endl;
		cout << "4. Print List of All Customers" << endl;
		cout << "5. Print List of All drivers" << endl;
		cout << "6. Print complete list of vehicles with details by their category." << endl;
		cout << "7. Print complete details and service history of a particular vehicle, (Provide vehicle ID)" << endl;
		cout << "8. Print complete history of a particular customer, (Provide customer ID)" << endl;
		cout << "9. Print complete history of a driver including services. (Provide driver ID)" << endl;
		cout << "10. Print list of all drivers who have ranking above 4.5." << endl;
		cout << "11. Print list of all drivers who have multiple licenses and their license information too." << endl;
		cout << "12. Print updated salary of all drivers based on their updated ranking." << endl;
		cout << "13. Add a Service request(ride or delivery) for a customer." << endl;
		cout << "14. When the customer cancels a booking, he will be charged 5 % of service fair cost on cancelation." << endl;
		cout << "15. Complete a service(Provide service ID)." << endl;
		cout << "16. Print details of all Customers, who used the same vehicle in a ride service on a different date." << endl;
		cout << "17. Print the List of all Drivers who completed delivery services on same days." << endl;
		cout << "18. Print details of all pending services on a particular date." << endl;
		cout << "19. Print details of all pending services of a particular driver." << endl;
		cout << "20. Print details of all canceled services by a customer." << endl;
		cout << endl << "Enter Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "ADDING NEW CUSTOMER: " << endl;
			OBJ.addNewCustomer();
			break;
		case 2:
			cout << "ADD OR REMOVE DRIVER: " << endl;
			OBJ.AddorRemoveDriver();
			break;
		case 3:
			cout << "ADD OR REMOVE VEHICLE:" << endl;
			OBJ.AddorRemoveVehicle();
			break;
		case 4:
			cout << "LIST OF ALL CUSTOMERS:" << endl;
			OBJ.printListOfCustomers();
			break;
		case 5:
			cout << "LIST OF ALL DRIVERS:" << endl;
			OBJ.printListOfDrivers();
			break;
		case 6:
			cout << "LIST OF VEHICLES:" << endl;
			OBJ.printListOfVehicles();
			break;
		case 7:
			cout << "HISTORY OF CUSTOMER:" << endl;
			OBJ.printServiceHistory();
			break;
		case 8:
			cout << "PRINTING CUSTOMER HISTORY:" << endl;
			OBJ.printHistoryCustomer();
			break;
		case 9:
			cout << "PRINTING DRIVER HISTORY:" << endl;
			OBJ.printHistoryDriver();
			break;
		case 10:
			cout << "PRINTING DRIVER LIST ABOVE RATING:" << endl;
			OBJ.printDriversListAboveRating();
			break;
		case 11:
			cout << "PRINTING LIST OF DRIVERS WITH MULTIPLE LISCENSES:" << endl;
			OBJ.printMultipleLiscenseDrivers();
			break;
		case 12:
			cout << "PRINTING UPDATED SALARY OF DRIVERS:" << endl;
			OBJ.printUpdatedSalaryDrivers();
			break;
		case 13:
			cout << "ADD A SERVICE:" << endl;
			OBJ.addService();
			break;
		case 14:
			cout << "CANCEL BOOKING:" << endl;
			OBJ.cancelBooking();
			break;
		case 15:
			cout << "COMPLETE A SERVICE:" << endl;
			OBJ.completeService();
			break;
		case 16:
			cout << "PRINT CUSTOMER DETAILS:" << endl;
			OBJ.printCustomerDetails();
			break;
		case 17:
			cout << "PRINT LIST DRIVERS WHO COMPLETED SERVICES:" << endl;
			OBJ.printListDriversCompletedService();
			break;
		case 18:
			cout << "PRINTING DETAILS OF PENDING SERVICES DATE:" << endl;
			OBJ.printDetailsPendingservicesDate();
			break;
		case 19:
			cout << "PRINTING DETAILS OF PENDING SERVICES DRIVER:" << endl;
			OBJ.printDetailsPendingservicesDriver();
			break;
		case 20:
			cout << "PRINT DETAILS OF CANCELLED SERVICES BY CUSTOMER:" << endl;
			OBJ.printDetailsCancelledService();
			break;
		default:
			cout << "Enter A Valid Choice (1-20)" << endl;
			break;
		}

	}

	//cout << endl << "Just Sample Testing Of file handling being done..." << endl;
	//int d, m, y, cid, age, nid;
	//char fn[100], ln[100];
	//ifstream obj;
	//obj.open("customer.txt");
	//while (!obj.eof())
	//{
	// obj.getline(fn, 100, ',');
	// obj.getline(ln, 100, ',');
	// ///*obj >> fn;
	// //obj >> ln;*/

	// obj >> d;
	// obj.ignore();
	// obj >> m;
	// obj.ignore();

	// obj >> y;
	// obj.ignore();

	// obj >> age;
	// obj.ignore();

	// obj >> nid;
	// obj.ignore();

	// obj >> cid;
	// cout << fn << " " << ln << " " << d << "/" << m << "/" << y << " " << age << " " << nid << " " << cid << endl;
	//}



	//obj.close();

	system("pause");
	return 0;
}
//
