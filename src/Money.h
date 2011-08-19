//
//  Money.h
//  TDD-
//
//  Created by 陽介 石井 on 11/08/12.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Money_h
#define TDD__Money_h

#include<typeinfo>
#include<iostream>

class Dollar;

class Money
{
public:
    Money(int amount,const std::string& currency);
    virtual ~Money(){}
    
    bool operator==(const Money& money) const
    {
        return (this->amount == money.amount) && (typeid(*this) == typeid(money));
    }
    
    virtual Money* times(int amount) =0;
    
    std::string currency();
    
    static Money* dollar(int amount);
    static Money* franc(int amount);
protected:    
    int amount;
    std::string m_currency;
};

#endif
