---
**一、注册一个GitHub账号并登陆**
---

1、进入GitHub官网并注册账号
2、创建仓库
（1）点开右上角用户并点击Your repositories；
（2）点击“New”；
![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201202736640.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)

（3）填写仓库名“用户名.github.io",此处用户名与已注册用户名相同；![在这里插入图片描述](https://img-blog.csdnimg.cn/2020120120280366.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)

（4）填写好后点击”Create repository“；【此处进行“二”、”三“】
3、启用Github Pages
（1）点击”Settings“进入；![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201202818944.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)

（2）下拉找到”GitHub Pages"，有绿色条显示则成功开启；![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201202840897.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)

4、选择主题
（1）点击“Choose a theme”；![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201202903314.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)

（2）选择自己想要的主题，点击“Select theme”![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201202919804.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)

**二、下载安装Git和Node.js**
  1、安装node.js并配置好环境,打开cmd命令行；![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201202937704.png)

  2、安装Git并配置符合本机版本的Git环境（建议搜索时添加”国内源“字样）；
  3、安装好后在桌面任意位置右键可出现”Git GUI Here“”Git Bash Here“；![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201202947822.png)

**三、安装HEXO**
1、创建文件夹并在此右击选择"Git Bash here”；![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201203001242.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)

2、 输入npm install -g hexo;![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201203012567.png)

3、输入hexo -v;![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201203024972.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)

4、输入hexo init，则显示"Start blogging with Hexo";![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201203037338.png)
![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201203048638.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)

5、输入npm install;![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201203105916.png)

6、输入hexo g;![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201203120926.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)

7、输入hexo s,启动本地浏览器访问http://localhost:4000;![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201203130864.png)
![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201203142878.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)
8、更换主题
（1）安装主题,使用命令hexo clean
git clone https://github.com/litten/hexo-theme-yilia.git themes/yilia；![](https://img-blog.csdnimg.cn/20201201203615730.png)
（2）启动主题
找到目录下的_config.yml文件，打开找到theme：属性，并设置为yilia；
（3）更新主题
cd themes/yilia
git pull
hexo g
hexo s
使用localhost:4000查看新主题；
四、部署到GitHub
1、编辑根目录下_config.yml文件，添加如下代码（sunkeepero换成自己的用户名），并保存![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201204333649.png)

2、安装一个扩展
![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201204417704.png)
3、检查SSH Keys设置
（1)输入cd~/.ssh
若如下图，则不存在.ssh;
![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201204626695.png)
 解决方法：输入$ssh-keygen -t rsa -C
 "XXXXXXXX@qq.com"
![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201204855131.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)
再如图操作 ;![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201205256709.png)

（2）按图输入，添加密钥到ssh-agent;![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201205337534.png)
（3）按图输入![在这里插入图片描述](https://img-blog.csdnimg.cn/2020120120542640.png)
3、添加SSH Key到Github
（1）点击“setting”；![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201205752924.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)

（2）点击“SSH GPG Keys",点击”New SSH key“新建SSH keys；![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201205803171.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)
（3）填写key；![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201205842730.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjgxMjEzNw==,size_16,color_FFFFFF,t_70)
（4）输入ssh -T git@github.com,测试添加ssh是否成功。若Hi为用户名则成功（有一处需输入yes）；![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201210216124.png)

（5）设置账号信息；![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201210224677.png)
4、部署到gitub
hexo d -g![在这里插入图片描述](https://img-blog.csdnimg.cn/20201201210348450.png)
使用 sunkeepero.github.io 即可访问自己博客。
