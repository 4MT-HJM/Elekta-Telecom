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
	void countBill();
	double totalBill;	
	User l_user;
	double InitCostForGoldPlan = 49.95;
	double InitCostForSilverPlan = 29.95;
	double OneAdditionalLineForGoldPlan = 14.50;
	double OneAdditionalLineForSilverPlan = 21.50;
};
