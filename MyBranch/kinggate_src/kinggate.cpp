// MyBranch.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "kinggate.h"

void PEACH::buy(int num)
{

}

void PEACH::pick(DWORD dwNum)
{
	m_dwTotalNum -= dwNum;
}

DWORD PEACH::leave()
{
	return m_dwTotalNum;
}