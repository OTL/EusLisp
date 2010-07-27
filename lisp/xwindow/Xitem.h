static pointer (*ftab[20])();

#define QUOTE_STRINGS_SIZE 232
static char *quote_strings[QUOTE_STRINGS_SIZE]={
    "#(:size :width :height :font)",
    "font-courb12",
    "send-message",
    "super",
    ":create",
    ":name",
    ":width",
    ":height",
    ":font",
    "textdots",
    ":function",
    ":copy",
    ":image-string",
    "send",
    "event",
    "string",
    ":set",
    ":short",
    "#(:width :height :parent :event-mask :font :foreground :border-width :state :active-color :submenu)",
    "*root*",
    "(:button)",
    "font-lucidasans-bold-12",
    "*blackpixel*",
    "menu-panel",
    ":flat",
    ":up",
    ":border-width",
    ":parent",
    ":foreground",
    ":event-mask",
    ":colormap",
    "get-lighter-pixel",
    ":draw-label",
    ":resize",
    ":3d-fill-rectangle",
    "((:up . 0) (:down . 2) (:flat . 1))",
    "assoc",
    ":string",
    ":flush",
    ":down",
    "event-x",
    "event-y",
    ":popup",
    "event-x-root",
    "event-y-root",
    ":notify",
    ":buttonrelease",
    "#(:menu :items :state)",
    ":state",
    "(:button :ownergrabbutton :enterleave)",
    ":label",
    "/=",
    ":newsize",
    ":global-pos",
    ":unmap",
    "*buttonrelease-wanted*",
    ":active-menu",
    ":popup-menu",
    ":unmap-menu",
    "event-pressed",
    "#(:font :columns :initial-value :border-width)",
    "\"x\"",
    "buffertextwindow",
    ":show-cursor",
    ":columns",
    ":rows",
    "(:button :enterleave :key)",
    ":notify-object",
    ":notify-method",
    ":move",
    ":cursor",
    ":off",
    ":value",
    ":redraw",
    ":line",
    ":clear",
    ":insert-string",
    ":leavenotify",
    ":enternotify",
    "#(:min :max :parent :min-label :max-label :value-format :font :span :border-width :initial-value :continuous-update)",
    "\"~4,2f\"",
    ":new-range",
    "\"x\"",
    ":nob-x",
    ":continuous-notify",
    ":draw-bar-rectangle",
    ":draw-nob-rectangle",
    ":display-value",
    ":rectangle",
    ":fill-rectangle",
    "*fg-pixel*",
    "event-pos",
    ":inside-nob-p",
    ":compute-value",
    "#(:parent :choices :font :initial-choice :button-size :border-width :event-mask :&allow-other-keys :&aux :choice-y)",
    "(\"0\" \"1\")",
    "list",
    ":gc",
    "+",
    "(:button)",
    "union",
    ":draw-active-button",
    ":draw-arc",
    "fourth",
    ":draw-fill-arc",
    "#i(1 1)",
    "#i(1 1)",
    ":choice",
    "#(:stick-size :return :follow-move :min-x :max-x :min-y :max-y)",
    ":draw-circles",
    ":draw-stick",
    ":arc",
    ":xy",
    ":fill-arc",
    ":value-from-event",
    "c-int",
    "c-long",
    "probe-file",
    "\"~A/lib/bitmaps/~A\"",
    "*eusdir*",
    "\"bitmap file ~S not found.\"",
    "*display*",
    "defaultrootwindow",
    "readbitmapfile",
    "copyplane",
    "#(:width :height)",
    ":create-bitmap-from-file",
    "\"X\"",
    "\"X\"",
    "*package*",
    "\"no such package\"",
    ":xdecl",
    "\"Xdecl.l\"",
    "require",
    "(*buttonrelease-wanted*)",
    ":vtype",
    ":global",
    "clump",
    "\"(minval val maxval)\"",
    "replace-key-arg",
    "\"(key val args)\"",
    "panel-item",
    "\"(self class name receiver method &rest args &key ((:size s) 100) ((:width w) s) ((:height h) w) (font font-courb12) &allow-other-keys)\"",
    "\"(self class x y)\"",
    "\"(self class &rest args)\"",
    ":keypress",
    "\"(self class pos)\"",
    ":keyrelease",
    "\"(self class pos)\"",
    ":buttonpress",
    "\"(self class pos)\"",
    ":motionnotify",
    "\"(self class pos)\"",
    "\"(self class event)\"",
    "\"(self class pos)\"",
    "make-topleft-edge-polygon",
    "\"(x y w h b)\"",
    "button-item",
    "\"(self class label receiver method &rest args &key ((:width wid)) ((:height hei)) (parent *root*) (event-mask '(:button)) (font font-lucidasans-bold-12) (foreground *blackpixel*) (border-width 0) (state (if (derivedp parent menu-panel) :flat :up)) (active-color nil) (submenu nil) &allow-other-keys)\"",
    ":submenu",
    "\"(self class &optional sm)\"",
    ":active-color",
    "\"(self class &optional pix)\"",
    "\"(self class w h)\"",
    "\"(self class &optional (newlab) (min-width 10))\"",
    "\"(self class &optional (state :up) (color bg-color) (border 2) (offset))\"",
    "\"(self class)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "menu-button-item",
    "\"(self class label receiver method &rest args &key (menu nil) (items) (state :flat) &allow-other-keys)\"",
    "\"(self class &optional (newlab))\"",
    "\"(self class)\"",
    "\"(self class)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "text-item",
    "\"(self class label receiver method &rest args &key (font font-courb12) (columns 20) (initial-value) (border-width 0) &allow-other-keys)\"",
    "\"(self class)\"",
    ":getstring",
    "\"(self class)\"",
    "\"(self class &optional newval invocation &aux ln)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "slider-item",
    "\"(self class label receiver method &rest args &key (min 0.0) (max 1.0) (parent) (min-label) (max-label) (value-format \\\"~4,2f\\\") (font font-courb12) (span 100) (border-width 0) (initial-value min) (continuous-update t) &allow-other-keys)\"",
    "\"(self class min min-label max max-label)\"",
    "\"(self class flag)\"",
    "\"(self class)\"",
    "\"(self class &optional (newval value))\"",
    "\"(self class &optional (newval) (invocation))\"",
    "\"(self class &optional (v value))\"",
    "\"(self class pos)\"",
    "\"(self class)\"",
    "\"(self class &optional (oldx nob-x) (newx nob-x))\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "choice-item",
    "\"(self class label receiver method &rest args &key (parent *root*) (choices '(\\\"0\\\" \\\"1\\\")) (font) (initial-choice 0) (button-size 13) (border-width 0) (event-mask nil) &allow-other-keys &aux choice-y choice-dots)\"",
    "\"(self class &optional (lab (get self :name)))\"",
    "\"(self class)\"",
    "\"(self class &optional (new-choice) invocation)\"",
    "\"(self class &optional (old-choice active-choice) (new-choice active-choice))\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "joystick-item",
    "\"(self class name receiver method &rest args &key (stick-size 5) (return nil) (follow-move t) (min-x -1.0) (max-x 1.0) (min-y -1.0) (max-y 1.0) &allow-other-keys)\"",
    "\"(self class)\"",
    "\"(self class)\"",
    "\"(self class &optional (x value-x) (y value-y))\"",
    "\"(self class &optional (x value-x) (y value-y) (erase t))\"",
    "\"(self class &optional (newx) (newy) invocation)\"",
    "\"(self class event)\"",
    "\"(self class event &optional (invocation follow-move))\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "bitmap-button-item",
    "\"(self class fname)\"",
    "\"(self class)\"",
    "\"(self class &optional (state :flat) (color bg-color) (border 2))\"",
    "\"(self class fname reciever method &rest args &key width height &allow-other-keys)\"",
    ":xitem",
    "\"@(#)$Id: Xitem.l,v 1.1.1.1 2003/11/20 07:46:35 eus Exp $\"",
    "provide",
  };
