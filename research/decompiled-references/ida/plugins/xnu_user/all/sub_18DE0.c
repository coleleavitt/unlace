__int64 __fastcall sub_18DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v7; // rsi
  const char *v8; // rdi
  int v9; // edx
  __int64 result; // rax
  _QWORD *v11; // rax

  v7 = *(const char **)(a1 + 40);
  v8 = src;
  if ( *(_QWORD *)(a4 + 8) )
    v8 = *(const char **)a4;
  v9 = strcmp(v8, v7);
  result = 0;
  if ( !v9 )
  {
    v11 = *(_QWORD **)(a1 + 32);
    *v11 = a2;
    v11[1] = a3;
    return 1;
  }
  return result;
}

