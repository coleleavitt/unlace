__int64 __fastcall sub_33B40(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 *v5; // rax
  bool v7; // r14
  char v8; // r8
  char v9; // al
  __int128 v10; // [rsp+0h] [rbp-198h] BYREF
  __int64 v11; // [rsp+10h] [rbp-188h]
  __int64 v12; // [rsp+18h] [rbp-180h]
  __int64 v13; // [rsp+20h] [rbp-178h]
  _BYTE v14[6]; // [rsp+28h] [rbp-170h] BYREF
  __int16 v15; // [rsp+2Eh] [rbp-16Ah]
  char v16; // [rsp+51h] [rbp-147h]
  __int16 v17; // [rsp+56h] [rbp-142h]
  char v18; // [rsp+79h] [rbp-11Fh]
  unsigned __int64 v19; // [rsp+168h] [rbp-30h] BYREF

  v19 = __readfsqword(0x28u);
  v5 = (unsigned __int64 *)v14;
  v10 = -1;
  v11 = -1;
  v12 = 0;
  v13 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v19 != v5 );
  if ( a4 && sub_28300(a1, (__int64)&v10, a2, 0, 1) )
  {
    if ( (unsigned int)sub_32CE0(a1, &v10, 4) == 100 )
      return 0;
    if ( (v13 & 0xF) == 0xE )
    {
      v7 = sub_29790((__int64)&v10, 0);
      if ( sub_28300(a1, (__int64)&v10, a2 + 4, 0, v8)
        && ((v13 & 0xF) == 0xE || sub_312C0(a1, (__int64)&v10, 1))
        && sub_28300(a1, (__int64)&v10, a2 + 8, 0, 1) )
      {
        if ( (v13 & 0xF) == 0xE )
          return 0;
        v9 = sub_312C0(a1, (__int64)&v10, 1);
        if ( v7 || v9 )
          return 0;
      }
    }
  }
  if ( !a3 || !sub_28300(a1, (__int64)&v10, a2, 1, 1) )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)sub_32CE0(a1, &v10, 2) == 100 && (unsigned __int64)get_max_strlit_length() <= 9
    || sub_312C0(a1, (__int64)&v10, 1)
    || (unsigned __int8)sub_33990(a1, (__int64)&v10) )
  {
    return 1;
  }
  if ( (_WORD)v12 == 12 )
  {
    if ( v14[1] == 1 && v15 == 13 && v16 == 5 )
      return 1;
  }
  else if ( (_WORD)v12 == 24 && v16 == 1 && v17 == 13 && v18 == 5 )
  {
    return 1;
  }
  if ( !sub_28300(a1, (__int64)&v10, a2 + WORD1(v12), 1, 1) || !sub_312C0(a1, (__int64)&v10, 1) )
    return 0xFFFFFFFFLL;
  return 1;
}
