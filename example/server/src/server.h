/*
 * description: 初始版本就是统计数据展示，将来可以作为meta，控制中心
 *
*/

#ifndef __META_SERVER_H__
#define __META_SERVER_H__

class Server
{
public:
    Server();
    ~Server();

    void open();
    void close();
private:

private:

    bool running_;
};

#endif
