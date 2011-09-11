//
//  Sum.h
//  TDD-
//
//  Created by 陽介 石井 on 11/09/09.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Sum_h
#define TDD__Sum_h

#include "Expression.h"
#include "Money.h"

class Sum : public Expression {
public:
    Sum(Money* augend,Money* addend);
    ~Sum();
    
    Money*
    reduce(std::string to);
    
    Money* augend;
    Money* addend;
    
};

#endif
