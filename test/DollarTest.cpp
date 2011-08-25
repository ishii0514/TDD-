//
//  DollarTest.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/04.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include "../src/Money.h"
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

TEST(DollarTest,Equality){
    Money* cmp_five = Money::dollar(5);
    Money* five = Money::dollar(5);
    Money* six = Money::dollar(6);
    Money* five_franc = Money::franc(5);

    EXPECT_TRUE(*cmp_five == *five);
    EXPECT_FALSE(*cmp_five == *six);
    
    EXPECT_FALSE(*five_franc == *five);
    
    delete cmp_five;
    delete five;
    delete six;
    delete five_franc;

    
}

TEST(MoneyTest, Currency){
    Money* one_d = Money::dollar(1);
    Money* one_f = Money::franc(1);

    EXPECT_EQ("USD",one_d->getCurrency());
    EXPECT_EQ("CHF",one_f->getCurrency());
    
    delete one_d;
    delete one_f;
    
    
}
TEST(MoneyTest, TempObject) {
    
    const Money& six_dol = Money(6,"USD");
    EXPECT_TRUE(six_dol == Money(6,"USD"));
    EXPECT_FALSE(six_dol == Money(5,"USD"));
    EXPECT_FALSE(six_dol == Money(6,"CHF"));
    
    const Money& six_fla = Money(6,"CHF");
    EXPECT_TRUE(six_fla == Money(6,"CHF"));
    EXPECT_FALSE(six_fla == Money(5,"CHF"));
    EXPECT_FALSE(six_fla == Money(6,"USD"));
    
}