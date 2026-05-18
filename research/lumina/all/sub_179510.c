unsigned __int64 __fastcall sub_179510(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 v5; // rsi
  __int64 v6; // rax

  v2 = a1[4];
  if ( !v2 )
  {
    v5 = a1[3];
    if ( !a1[5] )
    {
      v6 = sub_1987B0(a1 + 3, v5, 1, 32);
      v2 = a1[4];
      a1[3] = v6;
      v5 = v6;
    }
    a2 = 32 * v2 + v5;
    *(_BYTE *)a2 = 2;
    *(_QWORD *)(a2 + 24) = 0;
    *(_OWORD *)(a2 + 8) = 0;
    v2 = a1[4] + 1LL;
    a1[4] = v2;
  }
  v3 = a1[3] + 32 * v2 - 32;
  sub_1793A0(v3, a2);
  return sub_1790B0((__int64)a1, v3);
}
