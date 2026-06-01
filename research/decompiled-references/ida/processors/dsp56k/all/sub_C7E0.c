__int64 __fastcall sub_C7E0(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax

  v3 = a3 & 1 | (a3 >> 1) & 2;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  if ( v3 <= 1 )
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (((unsigned __int8)a3 ^ (unsigned __int8)(a3 >> 3)) & 1) == 0 ? 10 : 6;
  else
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = *((char *)qword_17800 + v3);
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

