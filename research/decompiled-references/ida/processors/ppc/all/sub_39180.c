__int64 __fastcall sub_39180(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // rax
  __int128 v10; // [rsp+10h] [rbp-178h] BYREF
  __int64 v11; // [rsp+20h] [rbp-168h]
  __int64 v12; // [rsp+28h] [rbp-160h]
  __int64 v13; // [rsp+30h] [rbp-158h]
  char v14; // [rsp+38h] [rbp-150h] BYREF
  unsigned __int64 v15; // [rsp+178h] [rbp-10h] BYREF

  v15 = __readfsqword(0x28u);
  v2 = *(_WORD *)(a2 + 24);
  if ( v2 == 281 )
  {
    if ( *(_WORD *)(a2 + 46) == *(_WORD *)(a2 + 86) && !*(_DWORD *)(a2 + 28) )
      return *(unsigned __int16 *)(a2 + 26);
    return 0;
  }
  if ( v2 > 0x119u )
  {
    if ( v2 == 1178 || v2 == 1196 )
      return *(unsigned __int16 *)(a2 + 26);
    return 0;
  }
  if ( v2 != 88 )
  {
    if ( v2 == 279 )
      return *(unsigned __int16 *)(a2 + 26);
    return 0;
  }
  v3 = *(unsigned int *)(a1 + 288);
  if ( (unsigned int)v3 > 9 )
    return 0;
  v4 = 790;
  if ( !_bittest64(&v4, v3)
    || *(_BYTE *)(a2 + 41) != 1
    || *(_WORD *)(a2 + 46) != 2
    || (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x1000000000400LL )
  {
    return 0;
  }
  v6 = *(_QWORD *)(a2 + 96);
  v7 = (unsigned int)sub_4E2D0(a1) - 1;
  if ( (unsigned int)v7 > 8 )
  {
    if ( !under_debugger )
      interr(10254);
    BUG();
  }
  if ( v6 != dword_79F60[v7] )
    return 0;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 <= 3 )
    return 0;
  v11 = -1;
  v9 = (unsigned __int64 *)&v14;
  v12 = 0;
  v13 = 0;
  v10 = -1;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 5;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *(v9 - 2) = 0;
  }
  while ( &v15 != v9 );
  if ( (int)decode_insn(&v10, v8 - 4, v8, 0.0) <= 0
    || (v12 & 0x800000000LL) == 0
    || (_WORD)v12 != 13 && (_WORD)v12 != 320 )
  {
    return 0;
  }
  if ( (v12 & 0x10000000000LL) != 0 )
    return 0;
  return 4;
}

