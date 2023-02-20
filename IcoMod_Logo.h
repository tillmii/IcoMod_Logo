/*
  IcoMod_Logo.cpp - IcoDesk Module to display the animated Logo.
  Created by Till Michels, February 2, 2023.
*/

#ifndef IcoMod_Logo_h
#define IcoMod_Logo_h

#include "Arduino.h"
#include "IcoMod.h"
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

class IcoMod_Logo : public IcoMod
{
  public:
    IcoMod_Logo(Adafruit_ST7735* tft, uint16_t color);
    void onClick();
    void initialize();
    void refresh();
  private:
    int _color;
    bool _animate;
    int _polygons[10][6];
    unsigned long _animTime;
};

#endif