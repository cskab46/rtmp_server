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

#include "rs_kernel_io.h"
#include "rs_module_rtmp_conn.h"

class RsRtmpServer
{
private:
    RsTCPSocketIO *sock;
public:
    RsRtmpServer();
    virtual ~RsRtmpServer();
public:
    int initialize();
    static void on_connection(IRsReaderWriter* io, void* param);
private:
    std::vector<std::shared_ptr<RsRtmpConn>> conns;
public:
    int dispose();
};

class RsServer
{
private:
    RsRtmpServer _rtmp_server;
public:
    RsServer();
    virtual ~RsServer();
public:
    // the server is unique.
    static RsServer* getInstance();
public:
    int run();
    int exit();
};
