#define BOOTSTRAP "sdl2"
#define IS_SDL2 1
#define PY2 0
#define JAVA_NAMESPACE "org.kivy.android"
#define JNI_NAMESPACE "org/kivy/android"
JNIEnv *SDL_AndroidGetJNIEnv(void);
#define SDL_ANDROID_GetJNIEnv SDL_AndroidGetJNIEnv
