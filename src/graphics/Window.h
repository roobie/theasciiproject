/*

  Window

  A container for Window events, ie. this enables us to resize our window.
  
  -Yamamushi (Jon Rumion)
  2012 - 12 - 11

 */

#include "SDL/SDL.h"
#include <vector>

class Frame;



class Window {

 private:

  // Whether the window is windowed or not
  bool windowed;
  // Window status
  bool windowOK;
  // [Window [FRnAME [Widget] ] ]
  std::vector<Frame *> frameList;

 public:
  
  Window();
  virtual ~Window(){};

  // Our SDL Window for this Object
  SDL_Surface *screen;

  // Only for Window-Drawing events!
  void Handle_Events(SDL_Event event);
  void Toggle_Fullscreen();

  void Add_To_FrameList(Frame *src);
  void Draw_Frames();
  void Draw_Single_Frame(Frame *frame);
  void Remove_Frame(Frame *remove);
  void Focus_Frame(Frame *focus);
  void Focus_Next_Frame();
  void Focus_Previous_Frame();

  // Our generic Error Handling Function
  bool Error();

};
