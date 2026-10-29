__int64 __fastcall sub_3F75C0(__int64 a1, int a2, int a3, int a4, double a5)
{
  __int64 v6; // r13
  __int64 v7; // rax

  v6 = *(int *)(*(_QWORD *)(a1 + 832) + 620LL);
  v7 = 0;
  if ( (unsigned __int64)(a3 % 64) < 0x40 )
    v7 = 1LL << a3;
  sub_3F56D0(a1, 3u, 7, v7, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 620LL), 0);
  sub_3F6E70(a1, 0x14u, 7u, a2, v6, v6, a5, 0, 1);
  return sub_3F6E70(a1, 0x20u, 7u, v6, *(int *)(*(_QWORD *)(a1 + 832) + 480LL), a4, a5, 0, 1);
}

