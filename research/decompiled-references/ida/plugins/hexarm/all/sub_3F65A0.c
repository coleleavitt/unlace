__int64 __fastcall sub_3F65A0(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r13
  __int64 v7; // [rsp+0h] [rbp-38h]

  v4 = a4;
  if ( a4 == a2 )
  {
    v4 = *(int *)(*(_QWORD *)(a1 + 832) + 624LL);
    sub_3F56D0(a1, 4u, 1, a4, 0x3BEA45E214ADDC55LL, v4, 0);
  }
  sub_3F56D0(a1, 4u, 1, a3, 0x3BEA45E214ADDC55LL, a2, 0);
  sub_3F56D0(a1, 4u, 1, v4, 0x3BEA45E214ADDC55LL, a2 + 2, 0);
  return v7;
}

