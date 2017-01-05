#pragma once

#include <unordered_map>

namespace graphics {
	class Window;
}

namespace io {

	class Input
	{
	public:
		Input(graphics::Window* window);
		~Input();

		void preRefresh();
		void postRefresh();

		void addEvent(unsigned int id, bool state);
		void addEvent(int x, int y);

		bool getEvent(unsigned int id, bool state) const;
		bool getState(unsigned int id) const;

		void setMouseGrabbed(bool grabbed) const;
		bool isMouseGrabbed() const;

		inline int getX() const { return m_x; }
		inline int getY() const { return m_y; }
		inline int getDX() const { return m_dx; }
		inline int getDY() const { return m_dy; }
	private:
		graphics::Window* m_window;

		std::unordered_map<unsigned int, bool> m_events;
		std::unordered_map<unsigned int, bool> m_states;

		int m_x;
		int m_y;
		int m_dx;
		int m_dy;
		int m_lx;
		int m_ly;
	};

	const unsigned int KEY_SPACE = 32;
	const unsigned int KEY_APOSTROPHE = 39;
	const unsigned int KEY_COMMA = 44;
	const unsigned int KEY_MINUS = 45;
	const unsigned int KEY_PERIOD = 46;
	const unsigned int KEY_SLASH = 47;
	const unsigned int KEY_0 = 48;
	const unsigned int KEY_1 = 49;
	const unsigned int KEY_2 = 50;
	const unsigned int KEY_3 = 51;
	const unsigned int KEY_4 = 52;
	const unsigned int KEY_5 = 53;
	const unsigned int KEY_6 = 54;
	const unsigned int KEY_7 = 55;
	const unsigned int KEY_8 = 56;
	const unsigned int KEY_9 = 57;
	const unsigned int KEY_SEMICOLON = 59;
	const unsigned int KEY_EQUAL = 61;
	const unsigned int KEY_A = 65;
	const unsigned int KEY_B = 66;
	const unsigned int KEY_C = 67;
	const unsigned int KEY_D = 68;
	const unsigned int KEY_E = 69;
	const unsigned int KEY_F = 70;
	const unsigned int KEY_G = 71;
	const unsigned int KEY_H = 72;
	const unsigned int KEY_I = 73;
	const unsigned int KEY_J = 74;
	const unsigned int KEY_K = 75;
	const unsigned int KEY_L = 76;
	const unsigned int KEY_M = 77;
	const unsigned int KEY_N = 78;
	const unsigned int KEY_O = 79;
	const unsigned int KEY_P = 80;
	const unsigned int KEY_Q = 81;
	const unsigned int KEY_R = 82;
	const unsigned int KEY_S = 83;
	const unsigned int KEY_T = 84;
	const unsigned int KEY_U = 85;
	const unsigned int KEY_V = 86;
	const unsigned int KEY_W = 87;
	const unsigned int KEY_X = 88;
	const unsigned int KEY_Y = 89;
	const unsigned int KEY_Z = 90;
	const unsigned int KEY_LEFT_BRACKET = 91;
	const unsigned int KEY_BACKSLASH = 92;
	const unsigned int KEY_RIGHT_BRACKET = 93;
	const unsigned int KEY_GRAVE_ACCENT = 96;
	const unsigned int KEY_WORLD_1 = 161;
	const unsigned int KEY_WORLD_2 = 162;
	const unsigned int KEY_ESCAPE = 256;
	const unsigned int KEY_ENTER = 257;
	const unsigned int KEY_TAB = 258;
	const unsigned int KEY_BACKSPACE = 259;
	const unsigned int KEY_INSERT = 260;
	const unsigned int KEY_DELETE = 261;
	const unsigned int KEY_RIGHT = 262;
	const unsigned int KEY_LEFT = 263;
	const unsigned int KEY_DOWN = 264;
	const unsigned int KEY_UP = 265;
	const unsigned int KEY_PAGE_UP = 266;
	const unsigned int KEY_PAGE_DOWN = 267;
	const unsigned int KEY_HOME = 268;
	const unsigned int KEY_END = 269;
	const unsigned int KEY_CAPS_LOCK = 280;
	const unsigned int KEY_SCROLL_LOCK = 281;
	const unsigned int KEY_NUM_LOCK = 282;
	const unsigned int KEY_PRINT_SCREEN = 283;
	const unsigned int KEY_PAUSE = 284;
	const unsigned int KEY_F1 = 290;
	const unsigned int KEY_F2 = 291;
	const unsigned int KEY_F3 = 292;
	const unsigned int KEY_F4 = 293;
	const unsigned int KEY_F5 = 294;
	const unsigned int KEY_F6 = 295;
	const unsigned int KEY_F7 = 296;
	const unsigned int KEY_F8 = 297;
	const unsigned int KEY_F9 = 298;
	const unsigned int KEY_F10 = 299;
	const unsigned int KEY_F11 = 300;
	const unsigned int KEY_F12 = 301;
	const unsigned int KEY_F13 = 302;
	const unsigned int KEY_F14 = 303;
	const unsigned int KEY_F15 = 304;
	const unsigned int KEY_F16 = 305;
	const unsigned int KEY_F17 = 306;
	const unsigned int KEY_F18 = 307;
	const unsigned int KEY_F19 = 308;
	const unsigned int KEY_F20 = 309;
	const unsigned int KEY_F21 = 310;
	const unsigned int KEY_F22 = 311;
	const unsigned int KEY_F23 = 312;
	const unsigned int KEY_F24 = 313;
	const unsigned int KEY_F25 = 314;
	const unsigned int KEY_KP_0 = 320;
	const unsigned int KEY_KP_1 = 321;
	const unsigned int KEY_KP_2 = 322;
	const unsigned int KEY_KP_3 = 323;
	const unsigned int KEY_KP_4 = 324;
	const unsigned int KEY_KP_5 = 325;
	const unsigned int KEY_KP_6 = 326;
	const unsigned int KEY_KP_7 = 327;
	const unsigned int KEY_KP_8 = 328;
	const unsigned int KEY_KP_9 = 329;
	const unsigned int KEY_KP_DECIMAL = 330;
	const unsigned int KEY_KP_DIVIDE = 331;
	const unsigned int KEY_KP_MULTIPLY = 332;
	const unsigned int KEY_KP_SUBTRACT = 333;
	const unsigned int KEY_KP_ADD = 334;
	const unsigned int KEY_KP_ENTER = 335;
	const unsigned int KEY_KP_EQUAL = 336;
	const unsigned int KEY_LEFT_SHIFT = 340;
	const unsigned int KEY_LEFT_CONTROL = 341;
	const unsigned int KEY_LEFT_ALT = 342;
	const unsigned int KEY_LEFT_SUPER = 343;
	const unsigned int KEY_RIGHT_SHIFT = 344;
	const unsigned int KEY_RIGHT_CONTROL = 345;
	const unsigned int KEY_RIGHT_ALT = 346;
	const unsigned int KEY_RIGHT_SUPER = 347;
	const unsigned int KEY_MENU = 348;
	const unsigned int KEY_LAST = KEY_MENU;
	const unsigned int MOD_SHIFT = 0x0001;
	const unsigned int MOD_CONTROL = 0x0002;
	const unsigned int MOD_ALT = 0x0004;
	const unsigned int MOD_SUPER = 0x0008;

	const unsigned int MOUSE_BUTTON_1 = 0;
	const unsigned int MOUSE_BUTTON_2 = 1;
	const unsigned int MOUSE_BUTTON_3 = 2;
	const unsigned int MOUSE_BUTTON_4 = 3;
	const unsigned int MOUSE_BUTTON_5 = 4;
	const unsigned int MOUSE_BUTTON_6 = 5;
	const unsigned int MOUSE_BUTTON_7 = 6;
	const unsigned int MOUSE_BUTTON_8 = 7;
	const unsigned int MOUSE_BUTTON_LAST = MOUSE_BUTTON_8;
	const unsigned int MOUSE_BUTTON_LEFT = MOUSE_BUTTON_1;
	const unsigned int MOUSE_BUTTON_RIGHT = MOUSE_BUTTON_2;
	const unsigned int MOUSE_BUTTON_MIDDLE = MOUSE_BUTTON_3;

}