#include "A.h"
#include <gtest/gtest.h>

class A_test : public testing::Test {
protected:
    A* _p_a;
    virtual void SetUp( ){
        this->_p_a = new A( 1 );
    }
    virtual void TearDown( ){
        delete this->_p_a;
    }
};


TEST_F( A_test, FirstAdd ){
    EXPECT_EQ( 1,_p_a->getA( ) );
    _p_a->add( 3 );
    EXPECT_EQ( 4,_p_a->getA( ) );
}


TEST_F( A_test, SecondAdd ){
    EXPECT_EQ( 1,_p_a->getA( ) );
    _p_a->add( 5 );
    EXPECT_EQ( 6,_p_a->getA( ) );
}
