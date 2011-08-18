//
//  Franc.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/12.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include "Franc.h"


Franc::Franc(int amount)
{
    this->amount = amount;
}
//コピーコンストラクタ
Franc::Franc(const Franc& franc)
{
    this->amount = franc.amount;
}

Money*
Franc::times(int multiplier)
{
    return new Franc(this->amount * multiplier);
}
