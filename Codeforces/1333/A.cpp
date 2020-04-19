t=input()
t=int(t)
for i in range(t):
    r, c = map(int, input().split())
    print('W',end='')
    for i in range(1,c):
        print('B', end='')
    print('')
    for i in range(2,r+1):
        for j in range(0,c):
            print('B', end='')
        print('')

