unsigned __int64 __fastcall sub_1B3C00(_QWORD *a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v6; // r12
  int v7; // r12d
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v6 = sub_1AE730(a3, a2, (unsigned __int64)a1, a4);
  sub_64D70(a1, a2, a3);
  if ( a1[3] )
  {
    if ( !(unsigned __int8)sub_64880(a1) )
    {
      v9 = a2[1];
      v10 = 2;
      if ( v9 )
        v10 = v9-- + 1;
      v11 = *a2;
      if ( a2[2] < v10 )
      {
        v12 = qvector_reserve((__int64)a2, v11, v10, 1);
        *a2 = v12;
        v11 = v12;
      }
      a2[1] = v10;
      *(_BYTE *)(v11 + v9) = 44;
      *(_BYTE *)(*a2 + v9 + 1) = 0;
    }
    sub_1B39D0((__int64)(a1 + 2), a2);
  }
  if ( v6 != -1 )
  {
    v7 = v6 & 7;
    if ( v7 > 2 )
      sub_1ADFD0(a4);
    sub_32AAE0(a2, v7 + 41);
  }
  return v13 - __readfsqword(0x28u);
}

