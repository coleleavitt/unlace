__int64 __fastcall sub_D5A50(__int64 a1, int a2, __int64 a3, __int64 (__fastcall *a4)(__int64, unsigned __int8 *))
{
  unsigned __int8 *v5; // rsi
  __int64 v6; // rdi
  int v8; // r8d
  __int64 v9; // rdi

  v5 = (unsigned __int8 *)(*(_QWORD *)(a1 + 104)
                         + (unsigned __int16)(*(_WORD *)(a1 + 26)
                                            & __ROL2__(*(_WORD *)(*(_QWORD *)(a1 + 96) + 2 * a2), 8)));
  v6 = *v5;
  if ( (unsigned __int8)v6 <= *(_BYTE *)(a1 + 11) )
    return a4(v6, v5 + 1);
  v8 = v5[1];
  if ( (v8 & 0x80u) != 0 )
    return 99;
  v9 = v8 + (((_WORD)v6 << 7) & 0x3F80u);
  if ( (int)v9 > *(unsigned __int16 *)(a1 + 14) )
    return 99;
  else
    return a4(v9, v5 + 2);
}
