#pragma once

#ifndef __ENUM_H__
#define __ENUM_H__

namespace COMPONENT_SEQ
{
	enum SEQ {
		INPUT_PROC,
		UPDATE_PROC,
		LATE_PROC,
		COLLISION,
		RENDER,
		SCRIPT,
		NO_UPDATE,
		END
	};
}

namespace OBJECT_SEQ
{
	enum SEQ {
		UI,
		END
	};
}

namespace MOUSE_STATE
{
	enum MK {
		L_BUTTON,
		R_BUTTON,
		L_SHIFT,
		L_CONTROL,
		END
	};
}

namespace ARG_TYPE
{
	enum TYPE {
		AC_POSITION,
		RC_POSITION,
		SIZE,
		END,
	};
}

namespace COMPONENT_TAG
{
	enum TAG {
		TRANSFORM,
		END,
	};
}


#endif // !__ENUM_H__
