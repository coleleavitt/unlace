__int64 __fastcall sub_30560(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8)
{
  int v10; // r9d
  __int64 v11; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  _WORD *v16; // rcx
  unsigned int v18; // r13d

  v10 = (a4 >> a7) & a6;
  v11 = a8 - 1;
  if ( a8 - 1 < 0 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    v15 = v14 + (v11 - v14) / 2;
    v16 = (_WORD *)(a5 + 12 * v15);
    if ( *v16 == (_WORD)v10 )
      break;
    if ( *v16 < (unsigned __int16)v10 )
    {
      v14 = v15 + 1;
      if ( v11 < v15 + 1 )
        return 0;
    }
    else
    {
      v11 = v15 - 1;
      if ( v15 - 1 < v14 )
        return 0;
    }
  }
  *(_WORD *)(a2 + 24) = v16[1];
  v18 = sub_302E0(a1, a2, a3, a4, (__int64)(v16 + 1));
  if ( v18 && (unsigned __int8)sub_2C2A0(a1, a2, a4) )
    return v18;
  else
    return 0;
}
