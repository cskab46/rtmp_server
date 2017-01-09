/*
MIT License

Copyright (c) 2016 ME_Kun_Han

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once
#include "rs_common.h"

class RsBuffer
{
private:
    std::string buffer;
public:
    RsBuffer();
    virtual ~RsBuffer();
public:
    int write_1_byte(uint8_t val);
    int write_2_byte(uint16_t val);
    int write_3_byte(uint32_t val);
    int write_4_byte(uint32_t val);
    int write_8_byte(uint64_t val);
    int write_bytes(char* buf, int size);

    uint8_t read_1_byte();
    uint16_t read_2_byte();
    uint32_t read_3_byte();
    uint32_t read_4_byte();
    uint64_t read_8_byte();
    int read_bytes(char* buf, int size);

    const char* dumps();
};