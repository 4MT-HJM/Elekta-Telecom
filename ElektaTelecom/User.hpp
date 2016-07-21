#pragma once

typedef enum PlanTypeEnum
{
	GOLD,
	SILVER
}PlanTypeEnum;

struct User
{
  User(PlanTypeEnum p_PlanType,int p_LineNum, int p_MinuUsed):PlanType(p_PlanType), LineNum(p_LineNum),MinuUsed(p_MinuUsed) {}
  PlanTypeEnum PlanType;
  int LineNum;
  int MinuUsed; 
};

