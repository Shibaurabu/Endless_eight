#x ≡ a(modm1)
#x ≡ b(mod2)
#式が1つの場合は25〜28行目をコメントアウト＆24行目のコメントアウトを外す
print("=NOTICE= 式の本数を変更する場合は直接ファイルを編集してください。")

print("1/2本　x≡a(mod b)")
print("a=")
a = int(input())
print("b=")
mod1 = int(input())

print("2/2本　x≡c(mod d)")
print("c=")
b = int(input())
print("d=")
mod2 = int(input())

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
