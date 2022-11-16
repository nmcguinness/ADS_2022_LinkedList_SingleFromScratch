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

			delete ptrSList;
		}
		TEST_METHOD(TestAppendValid)
		{
			//make list
			SList<int>* ptrSList = new SList<int>();
			//append
			ptrSList->append(10);
			//size
			Assert::IsFalse(ptrSList->isEmpty());
			Assert::AreEqual(ptrSList->getSize(), 1);
			//append
			ptrSList->append(20);
			//size
			Assert::AreEqual(ptrSList->getSize(), 2);

			//get last data and check
			int data = ptrSList->getHead()->getNext()->getData();
			Assert::AreEqual(data, 20);

			//another way to get the last data and check
			SNode<int>* pLast = ptrSList->getHead()->getNext();
			Assert::AreEqual(pLast->getData(), 20);

			delete pLast;
			delete ptrSList;
		}

		TEST_METHOD(TestFindNodeValid)
		{
			//make list
			SList<int>* ptrSList = new SList<int>();
			ptrSList->append(10);
			ptrSList->append(20);
			ptrSList->append(30);
			ptrSList->append(40);
			ptrSList->append(50);

			ptrSList->print(ptrSList->getHead());

			delete ptrSList;
		}
	};
}