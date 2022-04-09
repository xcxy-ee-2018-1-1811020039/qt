# OroderSys
一个简单的在线点餐系统
####订单表
0int orderid
1int tableid
2int dishid
3int status
4char commend
5

int tableId

#### 账单表 
0int billid(time)
1int tabalid
2int dishid
3char dishname
4int price
5char username
6int status
status字段

-  0 待做
- 1 因缺材料不能做
- 2 催菜中
- 3 已做

#### 用户表

int id
int usertype
string 用户名
int 密码

type字段

- 0 管理员
- 1 收银员
- 2 厨师

#### 菜单表


int dishid;
char dishname;
int prace;
int status
status字段

- 0 上架中
- 1 已下架
