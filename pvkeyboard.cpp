////////////////////////////////////////////////////////////////////////////
//
// show_mask1 for ProcessViewServer created: 周日 10月 8 19:23:30 2017
//
////////////////////////////////////////////////////////////////////////////
#include "pvapp.h"

// _begin_of_generated_area_ (do not edit -> use ui2pvc) -------------------

// our mask contains the following objects
enum {
  ID_MAIN_WIDGET = 0,
  obj1,
  obj2,
  obj3,
  obj4,
  obj5,
  obj6,
  obj7,
  obj8,
  obj9,
  obj10,
  obj11,
  obj12,
  obj13,
  obj14,
  obj15,
  obj16,
  obj17,
  obj18,
  obj19,
  obj20,
  obj21,
  obj22,
  obj23,
  obj24,
  obj25,
  obj26,
  obj27,
  obj28,
  obj29,
  obj30,
  obj31,
  obj32,
  obj33,
  obj34,
  obj35,
  obj36,
  obj37,
  obj38,
  obj39,
  obj40,
  obj41,
  obj42,
  obj43,
  obj44,
  obj45,
  obj46,
  obj47,
  obj48,
  obj49,
  obj50,
  obj51,
  obj52,
  obj53,
  obj54,
  obj55,
  obj56,
  obj57,
  obj58,
  ID_END_OF_WIDGETS
};

// our mask contains the following widget names
  static const char *widgetName[] = {
  "ID_MAIN_WIDGET",
  "obj1",
  "obj2",
  "obj3",
  "obj4",
  "obj5",
  "obj6",
  "obj7",
  "obj8",
  "obj9",
  "obj10",
  "obj11",
  "obj12",
  "obj13",
  "obj14",
  "obj15",
  "obj16",
  "obj17",
  "obj18",
  "obj19",
  "obj20",
  "obj21",
  "obj22",
  "obj23",
  "obj24",
  "obj25",
  "obj26",
  "obj27",
  "obj28",
  "obj29",
  "obj30",
  "obj31",
  "obj32",
  "obj33",
  "obj34",
  "obj35",
  "obj36",
  "obj37",
  "obj38",
  "obj39",
  "obj40",
  "obj41",
  "obj42",
  "obj43",
  "obj44",
  "obj45",
  "obj46",
  "obj47",
  "obj48",
  "obj49",
  "obj50",
  "obj51",
  "obj52",
  "obj53",
  "obj54",
  "obj55",
  "obj56",
  "obj57",
  "obj58",
  "ID_END_OF_WIDGETS",
  ""};

  static const char *toolTip[] = {
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""};

  static const char *whatsThis[] = {
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""};

  static const int widgetType[ID_END_OF_WIDGETS+1] = {
  0,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQLineEdit,
  TQPushButton,
  -1 };

static int generated_defineMask(PARAM *p)
{
  int w,h,depth;

  if(p == NULL) return 1;
  if(widgetName[0] == NULL) return 1; // suppress unused warning
  w = h = depth = strcmp(toolTip[0],whatsThis[0]);
  if(widgetType[0] == -1) return 1;
  if(w==h) depth=0; // fool the compiler
  pvStartDefinition(p,ID_END_OF_WIDGETS);

  pvQPushButton(p,obj1,0);
  pvSetGeometry(p,obj1,150,220,60,60);
  pvSetText(p,obj1,pvtr("a"));
  pvSetFont(p,obj1,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj2,0);
  pvSetGeometry(p,obj2,450,290,60,60);
  pvSetText(p,obj2,pvtr("b"));
  pvSetFont(p,obj2,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj3,0);
  pvSetGeometry(p,obj3,310,290,60,60);
  pvSetText(p,obj3,pvtr("c"));
  pvSetFont(p,obj3,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj4,0);
  pvSetGeometry(p,obj4,290,220,60,60);
  pvSetText(p,obj4,pvtr("d"));
  pvSetFont(p,obj4,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj5,0);
  pvSetGeometry(p,obj5,270,150,60,60);
  pvSetText(p,obj5,pvtr("e"));
  pvSetFont(p,obj5,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj6,0);
  pvSetGeometry(p,obj6,360,220,60,60);
  pvSetText(p,obj6,pvtr("f"));
  pvSetFont(p,obj6,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj7,0);
  pvSetGeometry(p,obj7,430,220,60,60);
  pvSetText(p,obj7,pvtr("g"));
  pvSetFont(p,obj7,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj8,0);
  pvSetGeometry(p,obj8,500,220,60,60);
  pvSetText(p,obj8,pvtr("h"));
  pvSetFont(p,obj8,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj9,0);
  pvSetGeometry(p,obj9,620,150,60,60);
  pvSetText(p,obj9,pvtr("i"));
  pvSetFont(p,obj9,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj10,0);
  pvSetGeometry(p,obj10,570,220,60,60);
  pvSetText(p,obj10,pvtr("j"));
  pvSetFont(p,obj10,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj11,0);
  pvSetGeometry(p,obj11,640,220,60,60);
  pvSetText(p,obj11,pvtr("k"));
  pvSetFont(p,obj11,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj12,0);
  pvSetGeometry(p,obj12,710,220,60,60);
  pvSetText(p,obj12,pvtr("l"));
  pvSetFont(p,obj12,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj13,0);
  pvSetGeometry(p,obj13,590,290,60,60);
  pvSetText(p,obj13,pvtr("m"));
  pvSetFont(p,obj13,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj14,0);
  pvSetGeometry(p,obj14,520,290,60,60);
  pvSetText(p,obj14,pvtr("n"));
  pvSetFont(p,obj14,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj15,0);
  pvSetGeometry(p,obj15,690,150,60,60);
  pvSetText(p,obj15,pvtr("o"));
  pvSetFont(p,obj15,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj16,0);
  pvSetGeometry(p,obj16,760,150,60,60);
  pvSetText(p,obj16,pvtr("p"));
  pvSetFont(p,obj16,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj17,0);
  pvSetGeometry(p,obj17,130,150,60,60);
  pvSetText(p,obj17,pvtr("q"));
  pvSetFont(p,obj17,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj18,0);
  pvSetGeometry(p,obj18,340,150,60,60);
  pvSetText(p,obj18,pvtr("r"));
  pvSetFont(p,obj18,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj19,0);
  pvSetGeometry(p,obj19,220,220,60,60);
  pvSetText(p,obj19,pvtr("s"));
  pvSetFont(p,obj19,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj20,0);
  pvSetGeometry(p,obj20,410,150,60,60);
  pvSetText(p,obj20,pvtr("t"));
  pvSetFont(p,obj20,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj21,0);
  pvSetGeometry(p,obj21,550,150,60,60);
  pvSetText(p,obj21,pvtr("u"));
  pvSetFont(p,obj21,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj22,0);
  pvSetGeometry(p,obj22,380,290,60,60);
  pvSetText(p,obj22,pvtr("v"));
  pvSetFont(p,obj22,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj23,0);
  pvSetGeometry(p,obj23,200,150,60,60);
  pvSetText(p,obj23,pvtr("w"));
  pvSetFont(p,obj23,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj24,0);
  pvSetGeometry(p,obj24,240,290,60,60);
  pvSetText(p,obj24,pvtr("x"));
  pvSetFont(p,obj24,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj25,0);
  pvSetGeometry(p,obj25,480,150,60,60);
  pvSetText(p,obj25,pvtr("y"));
  pvSetFont(p,obj25,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj26,0);
  pvSetGeometry(p,obj26,170,290,60,60);
  pvSetText(p,obj26,pvtr("z"));
  pvSetFont(p,obj26,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj27,0);
  pvSetGeometry(p,obj27,730,80,60,60);
  pvSetText(p,obj27,pvtr("0"));
  pvSetFont(p,obj27,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj28,0);
  pvSetGeometry(p,obj28,100,80,60,60);
  pvSetText(p,obj28,pvtr("1"));
  pvSetFont(p,obj28,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj29,0);
  pvSetGeometry(p,obj29,170,80,60,60);
  pvSetText(p,obj29,pvtr("2"));
  pvSetFont(p,obj29,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj30,0);
  pvSetGeometry(p,obj30,240,80,60,60);
  pvSetText(p,obj30,pvtr("3"));
  pvSetFont(p,obj30,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj31,0);
  pvSetGeometry(p,obj31,310,80,60,60);
  pvSetText(p,obj31,pvtr("4"));
  pvSetFont(p,obj31,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj32,0);
  pvSetGeometry(p,obj32,380,80,60,60);
  pvSetText(p,obj32,pvtr("5"));
  pvSetFont(p,obj32,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj33,0);
  pvSetGeometry(p,obj33,450,80,60,60);
  pvSetText(p,obj33,pvtr("6"));
  pvSetFont(p,obj33,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj34,0);
  pvSetGeometry(p,obj34,520,80,60,60);
  pvSetText(p,obj34,pvtr("7"));
  pvSetFont(p,obj34,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj35,0);
  pvSetGeometry(p,obj35,590,80,60,60);
  pvSetText(p,obj35,pvtr("8"));
  pvSetFont(p,obj35,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj36,0);
  pvSetGeometry(p,obj36,660,80,60,60);
  pvSetText(p,obj36,pvtr("9"));
  pvSetFont(p,obj36,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj37,0);
  pvSetGeometry(p,obj37,30,80,60,60);
  pvSetText(p,obj37,pvtr("`"));
  pvSetFont(p,obj37,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj38,0);
  pvSetGeometry(p,obj38,800,80,60,60);
  pvSetText(p,obj38,pvtr("-"));
  pvSetFont(p,obj38,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj39,0);
  pvSetGeometry(p,obj39,870,80,60,60);
  pvSetText(p,obj39,pvtr("="));
  pvSetFont(p,obj39,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj40,0);
  pvSetGeometry(p,obj40,30,150,90,60);
  pvSetText(p,obj40,pvtr("Tab"));
  pvSetFont(p,obj40,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj41,0);
  pvSetGeometry(p,obj41,30,220,110,60);
  pvSetText(p,obj41,pvtr("Caps Lock"));
  pvSetFont(p,obj41,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj42,0);
  pvSetGeometry(p,obj42,30,290,130,60);
  pvSetText(p,obj42,pvtr("Shift"));
  pvSetFont(p,obj42,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj43,0);
  pvSetGeometry(p,obj43,940,80,120,60);
  pvSetText(p,obj43,pvtr("BackSpace"));
  pvSetFont(p,obj43,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj44,0);
  pvSetGeometry(p,obj44,830,150,60,60);
  pvSetText(p,obj44,pvtr("["));
  pvSetFont(p,obj44,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj45,0);
  pvSetGeometry(p,obj45,900,150,60,60);
  pvSetText(p,obj45,pvtr("]"));
  pvSetFont(p,obj45,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj46,0);
  pvSetGeometry(p,obj46,970,150,90,60);
  pvSetText(p,obj46,pvtr("\\"));
  pvSetFont(p,obj46,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj47,0);
  pvSetGeometry(p,obj47,780,220,60,60);
  pvSetText(p,obj47,pvtr(";"));
  pvSetFont(p,obj47,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj48,0);
  pvSetGeometry(p,obj48,850,220,60,60);
  pvSetText(p,obj48,pvtr("'"));
  pvSetFont(p,obj48,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj49,0);
  pvSetGeometry(p,obj49,660,290,60,60);
  pvSetText(p,obj49,pvtr(","));
  pvSetFont(p,obj49,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj50,0);
  pvSetGeometry(p,obj50,730,290,60,60);
  pvSetText(p,obj50,pvtr("."));
  pvSetFont(p,obj50,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj51,0);
  pvSetGeometry(p,obj51,800,290,60,60);
  pvSetText(p,obj51,pvtr("/"));
  pvSetFont(p,obj51,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj52,0);
  pvSetGeometry(p,obj52,310,360,410,60);
  pvSetText(p,obj52,pvtr("Space"));
  pvSetFont(p,obj52,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj53,0);
  pvSetGeometry(p,obj53,920,220,140,60);
  pvSetText(p,obj53,pvtr("Enter"));
  pvSetFont(p,obj53,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj54,0);
  pvSetGeometry(p,obj54,30,360,140,60);
  pvSetText(p,obj54,pvtr("确认"));
  pvSetFont(p,obj54,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj55,0);
  pvSetGeometry(p,obj55,180,360,120,60);
  pvSetText(p,obj55,pvtr("取消"));
  pvSetFont(p,obj55,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj56,0);
  pvSetGeometry(p,obj56,730,360,330,60);
  pvSetText(p,obj56,pvtr("清空"));
  pvSetFont(p,obj56,"Ubuntu",11,0,0,0,0);

  pvQLineEdit(p,obj57,0);
  pvSetGeometry(p,obj57,95,30,900,30);
  pvSetFont(p,obj57,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,obj58,0);
  pvSetGeometry(p,obj58,870,290,190,60);
  pvSetText(p,obj58,pvtr("Shift"));
  pvSetFont(p,obj58,"Ubuntu",11,0,0,0,0);


  pvEndDefinition(p);
  return 0;
}

// _end_of_generated_area_ (do not edit -> use ui2pvc) ---------------------

#include "pvkeyboard.h"

static int defineMask(PARAM *p)
{
  if(p == NULL) return 1;
  generated_defineMask(p);
  // (todo: add your code here)
  return 0;
}


static int showData(PARAM *p, DATA *d)
{
  if(p == NULL) return 1;
  if(d == NULL) return 1;
  return 0;
}

static int readData(DATA *d) // from shared memory, database or something else
{
  if(d == NULL) return 1;
  // (todo: add your code here)
  return 0;
}


int pvkeyboard(PARAM *p)
{
  DATA d;
  char event[MAX_EVENT_LENGTH];
  char text[MAX_EVENT_LENGTH];
  char str1[MAX_EVENT_LENGTH];
  int  i,w,h,val,x,y,button,ret;
  float xval, yval;

  defineMask(p);
  //rlSetDebugPrintf(1);
  if((ret=slotInit(p,&d)) != 0) return ret;
  readData(&d); // from shared memory, database or something else
  showData(p,&d);
  pvClearMessageQueue(p);
  while(1)
  {
    pvPollEvent(p,event);
    switch(pvParseEvent(event, &i, text))
    {
      case NULL_EVENT:
        readData(&d); // from shared memory, database or something else
        showData(p,&d);
        if((ret=slotNullEvent(p,&d)) != 0) return ret;
        break;
      case BUTTON_EVENT:
        if(trace) printf("BUTTON_EVENT id=%d\n",i);
        if((ret=slotButtonEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_PRESSED_EVENT:
        if(trace) printf("BUTTON_PRESSED_EVENT id=%d\n",i);
        if((ret=slotButtonPressedEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_RELEASED_EVENT:
        if(trace) printf("BUTTON_RELEASED_EVENT id=%d\n",i);
        if((ret=slotButtonReleasedEvent(p,i,&d)) != 0) return ret;
        break;
      case TEXT_EVENT:
        if(trace) printf("TEXT_EVENT id=%d %s\n",i,text);
        if((ret=slotTextEvent(p,i,&d,text)) != 0) return ret;
        break;
      case SLIDER_EVENT:
        sscanf(text,"(%d)",&val);
        if(trace) printf("SLIDER_EVENT val=%d\n",val);
        if((ret=slotSliderEvent(p,i,&d,val)) != 0) return ret;
        break;
      case CHECKBOX_EVENT:
        if(trace) printf("CHECKBOX_EVENT id=%d %s\n",i,text);
        if((ret=slotCheckboxEvent(p,i,&d,text)) != 0) return ret;
        break;
      case RADIOBUTTON_EVENT:
        if(trace) printf("RADIOBUTTON_EVENT id=%d %s\n",i,text);
        if((ret=slotRadioButtonEvent(p,i,&d,text)) != 0) return ret;
        break;
      case GL_INITIALIZE_EVENT:
        if(trace) printf("you have to call initializeGL()\n");
        if((ret=slotGlInitializeEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_PAINT_EVENT:
        if(trace) printf("you have to call paintGL()\n");
        if((ret=slotGlPaintEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_RESIZE_EVENT:
        sscanf(text,"(%d,%d)",&w,&h);
        if(trace) printf("you have to call resizeGL(w,h)\n");
        if((ret=slotGlResizeEvent(p,i,&d,w,h)) != 0) return ret;
        break;
      case GL_IDLE_EVENT:
        if((ret=slotGlIdleEvent(p,i,&d)) != 0) return ret;
        break;
      case TAB_EVENT:
        sscanf(text,"(%d)",&val);
        if(trace) printf("TAB_EVENT(%d,page=%d)\n",i,val);
        if((ret=slotTabEvent(p,i,&d,val)) != 0) return ret;
        break;
      case TABLE_TEXT_EVENT:
        sscanf(text,"(%d,%d,",&x,&y);
        pvGetText(text,str1);
        if(trace) printf("TABLE_TEXT_EVENT(%d,%d,\"%s\")\n",x,y,str1);
        if((ret=slotTableTextEvent(p,i,&d,x,y,str1)) != 0) return ret;
        break;
      case TABLE_CLICKED_EVENT:
        sscanf(text,"(%d,%d,%d)",&x,&y,&button);
        if(trace) printf("TABLE_CLICKED_EVENT(%d,%d,button=%d)\n",x,y,button);
        if((ret=slotTableClickedEvent(p,i,&d,x,y,button)) != 0) return ret;
        break;
      case SELECTION_EVENT:
        sscanf(text,"(%d,",&val);
        pvGetText(text,str1);
        if(trace) printf("SELECTION_EVENT(column=%d,\"%s\")\n",val,str1);
        if((ret=slotSelectionEvent(p,i,&d,val,str1)) != 0) return ret;
        break;
      case CLIPBOARD_EVENT:
        sscanf(text,"(%d",&val);
        if(trace) printf("CLIPBOARD_EVENT(id=%d)\n",val);
        if((ret=slotClipboardEvent(p,i,&d,val)) != 0) return ret;
        break;
      case RIGHT_MOUSE_EVENT:
        if(trace) printf("RIGHT_MOUSE_EVENT id=%d text=%s\n",i,text);
        if((ret=slotRightMouseEvent(p,i,&d,text)) != 0) return ret;
        break;
      case KEYBOARD_EVENT:
        sscanf(text,"(%d",&val);
        if(trace) printf("KEYBOARD_EVENT modifier=%d key=%d\n",i,val);
        if((ret=slotKeyboardEvent(p,i,&d,val,i)) != 0) return ret;
        break;
      case PLOT_MOUSE_MOVED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_MOVE %f %f\n",xval,yval);
        if((ret=slotMouseMovedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_PRESSED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_PRESSED %f %f\n",xval,yval);
        if((ret=slotMousePressedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_RELEASED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_RELEASED %f %f\n",xval,yval);
        if((ret=slotMouseReleasedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case MOUSE_OVER_EVENT:
        sscanf(text,"%d",&val);
        if(trace) printf("MOUSE_OVER_EVENT %d\n",val);
        if((ret=slotMouseOverEvent(p,i,&d,val)) != 0) return ret;
        break;
      case USER_EVENT:
        if(trace) printf("USER_EVENT id=%d %s\n",i,text);
        if((ret=slotUserEvent(p,i,&d,text)) != 0) return ret;
        break;
      default:
        if(trace) printf("UNKNOWN_EVENT id=%d %s\n",i,text);
        break;
    }
  }
}
