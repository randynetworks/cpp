// namun jika menggunakan dua FOO ini tidak akan berjalan #define FOO "Ini adalah FOO dalam bar.h" 

// agar tidak error, harus menggunakan ifdef

#ifdef FOO
#else
#define FOO "Ini adalah FOO dalam bar.h
#endif // FOO
