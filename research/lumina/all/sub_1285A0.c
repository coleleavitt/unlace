void __fastcall sub_1285A0(__int64 a1, __int64 a2, unsigned __int8 *a3, double a4)
{
  __int64 *v5; // rbp
  unsigned int v6; // r13d
  int v7; // eax
  __int64 v8; // r14
  int v9; // r15d
  __int64 v10; // r14
  bool v11; // zf
  __int64 v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v5 = *(__int64 **)(a1 + 16);
  v12[0] = a2;
  if ( !v5 )
  {
    v5 = sub_E2050((__int64 *)a1);
    if ( !v5 )
      goto LABEL_3;
  }
  v6 = *(_DWORD *)(a1 + 48);
  if ( v6 )
    goto LABEL_3;
  if ( v12[0] )
  {
    v7 = sub_E4190((__int64 *)a1, v12[0], v12[0], v12);
    v8 = v7;
    if ( v7 < 0 || v7 == 1 )
      goto LABEL_3;
    v9 = 1 << v7;
    if ( !a3 )
      goto LABEL_10;
  }
  else
  {
    if ( !a3 )
    {
      v10 = 0;
      sub_E1710((__int64)v5, 5, 0, 0, 0);
      v9 = 1;
      *((_DWORD *)v5 + 50) |= 1u;
      goto LABEL_12;
    }
    v8 = 0;
    v9 = 1;
  }
  if ( !(unsigned int)sub_E4860(a1, nullptr, 0, (__int64)a3, nullptr) )
  {
    v11 = *(_QWORD *)(a1 + 16) == 0;
    v6 = *(_DWORD *)(a1 + 56) + 1;
    *(_DWORD *)(a1 + 56) = v6;
    if ( !v11 )
      sub_127300(a1, a3, v6, a4);
  }
LABEL_10:
  sub_E1710((__int64)v5, 5, v8, v6, 0);
  *((_DWORD *)v5 + 50) |= v9;
  v10 = 32 * v8;
LABEL_12:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v5 + 32) + v10 + 8) + 17LL) )
    *((_DWORD *)v5 + 51) |= v9;
LABEL_3:
  if ( a3 )
    sub_D7720(*(_QWORD *)a1, (__int64)a3);
}
