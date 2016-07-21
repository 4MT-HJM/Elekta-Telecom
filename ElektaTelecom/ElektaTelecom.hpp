#pragma once
#include "User.hpp"

class IBillCounter
{
public:
	IBillCounter() = default;
	virtual double getBill() = 0;
	virtual ~IBillCounter() = default;	
};

class BillCounter : public IBillCounter
{
public:
	BillCounter(User p_user);
	double getBill();
	~BillCounter();

private:
	double totalBill;	
	User l_user;
};
