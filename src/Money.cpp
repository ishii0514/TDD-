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


Money*
Money::dollar(int amount)
{
    return new Dollar(amount);
}
Money*
Money::franc(int amount)
{
    return new Franc(amount);
}
