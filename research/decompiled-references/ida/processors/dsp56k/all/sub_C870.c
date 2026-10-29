__int64 __fastcall sub_C870(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v4; // esi
  __int16 v5; // dx

  v3 = a3 & 7 | (a3 >> 1) & 8;
  if ( v3 == 12 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (a3 & 8) == 0 ? 10 : 6;
    *(_QWORD *)(a1 + 248) += 40LL;
    return 1;
  }
  v4 = 0;
  if ( v3 <= 3 )
  {
    v5 = *((unsigned __int8 *)word_1791A + (a3 & 3));
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v5;
    *(_QWORD *)(a1 + 248) += 40LL;
    return 1;
  }
  return v4;
}

