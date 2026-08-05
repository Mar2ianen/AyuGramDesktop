// This is the source code of AyuGram for Desktop.
#pragma once

#include <QString>

namespace AyuUiSettings {

inline constexpr int kMaxAvatarCorners = 23;

inline int &avatarCorners() {
	static int value = kMaxAvatarCorners;
	return value;
}

inline QString &monoFont() {
	static QString value;
	return value;
}

inline double &wideMultiplier() {
	static double value = 1.0;
	return value;
}

inline bool &materialSwitches() {
	static bool value = true;
	return value;
}

inline int getAvatarCorners() {
	return avatarCorners();
}

inline QString getMonoFont() {
	return monoFont();
}

inline void setAvatarCorners(int value) {
	avatarCorners() = value;
}

inline void setMonoFont(const QString &value) {
	monoFont() = value;
}

inline void setWideMultiplier(double value) {
	wideMultiplier() = value;
}

inline void setMaterialSwitches(bool value) {
	materialSwitches() = value;
}

} // namespace AyuUiSettings
