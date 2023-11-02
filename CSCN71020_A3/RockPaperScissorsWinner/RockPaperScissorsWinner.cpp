#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* RockPaperScissors(char* Player1, char* Player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsWinner
{
	TEST_CLASS(RockPaperScissorsWinner)
	{
	public:
		TEST_METHOD(InvalidInput)
		{
			char* Result;
			Result = RockPaperScissors("rock", "scissors");
			Assert::AreEqual("Invalid", Result);
		}

		TEST_METHOD(Player1Winner)
		{
			char* Result;
			Result = RockPaperScissors("Rock", "Scissors");
			Assert::AreEqual("Player1", Result);
		}

		TEST_METHOD(Player2Winner)
		{
			char* Result;
			Result = RockPaperScissors("Rock", "Paper");
			Assert::AreEqual("Player2", Result);
		}

		TEST_METHOD(Draw)
		{
			char* Result;
			Result = RockPaperScissors("Rock", "Rock");
			Assert::AreEqual("Draw", Result);
		}
	};
}
