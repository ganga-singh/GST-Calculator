#include<iostream>
#include<string.h>
using namespace std;


main()
{   
    int choice;
   float MRP;
   int i,pos;
    cout<<"For consumer goods PRESS 1\nFor lifestyle and home PRESS 2\nFor beauty and personal care PRESS 3\nFor kitchenware and appliances PRESS 4\nFor construction goods PRESS 5 \nFor dairy and farm products PRESS 6\nFor medical supplies PRESS 7\nFor metals and minerals PRESS 8\nFor others PRESS 9\nFor Services PRESS 10"<<endl;
    cin>>choice;
    if(choice==1)
    {
		string consumer_goods[52]={"Aluminium foil","Agarbatti","Preserved vegetables","Butter,ghee,cheese","Dry fruits","Jams,jellies","Frozen meat","Branded paneer","Branded cereals","Cocoa butter,oils chocolates","Instant,aroma coffee","Coffee concentrates,custard powder","Protein concentrates,sugar syrups","Razors","Dental floss","Toothpaste","Deodrants","Aftershave","Shaving cream","Cereals","Puffed rice,papad,bread","Aquatic/poultry/cattle feed","Salt","Soyabean,groundnut,sunflower seeds","Infant use preparations","Pasta,corn flakes and cakes","Coffee,tea","Frozen vegetables","Condensed milk","Toilet paper","Hot water bottles","Petroleum jelly,paraffin wax","Pencil sharpners,knives","Meats and fish preparations","Sweet meats","Bakery mixes,dough,pizza bread","Vegetable fats and oils","Tea concentrates,soups","Ice cream,instant food mixes,sharbat","Refined sugar","Soap","Dentrifices-Tooth paste","Hair oil","Hand made safety matches","Broom stciks","Candles","Tooth powder","LED lights","Milk beverages","Ready to eat namkeen/Bhujiya","Beet sugar,cane sugar","Ketchup,Sauces"};
        for(i=1;i<(sizeof(consumer_goods)/sizeof(string));i++)
		{
			cout<<i<<"."<<consumer_goods[i];
			cout<<"\n";	
	 }	 
	 
	    float GST[52]={18,5,18,12,12,12,12,5,5,28,28,28,28,28,28,28,28,28,28,0,0,0,0,5,18,18,5,5,18,18,18,18,12,12,5,5,5,5,18,18,18,18,18,5,5,12,12,12,12,12,5,12};
	    float TAX_prev[52]={18.5,0,0,6,6,12,6,0,0,26,26,26,26,26,26,26,26,26,26,0,0,0,0,6,19.5,19.5,6,6,18.5,18.5,18.5,20,18.5,19.5,12,12,12,12,26,26,26,26,26,18.5,18,26,26,26,26,26,26,12};
		string input;
	
    cout<<"\n\nEnter the product name : "; 
	cin.ignore();
	getline(cin,input,'\n');
	for(i=0;i<(sizeof(consumer_goods)/sizeof(string));i++)
	{
	if(stricmp(consumer_goods[i].c_str(),input.c_str())==0)
	{
	pos=i;
	break;
	}	
	}
	cout<<"\n\nPRODUCT NAME : "<<consumer_goods[pos];
	float total_gst=0,total_tax_prev=0;
	cout<<"\n\nEnter the cost of product : Rs.";
	cin>>MRP;
	total_tax_prev=MRP+((TAX_prev[pos]/100)*MRP);
	cout<<"\n\nTotal amount before GST : Rs."<<total_tax_prev;
	total_gst=MRP+((GST[pos]/100)*MRP);
	cout<<"\n\nTotal amount after GST : Rs."<<total_gst;
	
	
}
else if(choice==2)
{

       string lifestyle_home[19]={"Leather bags","Cell phones","Yachts","Air conditioners","Refrigerators","Storage water heaters","Dish washing machines","Photocopier,fax machine","Wristwatches","Furniture","Video game consoles","Exercise equipment","Sports goods","Bicycles","Spectacle lens","Whey proteins & fitness suppliments","Hats and other headgears","Steel utensils","Printers"};
       
	   
	   for(i=1;i<(sizeof(lifestyle_home)/sizeof(string));i++)
		{
			cout<<i<<"."<<lifestyle_home[i];
			cout<<"\n";	
	 }	 
	 
	    float GST[19]={28,18,28,28,28,28,28,28,28,28,28,28,12,12,12,18,18,5,18};
	    float TAX_prev[19]={6,6,18.5,26,26,26,26,26,26,26,26,26,18.5,18.5,18.5,26,26,18.5,26};
		string input;
	
    cout<<"\n\nEnter the product name : "; 
	cin.ignore();
	getline(cin,input,'\n');
	for(i=0;i<(sizeof(lifestyle_home)/sizeof(string));i++)
	{
	if(stricmp(lifestyle_home[i].c_str(),input.c_str())==0)
	{
	pos=i;
	break;
	}	
	}
	cout<<"\n\nPRODUCT NAME : "<<lifestyle_home[pos];
	float total_gst=0,total_tax_prev=0;
	cout<<"\n\nEnter the cost of product : Rs.";
	cin>>MRP;
	total_tax_prev=MRP+((TAX_prev[pos]/100)*MRP);
	cout<<"\n\nTotal amount before GST : Rs."<<total_tax_prev;
	total_gst=MRP+((GST[pos]/100)*MRP);
	cout<<"\n\nTotal amount after GST : Rs."<<total_gst;

}

  else if(choice==3)
    {
	string beauty_personalcare[6]={"Manicure,pedicure sets","Perfumes","Beauty or makeup preparations","Skincare items including sunscreen","Shampoos,haircream,hairdyes","Wigs,false beards,eyelashes"};
	
	
	for(i=1;i<(sizeof(beauty_personalcare)/sizeof(string));i++)
		{
			cout<<i<<"."<<beauty_personalcare[i];
			cout<<"\n";	
	 }	 
	 
	    float GST[6]={28,28,28,28,28,28};
	    float TAX_prev[6]={26,26,26,26,26,26};
		string input;
	
    cout<<"\n\nEnter the product name : "; 
	cin.ignore();
	getline(cin,input,'\n');
	for(i=0;i<(sizeof(beauty_personalcare)/sizeof(string));i++)
	{
	if(stricmp(beauty_personalcare[i].c_str(),input.c_str())==0)
	{
	pos=i;
	break;
	}	
	}
	cout<<"\n\nPRODUCT NAME : "<<beauty_personalcare[pos];
	float total_gst=0,total_tax_prev=0;
	cout<<"\n\nEnter the cost of product : Rs.";
	cin>>MRP;
	total_tax_prev=MRP+((TAX_prev[pos]/100)*MRP);
	cout<<"\n\nTotal amount before GST : Rs."<<total_tax_prev;
	total_gst=MRP+((GST[pos]/100)*MRP);
	cout<<"\n\nTotal amount after GST : Rs."<<total_gst;

}


else if(choice==4)
{
	string kitchenware_appliances[8]={"Stoves(except kerosene,LPG)","Electrical hot plates","Aluminium utensils","LPG for domestic supply","Household copper articles","Copper utensils","Iron/steel/household articles","kerosene stoves"};
	
	
	for(i=1;i<(sizeof(kitchenware_appliances)/sizeof(string));i++)
		{
			cout<<i<<"."<<kitchenware_appliances[i];
			cout<<"\n";	
	 }	 
	 
	    float GST[8]={28,28,12,5,5,5,5,5};
	    float TAX_prev[8]={18.5,18.5,18.5,17,18.5,18.5,18.5,18.5};
		string input;
	
    cout<<"\n\nEnter the product name : "; 
	cin.ignore();
	getline(cin,input,'\n');
	for(i=0;i<(sizeof(kitchenware_appliances)/sizeof(string));i++)
	{
	if(stricmp(kitchenware_appliances[i].c_str(),input.c_str())==0)
	{
	pos=i;
	break;
	}	
	}
	cout<<"\n\nPRODUCT NAME : "<<kitchenware_appliances[pos];
	float total_gst=0,total_tax_prev=0;
	cout<<"\n\nEnter the cost of product : Rs.";
	cin>>MRP;
	total_tax_prev=MRP+((TAX_prev[pos]/100)*MRP);
	cout<<"\n\nTotal amount before GST : Rs."<<total_tax_prev;
	total_gst=MRP+((GST[pos]/100)*MRP);
	cout<<"\n\nTotal amount after GST : Rs."<<total_gst;

	
	
}
else if(choice==5)
{

string construction[9]={"Cement","Wall paper","Paints and varnishes","Putty,wall fillings","Plaster","Ceramic tiles","Tempered glass","Sand lime bricks","Fly ash bricks"};

	for(i=1;i<(sizeof(construction)/sizeof(string));i++)
		{
			cout<<i<<"."<<construction[i];
			cout<<"\n";	
	 }	 
	 
	    float GST[9]={28,28,28,28,28,28,28,5,12};
	    float TAX_prev[9]={30,18.5,26,26,26,26,26,6,6};
		string input;
	
    cout<<"\n\nEnter the product name : "; 
	cin.ignore();
	getline(cin,input,'\n');
	for(i=0;i<(sizeof(construction)/sizeof(string));i++)
	{
	if(stricmp(construction[i].c_str(),input.c_str())==0)
	{
	pos=i;
	break;
	}	
	}
	cout<<"\n\nPRODUCT NAME : "<<construction[pos];
	float total_gst=0,total_tax_prev=0;
	cout<<"\n\nEnter the cost of product : Rs.";
	cin>>MRP;
	total_tax_prev=MRP+((TAX_prev[pos]/100)*MRP);
	cout<<"\n\nTotal amount before GST : Rs."<<total_tax_prev;
	total_gst=MRP+((GST[pos]/100)*MRP);
	cout<<"\n\nTotal amount after GST : Rs."<<total_gst;

}
else if(choice==6)

{
	string dairy_farmproducts[4]={"Fresh milk","Fresh vegetables,roots,tubers","Fresh fruits","Fruits and vegetable juices"};
	
	for(i=1;i<(sizeof(dairy_farmproducts)/sizeof(string));i++)
		{
			cout<<i<<"."<<dairy_farmproducts[i];
			cout<<"\n";	
	 }	 
	 
	    float GST[4]={0,0,0,12};
	    float TAX_prev[4]={0,0,0,12};
		string input;
	
    cout<<"\n\nEnter the product name : "; 
	cin.ignore();
	getline(cin,input,'\n');
	for(i=0;i<(sizeof(dairy_farmproducts)/sizeof(string));i++)
	{
	if(stricmp(dairy_farmproducts[i].c_str(),input.c_str())==0)
	{
	pos=i;
	break;
	}	
	}
	cout<<"\n\nPRODUCT NAME : "<<dairy_farmproducts[pos];
	float total_gst=0,total_tax_prev=0;
	cout<<"\n\nEnter the cost of product : Rs.";
	cin>>MRP;
	total_tax_prev=MRP+((TAX_prev[pos]/100)*MRP);
	cout<<"\n\nTotal amount before GST : Rs."<<total_tax_prev;
	total_gst=MRP+((GST[pos]/100)*MRP);
	cout<<"\n\nTotal amount after GST : Rs."<<total_gst;

}
else if(choice==7)
{
	string medical_supplies[5]={"Human blood","Condoms/Contraceptives","Glands and other organs","Ayurvaedic,unani medicaments","Homoeopathic,siddha medicaments"};
	
	for(i=1;i<(sizeof(medical_supplies)/sizeof(string));i++)
		{
			cout<<i<<"."<<medical_supplies[i];
			cout<<"\n";	
	 }	 
	 
	    float GST[5]={0,0,12,12,12};
	    float TAX_prev[5]={0,0,12,12,12};
		string input;
	
    cout<<"\n\nEnter the product name : "; 
	cin.ignore();
	getline(cin,input,'\n');
	for(i=0;i<(sizeof(medical_supplies)/sizeof(string));i++)
	{
	if(stricmp(medical_supplies[i].c_str(),input.c_str())==0)
	{
	pos=i;
	break;
	}	
	}
	cout<<"\n\nPRODUCT NAME : "<<medical_supplies[pos];
	float total_gst=0,total_tax_prev=0;
	cout<<"\n\nEnter the cost of product : Rs.";
	cin>>MRP;
	total_tax_prev=MRP+((TAX_prev[pos]/100)*MRP);
	cout<<"\n\nTotal amount before GST : Rs."<<total_tax_prev;
	total_gst=MRP+((GST[pos]/100)*MRP);
	cout<<"\n\nTotal amount after GST : Rs."<<total_gst;

}
else if(choice==8)
{
	string metals_minerals[16]={"Peat","All ores and concentrates","Kerosene PDS","Petroleum coke,petroleum bitumen","Tar","Coal","Lignite","Copper bars,rods,wires","Copper screws,nuts,bolts","Nickel bars,rods,wires","Nickel screw,nuts,bolts","Nickel tubes,pipes,netting","Aluminium ingots,rods,wires","Lead plates,sheets,strips","Zinc goods","Tin bars,rods"};
	
	for(i=1;i<(sizeof(metals_minerals)/sizeof(string));i++)
		{
			cout<<i<<"."<<metals_minerals[i];
			cout<<"\n";	
	 }	 
	 
	    float GST[16]={5,5,5,18,5,5,5,18,18,18,18,18,18,18,18,18};
	    float TAX_prev[16]={19.5,18.5,17,27.5,12,12,12,18.5,18.5,18.5,18.5,18.5,18.5,18.5,18.5,18.5};
		string input;
	
    cout<<"\n\nEnter the product name : "; 
	cin.ignore();
	getline(cin,input,'\n');
	for(i=0;i<(sizeof(metals_minerals)/sizeof(string));i++)
	{
	if(stricmp(metals_minerals[i].c_str(),input.c_str())==0)
	{
	pos=i;
	break;
	}	
	}
	cout<<"\n\nPRODUCT NAME : "<<metals_minerals[pos];
	float total_gst=0,total_tax_prev=0;
	cout<<"\n\nEnter the cost of product : Rs.";
	cin>>MRP;
	total_tax_prev=MRP+((TAX_prev[pos]/100)*MRP);
	cout<<"\n\nTotal amount before GST : Rs."<<total_tax_prev;
	total_gst=MRP+((GST[pos]/100)*MRP);
	cout<<"\n\nTotal amount after GST : Rs."<<total_gst;

}

else if(choice==9)
{
	string others[10]={"Rubber tyres","Steam","Pianos","Revolvers","Calendars","Helmets","Fertilizers","Tractors","Firewood","Plastic products"};
	
	for(i=1;i<(sizeof(others)/sizeof(string));i++)
		{
			cout<<i<<"."<<others[i];
			cout<<"\n";	
	 }	 
	 
	    float GST[10]={28,12,28,28,12,18,12,12,0,18};
	    float TAX_prev[10]={18.5,0,26,26,12,18.5,18.5,18.5,12.5,18.5};
		string input;
	
    cout<<"\n\nEnter the product name : "; 
	cin.ignore();
	getline(cin,input,'\n');
	for(i=0;i<(sizeof(others)/sizeof(string));i++)
	{
	if(stricmp(others[i].c_str(),input.c_str())==0)
	{
	pos=i;
	break;
	}	
	}
	cout<<"\n\nPRODUCT NAME : "<<others[pos];
	float total_gst=0,total_tax_prev=0;
	cout<<"\n\nEnter the cost of product : Rs.";
	cin>>MRP;
	total_tax_prev=MRP+((TAX_prev[pos]/100)*MRP);
	cout<<"\n\nTotal amount before GST : Rs."<<total_tax_prev;
	total_gst=MRP+((GST[pos]/100)*MRP);
	cout<<"\n\nTotal amount after GST : Rs."<<total_gst;

}
else if(choice==10)
{
	string services[5]={"Telecom","Work contracts","Non AC/alcohol serving restaurants","AC,alcohol serving restaurants","Five star restaurants"};
	
	for(i=1;i<(sizeof(services)/sizeof(string));i++)
		{
			cout<<i<<"."<<services[i];
			cout<<"\n";	
	 }	 
	 
	    float GST[5]={18,12,12,18,28};
	    float TAX_prev[5]={15,15,14,22,18};
		string input;
	
    cout<<"\n\nEnter the product name : "; 
	cin.ignore();
	getline(cin,input,'\n');
	for(i=0;i<(sizeof(services)/sizeof(string));i++)
	{
	if(stricmp(services[i].c_str(),input.c_str())==0)
	{
	pos=i;
	break;
	}	
	}
	cout<<"\n\nPRODUCT NAME : "<<services[pos];
	float total_gst=0,total_tax_prev=0;
	cout<<"\n\nEnter the cost of product : Rs.";
	cin>>MRP;
	total_tax_prev=MRP+((TAX_prev[pos]/100)*MRP);
	cout<<"\n\nTotal amount before GST : Rs."<<total_tax_prev;
	total_gst=MRP+((GST[pos]/100)*MRP);
	cout<<"\n\nTotal amount after GST : Rs."<<total_gst;

	
}
else 
cout<<"INVALID OPTION";

}
