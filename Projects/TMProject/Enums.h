#pragma once

enum class RENDERCTRLTYPE
{
	RENDER_NONE = -1,
	RENDER_TEXT = 0x0,
	RENDER_SHADOW = 0x1,
	RENDER_IMAGE = 0x2,
	RENDER_IMAGE_TILE = 0x3,
	RENDER_IMAGE_STRETCH = 0x4,
	RENDER_3DOBJ = 0x5,
	RENDER_TEXT_FOCUS = 0x6,
};

enum class CONTROL_TYPE : int
{
	CTRL_TYPE_NONE = -1,
	CTRL_TYPE_CURSOR = 0x0,
	CTRL_TYPE_PANEL = 0x1,
	CTRL_TYPE_BUTTON = 0x2,
	CTRL_TYPE_CHECKBOX = 0x3,
	CTRL_TYPE_RADIOBUTTON = 0x4,
	CTRL_TYPE_RADIOBUTTONSET = 0x5,
	CTRL_TYPE_LISTBOX = 0x6,
	CTRL_TYPE_LISTBOXITEM = 0x7,
	CTRL_TYPE_MESSAGEBOX = 0x8,
	CTRL_TYPE_MESSAGEPANEL = 0x9,
	CTRL_TYPE_PROGRESSBAR = 0xA,
	CTRL_TYPE_SCROLLBAR = 0xB,
	CTRL_TYPE_TEXT = 0xC,
	CTRL_TYPE_EDITABLETEXT = 0xD,
	CTRL_TYPE_DIALOG = 0xE,
	CTRL_TYPE_3DOBJ = 0xF,
	CTRL_TYPE_GRID = 0x10,
};

enum class TMEITEMTYPE
{
	ITEMTYPE_NONE = 0x0,
	ITEMTYPE_HELM = 0x2,
	ITEMTYPE_COAT = 0x4,
	ITEMTYPE_PANTS = 0x8,
	ITEMTYPE_GLOVES = 0x10,
	ITEMTYPE_BOOTS = 0x20,
	ITEMTYPE_LEFT = 0x40,
	ITEMTYPE_RIGHT = 0x80,
	ITEMTYPE_RING = 0x100,
	ITEMTYPE_NECKLACE = 0x200,
	ITEMTYPE_ORB = 0x400,
	ITEMTYPE_CABUNCLE = 0x800,
	ITEMTYPE_GUILD = 0x1000,
	ITEMTYPE_EVENT = 0x2000,
	ITEMTYPE_MOUNT = 0x4000,
	ITEMTYPE_MANTUA = 0x8000,
};

enum class ECHAR_MOTION
{
	ECMOTION_NONE = -1,
	ECMOTION_STAND01 = 0x0,
	ECMOTION_STAND02 = 0x1,
	ECMOTION_WALK = 0x2,
	ECMOTION_RUN = 0x3,
	ECMOTION_ATTACK01 = 0x4,
	ECMOTION_ATTACK02 = 0x5,
	ECMOTION_ATTACK03 = 0x6,
	ECMOTION_ATTACK04 = 0x7,
	ECMOTION_ATTACK05 = 0x8,
	ECMOTION_ATTACK06 = 0x9,
	ECMOTION_STRIKE = 0xA,
	ECMOTION_DIE = 0xB,
	ECMOTION_DEAD = 0xC,
	ECMOTION_SEAT = 0xD,
	ECMOTION_LEVELUP = 0xE,
	ECMOTION_PUNISH = 0xF,
	ECMOTION_CACKLE = 0x10,
	ECMOTION_YAWN = 0x11,
	ECMOTION_MERCHANT_LOUNGE = 0x12,
	ECMOTION_RELAX = 0x13,
	ECMOTION_NEVER = 0x14,
	ECMOTION_COMEON = 0x15,
	ECMOTION_SALUTE = 0x16,
	ECMOTION_HOLYTOUCH = 0x17,
	ECMOTION_SEATING = 0x18,
	ECMOTION_STAND03 = 0x19,
	ECMOTION_PUNISHING = 0x1A,
	ECMOTION_PUNEND = 0x1B,
};

enum class EGATE_STATE
{
	EGATE_OPEN = 0x1,
	EGATE_CLOSED = 0x2,
	EGATE_LOCKED = 0x3,
	EGATE_OPENING = 0x4,
	EGATE_CLOSING = 0x5,
	EGATE_LOCKING = 0x6,
};

