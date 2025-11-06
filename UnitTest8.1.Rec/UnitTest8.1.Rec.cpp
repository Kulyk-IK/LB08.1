#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../LB08.1.Rec/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81Rec
{
	TEST_CLASS(UnitTest81IT)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			std::string string = "Hello!!! Wait, what!! This is absolutely insane!!!!!! Wow!!!!";
			bool isContains = false;
			std::vector<int> vector;
			getTripleExlamationMarks(string, string.size(), isContains, vector);

			std::string changed_string = changeString(string, vector, (int)vector.size() - 1);
			std::string expected_string = "Hello** Wait, what!! This is absolutely insane**** Wow**!";

			Assert::AreEqual(changed_string == expected_string, true);
		}
	};
}
