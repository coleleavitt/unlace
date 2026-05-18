__int64 __fastcall sub_E2DD0(__int64 *a1, char a2, unsigned int a3, __int64 *a4, unsigned int a5)
{
  __int64 *v8; // rbp
  unsigned int v9; // r12d
  __int64 v10; // r8
  __int64 v11; // r9

  v8 = sub_DBF10(*a1, 8);
  if ( v8 )
    *v8 = *a4;
  v9 = sub_E1710((__int64)a1, a2, 0, a3, 0);
  sub_DCC50((__int64)a1, v9, (__int64)v8, a5, v10, v11);
  return v9;
}
