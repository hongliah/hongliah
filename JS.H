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

20121225 copy previous note, from 20171218 to 20171223
20171218 start JavaScript
/*
JavaScript王者归来.月影.扫描版.pdf
B/S Browser/Srver

document.images
document是个非常有用的接口，它是JavaScript访问页面文档对象的主要方式。除了访问图片的document.images之外，document提供的属性还能够方便地引用页面文档对象中的表单，链接和其他元素。

另一个有用的接口是windows

DOM接口

setInterval提供了一种定时执行函数的方法，另一个类似的函数是setTimeout，这俩被大量用于实现动态效果，模拟异步执行，实现拦截器和一些控制型模式，以及实现自定义事件接口。

P14 在通常的Web应用中，HTTP请求总是将页面文档以流的形式发送到客户端被浏览器所装载。/通常定义的客户端生命周期起始于浏览器开始装载某个请求的特定数据，结束语浏览器发起一个新的请求(通常意味着页面跳转或者刷新)。
生命周期，初始化装载阶段和运行阶段

P17 通常情况下，数据流以HTTP请求的形式发送到服务器端进行处理，处理完毕的结果也以流的形式发回客户端。提交表单操作 vs XML HTTP //Ajax

P36 calculator.html
*/

20171219
/*
for caculator.html 1st table 1 tr and 1 td dake, 2nd table mo, for border effect ka, 3rd table 2 tr aru, demo 1st tr 1td dake, and no data, for what, 2nd tr 1 td dake mo, and contain the 4th table, main part
4th table

P50 第二章 stop and turn to JavaScript高级程序设计.pdf
一个完整的JavaScript实现包括以下三个组成部分：核心 ECMAScript，文档对象模型DOM，浏览器对象模型BOM
P23 1.2.2 文档对象模型 DOM
DOM把整个页面映射为一个多层节点结构。HTML或XML页面中的每个组成部分都是某种类型的节点，这些节点有包含着不同类型的数据。如图1-2分层节点图

使用<script>元素的方式有两种：直接在页面中嵌入JavaScript代码和包含外部JavaScript文件。

P40 3.3 变量
定义变量使用 var 操作符
变量是松散类型，可以用来保存任何类型的数据。
但不推荐改变变量的类型，比如 var message = "hi"; message = 100; 有效，但不推荐。

ECMAscript有5种简单数据类型和1种复杂类型
Undefined, Null, Boolean, Number, String/Object
操作符
语句
	with 语句
函数

P84 第四章
*/

20171221
/*
JavaScript DOM 编程艺术.pdf
P33 50/317
宿主对象主要包括Form，Image和Element

注意力集中在浏览器窗口内部而非浏览器窗口本身。我们将着重探讨如何对网页的内容进行处理，而用来实现这一目标的载体就是document对象。

DOM的工作模式：先加载静态内容，再以动态方式对它们进行刷新，动态刷新不影响文档的静态内容。

通过增加一个事件处理函数event handler的办法来调用JavaScript里面的函数。事件处理函数的作用是，在预定事件发生时让预先安排好的JS代码开始执行，用术语来说就是触发一个动作。 onclick, onmouseover, onmouseout
this对象

P59 76/317
*/

20171222
/*
JavaScript代码文件最末尾加上 window.onload = countBodyChildern; 即可在页面加载时执行函数 countBodyChildren()

P63 80/317 包含在<p>元素里的文本是另一种节点，它在DOM里是<p>元素的一个子节点。因此要用description.firstChild.nodeVale才是文本的值。

P66 83/317 ccs not work
//hlhu: html/ccs maybe more basic for JavaScript

弹出窗口是一个典型的滥用JavaScript的例子

JavaScript使用window对象的open()方法来创建新的浏览器窗口。这个方法有三个参数，都是可选的
window.open(url, name, features)
open()方法是BOM的一个典型应用案例

P78 95/317 分离JavaScript

P105 122/317 DOM Core and HTML-DOM
*/

20171223
/*
关于HTTP协议，一篇就够 //
https://www.cnblogs.com/ranyonsue/p/5984001.html

*/

20171226
/*
图解HTTP
P42/220 管线化 pipelining //hlhu: bt ?
P72/220 第5章 与HTTP协作的Web服务器
P81/220 第6章 HTTP首部
非HTTP/1.1首部字段 RFC4229
P135/220 确保Web安全的HTTPS
用SSL建立安全通信线路之后，就可以在这条线路上进行HTTP通信了。与SSL组合使用的HTTP被称为HTTPS(HTTP Secure，超文本传输安全协议)或HTTP over SSL
HTTP + 加密 + 认证 + 完整性保护 = HTTPS
公开密钥 + 私有密钥 如何能保证安全 //hlhu: not clear
P166/220 基于HTTP的功能追加协议
P169/220 Ajax的核心技术是名为XMLHttpRequest的API，通过JavaScript脚本语言的调用就能和服务器进行HTTP通信。借由这种手段，就能从已加载完毕的Web页面上发起请求，只更新局部页面。
WebSocket
P182/第10章 构建Web内容的技术
P191/220 第11章 Web的攻击技术
*/
/*
#从远程分支拉取代码到本地  
git pull upstream  master  
#push到自己的库里  
git push  origin master
*/


