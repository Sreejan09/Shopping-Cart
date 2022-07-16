#include<iostream>
#include "dataModel.h"
using namespace std;

vector<product> allProducts ={
	product(1, "Apple", 120.0);
	product(2, "Mango", 100.0);
	product(3, "Guava", 50.0);
	product(4, "Banana", 40.0);
	product(5, "Strawberry", 150.0);
	product(6, "Pineapple", 50.0);
};

Product chooseProduct(){
	string Prod_list;
	cout<<"Available Products are : "<<endl;
	
	for(auto product : allProducts)
	{
		productList.append(product.get_Display());
		
	}
	cout<<productList<<endl;
	
	cout<<"------------------"<<endl;
	string choice;
	cin>>choice;
	
	for(int i=0;i<allProducts.size();i++)
	{
		if(allProduct[i]==choice)
		return allProducts[i];
		
	}
	cout<<"Product not found "<<endl
	return NULL;
}

bool checkout(Cart &cart)
{
	if(cart.isEmpty())
	{
		return false;
		
	}
	float total = cart.getTotal();
	cout<<"Pay in cash. ";
	float paid;
	cin>>paid;
	if(paid>=total)
	{
		cout<<"Change "<<paid - total<<endl;
		cout<<"Thanks you for shopping."<<endl;
		return true;
	}
}
int main()
{
		
		char action;
		
		while(true)
		{
			cout<<"Select an action - (A)dd item, (V)iew item, (C)heckout  : ";
			cin>>action;
			if(action=='A')
			{
				//adding item to the cart 
				//view all item + chosse product + add to the cart;
				product * prod= chooseProduct();
				if(prod!=NULL)
				{
					cout<<"Added to the cart "<<prod->getDisplay();
				}
			}
			else if (action == 'V')
			{
				//view the cart
				cout<<"--------------------";
				cout<<cart.viewCart();
				cout<<"--------------------";
			}
			else
			{
				cart.viewcart();
				if(checkout(cart))
				{
					break;
				}
				
			}
		}
}


