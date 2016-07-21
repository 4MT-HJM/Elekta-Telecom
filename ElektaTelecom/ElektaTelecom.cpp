#include "ElektaTelecom.hpp"

BillCounter::BillCounter(User p_user):totalBill(0.0),l_user(p_user)
{

}

BillCounter::~BillCounter()
{
}

void BillCounter::countBill()
{
	if(l_user.PlanType == GOLD) 
	{
		totalBill += InitCostForGoldPlan;
		totalBill += OneAdditionalLineForGoldPlan * (l_user.LineNum-1);
		if(l_user.MinuUsed > MinThOfGoldPlan)totalBill += OneExtraMinForGoldPlan * (l_user.MinuUsed - MinThOfGoldPlan);
	}
	else if(l_user.PlanType == SILVER) 
	{
		totalBill += InitCostForSilverPlan;
		totalBill += OneAdditionalLineForSilverPlan * (l_user.LineNum-1);
		if(l_user.MinuUsed > MinThofSilverPlan)totalBill += OneExtraMinForSilverPlan * (l_user.MinuUsed - MinThofSilverPlan);
	}

}

double BillCounter::getBill()
{
	countBill();
	return totalBill;
}
