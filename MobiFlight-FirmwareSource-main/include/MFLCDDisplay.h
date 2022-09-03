// MFLCDDisplay.h
//
/// \mainpage MFLCDDisplay module for MobiFlight Framework
/// \par Revision History
/// \version 1.0 Initial release
/// \author  Sebastian Moebius (info@mobiflight.com) DO NOT CONTACT THE AUTHOR DIRECTLY: USE THE LISTS
// Copyright (C) 2013-2014 Sebastian Moebius

#pragma once

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

/////////////////////////////////////////////////////////////////////
/// \class MFLCDDisplay MFLCDDisplay.h <MFLCDDisplay.h>
class MFLCDDisplay
{
public:
    MFLCDDisplay();
    void display(const char *string);
    void attach(byte address, byte cols, byte lines);
    void detach();
    void test();
    void powerSavingMode(bool state);

private:
    LiquidCrystal_I2C _lcdDisplay;
    bool _initialized;
    byte _address;
    byte _cols;
    byte _lines;

    void _printCentered(const char *str, uint8_t line);
};
