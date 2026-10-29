__int64 __fastcall sub_2581F0(
        void (***a1)(_QWORD, _QWORD, const char *, ...),
        unsigned int a2,
        const char *a3,
        const char *a4)
{
  const char *v4; // r12
  unsigned int v5; // ebp
  const char *v6; // r15
  char *v7; // r13
  void (*v8)(_QWORD, _QWORD, const char *, ...); // r11

  v4 = a3;
  if ( !a3 )
    v4 = (const char *)&unk_3EF793;
  v5 = 0;
  if ( *a4 )
  {
    v6 = a4;
    do
    {
      v7 = strchr(v6, 10);
      if ( !v7 )
        v7 = (char *)&v6[strlen(v6)];
      v8 = **a1;
      if ( (_DWORD)v7 == (_DWORD)v6 && *v4 )
      {
        ++v5;
        v8(a1, 0, "%s\n", v4);
        if ( !*v7 )
          return v5;
      }
      else
      {
        v8(a1, a2, byte_3F0044, v4, v7 - v6, (unsigned int)((_DWORD)v7 - (_DWORD)v6), v6);
        ++v5;
        if ( !*v7 )
          return v5;
      }
      v6 = v7 + 1;
    }
    while ( v7[1] );
  }
  return v5;
}

