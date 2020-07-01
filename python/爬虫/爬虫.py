import requests


def getHTMLText(url): #通用代码框架
    try:
        r=requests.get(url,timeout=30)
        r.raise_for_status()
        r.encoding=r.apparent_encoding
        return r.text
    except:
        return "异常"

if __name__=="__main__":
    url="https://www.weblio.jp/content/%E3%81%82%E3%81%BE%E3%82%8A"
    print(getHTMLText(url))