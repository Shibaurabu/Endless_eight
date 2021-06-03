def perr(s) $><<"error::#{s}\n" end
arr=[]
while true do
    instr=gets
    isnum=false
    savenum=0
    if instr=="exit" then
        exit(0)
    end
    instr.chars.each do |a|
        if a=~/[0-9]/ then
            savenum=savenum*10+a.to_i
            isnum=true
            next
        end
        if a=='+'||a=='-'||a=='*'||a=='/'||a=='%' then
            if arr.size==0 then
                perr("stack empty")
                exit(0)
            end
            fi=arr.pop
            se=arr.pop
            if (a=='/'||a=='%')and(se==0) then
                perr("zero division")
                exit(0)
            end
            arr.push(eval(se.to_s+a+fi.to_s))
            next
        end
        if isnum==true
            arr.push(savenum)
            savenum=0
            isnum=false
        end
    end
    p arr.pop
    arr=[]
end