//
//  Money.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/12.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include "Money.h"
#include "Sum.h"

Money::Money(int amount,const std::string& currency)
{
    this->amount = amount;
    this->currency = currency;
}

Money*
Money::dollar(int amount)
{
    return new Money(amount,"USD");
}
Money*
Money::franc(int amount)
{
    return new Money(amount,"CHF");
}
std::string Money::getCurrency()
{
    return currency;
}


Money*
Money::times(int multiplier)
{
    return new Money(this->amount * multiplier,this->currency);
}

Expression*
Money::plus(Money* addend)
{
    return new Sum(this,addend);
}

Money*
Money::reduce(std::string to)
{
    return new Money(this->amount,this->currency);
}