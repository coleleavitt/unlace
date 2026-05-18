void __fastcall sub_E40C0(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // r12
  _QWORD *v5; // rbp
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9

  v3 = sub_DCE50(*a1, a3);
  if ( v3 )
  {
    v4 = (__int64 *)a1[2];
    v5 = (_QWORD *)v3;
    if ( (v4 || (v4 = sub_E2050(a1)) != nullptr)
      && !(unsigned int)sub_E4020((__int64)a1, 32, (__int64)off_23A900[a2], (__int64)v5, 0) )
    {
      v6 = sub_E1710((__int64)v4, 0, a2, 0, 0);
      sub_DCC50((__int64)v4, v6, (__int64)v5, 4294967290LL, v7, v8);
    }
    else
    {
      sub_C9250(*a1, v5);
    }
  }
}
