//
//  Dollar.h
//  TDD-
//
//  Created by 陽介 石井 on 11/08/04.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Dollar_h
#define TDD__Dollar_h

#include "Money.h"

class Dollar :public Money{
public:
    Dollar(int amount,const std::string& currency);
    ~Dollar(){}
    
    Money* times(int multiplier); 
};


#endif
