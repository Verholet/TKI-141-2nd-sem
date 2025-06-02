#include <string>
#include <stdexcept>
#include "CppUnitTest.h"
#include "../Library/Stack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackTests
{
    TEST_CLASS(StackTests)
    {
    public:

        TEST_METHOD(DefaultConstructor)
        {
            Stack stack;
            Assert::IsTrue(stack.empty());
            Assert::AreEqual(0, (int)stack.size());
        }

        TEST_METHOD(InitializerListConstructor)
        {
            Stack stack = { 1, 2, 3 };
            Assert::AreEqual(3, (int)stack.size());
            Assert::AreEqual(3, stack.peek());
        }

        TEST_METHOD(PushAndPeek)
        {
            Stack stack;
            stack.push(10);
            Assert::AreEqual(10, stack.peek());
            stack.push(20);
            Assert::AreEqual(20, stack.peek());
        }

        TEST_METHOD(Pop)
        {
            Stack stack = { 5, 10, 15 };
            Assert::AreEqual(15, stack.pop());
            Assert::AreEqual(10, stack.pop());
            Assert::AreEqual(5, stack.pop());
            Assert::IsTrue(stack.empty());
        }

        TEST_METHOD(empty)
        {
            Stack stack;
            Assert::IsTrue(stack.empty());
            stack.push(1);
            Assert::IsFalse(stack.empty());
            stack.pop();
            Assert::IsTrue(stack.empty());
        }

        TEST_METHOD(CopyConstructor)
        {
            Stack stack1 = { 1, 2, 3 };
            Stack stack2(stack1);

            Assert::AreEqual(stack1.ToString(), stack2.ToString());
            stack1.pop();
            Assert::AreNotEqual(stack1.ToString(), stack2.ToString());
        }

        TEST_METHOD(MoveConstructor)
        {
            Stack stack1 = { 1, 2, 3 };
            Stack stack2(std::move(stack1));

            Assert::IsTrue(stack1.empty());
            Assert::AreEqual(std::string("[3, 2, 1]"), stack2.ToString());
        }

        TEST_METHOD(AssignmentOperator)
        {
            Stack stack1 = { 1, 2, 3 };
            Stack stack2;
            stack2 = stack1;

            Assert::AreEqual(stack1.ToString(), stack2.ToString());
        }

        TEST_METHOD(ToString)
        {
            Stack stack = { 1, 2, 3 };
            Assert::AreEqual(std::string("[3, 2, 1]"), stack.ToString());
        }
    };
}