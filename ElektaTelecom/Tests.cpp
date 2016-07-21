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

TEST(tests, BillForGoldAndSilverAccountWithAdditionalLineWithoutUse)
{
	User user_1(SILVER, 1 ,0);
	BillCounter bill_1(user_1);
	double expectBill_1 = 29.95;

  User user_2(GOLD, 2 ,0);
  BillCounter bill_2(user_2);
  double expectBill_2 = 49.95 + 14.50;

  User user_3(SILVER, 3 ,0);
  BillCounter bill_3(user_3);
  double expectBill_3 = 29.95 + 2*21.50;

	ASSERT_EQ(expectBill_1, bill_1.getBill());
	ASSERT_EQ(expectBill_2, bill_2.getBill());
	ASSERT_EQ(expectBill_3, bill_3.getBill());

}

TEST(tests, BillForGoldAndSilverAccountWithExtraMin)
{
  User user_1(SILVER, 1 ,520);
  BillCounter bill_1(user_1);
  double expectBill_1 = 29.95 + 20*0.54;

  User user_2(GOLD, 3 ,1002);
  BillCounter bill_2(user_2);
  double expectBill_2 = 49.95 + 2*14.50 + 2*0.45;

	ASSERT_EQ(expectBill_1, bill_1.getBill());
	ASSERT_EQ(expectBill_2, bill_2.getBill());

}


