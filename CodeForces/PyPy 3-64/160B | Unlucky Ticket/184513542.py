n=int(input())
s=str(input())
first, second=[], []
for i in range(len(s)//2):
  first.append(s[i])
for i in range(len(s)//2,len(s)):
  second.append(s[i])
first.sort()
second.sort()
ok=bool(1)
for i in range(len(first)):
  if (first[i]>=second[i]):
    ok=0
    break
if (ok==1):
  print("YES")
  exit()
ok=bool(1)
for i in range(len(first)):
  if (first[i]<=second[i]):
    ok=0
    break
if (ok==1):
  print("YES")
else:
  print("NO")