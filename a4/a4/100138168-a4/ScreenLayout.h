//
//  ScreenLayout.hpp
//  a4
//
//  Created by Cornelius Smith on 2019-03-15.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#ifndef ScreenLayout_h
#define ScreenLayout_h

#include <stdio.h>
#include "Layout.h"
class ScreenLayout : public Layout
{
public:
    ScreenLayout(){};
    void setWidth(int w);
    void setColumns(int n);
    void putHeader() const;
    void putLineStart() const;
    void putElement(const string& e, int w) const;
    void putElement(int n, int w) const;
    void putLineEnd() const;
    void putFooter() const;
protected:
    int width;
    int columns;
};
#endif /* ScreenLayout_h */
