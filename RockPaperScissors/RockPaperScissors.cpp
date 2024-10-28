#include "pch.h"
#include "CppUnitTest.h"

extern "C" char rockPaperScissors(char[], char[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissors
{
	TEST_CLASS(RockPaperScissors)
	{
	public:

		// title of all tests (WhatIsUnderTest_Condition_ExpectedBehaviour)
		
		TEST_METHOD(P1RockP2Paper_PaperBeatsRock_ReturnP2)
		{
			char array1[] = { 'r', 'o', 'c', 'k' };
			char array2[] = { 'p', 'a', 'p', 'e', 'r' };
			char check = ' ';
			check = rockPaperScissors(array1, array2);

			Assert::AreEqual('2', check);
		}

		TEST_METHOD(PlayersBothInputRock_InputsEqual_ReturnDraw)
		{
			char array1[] = { 'r', 'o', 'c', 'k' };
			char array2[] = { 'r', 'o', 'c', 'k' };
			char check = ' ';
			check = rockPaperScissors(array1, array2);

			Assert::AreEqual('d', check);
		}

		TEST_METHOD(P1PaperP2Rock_RockLosesToPaper_ReturnP2)
		{
			char array1[] = { 'p', 'a', 'p', 'e', 'r' };
			char array2[] = { 's', 'c', 'i', 's', 's', 'o', 'r', 's'};
			char check = ' ';
			check = rockPaperScissors(array1, array2);

			Assert::AreEqual('2', check);
		}

		TEST_METHOD(P1FortniteP2Pork_NeitherValid_ReturnInvalid)
		{
			char array1[] = { 's', 'c', 'i', 's', 's', 'o', 'r', 's' };
			char array2[] = { 'p', 'a', 'p', 'e', 'r' };
			char check = ' ';
			check = rockPaperScissors(array1, array2);

			Assert::AreEqual('i', check);
		}

	};
}
