class String
{
  public:
  String (const char *str = NULL);        // 普通构造函数
  String (const String &other);           // 拷贝构造函数
  ~ String (void);                        // 析构函数
  String & operate = (const String &other); // 赋值函数
  private:
  char *m_data;                           // 用于保存字符串
}

String::String (const char *str)
{
  if (str == NULL)
  {
    m_data = new char[1];             // 对空字符串自动申请存放结束标志'\0'的空
    *m_data = '\0';                   // 对m_data加NULL判断
  }
  else
  {
    int length = strlen(str);
    m_data = new char[length + 1];
    strcpy(m_data, str);
  }
}
// 析构函数
String::~String(void)
{
  delete [] m_data;
}

// 拷贝构造函数
String::String(const String &other)
{
  int length = strlen(other.m_data);
  m_data = new char[length + 1];
  strcpy(m_data, other.m_data);
}


// 赋值函数
String & String::operate = (const String &other)
{
  if (this == &other)
    return this;
  delete [] m_data;
  int length = strlen(other.m_data);
  m_data = new char[length + 1];
  strcpy(m_data, other.m_data);
  return *this;
}
