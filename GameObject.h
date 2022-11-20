<<<<<<< Updated upstream
#define GameObject_H
#include "Point2D.h"
namespace N
{
    class GameObject
    {
        protected Point2D location;
        protected int id_num;
        protected char display_code;
        protected char state;
        
        public GameObject (char in_code);
        public GameObject(Point2D in_loc, int in_id, char in_code);
        public Point2D GetLocation();
        int GetId();
        char GetState();
        void ShowStatus();

    };

}
=======
#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

namespace N
{
  class GameObject
  {
  protected:
    Point2D location;
    int id_num;
    char display_code;
    char state;

  private:
    GameObject(char in_code);
    GameObject(Point2D in_loc, int in_id, char in_code,);
    Point2D GetLocation();
    int GetId();
    void ShowStatus();
    char GetState();
  };
}

#endif
>>>>>>> Stashed changes
