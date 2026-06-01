void __fastcall sub_16090(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rbx

  if ( (__int64)a2 - a1 <= 896 )
  {
    sub_139D0(a1, a2, a3);
  }
  else
  {
    v4 = ((__int64)a2 - a1) >> 7;
    v5 = a1 + (v4 << 6);
    v6 = v4 << 6 >> 6;
    sub_16090(a1, v5);
    sub_16090(v5, a2);
    sub_15D70(a1, v5, (__int64)a2, v6, ((__int64)a2 - v5) >> 6, a3);
  }
}

