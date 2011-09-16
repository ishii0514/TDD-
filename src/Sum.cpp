//
//  Sum.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/09/09.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Sum.h"
#include "Money.h"
#include "Bank.h"

Sum::Sum(Expression* augend,Expression* addend)
{
    this->augend = augend->duplicate();
    this->addend = addend->duplicate();
}


Sum::~Sum()
{
    delete augend;
    delete addend;
}


Money* 
Sum::reduce(Bank* bank,std::string to)
{
    Money* augend_reduce= augend->reduce(bank,to);
    Money* addend_reduce= addend->reduce(bank,to);
    
    int amount = augend_reduce->amount + addend_reduce->amount;
    delete augend_reduce;
    delete addend_reduce;
    
    return new Money(amount,to);
}

Expression*
Sum::duplicate()
{
    return new Sum(this->augend,this->addend);
}
Expression*
Sum::plus(Expression* addend)
{
    return new Sum(this,addend);
}

Expression*
Sum::times(int multiplier){
    Expression* augendTimes = augend->times(multiplier);
    Expression* addendTimes = addend->times(multiplier);
    
    Expression* sumTimes = new Sum(augendTimes,addendTimes);
    
    delete augendTimes;
    delete addendTimes;
    
    return sumTimes;
}