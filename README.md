---
marp: true
theme: uncover
size: 16:9
paginate: true
header:
footer: "吉娃娃不要狗叫"
---

<!-- _paginate: false -->
<!--_backgroundColor: lightBlue -->

第一次<br> 數獨報告
=== 

![bg right 60%](圖片/數獨.png)

---

系級班級
---
資工二Ａ & 資工三Ａ

組別號碼
---
第九組

---

成員資訊
---
陳任璿(組長)<br>  王翌權<br>  宋承哲

---

程式介紹
---
我們使用了四個類別，分別是
1.生成 (Generate)
2.挖空 (Blank)
3.填空 (FillBlank)
4.解答 (Answer)

---

| Generate |
| :--- |
| + `Generate()`<br> + `void generator()`<br> + `vector<int > get_board()`<br> + `bool check_rep(vector<int>,int,int)`<br> + `bool board_put(vector<int>&)`|
| - `int new_board[][]`<br> - int i,j,k,l |


---

| Blank |
| :-- |
| + `void receive_board(vector <int>)`<br> + void hole_board(int) <br> + `vector<int> return_board()`|
| - `vector<int> revise_board`<br> - `int Hollow_quantity`|

---

| FillBlank |
| :--|
| + `FillBlank()`<br> + `FillBlank(int,int,int)`<br> + void setX(int) setY(int) `void setN(int)`<br> + int getX() int getY() `int getN()`|
| - `void receive_board(vector <int >)`<br> - `vector<int > fill()`<br> - `void get_board()`<br> - `vector<int> return_board()`|

---

| Answer |
| :--|
| + `void receive_original_board(vector <int >)`<br> + `void receive_revise_board(vector <int >)`<br> + `bool comparison()`<br> + `void get_board()`|
| - `vector<int > original_board`<br> - `vector<int > revise_board`|

---

程式規則
---

###### 「數獨」 的規則, 就是以1∼9九個數字把9×9方格裡的空格填滿, 1∼9的數字在每 個直行、橫列及每個小九宮格裡都只能出現一次。想解開「數獨」不需任何的計算, 而是利用邏輯推解出答案。 

---

程式玩法
---
執行後，會要輸入一個數字，用來挖數獨的空格
再來就是開始填空解數獨

---

程式碼如何安裝執行
---
把程式碼丟到編譯器

---

程式碼執行方式
---
把程式碼丟到編譯器

---

程式畫面截圖
---

---
**輸入數字**
![bg right 100%](圖片/輸入數字.png)

---
**產生挖空後的棋盤**
![bg right 100%](圖片/產生挖空後的棋盤.png)

---
**填空一**
![bg right 100%](圖片/填空一.png)

---
**填空一結果**
![bg right 100%](圖片/填空一結果.png)

---
**填空二輸入錯誤**
![bg right 100%](圖片/填空二輸入錯誤.png)

---
**填空二輸入錯誤結果**
![bg right 100%](圖片/填空二輸入錯誤結果.png)


---
**完成數獨印出結果**
![bg right 100%](圖片/填空二結果.png)

---
---

分工資訊
---

陳任璿:編輯程式、ppt製作
宋承哲:編輯程式、報告
王翌權:編輯程式
