import jieba
import MeCab
import wordcloud
def getText(file):
    txt=open(file,"r").read()
    txt=txt.lower()
    for ch in '!"#$%&()*+,-./:;<=>?@[\\]^_‘{|}~':
        txt=txt.replace(ch," ")
    return txt
def split_word(txt):
    words=txt.split()
    counts={}
    for word in words:
        counts[word]=counts.get(word,0)+1
    items=list(counts.items())
    items.sort(key=lambda x:x[1],reverse=True)
    return items
def getlist_jieba(file,excludes):
    txt=open(file,"r",encoding="utf-8").read()
    words=jieba.lcut(txt)
    counts={}
    for word in words:
        if len(word)==1:
            continue
        elif word == "诸葛亮" or word == "孔明曰":
            rword = "孔明"
        elif word == "关公" or word == "云长":
            rword = "关羽"
        elif word == "玄德" or word == "玄德曰":
            rword = "刘备"
        elif word == "孟德" or word == "丞相":
            rword = "曹操"
        else:
            rword = word
        counts[rword]=counts.get(rword,0)+1
    for word in excludes:
        del(counts[word])
    items=list(counts.items())
    items.sort(key=lambda x:x[1],reverse=True)
    return items

def getlist_Mecab(file):
    excludes_str= '''( )＿・）（★」「.？1234567890、。がガがガぎギぐグげゲごゴざザざザじジずズぜゼぞゾだダだダぢヂづヅでデどドばバばバびビぶブべベぼボぱパぱパぴピぷプぺペぽポあアあアいイうウえエおオかカかカきキくクけケこコさサさサしシすスせセそソたタたタちチつツてテとトなナなナにニぬヌねネのノはハはハひヒふフへヘほホまマまマみミむムめメもモやヤやヤゆユよヨらラらラりリるルれレろロわワわワをヲ'''
    txt=open(file,"r",encoding="utf-8").read()
    mecab = MeCab.Tagger ("-Owakati")
    txt=mecab.parse(txt)#string
    words=txt.split()
    c = wordcloud.WordCloud( width = 1000, height = 700,font_path = "C:\WINDOWS\FONTS\MSGOTHIC.TTC",max_words=35)
    c.generate(" ".join(words))
    c.to_file("pywcloud.png")
    counts={}
    for word in words:
        if word not in excludes_str:
            counts[word]=counts.get(word,0)+1
    excludes={"よう","いる","から","です","その","…","ある"}
    for word in excludes:
      del(counts[word])
    items=list(counts.items())
    items.sort(key=lambda x:x[1],reverse=True)
    return items


# txt=getText("hamlet.txt")
# items=split_word(txt)
# for i in range(10):
#     word,count=items[i]
#     print("{0:<10}{1:>5}".format(word,count))


# lists=getlist_jieba("threekingdoms.txt", {"将军","却说","荆州","二人","不可","不能","如此"})
# for i in range(5):
#     word,count=lists[i]
#     print("{0:<10}{1:>5}".format(word,count))

lists=getlist_Mecab("人間失格_nodrm.txt")
for i in range(30):
    word,count=lists[i]
    print("{0:<10}{1:>5}".format(word,count))
