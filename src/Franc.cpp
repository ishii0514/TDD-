//
//  Franc.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/12.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include "Franc.h"

Franc::Franc(int amount,const std::string& currency)
:Money(amount,currency)
{}

Money*
Franc::times(int multiplier)
{
    return Money::franc(this->amount * multiplier);
}
