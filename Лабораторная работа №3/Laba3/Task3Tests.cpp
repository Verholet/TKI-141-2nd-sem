#include "CppUnitTest.h"
#include "../laba 3/point.h"
#include "../laba 3/oval.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task3Tests
{
    TEST_CLASS(PointTests)
    {
    public:

        TEST_METHOD(PointConstructor_Default_CreatesZeroPoint)
        {
            // Arrange & Act
            Point p;

            // Assert
            Assert::AreEqual(p.x(), 0);
            Assert::AreEqual(p.y(), 0);
        }

        TEST_METHOD(PointConstructor_WithParameters_CreatesCorrectPoint)
        {
            // Arrange
            const int x = 5;
            const int y = 10;

            // Act
            Point p(x, y);

            // Assert
            Assert::AreEqual(p.x(), x);
            Assert::AreEqual(p.y(), y);
        }

        TEST_METHOD(PointEqualityOperator_EqualPoints_ReturnsTrue)
        {
            // Arrange
            Point p1(3, 4);
            Point p2(3, 4);

            // Act & Assert
            Assert::IsTrue(p1 == p2);
        }

        TEST_METHOD(PointInequalityOperator_DifferentPoints_ReturnsTrue)
        {
            // Arrange
            Point p1(3, 4);
            Point p2(1, 2);

            // Act & Assert
            Assert::IsTrue(p1 != p2);
        }
    };

    TEST_CLASS(OvalTests)
    {
    public:

        TEST_METHOD(OvalConstructor_WithPoints_CreatesCorrectOval)
        {
            // Arrange
            Point f1(10, 20);
            Point f2(30, 20);
            const int height = 60;
            const int width = 40;

            // Act
            Oval oval(f1, f2, height, width);

            // Assert
            Assert::AreEqual(oval.ToString(), std::string("f1 =(10, 20), f2 =(30, 20)"));
        }

        TEST_METHOD(OvalConstructor_WithCoordinates_CreatesCorrectOval)
        {
            // Arrange
            const int x1 = 10, y1 = 20, x2 = 30, y2 = 20;
            const int height = 60;
            const int width = 40;

            // Act
            Oval oval(x1, y1, x2, y2, height, width);

            // Assert
            Assert::AreEqual(oval.ToString(), std::string("f1 =(10, 20), f2 =(30, 20)"));
        }

        TEST_METHOD(OvalConstructor_InvalidPoints_ThrowsException)
        {
            // Arrange
            Point f1(-1, 20); // Invalid x coordinate
            Point f2(30, 20);
            const int height = 60;
            const int width = 40;

            // Act & Assert
            auto func = [f1, f2, height, width] { Oval oval(f1, f2, height, width); };
            Assert::ExpectException<const char*>(func);
        }

        TEST_METHOD(OvalSetPoints_ValidPoints_SetsCorrectly)
        {
            // Arrange
            Oval oval(60, 40);
            Point f1(10, 20);
            Point f2(30, 20);

            // Act
            oval.set_points(f1, f2);

            // Assert
            Assert::AreEqual(oval.ToString(), std::string("f1 =(10, 20), f2 =(30, 20)"));
        }

        TEST_METHOD(OvalSetPoints_InvalidPoints_ThrowsException)
        {
            // Arrange
            Oval oval(60, 40);
            Point f1(10, 70); // y coordinate exceeds height
            Point f2(30, 20);

            // Act & Assert
            auto func = [&oval, f1, f2] { oval.set_points(f1, f2); };
            Assert::ExpectException<const char*>(func);
        }
    };
}