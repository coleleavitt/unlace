__int64 __fastcall sub_E3A30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rdx

  v2 = *(_QWORD *)(a2 + 32);
  if ( v2 )
    return v2;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = sub_D1E10(*(unsigned __int16 *)(a2 + 96) + 1LL, a2);
  *(_QWORD *)(a2 + 32) = v5;
  if ( !v5 )
  {
    if ( !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
      sub_DBE60(a1);
    return v2;
  }
  v6 = 0;
  if ( *(_WORD *)(a2 + 96) )
  {
    while ( 1 )
    {
      v8 = *(__int16 *)(*(_QWORD *)(a2 + 8) + 2 * v2);
      if ( (v8 & 0x8000u) == 0LL )
        break;
      v7 = 67;
      if ( (_WORD)v8 != 0xFFFF )
      {
        v7 = sub_C6820(*(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 24LL * (int)v2 + 8));
        goto LABEL_7;
      }
LABEL_11:
      *(_BYTE *)(*(_QWORD *)(a2 + 32) + v2++) = v7;
      if ( *(unsigned __int16 *)(a2 + 96) <= (int)v2 )
      {
        v6 = (int)v2;
        v5 = *(_QWORD *)(a2 + 32);
        goto LABEL_16;
      }
    }
    v7 = *(_BYTE *)(*(_QWORD *)(v4 + 8) + 16 * v8 + 9);
LABEL_7:
    if ( v7 > 67 )
      v7 = 67;
    if ( v7 < 65 )
      v7 = 65;
    goto LABEL_11;
  }
LABEL_16:
  *(_BYTE *)(v5 + v6) = 0;
  return *(_QWORD *)(a2 + 32);
}
