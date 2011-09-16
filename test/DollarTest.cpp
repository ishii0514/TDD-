//
//  DollarTest.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/04.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include "../src/Money.h"
#include "../src/Bank.h"
#include "../src/Expression.h"
#include "../src/Sum.h"
#include "gtest/gtest.h"


TEST(DollarTest, MultiPlication) {
    
    Money* five = Money::dollar(5);
    Expression* ten = five->times(2);
    Expression* fifteen = five->times(3);
    Money* cmp_ten = Money::dollar(10);
    Money* cmp_fifteen = Money::dollar(15);
    
    EXPECT_EQ(*cmp_ten,*(Money*)ten);
    EXPECT_EQ(*cmp_fifteen,*(Money*)fifteen);
    
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

TEST(MoneyTest, SimpleAddition) {
    Money* five = Money::dollar(5);
    Money* ten = Money::dollar(10);
    
    Expression* sum = five->plus(five);
    
    
    Bank* bank = new Bank();
    Money* reduced = bank->reduce(sum,"USD");
    EXPECT_EQ(*ten,*reduced);
    
    delete five;
    delete ten;
    delete sum;
    delete reduced;
}
TEST(MoneyTest, PlusReturnSum) {
    Money* five = Money::dollar(5);
    Expression* result = five->plus(five);
    Sum* sum = (Sum*)result;
    EXPECT_EQ(*five,*(Money*)(sum->augend));
    EXPECT_EQ(*five,*(Money*)(sum->addend));
    
    delete five;
    delete result;
    
}

TEST(MoneyTest, ReduceSum) {
    Money* three = Money::dollar(3);
    Money* four = Money::dollar(4);
    Money* seven = Money::dollar(7);
    
    Expression* sum = new Sum(three,four);
    Bank* bank= new Bank();
    
    Money* result = bank->reduce(sum,"USD");
    
    
    EXPECT_EQ(*seven,*result);
    
    
    delete three;
    delete four;
    delete seven;
    delete sum;
    delete bank;
    delete result;
    
}
TEST(MoneyTest, ReduceMoney) {
    Money* one =Money::dollar(1);
    
    Bank* bank = new Bank();
    Money* result = bank->reduce(one,"USD");
    
    EXPECT_EQ(*one,*result);
    
    delete one;
    delete bank;
    delete result;
                                 
}
TEST(MoneyTest, ReduceMoneyDifferentCurrency) {
    Money* two = Money::franc(2);
    Money* one = Money::dollar(1);
    
    Bank* bank = new Bank();
    bank->addRate("CHF","USD",2);
    Money* result = bank->reduce(two,"USD");
    
    EXPECT_EQ(*one,*result);
    
    delete one;
    delete two;
    delete bank;
    delete result;
                                
}
TEST(MoneyTest,IdentityRate)
{
    Bank bank;
    EXPECT_EQ(1,bank.rate("USD","USD"));
}
TEST(MoneyTest,MixedAddition)
{
    Money* ten = Money::dollar(10);
    
    Expression* fiveBucks = Money::dollar(5);
    Expression* tenFrancs = Money::franc(10);
    
    Bank bank;
    bank.addRate("CHF","USD",2);
    
    Expression* sum = fiveBucks->plus(tenFrancs);
    Money* result = bank.reduce(sum,"USD");
    
    EXPECT_EQ(*ten,*result);
    
    delete sum;
    delete ten;
    delete result;
    delete fiveBucks;
    delete tenFrancs;

}