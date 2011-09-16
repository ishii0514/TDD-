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

class Money;
class Bank;

class Sum : public Expression {
public:
    Sum(Expression* augend,Expression* addend);
    ~Sum();
    
    Money*
    reduce(Bank* bank,std::string to);
    
    Expression*
    duplicate();
    
    Expression*
    plus(Expression* addend);
    
    Expression* augend;
    Expression* addend;
    
};

#endif
