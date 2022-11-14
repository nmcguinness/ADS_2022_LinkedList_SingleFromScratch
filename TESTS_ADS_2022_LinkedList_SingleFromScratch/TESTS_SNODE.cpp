#include "pch.h"
#include "CppUnitTest.h"
#include "Game.h"
#include "../ADS_2022_LinkedList_SingleFromScratch/SNode.h"
//#include "../ADS_2022_LinkedList_SingleFromScratch/SNode.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TESTSADS2022LinkedListSingleFromScratch
{
	TEST_CLASS(TESTS_SNODE)
	{
	public:
		TEST_METHOD(TestSNodeValid)
		{
			//'new' keyword creates a SNode in RAM and returns address
			SNode<int>* pNode = new SNode<int>(56);
			Assert::IsNotNull(pNode);
		}
		TEST_METHOD(TestSNodeValidGame) {
			Game g1{ "max", 115, 23.25 };
			//Game g2;
			//g2.username = "min";
			//g2.rank = 100;
			//g2.averageTTC = 110.5;

			SNode<Game>* pNode = new SNode<Game>(g1);
			Assert::IsNotNull(pNode);
		}
		TEST_METHOD(TestSNodeGetDataGame) {
			Game g1{ "max", 115, 23.25 };
			string target = "max";
			Assert::AreEqual(g1.username, target);
			Assert::AreEqual(g1.rank, 115);

			double delta = abs(g1.averageTTC - 23.25);
			double EPSILON = 1E-6;
			Assert::IsTrue(delta <= EPSILON);
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