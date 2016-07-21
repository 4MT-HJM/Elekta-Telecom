#include "ElektaTelecom.hpp"

BillCounter::BillCounter(User p_user):l_user(p_user)
{

}

BillCounter::~BillCounter()
{
}

double BillCounter::getBill()
{
	if(l_user.PlanType == GOLD) return 49.95;
	else return 0;
}
