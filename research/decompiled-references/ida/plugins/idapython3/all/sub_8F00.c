__int64 __fastcall sub_8F00(__int64 a1)
{
  const char *v2; // rdi
  void *v3; // rax
  const char *v5; // rsi
  const char *v6; // rsi
  char *v7; // rdx

  v2 = src;
  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  v3 = dlopen(v2, 258);
  *(_QWORD *)(a1 + 24) = v3;
  if ( v3 )
  {
    if ( (debug & 0x20) != 0 )
    {
      sub_7AF0((__int64)"Python dynamic library handle: %p\n", v3);
      if ( (debug & 0x20) != 0 )
      {
        v5 = src;
        if ( *(_QWORD *)(a1 + 8) )
          v5 = *(const char **)a1;
        sub_7AF0((__int64)"Python dynamic library path: %s\n", v5);
      }
    }
    return 1;
  }
  else
  {
    v6 = src;
    v7 = dlerror();
    if ( *(_QWORD *)(a1 + 8) )
      v6 = *(const char **)a1;
    sub_7F30((__int64)"error loading Python dynamic library %s: %s\n", v6, v7);
    return 0;
  }
}

