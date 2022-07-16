//product, item and Cart
#include<string>
using namespace std;
class item;
class cart;
class product{
	int id ;
	string name;
	float price;
	
	public :
		product(int id, string name, float price)
		{
			this->id=id;
			this->name= name;
			this->price=price;
		}
		string get_Display()
		{
			return name + " : Rs " + to_string(price);
		}
		friend class item;
};

class item{
	product prod;
	int quantity;
	
	public : 
	item(product prod, int quantity)
	{
		this->prod=prod;
		this->quantity=quantity;
	}
	float getItemPrice()
	{
		return quantity * price;
	}
	string get_item_info()
	{
		return to_string(quantity) + " x " + prod.name + " : Rs " + to_string(getItemPrice);
	}
	friend class cart;
};

class cart{
	unordered_map<int, Item> items;
	
	public : 
		void addProduct(product prod)
		{
			if(items.count(prod.id)==0)
			{
				Item newItem(prod,1 );
				items[prod.id] = newItem;
			}
			else
			items[prod.id].quantity +=1;1
		}
};

