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


#endif // !__ENUM_H__
