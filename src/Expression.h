//
//  Expression.h
//  TDD-
//
//  Created by 陽介 石井 on 11/09/02.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Expression_h
#define TDD__Expression_h

class Money;
class Bank; 

class Expression
{
public:
    virtual Money*
    reduce(Bank* bank, std::string to) =0;
    
    virtual Expression*
    duplicate()=0;
    
    virtual Expression*
    plus(Expression* addend)=0;
    
    virtual Expression*
    times(int multiplier) =0;
    
};

#endif
