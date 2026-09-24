1. LinkedList::deleteFront() takes 2 different delete calls because there's 2 different heap memory layers.
one delete relates to the T object, and the other delete is for Node itself. This was inside the addFront method when I
call the new Node.

2. When arrays hold values, the memory gets managed by itself, and the data inside the array is garbage collected when
the array gets deleted. Using pointers, the arrays hold the addresses for memory, and they point to objects independent of the heap, and if
you don't add a destructor, the array leaves, but the objects stay. You don't get a compiler error for not adding a destructor, because
it doesn't get managed by c++, and thinks that youre managing them with add and delete.

3. addFront() is the owner, because when a poionter gets passed to it, the list keeps the heap memory. search() doesn't own the pointer, and
it takes the address to compare the data.

4. I thikn inheritance and polymorphism are used here. Inheritance makes sure the arrayList and linkedLists have the same structure if List<T>.
Polymorphism lets the program look at List<T> and uses the right method for the right list that got instantiated.

5. I wouldn't have thought to use override. If a class has a method to print using a constant, but in an inherited class, you just make a method to print
without adding that constant, it would still compile, but since it was meant to be overridden, it doesn't get called by pointers. Having override checks to make sure you
mean to override a method and gives an error so you know that there's something wrong. 