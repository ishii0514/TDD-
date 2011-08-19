//
//  Dollar.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/04.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include "Dollar.h"

Dollar::Dollar(int amount,const std::string& currency)
:Money(amount,currency)
{
}

Money*
Dollar::times(int multiplier)
{
    return Money::dollar(this->amount * multiplier);
}
