#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace GLRT;

namespace UnitTestsCX
{
    TEST_CLASS(UnitTestCX)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            // TODO: Your test code here
			Mesh ^ mesh = ref new Mesh();
			Assert::AreEqual(43, mesh->GetMagicNumber());
        }
    };
}