#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_2022_LinkedList_SingleFromScratch/SNode.h"
//#include "../ADS_2022_LinkedList_SingleFromScratch/SNode.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TESTSADS2022LinkedListSingleFromScratch
{
	TEST_CLASS(TESTSADS2022LinkedListSingleFromScratch)
	{
	public:

		TEST_METHOD(TestSNodeValid)
		{
			//'new' keyword creates a SNode in RAM and returns address
			SNode<int>* pNode = new SNode<int>(56);
			Assert::IsNotNull(pNode);
		}

		TEST_METHOD(TestSNodeValidGame) {
		}

		TEST_METHOD(TestSNodeGetData)
		{
			SNode<int>* pNode = new SNode<int>(56);
			Assert::AreEqual(56, pNode->getData());
		}

		TEST_METHOD(TestSNodeGetNext)
		{
			SNode<int>* pNode = new SNode<int>(56);
			Assert::IsNull(pNode->getNext());
		}
	};
}