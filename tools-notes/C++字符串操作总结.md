# C++字符串操作总结

## 头文件

```
#include<string>
```

##声明

```c++
	string str1 = "Hello World!";
	string str2 ("Hello C++");
    string str3 (str1,3); // = lo World!(从第3个字符开始取)
    string str4 (str1,3,2); // = lo(从第3开始，最多取两个)

    char ch_music[] = {"Roly-Poly"};

    string str5 = ch_music; // = Roly-Poly 
    string str6 (ch_music); // = Roly-Poly
    string str7 (ch_music,4); // = Roly（去前面4个）
    string str8 (10,'i'); // = iiiiiiiiii（10个'i'）
    string str9 (ch_music+5, ch_music+9); // = Poly(取[5,9)的字符)

    str9.~string();
```

## 赋值

```c++
	string str1 = "yesterday once more";
    string str2 ("my heart go on");
    string str3,str4;

    str3.assign(str2,3,6);  // = heart
    str4.assign(str2,3,string::npos); // = heart go on (从2开始到结尾赋给str4)
    str4.assign("gaint"); // =gaint
    str4.assign("nico",5); // = nico，超出长度会发生什么。。。
    str4.assign(5,'x'); // = xxxxx
```

## 操作

**swap()  **//交换两个字符串的内容 

```c++
string str1 = "yesterday once more";
    string str2 ("my heart go on");

    str2.swap(str1);
```

**+=,append(),push_back()** //在尾部添加字符

```c++
s+=str;//加个字符串 
s+=”my name is jiayp”;//加个C字符串 
s+=’a’;//加个字符 
s.append(str); 
s.append(str,1,3);//不解释了同前面的函数参数assign的解释 
s.append(str,2,string::npos) 
s.append(“my name is jiayp”); 
s.append(“nico”,5); 
s.append(5,’x’); 
s.push_back(‘a’);//这个函数只能增加单个字符
```

**insert() **//插入字符

```c++
s.insert(0,”my name”); 
s.insert(1,str); 
```

 **erase() **//删除字符

```c++
s.erase(13);//从索引13开始往后全删除 
s.erase(7,5);//从索引7开始往后删5个
```

**clear() **//删除全部字符

```c++
s.clear()
```

**replace() **//替换字符

```c++
string s=”il8n”; 
s.replace(1,2,”nternationalizatio”);//从索引1开始的2个替换成后面的 8
```

**substr()** //返回某个子字符串

```c++
s.substr();//返回s的全部内容 
s.substr(11);//从索引11往后的子串 
s.substr(5,6);//从索引5开始6个字符
```

**begin() end()** //提供类似STL的迭代器支持

```c++
sort(str.begin(),str.end());
```

**rbegin() rend() **//逆向迭代器 

```
sort(str.rbegin(),str.rend());
```

**c_str()**//将内容以C_string返回

**data()** //将内容以字符数组形式返回



## 参考文献

http://blog.csdn.net/fenxinzi557/article/details/51457829





