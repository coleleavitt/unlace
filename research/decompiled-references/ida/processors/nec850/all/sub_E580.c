__int64 __fastcall sub_E580(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 *v5; // rdx
  int v6; // eax
  __int64 v7; // rbp
  __int128 v8; // [rsp+0h] [rbp-198h] BYREF
  __int64 v9; // [rsp+10h] [rbp-188h]
  __int64 v10; // [rsp+18h] [rbp-180h]
  __int64 v11; // [rsp+20h] [rbp-178h]
  _BYTE v12[16]; // [rsp+28h] [rbp-170h] BYREF
  __int64 v13; // [rsp+38h] [rbp-160h]
  unsigned __int64 v14; // [rsp+168h] [rbp-30h] BYREF

  v14 = __readfsqword(0x28u);
  if ( !(_BYTE)a3 )
    return 0;
  v9 = -1;
  v5 = (unsigned __int64 *)v12;
  v10 = 0;
  v11 = 0;
  v8 = -1;
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
  while ( &v14 != v5 );
  if ( (unsigned __int8)sub_E070(a1, a2, (__int64)&v8, 0.0) )
    return a3;
  if ( (unsigned __int8)sub_E260(a1, a2, (__int64)&v8, 0.0) )
  {
    if ( *(_WORD *)(a2 + 24) != 38 )
      return a3;
    v9 = -1;
    sub_E3F0(a1, a2, (__int64)&v8, 0.0);
    return a3;
  }
  else
  {
    if ( (unsigned __int8)sub_E3F0(a1, a2, (__int64)&v8, 0.0) )
      return a3;
    v6 = *(unsigned __int16 *)(a2 + 24);
    if ( (((_WORD)v6 - 57) & 0xFFF7) == 0 )
      return 0;
    v7 = 0;
    while ( v6 != dword_23B20[v7] )
    {
      if ( ++v7 == 16 )
        return 0;
    }
    if ( v9 == -1 && (int)decode_insn(&v8, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 0.0) <= 0
      || (_WORD)v10 != 43
      || v12[1] != 7
      || *(_QWORD *)(a2 + 56) != v9 + WORD1(v10) )
    {
      return 0;
    }
    *(_WORD *)(a2 + 26) += WORD1(v10);
    *(_WORD *)(a2 + 24) = dword_23B20[((_BYTE)v7 + 8) & 0xF];
    *(_QWORD *)(a2 + 56) = v13;
    return a3;
  }
}

