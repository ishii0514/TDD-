//
//  Dollar.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/04.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include "Dollar.h"

Dollar::Dollar(int amount)
{
    m_amount = amount;
}

void
Dollar::times(int multiplier)
{
    m_amount *= multiplier;
}