__int64 __fastcall sub_22167(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi

  v8 = *(_QWORD *)(a1 + 16);
  if ( !v8 )
    v8 = sub_E2050(a1);
  if ( a2 )
  {
    v9 = *a2;
    v10 = sub_F44C0(a1, a2, 0, 0);
    sub_E1710(v8, 90, a4, a3, v9);
    sub_D04B0(v8, v10, 4294967288LL);
    sub_E1710(v8, 13, (unsigned int)(*(_DWORD *)(v8 + 144) + 1), a5, (unsigned int)(*(_DWORD *)(v8 + 144) + 1));
    v11 = v9 - 1;
    v12 = a4;
    v13 = a3;
    v14 = 80;
  }
  else
  {
    v11 = 0;
    v12 = a5;
    v13 = 0;
    v14 = 8;
  }
  return sub_E1710(v8, v14, v13, v12, v11);
}
