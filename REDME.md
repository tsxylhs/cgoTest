###cgo 动态加载
####在项目目录执行
 ```bash
    gcc -fpic -shared test.cpp api.cpp -o libapi.so
 ```
####检查是否生成 libapi.so 动态库

####在项目目录执行
```bash
  
   go  build

```

#####运行

```bash
./cgoTest
#打印 hello，world
```




