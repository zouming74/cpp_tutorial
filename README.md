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
git clone git@github.com:zouming74/homework.git
```
## Contributing
非常欢迎你的加入！[提交一个 Issue](https://github.com/RichardLitt/standard-readme/issues/new) 或者提交一个 Pull Request。


本仓库项目 遵循 [Contributor Covenant](http://contributor-covenant.org/version/1/3/0/) 行为规范。

## How to use Makefiles?

## CMake

我将使用不同的分支来展示在不同场景下编写cmake是如何使用cmake的。
[参考教程](https://github.com/stdrc/modern-cmake-by-example)

- split library
在split_library分支中展示了如何将一些比较常用的复用次数较多的部分
设置为split library。并为此修改CMakeLists.txt。

- subdirectory
在subdirectory分支中展示了使用更规范的目录来使得工程更加易读。具体的
内容可以切换到这个分支中学习。  
这个分支需要我们编写了两个CMakeLists.txt文件，这让整个工程更加
模块化。  
>这是我的个人理解。


## Resources
[cpp那些事](https://github.com/Light-City/CPlusPlusThings)

[modern cmake by example](https://github.com/stdrc/modern-cmake-by-example)

## Maintainers
[@zouming74](https://github.com/zouming74)

## License
[MIT](LICENSE) © leonardo_z  
![Bower](https://img.shields.io/badge/license-MIT-green)