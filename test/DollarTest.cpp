//
//  DollarTest.cpp
//  TDD-
//
//  Created by 陽介 石井 on 11/08/04.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#include <limits.h>
#include "../src/Dollar.h"
#include "gtest/gtest.h"


TEST(DollarTest, TEST001) {
    Dollar five(5);
    five.times(2);
    EXPECT_EQ(10, five.m_amount);

}