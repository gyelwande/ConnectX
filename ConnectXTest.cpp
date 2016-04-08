/**
 * Unit Tests for ConnectX class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "ConnectX.h"

class ConnectXTest : public ::testing::Test
{
	protected:
		ConnectXTest(){}
		virtual ~ConnectXTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};


TEST(ConnectXTest, sanityCheck)
{
	 ASSERT_TRUE(true);
}

//It tests that values provided for width and height are not valid
TEST(ConnectXTest, outOfBounds)
{
  ConnectX connectObj;
  ASSERT_EQ(-1,connectObj.at(20,45));
}

//It tests that the values provided for at() fucntion are within the
// range of width and height
TEST(ConnectXTest, inBounds)
{
  ConnectX connectObj;
  ASSERT_EQ(0,connectObj.at(2,3));
}

//It test that the location provided for piece is valid location
TEST(ConnectXTest, piecePlacedAtValidLocation)
{
  ConnectX connectObj;
  connectObj.placePiece(5);
  ASSERT_EQ(2,connectObj.at(5,5));
}

//This test is used to check whose turn is next
TEST(ConnectXTest, checkWhoseTurn)
{
  ConnectX connectObj;
  ASSERT_EQ(2,connectObj.whoseTurn());
}

//It test that when passing values to constructor it chnages the board
//structure accordingly
TEST(ConnectXTest, checkForConstructor)
{
  ConnectX connectObj(-1,8,8);
  connectObj.showBoard();
}
