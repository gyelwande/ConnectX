### Gangadhar Yelwande

### Bug in function: inBounds(int w, int h)

* Steps to reproduce:
  1)In this function there is bug. If you pass height as negative or invalid value
    the fucntion returns false. that is correct. 
  2)But when you pass negative or invalid value as width InBound is returning true. 
    But actually it should return the false value. In inbound function the correct 
    value true is overriden by incorrect value i.e. false.


### Expected Result:When width is passing as negative value the fucntion should return false.

### Actual Result:When width is passing as negative value the fucntion is returning true value.

### Ex:
 
* Working as per expectation i.e. test fails

TEST(ConnectXTest, bugTesting)
{
  ConnectX connectObj;
  ASSERT_EQ(-1,connectObj.at(2,-3));
}
-----------------------------------------------------------------------------
But for following scenario it should also fail but not failing

TEST(ConnectXTest, bugTesting)
{
  ConnectX connectObj;
  ASSERT_EQ(-1,connectObj.at(-2,3));
}

### Bug 2:

* There is 2nd bug in function placePiece() beacuse in if condition at(column,i)==EMPTY always returns false
  so inBounds(column,i) condition is not executed. 

