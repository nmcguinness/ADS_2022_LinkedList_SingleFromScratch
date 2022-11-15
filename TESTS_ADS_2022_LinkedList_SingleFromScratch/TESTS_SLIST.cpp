#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_2022_LinkedList_SingleFromScratch/SNode.h"
#include "../ADS_2022_LinkedList_SingleFromScratch/SList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TESTSADS2022LinkedListSingleFromScratch
{
	TEST_CLASS(TESTS_SLIST)
	{
	public:
		TEST_METHOD(TestValidSList) {
			//test if constructor works!
			SList<int>* ptrSList = new SList<int>();
			Assert::IsNotNull(ptrSList);
			Assert::IsTrue(ptrSList->isEmpty());
			//Assert::AreEqual(ptrSList->getSize(), 0);
		}
		TEST_METHOD()
	};
}