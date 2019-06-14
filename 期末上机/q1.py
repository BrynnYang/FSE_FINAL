# -*- coding: utf-8 -*-
"""
Created on Thu Jun 13 21:05:06 2019

@author: yangfan
"""
#输入，第一行是要删除的字符
#每一行字符串作为列表的一个元素
#逆序排序
#输出
del_letter=str(input())
a=[]
i=0
tmp=str(input())
while tmp!='@':
    a.append(tmp)
    tmp=str(input())
lens=len(a)
b=[]

for j in range(0,lens):
    res=""
    for k in range(0,len(a[j])):
        if a[j][k]!=del_letter:
            res+=a[j][k]
    b.append(res)

b.sort(reverse=True)
for i in range(0,lens):
    print(b[i])
    