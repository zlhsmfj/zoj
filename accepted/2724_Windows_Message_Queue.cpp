#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

class message
{
public:
	string name;
	int param;
	int prior;

	message(){}

	message(string name, int param, int prior)
	{
		this->name = name;
		this->param = param;
		this->prior = prior;
	}

	bool operator>(const message& msg)
	{
		return prior<msg.prior;
	}

	bool operator==(const message& msg)
	{
		if(name == msg.name && param == msg.param && prior == msg.prior)
			return true;
		return false;
	}

	void print()
	{
		printf("%s %d\n", name.c_str(), param);
	}

};

message INVALID("invalid", -1, -1); //无效message

//获取父节点、左右子节点下标
int parent(int i)
{
	return (i-1)>>1;
}

int left(int i)
{
	return (i<<1)+1;
}

int right(int i)
{
	return (i+1)<<1;
}

//交换
void vswap(vector<message> &vm, int i, int j)
{
	message tmp = vm[i];
	vm[i] = vm[j];
	vm[j] = tmp;
}

//上浮
void heap_up(vector<message> &vm, int i, int hpsize)
{
	while(i>0&&vm[i]>vm[parent(i)])
	{
		vswap(vm, i, parent(i));
		i = parent(i);
	}
}

//下沉
void heap_down(vector<message> &vm, int i, int hpsize)
{
	int l = left(i);
	int r = right(i);
	int largest = i;
	if(l<hpsize&&vm[l]>vm[largest])
		largest = l;
	if(r<hpsize&&vm[r]>vm[largest])
		largest = r;
	if(largest != i)
	{
		vswap(vm, i, largest);
		heap_down(vm, largest, hpsize);
	}
}

//插入新的message
void heap_insert(vector<message> &vm, message value)
{
	vm.push_back(value);
	heap_up(vm, vm.size()-1, vm.size());
}

//取出最大
message heap_extract(vector<message> &vm)
{
	if(vm.empty())
		return INVALID;			//
	message res = vm[0];
	vm[0] = vm[vm.size()-1];
	vm.pop_back();
	heap_down(vm, 0, vm.size());
	return res;
}

//更新
void heap_update(vector<message> &vn, int index, message value)
{
	if(value == vn[index])
		return;
	message tmp = vn[index];
	vn[index] = value;
	if(tmp > value)
		heap_down(vn, index, vn.size());
	else if(value > tmp)
		heap_up(vn, index, vn.size());
}

int main()
{
	vector<message> vm;
	char cmd[100];
	char tmp[100];
	int param;
	int prior;

	while(scanf("%s", cmd)!=EOF)
	{
		if(strcmp(cmd,"GET") == 0)
		{
			message msg = heap_extract(vm);
			if(msg == INVALID)
				printf("EMPTY QUEUE!\n");
			else
				msg.print();
		}
		else if(strcmp(cmd,"PUT") == 0)
		{
			scanf("%s%d%d", tmp, &param, &prior);
			string s(tmp);
			message msg(s, param, prior);
			heap_insert(vm, msg);
		}
	}
	return 0;
}