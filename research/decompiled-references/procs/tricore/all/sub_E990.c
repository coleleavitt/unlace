__int64 __fastcall sub_E990(__int64 a1, _QWORD *a2, _WORD *a3, const char *a4)
{
  __int64 result; // rax
  char **v9; // rbx
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rdi
  int dtype_size; // eax
  __int16 v15; // dx

  result = 0;
  if ( a4 )
  {
    v9 = &off_21F20;
    do
    {
      v10 = a4;
      if ( !strcasecmp(*v9, a4) )
      {
        v12 = *((int *)v9 + 2);
        v13 = *((unsigned __int8 *)v9 + 12);
        goto LABEL_6;
      }
      v9 += 2;
    }
    while ( v9 != (char **)&off_22070 );
    v10 = a4;
    v12 = (int)sub_E910(a1, a4);
    result = 0;
    if ( (_DWORD)v12 == -1 )
      return result;
    v13 = 2;
LABEL_6:
    if ( a3 )
    {
      dtype_size = get_dtype_size(v13, v10, v11);
      v15 = 128;
      if ( dtype_size <= 15 )
      {
        v15 = 64;
        if ( dtype_size <= 7 )
          v15 = 32;
      }
      a3[1] = v15;
      *a3 = 0;
    }
    if ( a2 )
      *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v12);
    return 1;
  }
  return result;
}
