#ifndef ANIMALOBJECT_H
#define ANIMALOBJECT_H


class AnimalObject {

	protected:
		int speed;
	public:
 		 void run();	
		int getSpeed(){
			return speed;
		}
		AnimalObject();
		AnimalObject(int sp);
};

#endif
