这是我用cmake来学习linux上的cpp编程的repository


## Table of Contents
- [Table of Contents](#table-of-contents)
- [Install](#install)
- [Usage](#usage)
- [Contributing](#contributing)
- [How to use Makefiles?](#how-to-use-makefiles)
- [CMake](#cmake)
- [Resources](#resources)
- [Maintainers](#maintainers)
- [License](#license)
## Install 
你需要安装git工具。我推荐你在腾讯软件中心中安装[git](https://pc.qq.com/detail/13/detail_22693.html)。当然你也可以在官方网站中安装[git](https://git-scm.com/download)。
如果你实在要找一个教程的话，我推荐你用这个[教程](https://blog.csdn.net/mukes/article/details/115693833)。并且将git bash添加到命令行终端。

- windows:你需要安装cmake以及gcc g++等一些软件才能正常使用这个仓库。最重要的是下载mingw64，有的时候你也可以使用visual studio这个结合vs code来进行cpp编程。当然使用现成的ide也可以使用。
- linux:你只需要安装cmake软件就可以使用这个仓库了

## Usage
你经需要将本仓库克隆到本地。你可以在git bash中输入以下命令。
```sh
git clone git@github.com:zouming74/cpp_tutorial.git
```
## Contributing
非常欢迎你的加入！[提交一个 Issue](https://github.com/RichardLitt/standard-readme/issues/new) 或者提交一个 Pull Request。


本仓库项目 遵循 [Contributor Covenant](http://contributor-covenant.org/version/1/3/0/) 行为规范。

## How to use Makefiles?

## CMake

我将使用不同的分支来展示在不同场景下编写cmake是如何使用cmake的。
[参考教程](https://github.com/stdrc/modern-cmake-by-example)

- split library  

在split_library分支中展示了如何将一些比较常用的复用次数较多的部分设置为split library。并为此修改CMakeLists.txt。

- subdirectory  

在subdirectory分支中展示了使用更规范的目录来使得工程更加易读。具体的内容可以切换到这个分支中学习。  
这个分支需要我们编写了两个CMakeLists.txt文件，这让整个工程更加模块化。  
>这是我的个人理解。

- use libcurl  

在cpp程序中，使用了两个命名空间。第一个是直接返回answer 42，第二个是通过网络请求得到answer 42。由于使用到了第三方，对应的CMakeLists.txt做出了相应的改变。最后，在answer.hpp中选择使用哪个namespace。  

值得注意的是其中PRIVATE与PUBLIC的使用。这关系到main.cpp能否包含到相应的头文件。

- link libs in same root

在这个分支中，将这个程序更加模块化。在不同的模块部分之间又是可以相互调用的，那么就需要控制接口的PUBLIC和PRIVATE。

>大体上是这样，以后遇到相关的情况直接套用。目前还是能够理解这个程序的意思，虽然有的地方代码有点不会写。学习慢慢来！

- cache string  

在这个分支中，我们将一些比较隐秘的东西通过传参数的形式交给程序。

- interface_library 
    - target compile features

这个分支具体的作用不是特别清楚，以后在看过一些书和做过一些项目之后再来看这个。  
在target compile features 这个改动中，设定了不同的编译目标。

- testing  

这个分支中展示了编写tests，但是需要的测试框架通过github下载。由于国内网速限制，没有实现这个testing。

- back to makefile  

通过编写Makefile，让构建过程不用再在命令行中输入cmake命令。更加便捷。

## Resources
[cpp那些事](https://github.com/Light-City/CPlusPlusThings)

[modern cmake by example](https://github.com/stdrc/modern-cmake-by-example)

## Maintainers
[@zouming74](https://github.com/zouming74)

## License
[MIT](LICENSE) © leonardo_z  
![Bower](https://img.shields.io/badge/license-MIT-green)