20171224
/*
move to GitHub to keep learning anywhere.

"关于HTTP协议，一篇就够了"https://www.cnblogs.com/ranyonsue/p/5984001.html
"HTTP 协议入门"http://www.ruanyifeng.com/blog/2016/08/http.html
to read
"HTTP协议详解"https://www.cnblogs.com/li0803/archive/2008/11/03/1324746.html
    利用telnet观察http协议的通信过程 //no telnet default in win7, can open from Control Panel/Programs and Features/Turn Windows features on or off/Telnet Client
    easier than by wireshark. tried and fail. wireshark still needed.
"图解HTTP.pdf"
P7/220 可以说，web是建立在HTTP协议上通信的。
P8/220 3项WWW构建技术：HTML/HTTP/URL
HTTP 1.0 RFC1945， HTTP 1.1 RFC2068/2616 HTTP 2.0 still ongoing
P16/220 与HTTP关系密切的协议：IP/TCP/DNS //hlhu: TCP三次握手过程
P23/220 绝对URI格式
    http://user:pass@www.example.com:80/dir/index.htm?uid=1#ch1
    |  1  |    2    |       3       |4 | 5 |    6    |  7  | 8 |
    1:协议方案名
    2:登录信息(认证)
    3:服务器地址
    4:服务器端口号
    5:带层次的文件路径//路径
    6:带层次的文件路径//文件名
    7:查询字符串
    8:片段标识符
P25/220 第2章 简单的HTTP协议
*/
/* git command used today
git clone git@github.com:hongliah/hongliah.git
cd hongliah
git config --local user.name "hongliah"
git config --local user.email hongliang.hu@163.com
touch JS.H //and edit by UltraEdit
git status
git add .
git status
git commit -m "JS.H added"
git status
git push
*/


