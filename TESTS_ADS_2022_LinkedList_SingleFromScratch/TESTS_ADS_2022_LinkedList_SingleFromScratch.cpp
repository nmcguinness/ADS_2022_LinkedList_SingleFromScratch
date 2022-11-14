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
			SNode* pNode = new SNode(56);
			Assert::IsNotNull(pNode);
		}

		TEST_METHOD(TestSNodeGetData)
		{
			SNode* pNode = new SNode(56);
			Assert::AreEqual(56, pNode->getData());
		}

		TEST_METHOD(TestSNodeGetNext)
		{
			SNode* pNode = new SNode(56);
			Assert::IsNull(pNode->getNext());
		}
	};
}