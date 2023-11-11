這裡是**Git**筆記區!!<br>

-----
-----

語法
======

### 1. git init
創建一個git追蹤，並可開始使用status, add....<br>

### 2. git status
查看是否有新版本<br>

### 3. git add
使新版本加入追蹤<br>
+ git add filename：使filename加入追蹤<br>
+ git add .：使全部檔案的新版本加入追蹤<br>

### 4. git commit -m "title" -m "description"
將暫存區的內容提交至git版本控制庫中<br>
+ -m：message

### 5. git push origin main
將本地資料上傳至github<br>
每次push都要打這麼多字會非常的累，所以可以用
'''
git push -u origin main
'''
這養以後就只需要打'git push'即可





Workflpw at local
add -> commit -> push

Workflow at gitbub
commit
