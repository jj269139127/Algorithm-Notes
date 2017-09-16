# Git常用操作笔记

## 关联仓库

**本地没有添加git**

```
echo "# MyGitTest" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin git@github.com:jj269139127/Calculator.git
git push -u origin master
```

**本地已经创建了git**

在Xcode新建项目的时候默认会创建git资源管理

![img](http://upload-images.jianshu.io/upload_images/1962618-995af8ee74e5b490.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

这时候只需要将本地仓库和远程仓库进行关联

```
git remote add origin git@github.com:jj269139127/Calculator.git
git push -u origin master
```

## 从远程仓库获取

没有本地库，需要将远程仓库上已有的项目克隆到本地

```
git clone xxx.git
```

克隆到指定目录

```
git clone xxx.git "指定目录"
```

clone时创建新的分支替代默认Origin HEAD（master）

```
git clone -b [new_branch_name]  xxx.git
```

clone 远程分支

git clone 命令默认的只会建立master分支，如果你想clone指定的某一远程分支(如：dev)的话，可以如下：

　　A. 查看所有分支(包括隐藏的)  git branch -a 显示所有分支，如：

```
* master
  remotes/origin/HEAD -> origin/master
  remotes/origin/dev
  remotes/origin/master
```

B.  在本地新建同名的("dev")分支，并切换到该分支

```
git checkout -t origin/dev (=git checkout -b dev origin/dev)
```

## 添加文件

**添加单个文件或文件夹**

将修改的内容放入暂存区，准备提交

```
git add readme.txt
git add mydir/
```

**添加全部文件**

将本次修改的所有内容放入暂存区，准备提交

```
git add .
```

## 提交文件

将git add添加的文件提交到本地仓库

```
git commit -m "备注信息"
```

## 推送到远程仓库

将本地仓库的内容推送到远程仓库（默认将本地master分支推送到远程）

```
git push origin master (=git push)
```

也可以推送其他分支（dev为其他分支名）

```
git push origin dev
```

## 从远程获取最新代码到本地

使用如下命令可以在本地新建一个temp分支，并将远程origin仓库的master分支代码下载到本地temp分支

```
git fetch origin master:temp
```

使用如下命令来比较本地代码与刚刚从远程下载下来的代码的区别

```
git diff temp
```

对比区别之后，如果觉得没有问题，可以使用如下命令进行代码合并

```
git merge temp
```

删除temp分支

```
git branch -d temp
```

