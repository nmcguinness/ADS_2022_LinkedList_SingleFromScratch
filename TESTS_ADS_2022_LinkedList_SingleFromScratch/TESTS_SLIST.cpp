#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_2022_LinkedList_SingleFromScratch/SNode.h"
#include "../ADS_2022_LinkedList_SingleFromScratch/SList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TESTSADS2022LinkedListSingleFromScratch
{
	TEST_CLASS(TESTS_SLIST)
	{
		//static SList<int> singleList;

	public:
		TEST_CLASS_INITIALIZE(InitializeSList)
		{
			//add core nodes for testing
		}

		TEST_METHOD(TestValidSList)
		{
			SList<int>* ptrSingleList = new SList<int>();
			Assert::IsNotNull(ptrSingleList);
		}
		TEST_METHOD(TestValidAppend)
		{
		}
	};
}