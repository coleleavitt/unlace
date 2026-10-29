__int64 __fastcall sub_89B0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v7; // r15
  char v9; // cl
  char v10; // cl

  if ( !*(_WORD *)a4 )
    return 0;
  *(_WORD *)(a2 + 24) = *(_WORD *)a4;
  if ( a5 )
    *(_BYTE *)(a2 + 29) |= 4u;
  v7 = a2 + 40;
  v9 = 13;
  if ( *(_BYTE *)(a4 + 5) )
    v9 = 18;
  if ( !(unsigned int)sub_82E0(a1, a2, a2 + 40, a3, *(unsigned __int8 *)(a4 + 2), (a3 >> v9) & 0x1F, a5) )
    return 0;
  if ( *(_BYTE *)(a2 + 41) )
    v7 = a2 + 80;
  v10 = 18;
  if ( *(_BYTE *)(a4 + 5) )
    v10 = 13;
  if ( !(unsigned int)sub_82E0(a1, a2, v7, a3, *(unsigned __int8 *)(a4 + 3), (a3 >> v10) & 0x1F, a5) )
    return 0;
  if ( *(_BYTE *)(v7 + 1) )
    v7 += 40;
  if ( !(unsigned int)sub_82E0(a1, a2, v7, a3, *(unsigned __int8 *)(a4 + 4), (a3 >> 23) & 0x1F, a5) )
    return 0;
  sub_8830(a1, a2);
  return *(unsigned __int16 *)(a2 + 26);
}

