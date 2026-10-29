__int64 __fastcall sub_336100(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp

  if ( a3 != 11 )
    return a2;
  v4 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v4 + 1416) & 0x10) == 0 )
    sub_324F90(*(_QWORD *)(a1 + 8), 0);
  sub_CC7C0(v4);
  sub_CC760(v4);
  return a2;
}

