#include <iostream>
#include <limits>
using namespace std;
int main()
{
  // char 一个字节
  char ch = 97;
  cout << "char:ch的值为" << ch << ";\nsize大小为：" << sizeof(char)
       << ";\n最大值为:" << (numeric_limits<char>::max)() << endl;
  // 尝试修改ch为-1
  ch = -1;
  cout << "修改后的ch的值为：" << int(ch) << endl;
  // int 4个字节
  int c = 122;
  cout << "c的值为:" << c << "int类型字节数：" << sizeof(int) << ";最大值：" << (numeric_limits<int>::max)() << ";最小值为" << (numeric_limits<int>::min)() << endl;
  // unsigned可以设置为无符号
  unsigned int d = 122;
  cout << "c的值为:" << d << "int类型字节数：" << sizeof(unsigned int) << ";最大值：" << (numeric_limits<unsigned int>::max)() << ";最小值为" << (numeric_limits<unsigned int>::min)() << endl;
  // long可以设置为8字节，表达的数值范围更大
  unsigned long int e = 122;
  cout << "c的值为:" << e << "int类型字节数：" << sizeof(unsigned long int) << ";最大值：" << (numeric_limits<unsigned long int>::max)() << ";最小值为" << (numeric_limits<unsigned long int>::min)() << endl;
  // 指针与引用
  int o = 1;
  int *p = &o;
  cout << "p为指针，指向o的引用，指针地址为：" << p << ";p的值为" << *p << endl;
  // 借助指针可以修改该指针指向的内存内保存的值
  *p = 2;
  cout << "修改后p的地址为：" << p << ";修改完后o的值为" << o << endl;
  // 再增加一个指针，指针的指向和p指针的指向一致
  int *t = p;
  cout << "新增指针t，t的地址为" << t << endl;
  // 先删除指针p，指针t成为野指针，这个在编译时并不会报错，但在运行时会报错
  // delete p;
  // 也不能直接使用delete t操作，delete p;操作
  t = NULL;
  p = NULL;
  cout << "删除指针t后，t的值为：" << t << endl;
  cout << "删除指针p后，p的值为:" << p << endl;
  cout << "此时o的值为：" << o << endl;
}