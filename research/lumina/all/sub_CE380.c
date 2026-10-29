__int64 __fastcall sub_CE380(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  unsigned __int8 *v5; // rbp
  _BYTE *v6; // rbx
  int v8; // edx
  __int64 v9; // r11
  char v10; // al
  __int64 result; // rax
  unsigned __int8 *v12; // rbx
  int v13; // edx
  __int64 v14; // r11
  unsigned __int8 v15; // al
  unsigned __int8 *i; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx

  v5 = a2;
  v6 = *(_BYTE **)(a1 + 8);
  if ( *v6 == 46 || !*v6 )
  {
    v9 = 0;
    v8 = 0;
  }
  else
  {
    v8 = 0;
    do
    {
      v9 = ++v8;
      v10 = v6[v8];
    }
    while ( v10 && v10 != 46 );
  }
  if ( a4 )
  {
    result = 0;
    if ( !v6 )
      return result;
    result = sub_CA590(*(unsigned __int8 **)(a1 + 8), a4, v8);
    if ( (_DWORD)result )
      return 0;
    if ( a4[v9] )
      return result;
  }
  v12 = &v6[v9 + 1];
  if ( *v12 == 46 || !*v12 )
  {
    v14 = 0;
    v13 = 0;
  }
  else
  {
    v13 = 0;
    do
    {
      v14 = ++v13;
      v15 = v12[v13];
    }
    while ( v15 && v15 != 46 );
  }
  if ( a3 )
  {
    result = 0;
    if ( !v12 )
      return result;
    result = sub_CA590(v12, a3, v13);
    if ( !(_DWORD)result )
    {
      if ( a3[v14] )
        return result;
      goto LABEL_19;
    }
    return 0;
  }
LABEL_19:
  result = 1;
  if ( !a2 )
    return result;
  for ( i = &v12[v14 + 1]; ; ++i )
  {
    v17 = *i;
    v18 = *v5;
    if ( (_DWORD)v17 == (_DWORD)v18 )
      break;
    if ( byte_1BF000[v17] != byte_1BF000[v18] )
      return 0;
LABEL_22:
    ++v5;
  }
  if ( *i )
    goto LABEL_22;
  return 1;
}
