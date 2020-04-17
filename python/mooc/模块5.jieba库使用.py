import jieba
#jieba.lcut("中国是一个伟大的国家")
print(jieba.lcut("中国是一个伟大的国家"))
print(jieba.lcut("中国是一个伟大的国家",cut_all=True))
print(jieba.lcut_for_search("中国是一个伟大的国家"))
jieba.add_word("广东海洋大学")
print(jieba.lcut("广东海洋大学是一个好大学"))


import MeCab
mecab = MeCab.Tagger ("-Ochasen")
sentence = '太郎はこの本を二郎を見た女性に渡した。'
print(mecab.parse(sentence))