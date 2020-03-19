/*
美团 2020春招 技术综合试卷在线考试
编程题|20分2/5
最长上升子串构造
时间限制：C/C++语言 1000MS；其他语言 3000MS
内存限制：C/C++语言 65536KB；其他语言 589824KB
题目描述：
给出一个长度为n的由正整数构成的序列，你需要从中删除一个正整数，很显然你有很多种删除方式，你需要对删除这个正整数以后的序列求其最长上升子串，请问在所有删除方案中，最长的上升子串长度是多少。

这里给出最长上升子串的定义：即对于序列中连续的若干个正整数，满足a_{i+1}>a_i，则称这连续的若干个整数构成的子串为上升子串，在所有的上升子串中，长度最长的称为最长上升子串。

输入
输入第一行仅包含一个正整数n，表示给出的序列的长度。(1<=n<=100000)

接下来一行有n个正整数，即这个序列，中间用空格隔开。(1<=a_i<=100000)

输出
  输出仅包含一个正整数，即删除一个数字之后的最长上升子串长度。


样例输入
5
2 1 3 2 5
样例输出
3
*/