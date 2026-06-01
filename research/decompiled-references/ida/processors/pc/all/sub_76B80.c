unsigned __int64 __fastcall sub_76B80(
        char *a1,
        __int64 a2,
        char a3,
        __int64 (__fastcall *a4)(const char *, __int64),
        __int64 a5)
{
  const char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp

  v8 = sub_767F0(a1, a2);
  if ( !v8 )
    return 0;
  v9 = a4(v8, a5);
  v10 = *(_QWORD *)(v9 + 8);
  if ( (int)a2 <= 23 )
  {
    if ( (int)a2 > 19 )
      return BYTE1(v10);
  }
  else if ( (unsigned int)(a2 - 29) <= 5 )
  {
    return *(_QWORD *)(v9 + 8);
  }
  if ( a3 == 7 )
    return *(_QWORD *)(v9 + 8);
  return (0xFFFFFFFFFFFFFFFFLL >> (64 - 8 * (unsigned __int8)get_dtype_size())) & v10;
}
