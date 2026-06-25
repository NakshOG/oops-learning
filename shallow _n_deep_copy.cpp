// default copy constructor jo hota h wo shallow copy krta h 
// shallow copy matlab 
// jese mene ek h1 hero banaya uski dedtails di and then mene ek aur h2 hero banaya jo h1 ki copy h 
// now ab me jese hi h1  me kuch changes krunga to wo h2 me bhi change hojaega 
// isey shallow copy kehte h and ye default copy constructor me hota h 
// agar hero1 ka address 710 h to uski copy hero 2 ka bhi address same hoga isliye ek change pe dono me cchange horha h coz same address h and wohi address pe change hirhi h cheezei 
// inshort same memory ko use kr rhe h ham with different names 

// deep copy 
// deep copy me uss cheez ki ek aur copy bann jaegi to ek change doosre ko change nhi krega
// jo hum copy instructor banate h 
// Hero(Hero& temp){
//     char *ch = new char[strlen(temp.name)+1];
//     strcpy(ch,temp.name);
//     this->name =ch;

// }