//
//  Money.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/12.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include "Money.h"
#include "Dollar.h"
#include "Franc.h"

Money::Money(int amount,const std::string& currency)
{
    this->amount = amount;
    this->m_currency = currency;
}

Money*
Money::dollar(int amount)
{
    return new Dollar(amount,"USD");
}
Money*
Money::franc(int amount)
{
    return new Franc(amount,"CHF");
}
std::string Money::currency()
{
    return m_currency;
}


Money*
Money::times(int multiplier)
{
    return new Money(this->amount * multiplier,this->m_currency);
}