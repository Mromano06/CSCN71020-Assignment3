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
		
		TEST_METHOD(P1RockP2Paper_PaperBeatsRock_ReturnP1)
		{
			char array1[8] = { 'r', 'o', 'c', 'k' };
			char array2[8] = { 'p', 'a', 'p', 'e', 'r' };
			char check = ' ';
			check = rockPaperScissors(array1, array2);

			Assert::AreEqual('1', check);
		}

		TEST_METHOD(PlayersBothInputRock_InputsEqual_ReturnDraw)
		{
			char array1[8] = { 'r', 'o', 'c', 'k' };
			char array2[8] = { 'r', 'o', 'c', 'k' };
			char check = ' ';
			check = rockPaperScissors(array1, array2);

			Assert::AreEqual('d', check);
		}

	};
}
