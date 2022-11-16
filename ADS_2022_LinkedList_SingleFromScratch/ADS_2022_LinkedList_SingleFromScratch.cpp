// ADS_2022_LinkedList_SingleFromScratch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SList.h"

void demoSListPrint()
{
	SList<int>* ptrSList = new SList<int>();
	ptrSList->append(10);
	ptrSList->append(20);
	ptrSList->append(30);
	ptrSList->append(40);
	ptrSList->append(50);
	ptrSList->print(ptrSList->getHead());

	delete ptrSList;
}
int main()
{
	demoSListPrint();
}