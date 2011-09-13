//
//  Money.h
//  TDD-
//
//  Created by 陽介 石井 on 11/08/12.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Money_h
#define TDD__Money_h

#include<iostream>
#include "Expression.h"

class Bank;

class Money :public Expression
{
public:
    Money(int amount,const std::string& currency);
    virtual ~Money(){}
    
    bool operator==(const Money& money) const
    {
        return (this->amount == money.amount) && (this->currency == money.currency);
    }
    
    virtual Money* times(int multiplier);
    
    std::string getCurrency();
    
    static Money* dollar(int amount);
    static Money* franc(int amount);
    
    Expression*
    plus(Money* added);
    
    Money*
    reduce(Bank* bank,std::string to);
        
    int amount;
    std::string currency;
protected:
};

#endif
