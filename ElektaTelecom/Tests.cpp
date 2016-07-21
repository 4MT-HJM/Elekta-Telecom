#include <gtest/gtest.h>
#include "ElektaTelecom.hpp"
#include "User.hpp"
#include <memory>

TEST(tests, BillForaGoldAccountWithOneLineAndUsesLessThanOneThousandMin)
{
	User user_1(GOLD, 1 ,0);
	BillCounter bill_1(user_1);
	double expectBill = 49.95;
	ASSERT_EQ(expectBill, bill_1.getBill() );

}
