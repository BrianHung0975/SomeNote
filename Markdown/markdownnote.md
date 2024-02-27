這裡是**Markown**的學習筆記區！！<BR>
  

-----
-----
  
基本語法
=======


## 1. 標題

幾級標題就用幾個`#`，不過最多只有到六級ㄛ<br>
還有還有，**打完#要記得空一格**<br>
例如：`## 二級標題`
  ```
  一級標題：# 
  二級標題：## 
  三級標題：### 
  四級標題：#### 
  五級標題：##### 
  六級標題：###### 
  ```

好習慣：最好在`標題的前後都空一行`<BR>
例如：
  ```
  前一行程式

  #### 四級標題

  後一行程式
  ```

另外，一、二級標題又有其他寫法<BR>
一級標題
  ```
  一級標題
  =======
  ```
二級標題
  ```
  二級標題
  -------
  ```
  
-----
  
## 2. 段落
  
直接空一行即可，注意：**不要縮排和空格**<BR>
例如：
  ```
  我喜歡Markdown
  
  我想，我未來會常常使用它
  ```
  
-----

## 3. 換行
  
利用`<br>`來換行<br>
例如：
  ```
  我覺得Markdown挺好用的，<br>
  所以我的筆記將會用.md來製作
  ```
  
-----
  
## 4. 強調
  
可以讓重點醒目一點
  
### 4.1 粗體
  
利用兩個星號`**`<br>
例如：
  ```
  我要用**Markdown**做程式相關的筆記
  ```

英文的表示法：如過字與字之間要有空格的話，`兩個空格要把四個星星包在裡面`<br>
例如：
  ```
  I like **Markdown** so so much~~
  ```

### 4.2 斜體
  
跟**粗體**非常相似，只是把*兩個星星改成一個星星*而已<BR>
利用一個星號`*`<br>
例如：
  ```
  我要用*Markdown*做程式相關的筆記
  ```

英文的表示法：如過字與字之間要有空格的話，`兩個空格要把兩個星星包在裡面`<br>
例如：
  ```
  I like *Markdown* so so much~~
  ```
  
### 4.3 粗體+斜體

粗體 + 斜體 = `**`+`*` = `***` = 三個星星<br>
例如：
  ```
  我要用***Markdown***做程式相關的筆記
  ```
  
-----
  
## 5. 引用

在句子加一個`>`，好習慣：`為了美觀 > 和句子間請加一個空格`<br>
例如：
  ```
  > Knowledge is Power.
  ```

引用中如果有段落，在段落與段落間再加一個 > <BR>
例如：
  ```
  > 我要用Markdown做程式相關的筆記
  > 
  > 連同Markdown的筆記也是用Markdown寫的ㄛ
  ```
  
引用中如果有引用，直接在加一個 > 就好了，變成`>>`<BR>
例如：
  ```
  > 我要用Markdown做程式相關的筆記
  >> 因為Markdown太好用啦
  > 
  > 連同Markdown的筆記也是用Markdown寫的ㄛ
  ```

好習慣：`在 > 的前後兩行空行`<BR>
例如：
  ```
  連同Markdown的筆記也是用Markdown寫的ㄛ
  
  > 現學現賣
  >> 還可以當練習，很不錯吧
  
  應該不會奇怪吧
  ```
 
-----
  
## 6. 程式碼

將程式碼輸入` `` `中<BR>
例如：
  ```
  這一段`code`很重要
  ```
  
如果一句話中已經有` `` `了，就用` `` `` `把句子包住<BR>
例如：
  ```
  ``這一段`code`很重要``
  ```
  
### 6.1 程式方塊
  
將想放入方塊中的程式`縮排`即可<BR>
例如：
  ```
    記得縮排ㄛ
    就那麼簡單
  ```
  
-----

## 7. 水平分割線
  
單獨使用連續三個以上的`*`、`-`、`_`<BR>
注意：**前後都需空一行**<br>
例如：
  ```
  上一段的結尾
  
  -----------
  
  下一段的開頭
  ```
  
-----
  
## 8. 連結
  
`[想表達的](連結網址)`
例如：
  ```
  這是我的程式筆記[SomeNote](https://github.com/BrianHung0975/SomeNote)
  ```
注意：連結太長時，可將 **( )** 移到下一行<BR>
例如：
  ```
  [SomeNote]
  (https://github.com/BrianHung0975/SomeNote)
  ```
  
### 8.1 連結標題
  
在連結後打上標題，再用` " " `把標題框起來<BR>
例如：
  ```
  這是我的程式筆記[SomeNote](https://github.com/BrianHung0975/SomeNote "我的程式筆記")
  ```
 
### 8.2 直接顯示連結或電子郵件連結
  
將連結或電子郵件連結**前後**加上`<>`<BR>
例如：
  ```
  <https://github.com/BrianHung0975/SomeNote>
  <brianhung0975@gmail.com>
  ```
    
### 8.3 強調連結
    
在`[)`前後都加上星星<BR>
例如：
  ```
  **[粗體](https://github.com/BrianHung0975/SomeNote/blob/main/Markdown/markdown_readme.md#%E7%B2%97%E9%AB%94)**
  *[斜體](https://github.com/BrianHung0975/SomeNote/blob/main/Markdown/markdown_readme.md#%E6%96%9C%E9%AB%94)*
  ```
    
### 8.4 導向文件某處
    
`[想顯示的](#標題名稱)`<BR>
注意：**#與文字間不要空格**<BR>
例如：
  ```
  [基本語法](#基本語法)
  ```
    
### 8.5 註腳
 
#### 8.5.1 第一部分
    
`[想顯示的][可以是數字、字母、空格、符號]`<BR>
例如：
  ```
  [基本語法][1]
  ```
    
#### 8.5.2 第二部分
    
可以放在此文件中的任何地方<BR>
`[相同的數字、字母、空格、符號]` `: ` `<` ` `連結網址` ` `>` `"` `'` `(`標題`)` `'` `"`<BR>
1. []後緊接`: `**(半形冒號和空格)**
2. 連結網址可**直接寫出來**或**用`<>`包住**
3. 連結標題可用`" "`、`'`、`()`包住
   - **網址與標題需空一格**<BR>
例如：
  ```
  [1]: https://www.markdownguide.org/basic-syntax/#reference-style-links
  [1]: <https://www.markdownguide.org/basic-syntax/#reference-style-links>
  [1]: https://www.markdownguide.org/basic-syntax/#reference-style-links "基本語法"
  [1]: https://www.markdownguide.org/basic-syntax/#reference-style-links '基本語法'
  [1]: https://www.markdownguide.org/basic-syntax/#reference-style-links (基本語法)
  ```
   
### 8.6 連結的樣子
    
如果連結中有空格可以將空格用`%20`代替，若Markdown應用**支援HTML**可用`.`代替<BR>
例如：
  ```
  https://github.com/BrianHung0975/SomeNote/markdown%20note
  https://github.com/BrianHung0975/SomeNote/markdown.note
  ```
    
-----
    
## 9. 圖片
    
跟連結很像<BR>
`![圖片描述](圖片連結 "連結標題")`(半形驚嘆號)<BR>
注意：圖片網址太常**不能像連結一樣把()移到下一行**
例如：
  ```
  ![SomeNote](https://github.com/BrianHung0975/SomeNote/blob/main/Markdown/assets/images/somenote.png)
  ```
    
### 9.1 圖片式連結
 
`[![圖片描述](圖片連結 "連結標題")]` `(`連結網址`)`<BR>
簡單來說，就是把圖片當成`[想表達的](連結網址)`中的 **[想表達的]**
例如：
  ```
  [![SomeNote](https://img.onl/5ipYKF "SomeNote")](https://github.com/BrianHung0975/SomeNote)
  ```

-----
    
## 10. 列表
  
包含，有序列表和無序列表
  
### 10.1 有序列表

須以`數字和句點開頭`，且句點後`須空一格`，另外，數字的順序不重要ㄛ<BR>
例如：
  ```
  1. 第一項
  2. 第二項
  5. 第五項
  3. 第三項
  ```

### 10.2 無序列表
  
可使用`+`、`-`、`*`，同樣也需要空格，縮排可以設置子列表<BR>
好習慣：`一種列表用一種符號就好了`，不要混用
例如：
  ```
  + 第一項
    + 第一之一項
      + 第一之一之一項
    + 第一之二項
  + 第二項
  ```
  
### 10.3 列表中添加其他元素
  
要在列表中添加其他元素時，皆需要`與前後項各空一行`，並且`縮排`
  
#### 10.3.1 添加段落
  
例如：
  ```
  + 第一項
    + 第一之一項
  + 第二項
  
    這是第二項的一個段落
  
  + 第三項
  ```
  
#### 10.3.2 添加引用
  
例如：
  ```
  + 第一項
    + 第一之一項
  + 第二項
  
    > 這是第二項的一個引用
  
  + 第三項
  ```
  
#### 10.3.3 添加程式方塊
  
因為原本就要縮一次排了，所以再添加程式方塊時，需要縮兩次排，但不知道為什麼這個方式在GitHub不能用，所以我就改成用在[進階語法]()中的程式方塊了<BR>
例如：
  ```
  + 第一項
    + 第一之一項
  + 第二項
    ```
    print("Hello Warkdown and Python")
    ```
  + 第三項
  ```
    
#### 10.3.4 添加圖片
    
例如：
  ```
  - 下面是SomeNote的圖片
    
    ![SomeNote](https://github.com/BrianHung0975/SomeNote/blob/main/Markdown/assets/images/somenote.png "SomeNote")
    
  - 上面是SomeNote的圖片
  ```
  
 #### 10.3.5 添加列表
    
 無序中加有序，有序中加無序<BR>
 注意：因願原本就需縮排，所以`需縮兩次排`<BR>
 例如：
   - 下面程式方塊只有第二個 1 會被自動轉成其他符號
   ```
   1. 第一項
       - 第一之一項
           1. 第一之一之一項
   2. 第二項
   ```
   - 下面程式方塊的二個 1 都會被自動轉成其他符號
   ```
   - 第一項
       1. 第一之一項
           1. 第一之一之一項
   - 第二項
   ```
  
-----
    
## 11. 跳脫字元
    
在要跳脫的符號前加一個`\`<BR>
例如：
  ```
  \- 不加\將會變成列表
  ```
以下符號均可跳脫<BR>
`\`	    反斜槓<BR>
` `` `   反引號<BR>
`*`	    星號<BR>
`_`	    下劃線<BR>
`{ }`	  大括號<BR>
`[ ]`	  中括號<BR>
`< >`	  尖括號<BR>
`( )`	  小括號<BR>
`#`	    井字號<BR>
`+`	    加號<BR>
`-`	    減號（連字號）<BR>
`.`	    點<BR>
`!`	    感嘆號<BR>
`|`	    分隔號<BR>
    
    
-----
-----

# 進階語法
  
    
## 表格
   
用三個或更多連字符`---`來創建每一列的標題，並使用`|`分隔每一列<BR>
 例如：
```
  | Brian       | Kenny       |
  | ----------- | ----------- |
  | 17          | 14          |
  | 172         | 162         |
```
    
利用`:`加在`---`的左、兩邊、右，來決定表格中的元素靠左、靠或靠右<BR>
 例如：
```
 | Brian       | Kenny       |
 |:----------- | :----------:|
 | 17          | 14          |
 | 172         | 162         |  
```
    
## 醒目程式方塊之內容
    
利用在第一個` ``` `的左邊加上*程式語言名稱*<BR>
例如：
  ```
    ```python

    print("I like Python")

    ```
  ```
   
-----
    
## 註腳
    
利用`[^任意文字]`，不管用什麼文字，最後都將會變成有序數字<BR>
例如：
    
```
這是第一句[^1]，這是第二句話[^第二句]
    
[^1]:I like markdown.
[^第二句]:I like python.
```
    
**輸出：**<BR>
 
這是第一句[^1]，這是第二句話[^第二句]
    
[^1]:I like markdown.
    
[^第二句]:I like python.
   
-----
 
## 刪除線
  
在要添加刪除線的兩端加兩個`~~`<br>
  
注意：最後一個~要和後面的文字**添加一個空格**<BR>
例如：
  
```
~~我要刪掉它，~~ 不然會是錯的。
```

-----
   
## 代辦事項
  
用`- [ ]`表示未完成<BR>
  
用`- [x]`表示已完成<BR>
 
注意：- 和 ] 後皆須**添加空格**<BR>
例如：
  
```
- [ ] 學習markdown
  
- [x] 算數學
  
- [ ] 讀生物
```
  
-----
  
## 添加表情符號
  
方法1：複製貼上<BR>
  
表情符號網站：[emojipedia.org](https://emojipedia.org/ "emojipedia.org")
  
方法2：用`:表情符號名稱:`來完成<BR>
  
可使用方法2的表情符號之名稱表：[github markdown emoji list](https://gist.github.com/rxaviers/7360908 "github markdown emoji list")
例如：
  
```
我最愛用的emoji是:grin:
```
  
**輸出：**<BR>

我最愛用的emoji是:grin:
    
-----
 
## 螢光筆效果
  
用` ==文字== `完成<BR>
  
可惜**GitHub沒有這個功能**<BR>
例如：
  
```
我喜歡 ==markdown==
```
  
-----

## 下標
  
利用`~文字~`完成，不過有些編輯器出現的會是*刪除線*<BR>
  
可惜**GitHub沒有這個功能**<BR>
例如：
  
```
H~2~O
```
   
-----
  
## 上標
  
利用`^文字^`完成<BR>
  
可惜**GitHub沒有這個功能**<BR>
例如：
  
```
X^2^
```
    
-----
  
## 禁用URL
  
在連結首尾都加上一個 `<BR>
  
可惜**GitHub沒有這個功能**<BR>
例如：
  
```
`https://emojipedia.org/`
```

-----
-----
    
參考：<BR>
https://www.markdownguide.org/basic-syntax/ <BR>
https://www.markdownguide.org/extended-syntax/