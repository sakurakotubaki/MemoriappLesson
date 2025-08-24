# C言語のメモリ
- プロジェクトの作成方法は、Xcodeからコマンドラインツールを選択して作成。
- 使用しているMacはメモリ36GB

このままだと数値を表示する。

```c
#include <stdio.h>

void echo(int value) {
    value = 200;
    printf("echo: %d\n", value);
}

int main() {
    int value;
    value = 100;

    echo(value);

    // print("$value");
    printf("Value: %d\n", value);

    return 0;
}
```

**再生ボタンで実行する。**

```sh
echo: 200
Value: 100
Program ended with exit code: 0
```

`&`をつけると値がどこに格納されているのかアドレスを表示することができる。これはMacのメモリの36GBの中のどこかに格納されているのか調べることができる。

```c
#include <stdio.h>

void echo(int value) {
    value = 200;
    printf("echo: %d\n", &value);
}

int main() {
    int value;
    value = 100;

    echo(value);

    // print("$value");
    printf("Value: %d\n", &value);

    return 0;
}
```

**再生ボタンで実行する。**

```sh
echo: 1876946348
Value: 1876946392
Program ended with exit code: 0
```
