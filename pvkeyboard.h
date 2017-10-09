//###############################################################
//# mask1_slots.h for ProcessViewServer created: 周日 10月 8 19:23:30 2017
//# please fill out these slots
//# here you find all possible events
//# Yours: Lehrig Software Engineering
//###############################################################

// todo: uncomment me if you want to use this data aquisiton
// also uncomment this classes in main.cpp and pvapp.h
// also remember to uncomment rllib in the project file
//extern rlModbusClient     modbus;  //Change if applicable
//extern rlSiemensTCPClient siemensTCP;
//extern rlPPIClient        ppi;

typedef struct // (todo: define your data structure here)
{
  char string[1024];
  int index;
}
DATA;

int caps_flag = 0;     
int shift_flag = 0;


static int caps_function(PARAM *p)
{
  if(caps_flag) 
  {
    pvSetText(p,obj1,pvtr("A"));
    pvSetText(p,obj2,pvtr("B"));
    pvSetText(p,obj3,pvtr("C"));
    pvSetText(p,obj4,pvtr("D"));
    pvSetText(p,obj5,pvtr("E"));
    pvSetText(p,obj6,pvtr("F"));
    pvSetText(p,obj7,pvtr("G"));
    pvSetText(p,obj8,pvtr("H"));
    pvSetText(p,obj9,pvtr("I"));
    pvSetText(p,obj10,pvtr("J"));
    pvSetText(p,obj11,pvtr("K"));
    pvSetText(p,obj12,pvtr("L"));
    pvSetText(p,obj13,pvtr("M"));
    pvSetText(p,obj14,pvtr("N"));
    pvSetText(p,obj15,pvtr("O"));
    pvSetText(p,obj16,pvtr("P"));
    pvSetText(p,obj17,pvtr("Q"));
    pvSetText(p,obj18,pvtr("R"));
    pvSetText(p,obj19,pvtr("S"));
    pvSetText(p,obj20,pvtr("T"));
    pvSetText(p,obj21,pvtr("U"));
    pvSetText(p,obj22,pvtr("V"));
    pvSetText(p,obj23,pvtr("W"));
    pvSetText(p,obj24,pvtr("X"));
    pvSetText(p,obj25,pvtr("Y"));
    pvSetText(p,obj26,pvtr("Z"));
  }
  else
  { 
    pvSetText(p,obj1,pvtr("a"));
    pvSetText(p,obj2,pvtr("b"));
    pvSetText(p,obj3,pvtr("c"));
    pvSetText(p,obj4,pvtr("d"));
    pvSetText(p,obj5,pvtr("e"));
    pvSetText(p,obj6,pvtr("f"));
    pvSetText(p,obj7,pvtr("g"));
    pvSetText(p,obj8,pvtr("h"));
    pvSetText(p,obj9,pvtr("i"));
    pvSetText(p,obj10,pvtr("j"));
    pvSetText(p,obj11,pvtr("k"));
    pvSetText(p,obj12,pvtr("l"));
    pvSetText(p,obj13,pvtr("m"));
    pvSetText(p,obj14,pvtr("n"));
    pvSetText(p,obj15,pvtr("o"));
    pvSetText(p,obj16,pvtr("p"));
    pvSetText(p,obj17,pvtr("q"));
    pvSetText(p,obj18,pvtr("r"));
    pvSetText(p,obj19,pvtr("s"));
    pvSetText(p,obj20,pvtr("t"));
    pvSetText(p,obj21,pvtr("u"));
    pvSetText(p,obj22,pvtr("v"));
    pvSetText(p,obj23,pvtr("w"));
    pvSetText(p,obj24,pvtr("x"));
    pvSetText(p,obj25,pvtr("y"));
    pvSetText(p,obj26,pvtr("z"));
  }
  return 0;
}

static int shift_function(PARAM *p)
{
  if(shift_flag)
  {
    pvSetText(p,obj27,pvtr(")"));
    pvSetText(p,obj28,pvtr("!"));
    pvSetText(p,obj29,pvtr("@"));
    pvSetText(p,obj30,pvtr("#"));
    pvSetText(p,obj31,pvtr("$"));
    pvSetText(p,obj32,pvtr("%"));
    pvSetText(p,obj33,pvtr("^"));
    pvSetText(p,obj34,pvtr("&&"));
    pvSetText(p,obj35,pvtr("*"));
    pvSetText(p,obj36,pvtr("("));
    pvSetText(p,obj37,pvtr("~"));
    pvSetText(p,obj38,pvtr("_"));
    pvSetText(p,obj39,pvtr("+"));
    pvSetText(p,obj44,pvtr("{"));
    pvSetText(p,obj45,pvtr("}"));
    pvSetText(p,obj46,pvtr("|"));
    pvSetText(p,obj47,pvtr(":"));
    pvSetText(p,obj48,pvtr("\""));
    pvSetText(p,obj49,pvtr("<"));
    pvSetText(p,obj50,pvtr(">"));
    pvSetText(p,obj51,pvtr("?"));
  }
  else
  {
    pvSetText(p,obj27,pvtr("0"));
    pvSetText(p,obj28,pvtr("1"));
    pvSetText(p,obj29,pvtr("2"));
    pvSetText(p,obj30,pvtr("3"));
    pvSetText(p,obj31,pvtr("4"));
    pvSetText(p,obj32,pvtr("5"));
    pvSetText(p,obj33,pvtr("6"));
    pvSetText(p,obj34,pvtr("7"));
    pvSetText(p,obj35,pvtr("8"));
    pvSetText(p,obj36,pvtr("9"));
    pvSetText(p,obj37,pvtr("`"));
    pvSetText(p,obj38,pvtr("-"));
    pvSetText(p,obj39,pvtr("="));
    pvSetText(p,obj44,pvtr("["));
    pvSetText(p,obj45,pvtr("]"));
    pvSetText(p,obj46,pvtr("\\"));
    pvSetText(p,obj47,pvtr(";"));
    pvSetText(p,obj48,pvtr("\'"));
    pvSetText(p,obj49,pvtr(","));
    pvSetText(p,obj50,pvtr("."));
    pvSetText(p,obj51,pvtr("/"));
  }
  return 0;
}

static int slotInit(PARAM *p, DATA *d)
{
  if(p == NULL || d == NULL) return -1;
  memset(d,0,sizeof(DATA));

  shift_flag = 0;
  caps_flag = 0;
  strcpy(d->string,(char *)p->modalUserData);
  d->index=strlen(d->string);
  pvPrintf(p,57,"%s",d->string);
  return 0;
}

static int slotNullEvent(PARAM *p, DATA *d)
{
  if(p == NULL || d == NULL) return -1;
//  char *ptr = (char *)p->modalUserData;
//  strcpy(ptr,d->string);
//  pvUpdateBaseWindow(p);
  return 0;
}

static int slotButtonEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  if(id == -1)
    pvTerminateModalDialog(p);
  if(id > 0 && id < 27)
    if(caps_flag == 0)
      d->string[d->index++]=96+id;
    else 
      d->string[d->index++]=64+id;
  else if(id > 26 && id < 37)
    if(shift_flag == 0)
      d->string[d->index++]=id+21;
    else 
    {
//      d->string[d->index++]=pvText(p,id);
      char temp;
      switch(id)
      {
        case 27:temp=')';break;
        case 28:temp='!';break;
        case 29:temp='@';break;
        case 30:temp='#';break;
        case 31:temp='$';break;
        case 32:temp='%';break;
        case 33:temp='^';break;
        case 34:temp='&';break;
        case 35:temp='*';break;
        case 36:temp='(';break;
      }
      d->string[d->index++]=temp;
    }
  else if(id == 37)
    if(shift_flag == 0)
      d->string[d->index++]='`';
    else 
      d->string[d->index++]='~';
  else if(id == 38)
    if(shift_flag == 0)
      d->string[d->index++]='-';
    else 
      d->string[d->index++]='_';
  else if(id == 39)
    if(shift_flag == 0)
      d->string[d->index++]='=';
    else 
      d->string[d->index++]='+';
  else if(id == 40)
    d->string[d->index++]='\t';
  else if(id == 44)
    if(shift_flag == 0)
      d->string[d->index++]='[';
    else 
      d->string[d->index++]='{';
  else if(id == 45)
    if(shift_flag == 0)
      d->string[d->index++]=']';
    else 
      d->string[d->index++]='}';
  else if(id == 46)
    if(shift_flag == 0)
      d->string[d->index++]='\\';
    else 
      d->string[d->index++]='|';
  else if(id == 47)
    if(shift_flag == 0)
      d->string[d->index++]=';';
    else 
      d->string[d->index++]=':';
  else if(id == 48)
    if(shift_flag == 0)
      d->string[d->index++]='\'';
    else 
      d->string[d->index++]='\"';
  else if(id == 49)
    if(shift_flag == 0)
      d->string[d->index++]=',';
    else 
      d->string[d->index++]='<';
  else if(id == 50)
    if(shift_flag == 0)
      d->string[d->index++]='.';
    else 
      d->string[d->index++]='>';
  else if(id == 51)
    if(shift_flag == 0)
      d->string[d->index++]='/';
    else 
      d->string[d->index++]='?';
  else if(id == 52)
    d->string[d->index++]=' ';
  else if(id == 41)   //Caps Lock
  {
    caps_flag = ~caps_flag;
    caps_function(p);
  }
  else if(id == 42 || id == 58)   //Shift
  {
    shift_flag = ~shift_flag;
    shift_function(p);
  }
  else if(id == 43)   //BackSpace
  {
    if(d->index>0)
      d->index--;
  }
  else if(id == 56)   //clear
    d->index = 0;
  else if(id == 55)   //cancel
  {
    pvTerminateModalDialog(p);
  }
  else if(id == 54 || id == 53)    //enter
  {
    char *ptr = (char *)p->modalUserData;
    strcpy(ptr,d->string);
    pvUpdateBaseWindow(p);
    pvTerminateModalDialog(p);
  }

  d->string[d->index]='\0';
  pvPrintf(p,57,"%s",d->string);
  return 0;
}

static int slotButtonPressedEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotButtonReleasedEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotTextEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotSliderEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotCheckboxEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotRadioButtonEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotGlInitializeEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotGlPaintEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotGlResizeEvent(PARAM *p, int id, DATA *d, int width, int height)
{
  if(p == NULL || id == 0 || d == NULL || width < 0 || height < 0) return -1;
  return 0;
}

static int slotGlIdleEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotTabEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotTableTextEvent(PARAM *p, int id, DATA *d, int x, int y, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000 || text == NULL) return -1;
  return 0;
}

static int slotTableClickedEvent(PARAM *p, int id, DATA *d, int x, int y, int button)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000 || button < 0) return -1;
  return 0;
}

static int slotSelectionEvent(PARAM *p, int id, DATA *d, int val, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000 || text == NULL) return -1;
  return 0;
}

static int slotClipboardEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == -1 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotRightMouseEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  //pvPopupMenu(p,-1,"Menu1,Menu2,,Menu3");
  return 0;
}

static int slotKeyboardEvent(PARAM *p, int id, DATA *d, int val, int modifier)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000 || modifier < -1000) return -1;
  return 0;
}

static int slotMouseMovedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMousePressedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMouseReleasedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMouseOverEvent(PARAM *p, int id, DATA *d, int enter)
{
  if(p == NULL || id == 0 || d == NULL || enter < -1000) return -1;
  return 0;
}

static int slotUserEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}
