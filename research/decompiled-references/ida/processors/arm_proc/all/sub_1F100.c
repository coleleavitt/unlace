__int64 __fastcall sub_1F100(__int64 a1, __int64 a2, char a3)
{
  __int16 v5; // di
  unsigned __int64 *v6; // rax
  char v7; // r12
  _BYTE v8[360]; // [rsp+0h] [rbp-188h] BYREF
  unsigned __int64 v9; // [rsp+168h] [rbp-20h] BYREF

  v9 = __readfsqword(0x28u);
  if ( !a3 && *(_WORD *)(a2 + 24) != 25 )
    return 0;
  if ( *(_DWORD *)(a1 + 212) && (unsigned __int64)(get_sreg() - 1) > 0xFFFFFFFFFFFFFFFDLL )
  {
    if ( *(_WORD *)(a2 + 26) != 4 )
      return 0;
    v7 = 0;
    if ( !*(_DWORD *)(a1 + 212) )
      return 0;
LABEL_20:
    if ( (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL == v7 )
      goto LABEL_8;
    return 0;
  }
  v5 = *(_WORD *)(a2 + 26);
  if ( (*(_BYTE *)(a2 + 29) & 0x82) == 0 )
  {
    if ( v5 != 2 )
      return 0;
    if ( !*(_DWORD *)(a1 + 212) )
      goto LABEL_8;
LABEL_19:
    v7 = 1;
    goto LABEL_20;
  }
  if ( v5 != 4 )
    return 0;
  if ( *(_DWORD *)(a1 + 212) )
    goto LABEL_19;
LABEL_8:
  v6 = (unsigned __int64 *)&v8[40];
  *(_QWORD *)&v8[24] = 0;
  *(_QWORD *)&v8[32] = 0;
  memset(v8, 255, 24);
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( &v9 != v6 );
  if ( !(unsigned __int8)sub_1E770((_QWORD *)a1, (__int64)v8, (_BYTE *)a2)
    && !(unsigned __int8)sub_1EA00(a1, (__int64)v8, a2)
    && !(unsigned __int8)sub_1EEC0(a1, (__int64)v8, a2) )
  {
    return 0;
  }
  qmemcpy((void *)a2, v8, 0x168u);
  return 1;
}

