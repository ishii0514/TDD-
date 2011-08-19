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
    
    Money* five = Money::dollar(5);
    Money* ten = five->times(2);
    Money* fifteen = five->times(3);
    Money* cmp_ten = Money::dollar(10);
    Money* cmp_fifteen = Money::dollar(15);
    
    EXPECT_EQ(*cmp_ten,*ten);
    EXPECT_EQ(*cmp_fifteen,*fifteen);
    
    delete cmp_ten;
    delete cmp_fifteen;
    delete ten;
    delete fifteen;
    delete five;

}
TEST(FrancTest, MultiPlication) {
    
    Money* five = Money::franc(5);
    Money* ten = five->times(2);
    Money* fifteen = five->times(3);
    Money* cmp_ten = Money::franc(10);
    Money* cmp_fifteen = Money::franc(15);
    
    EXPECT_EQ(*cmp_ten,*ten);
    EXPECT_EQ(*cmp_fifteen,*fifteen);
    
    delete cmp_ten;
    delete cmp_fifteen;
    delete five;
    delete ten;
    delete fifteen;
}
TEST(DollarTest,Equality){
    Money* cmp_five = Money::dollar(5);
    Money* five = Money::dollar(5);
    Money* six = Money::dollar(6);
    Money* cmp_five_franc = Money::franc(5);
    Money* five_franc = Money::franc(5);
    Money* six_franc = Money::franc(6);

    EXPECT_TRUE(*cmp_five == *five);
    EXPECT_FALSE(*cmp_five == *six);
    EXPECT_TRUE(*cmp_five_franc == *five_franc);
    EXPECT_FALSE(*cmp_five_franc == *six_franc);
    
    EXPECT_FALSE(*five_franc == *five);
    
    delete cmp_five;
    delete five;
    delete six;
    delete cmp_five_franc;
    delete five_franc;
    delete six_franc;
    
}
TEST(MoneyTest,DifferentClassEquality){
    Money* cmp_ten = new Money(10,"CHF");
    Money* ten = new Franc(10,"CHF");
    
    EXPECT_TRUE(*cmp_ten == *ten);
    
    delete cmp_ten;
    delete ten;
    
}
TEST(MoneyTest, Currency){
    Money* one_d = Money::dollar(1);
    Money* one_f = Money::franc(1);

    EXPECT_EQ("USD",one_d->currency());
    EXPECT_EQ("CHF",one_f->currency());
    
    delete one_d;
    delete one_f;
    
    
}
TEST(MoneyTest, TempObject) {
    
    const Money& six_dol = Dollar(6,"USD");
    EXPECT_TRUE(six_dol == Dollar(6,"USD"));
    EXPECT_FALSE(six_dol == Dollar(5,"USD"));
    EXPECT_FALSE(six_dol == Franc(6,"CHF"));
    
    const Money& six_fla = Franc(6,"CHF");
    EXPECT_TRUE(six_fla == Franc(6,"CHF"));
    EXPECT_FALSE(six_fla == Franc(5,"CHF"));
    EXPECT_FALSE(six_fla == Dollar(6,"USD"));
    
}