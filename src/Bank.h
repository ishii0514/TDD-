//
//  Bank.h
//  TDD-
//
//  Created by 陽介 石井 on 11/09/02.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#ifndef TDD__Bank_h
#define TDD__Bank_h

#include <map>

class Money;
class Expression;


class Bank
{
public:
    Money* reduce(Expression* source,std::string to);
    
    int rate(std::string from, std::string to);
    
    void addRate(std::string from, std::string to,int rate);
private:
    class Pair{
    public:
        Pair(std::string from,std::string to)
        {
            this->from = from;
            this->to =to;
        }
        bool operator==(const Pair& pair) const
        {
            return (this->from == pair.from) && (this->to == pair.to);
        }
        bool operator<(const Pair& pair) const
        {
            if (this->from < pair.from){
                return true;
            }else if(this->from == pair.from){
                if (this->to < pair.to)
                    return true;
            }
            return  false;
        }
    private:
        std::string from;
        std::string to;
    };
    
    std::map<Pair,int> rates;

};



#endif
