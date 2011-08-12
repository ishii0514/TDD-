//
//  Money.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/12.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include "Money.h"


bool
Money::equals(const Money& money)
{
    return m_amount == money.m_amount && (typeid(*this) == typeid(money));
}