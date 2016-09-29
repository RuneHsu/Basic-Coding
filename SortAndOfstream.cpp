#include <iostream>
#include <fstream>

using namespace std;

void Order(vector<int>& data) // bubble sorting
{
  int count = data.size();
  int tag = false;          // set the flag that whether need continue bubble sorting
  for (int i = 0; i < count; i++)
  {
    for (int j = 0; j < count - i - 1; j++)
    {
      if (data[j] > data[j+1])
      {
        tag = true;
        int temp = data[j];
        data[j] = data[j+1];
        data[j+1] = temp;
      }
    }
    if (!tag)
      break;
  }
}

int main()
{
  vector<int> data;
  ifstream in("c:\\data.txt");
  if (!in)
  {
    cout << "file error!"; 
    exit(1);
  }
  int temp;
  while (!in.eof())
  {
    in >> temp;
    data.push_back(temp);
  }
  
  in.close();
  Order(data);
  ofstream out("c:\\result.txt");
  if (!out)
  {
    cout << "file error!";
    exit(1);
  }
  for (i = 0; i < data.size(); i++)
  {
    out << data[i] << " ";
  }
  out.close();
}
