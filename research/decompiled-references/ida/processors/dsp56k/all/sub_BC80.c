__int64 __fastcall sub_BC80(__int64 a1, __int64 a2, int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  if ( a3 <= 1 )
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3 == 0 ? 10 : 6;
  else
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = *((unsigned __int8 *)word_1791A + ((a3 >> 1) & 3));
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

