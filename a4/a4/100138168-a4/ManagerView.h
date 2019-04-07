//
//  ManagerView.hpp
//  a4
//
//  Created by Cornelius Smith on 2019-03-15.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#ifndef ManagerView_h
#define ManagerView_h

#include <stdio.h>
#include "View.h"

class ManagerView : public View
{
public:
    ManagerView(Layout * lay);
    void render(void);
    void add(Product *products, int quant);
};
#endif /* ManagerView_h */
