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
		TEST_METHOD(TestSNodeValidChain) {
			SNode<int>* pNode1 = new SNode<int>(10);
			SNode<int>* pNode2 = new SNode<int>(20);
			SNode<int>* pNode3 = new SNode<int>(30);

			pNode1->setNext(pNode2); //ciaran -> odhran
			pNode2->setNext(pNode3); //odhran -> eimantas

			SNode<int>* pStart = pNode1;
			SNode<int>* pLast = pStart->getNext()->getNext();
			int target = 30;
			Assert::AreEqual(pLast->getData(), target);
		}

		TEST_METHOD(TestSNodeValid)
		{
			//'new' keyword creates a SNode in RAM and returns address
			SNode<int>* pNode = new SNode<int>(56);
			Assert::IsNotNull(pNode);
		}
		TEST_METHOD(TestSNodeValidGame) {
			Game gameStruct{ "max", 115, 23.25 };
			/*		Game gameStruct;
					gameStruct.username = "min";
					gameStruct.rank = 100;
					gameStruct.averageTTC = 110.5;
			*/
			//Game gameClass("jack", 120, 45.6);

			SNode<Game>* pNode = new SNode<Game>(gameStruct);
			Assert::IsNotNull(pNode);
		}
		TEST_METHOD(TestSNodeGetDataGame) {
			Game g1{ "max", 115, 23.25 };
			string target = "max";
			Assert::AreEqual(g1.username, target);
			Assert::AreEqual(g1.rank, 115);

			//Assert::AreEqual(g1.averageTTC, 23.25);

			double delta = abs(g1.averageTTC - 23.25);
			double EPSILON = 1E-6;
			Assert::IsTrue(delta <= EPSILON);
		}
		TEST_METHOD(TestSNodeGetData)
		{
			//pNode stores address of a SNode
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