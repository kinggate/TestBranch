// MyBranch.cpp : ����Ӧ�ó������ڵ㡣
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