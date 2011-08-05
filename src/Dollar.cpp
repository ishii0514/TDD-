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

Dollar*
Dollar::times(int multiplier)
{
    Dollar* product = new Dollar(m_amount *multiplier);
    return product;
}
bool
Dollar::equals(const Dollar& dollar){
    return m_amount == dollar.m_amount;
}