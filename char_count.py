def char_val(list1):
    list1=list1.lower()
    unq_char=set(list1)
    unq_char.discard(" ")
    for char in sorted(unq_char):
        msg="{char}:{count}"
        print(msg.format(char=char,count=list1.count(char)))
list1=input()
print(char_val(list1))
