<div dir="rtl">
<details>
<summary><strong>سری اول تمرینات</strong></summary>

<code style="color:red">تمرین اول</code>
برنامه‌ای بنویسید که عدد x را به عنوان ورودی دریافت کند و ۵ عدد متوالی که از x شروع می‌شوند را با هم جمع نموده و حاصل جمع را چاپ کند.

برای مثال اگر ورودی ۳ باشد، خروجی باید به این صورت باشد:

۳ + ۴ + ۵ + ۶ + ۷ = ۲۵

<code style="color:red">تمرین دوم</code>
برنامه ای بنویسید که خروجی آن عبارت زیر باشد:

\#  
\##  
\###  
\####  
\#####  

<code style="color:red">تمرین سوم</code>
برنامه ای بنویسید که محتوی دو متغیر را با هم تعویض کنید برای مثال اگر 
x=3,y=5;
کاری کند که 
y=3,x=5;
شود. 

<details>
<summary style="color:green">راهنمایی</summary> 
فرض کنید یک لیوان حاوی شیر دارید و یک لیوان حاوی نوشابه اگر بخواهید محتوای این دو لیوان را با هم تعویض کنید چه می کنید؟ یعنی کاری کنید که لیوانی که حاوی نوشابه بود حاوی شیر شود و بالعکس
</details>
<br>

<code style="color:red">تمرین چهارم</code>
برنامه ای بنویسید که سه عدد متمایز را دریافت کند و آن ها را به ترتیب از کوچک به بزرگ نمایش دهد. 

<details>
<summary style="color:green">راهنمایی</summary> 
یکی از راه ها این است که از تمرین سوم کمک بگیرید.
</details>
<br>

</details>

<details>
<summary><strong>سری دوم تمرینات</strong></summary>

<code style="color:red">تمرین اول</code>
برنامه ای بنویسید که سه عدد دریافت کند و اگر این سه عدد می توانند اضلاع یک مثلث قائم الزاویه باشند YES در غیر این صورت NO چاپ کند.

مثال: ورودی 3 4 5 را YES چاپ کنید و ورودی 1,2,1 را NO چاپ کند.

 دقت کنید ورودی ممکن از مرتب شده نباشد مثلا برای هر دوی ورودی های زیر جواب YES می باشد:

<div dir='ltr'>
3 4 5
<br>
4 5 3
</div>

<code style="color:red">تمرین دوم</code>
9 عدد ورودی بگیرید آن ها را در یک آرایه 3×3 به ترتیب ذخیره کنید سپس حاصل ضرب اعداد روی قطر اصلی و فرعی این آرایه را چاپ نمایید.

مثال:

<div dir='lrt'>

1 2 3<br>
4 5 6<br>
7 8 9

</div>

قطر اصلی برابر است با
9\*5\*1
 و قطر فرعی برابر است با
  3\*5\*7
.

<code style="color:red">تمرین سوم</code>
برنامه ای بنویسید که یک عدد مثبت n ورودی بگیرد و n تا علامت + پشت سر هم به عنوان خروجی در یک خط چاپ کند.

مثال:

3<br>
+++

1<br>
+

4<br>
++++

11<br>
+++++++++++

در مثال فوق عدد 11 ورودی است و خط زیر آن خروجی مدنظر برای این ورودی است.

</details>

<details>
<summary><strong>سری سوم تمرینات</strong></summary>

<code style="color:red">تمرین اول</code>
برنامه ای بنویسید که یک عدد صحیح مثبت از کاربر دریافت کند و مقسوم علیه(شمارنده) های آن عدد را چاپ کند.

مثال:

ورودی:

12

خروجی:

1 2 3 4 12

<code style="color:red">تمرین دوم</code>
برنامه ای بنویسید که عددی مانند n را از کاربر دریافت نموده و سپس n عدد صحیح دریافت کند و بزرگترین آن ها را در خروجی چاپ نماید.

مثال:<br>
ورودی:

5<br>
4 8 -1 5 4

خروجی:

8

<code style="color:red">تمرین سوم</code>
برنامه ای بنویسید که عدد n را دریافت کند و سپس یک آرایه به طول n از کاربر دریافت کند. سپس مشخص کند که آرایه آینه ای (پالیندروم یا متقارن) است یا نه.

یک آرایه را آینه ای گویند اگر از چپ به راست خوانده شود یا از راست به چپ خوانده شود فرقی نکند برای مثال آرایه های زیر آینه ای هستند:

[1,2,3,2,1]<br>
[1,2,1,2,1]<br>
[1,1]<br>
[4]<br>
[5,6,6,5]<br>
[4,4,7,7,4,4]

و آرایه های زیر آینه ای نیستند:

[1,2,2,2]<br>
[1,1,2,1]<br>
[1,2,1,3,1]

مثال:<br>
ورودی:

5<br>
1 6 2 6 1

خروجی:

YES

<details>
<summary style="color:green">راهنمایی</summary> 
خانه هایی که نسبت به هم متقارن هستند را با هم مقایسه کنید، می توانید بین اندیس هایشان رابطه خاصی پیدا کنید.
</details>
<br>

<code style="color:red">تمرین چهارم</code>
برنامه ای بنویسید که عدد n را ورودی گرفته و n سطر چاپ نماید که سطر i ام i تا علامت + پشت سر هم داشته باشد .

مثال:
<div dir="ltr">

```
n=5
+
++
+++
++++
+++++

n=2
+
++

n=7
+
++
+++
++++
+++++
++++++
+++++++
```

</div>

<code style="color:red">تمرین پنجم</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=1" target="_blank">1: [Multiples of 3 or 5]</a><br>
<a href="http://projecteuler.net/problem=2" target="_blank">2: [Even Fibonacci numbers]</a><br>
<a href="http://projecteuler.net/problem=6" target="_blank">6: [Sum Square Difference]</a>

<code style="color:red">تمرین ششم</code>
برنامه ای بنویسید که عدد فردی مانند n دریافت کند و یک جدول n*n چاپ کند که در آن یک لوزی بزرگ از 'x' ها باشد و بقیه مقادیر '.' باشند برای درک بهتر به مثال های زیر دقت کنید:

<div dir="ltr">

```
n=5:
..x..
.xxx.
xxxxx
.xxx.
..x..

n=9:
....x....
...xxx...
..xxxxx..
.xxxxxxx.
xxxxxxxxx
.xxxxxxx.
..xxxxx..
...xxx...
....x....

n=1:
x

n=3:
.x.
xxx
.x.
```
</div>

<details>
<summary style="color:green">راهنمایی</summary> 
سعی کنید برای هر خط الگوی رفتاری پیدا کنید برای مثال اگر در یک خط در نیمه بالایی شکل الگوی زیر را داشته باشیم:

3 ta '.' 3 ta 'x' 3 ta '.'

در خط بعد الگوی زیر را داریم:

2 ta '.' 5 ta 'x' 2 ta '.'

و در خط بعدی الگوی زیر را داریم:

yek '.' 7 ta 'x' yek '.'
</details>
<br>

</details>

<details>
<summary><strong>سری چهارم تمرینات</strong></summary>
<code style="color:red">تمرین اول</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=5" target="_blank">5: [Smallest Multiple]</a><br>
<a href="http://projecteuler.net/problem=11" target="_blank">11: [Largest Product in a Grid]</a><br>

</details>

<details>
<summary><strong>سری پنجم تمرینات</strong></summary>
<code style="color:red">تمرین اول</code>
برنامه ای بنویسید که یک عدد صحیح مثبت از کاربر دریافت کند و مقسوم علیه(شمارنده) های آن عدد را با 

<div dir="ltr">

$$
O({\sqrt{n}})
$$

</div>

چاپ کند.

<details>
<summary style="color:green">راهنمایی</summary> 
از ایده ای که در الگوریتم بررسی اول بودن یک عدد استفاده کردیم، کمک بگیرید.
</details><br>
<code style="color:red">تمرین دوم</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=7" target="_blank">7</a> ,
<a href="http://projecteuler.net/problem=9" target="_blank">9</a> ,
<a href="http://projecteuler.net/problem=10" target="_blank">10</a> ,
<a href="http://projecteuler.net/problem=12" target="_blank">12</a>

</details>

<details>
<summary><strong>سری ششم تمرینات</strong></summary>
<code style="color:red">تمرین اول</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=16" target="_blank">16</a>,
<a href="http://projecteuler.net/problem=20" target="_blank">20</a>,
<a href="http://projecteuler.net/problem=25" target="_blank">25</a>


</details>

<details>
<summary><strong>سری هفتم تمرینات</strong></summary>
<code style="color:red">تمرین اول</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=8" target="_blank">8</a>,
<a href="http://projecteuler.net/problem=13" target="_blank">13</a>,
<a href="http://projecteuler.net/problem=48" target="_blank">48</a><br>

سوالات ۱۳ و ۴۸ را از طریق کامل کردن فایل 
bignum.cpp
و افزودن تابع توان به این فایل حل کنید. یعنی تابعی به این فایل اضافه کنید که یک
bignum
و یک
int 
ورودی گرفته و بیگنام را به توان عدد صحیح ورودی برساند.

<div dir='ltr'>

```cpp
bignum pw(bignum a,int b)
{
  //return a^b;
}
```
</div>

</details>

<details>
<summary><strong>سری هشتم تمرینات</strong></summary>
<code style="color:red">تمرین اول</code>
تابعی بازگشتی بنویسید که عددی مانند
n
را دریافت کند و حاصل جمع ارقام آن را محاسبه کند.

<div dir='ltr'>

```cpp
int digit_sum(int n)
{
  //return sum of digits of n recursively 
  //you shoudn't use any loop, just can use 'if' and digit_sum function
}
```
</div>

<code style="color:red">تمرین دوم</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را با استفاده از توابع بازگشتی حل نمایید:

<a href="http://projecteuler.net/problem=14" target="_blank">14</a>,
<a href="http://projecteuler.net/problem=18" target="_blank">18</a>

</details>

<details>
<summary><strong>سری نهم تمرینات</strong></summary>
<code style="color:red">تمرین اول</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=21" target="_blank">21</a>,
<a href="http://projecteuler.net/problem=23" target="_blank">23</a>,
<a href="http://projecteuler.net/problem=24" target="_blank">24</a>,
<a href="http://projecteuler.net/problem=28" target="_blank">28</a><br>

برای سوال ۲۸ با یک تابع بازگشتی جدول خواسته شده را بسازید فقط به علت بزرگ بودن جدول 
ممکن روی کامپیوتر شما خطای استک اور فلو  رخ دهد که در این صورت می توانید سایز استک کامپیوترتان را ارتقا دهید
این کار بسته به IDE
مورد استفاده شما می تواند متفاوت باشد که با سرچ کردن راهش را می توانید بیابید
یا این که به من پیام دهید تا سایتی را به شما معرفی کنم که کدتان را در آن سایت به صورت آنلاین اجرا کنید بدون این که خطای استک اورفلو بگیرید.

</details>

<details>
<summary><strong>سری دهم تمرینات</strong></summary>
<code style="color:red">تمرین اول</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=3" target="_blank">3</a>,
<a href="http://projecteuler.net/problem=4" target="_blank">4</a>,
<a href="http://projecteuler.net/problem=22" target="_blank">22</a><br>

</details>

<details>
<summary><strong>سری یازدهم تمرینات</strong></summary>
<code style="color:red">تمرین اول</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=29" target="_blank">29</a>,
<a href="http://projecteuler.net/problem=32" target="_blank">32</a><br>

<code style="color:red">تمرین دوم</code>
 فایل 
 "exercise11_2.txt"
  را از فایل های بالا پیدا کنید و دانلود کنید، این فایل حاوی تعدادی اسم (حدود 2000 رشته) می باشد و آخرین رشته نیز رشته 
 "END"
  می باشد که نشان دهنده پایان ورودی است. هر اسم احتمالا چندین مرتبه تکرار شده است.
   برای هر اسم تعداد تکرار های آن را محاسبه نمایید و سپس برای هر اسم غیر از 
   "END"
   در یک خط تعداد تکرار های آن را چاپ نمایید برای مثال:
Mashala 127
Sakine 204
….
Kolompe 129
خروجی فوق صرفا مثال است و لزوما درست نمی باشد.

<details>
<summary style="color:green">راهنمایی</summary> 
از 
map
استفاده کنید.
</details>

</details>

<details>
<summary><strong>سری دوازدهم تمرینات</strong></summary>
<code style="color:red">تمرین اول</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=30" target="_blank">30</a>,
<a href="http://projecteuler.net/problem=34" target="_blank">34</a>,
<a href="http://projecteuler.net/problem=36" target="_blank">36</a><br>

</details>

</div>
