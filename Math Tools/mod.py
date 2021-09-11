#x ≡ a(modm1)
#x ≡ b(mod2)
#式が1つの場合は16〜19行目をコメントアウト＆15行目のコメントアウトを外す

a = 32134
mod1 = 1584891
b = 193127
mod2 = 3438478
x_MAX = 1000000000000

for x in range (1, x_MAX):
    if (x - a) % mod1 == 0:
        print("=============1：OK================")
        print(x)
#    break
        if (x-b)%mod2 == 0:
            print("==============2：OK=============")
            print(x)
            break