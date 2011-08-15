//
//  DollarTest.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/04.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include "../src/Money.h"
#include "../src/Dollar.h"
#include "../src/Franc.h"
#include "gtest/gtest.h"


TEST(DollarTest, MultiPlication) {

    
    Dollar five(5);
    EXPECT_EQ(Dollar(10),five.times(2));
    EXPECT_EQ(Dollar(15),five.times(3));

}
TEST(FrancTest, MultiPlication) {
    
    Franc five(5);
    EXPECT_EQ(Franc(10),five.times(2));
    EXPECT_EQ(Franc(15),five.times(3));
}
TEST(DollarTest,Equality){
    EXPECT_TRUE(Dollar(5)==Dollar(5));
    EXPECT_FALSE(Dollar(5)==Dollar(6));
    EXPECT_TRUE(Franc(5)==Franc(5));
    EXPECT_FALSE(Franc(5)==Franc(6));
    
    EXPECT_FALSE(Franc(5)==Dollar(5));
    
}
TEST(MoneyTest, TempObject) {
    
    const Money& six_dol = Dollar(6);
    EXPECT_TRUE(six_dol==Dollar(6));
    EXPECT_FALSE(six_dol==Dollar(5));
    EXPECT_FALSE(six_dol==Franc(6));
    
    const Money& six_fla = Franc(6);
    EXPECT_TRUE(six_fla==Franc(6));
    EXPECT_FALSE(six_fla==Franc(5));
    EXPECT_FALSE(six_fla==Dollar(6));
    
}