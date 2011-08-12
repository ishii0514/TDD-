//
//  Franc.h
//  TDD-
//
//  Created by 陽介 石井 on 11/08/12.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Franc_h
#define TDD__Franc_h

#include "Money.h"

class Franc : public Money{
public:
    Franc(int amount);
    Franc(const Franc& dollar);
    ~Franc(){}
    
    Franc times(int multiplier);
    
};

#endif
