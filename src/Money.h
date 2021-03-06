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
    
    bool operator==(const Expression& expression) const
    {
        //親クラスから比較も可能なようにExpressionで受ける
        const Money* money =  dynamic_cast<const Money*>(&expression);
        return (this->amount == money->amount) && (this->currency == money->currency);
    }
    
    Expression* times(int multiplier);
    
    std::string getCurrency();
    
    static Money* dollar(int amount);
    static Money* franc(int amount);
    
    Expression*
    plus(Expression* addend);
    
    Money*
    reduce(Bank* bank,std::string to);
    
    Expression*
    duplicate();
        
    int amount;
    std::string currency;
protected:
};

#endif
