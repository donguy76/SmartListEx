#pragma once
class CSmartListEx
{
public:
	CSmartListEx();
	~CSmartListEx();

	template <typename T>
	bool addNode(T* data);

	template <typename T>
	bool addNode(T* index, T* data);

	template <typename T>
	bool deleteNode(T* data);

	template <typename T>
	bool deleteNode(T* index, T* data);

private:
	//define the doubly linked list with template arguments.
	template <typename T>
	struct SmartList {
		T* prev;
		T* data;
		T* next;
	};
};

