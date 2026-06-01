void __fastcall sub_142C0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi

  *a1 = &off_23A80;
  reg_finder_dtr();
  v5 = a1[26];
  if ( v5 )
  {
    a1[27] = 0;
    qfree(v5, a2, v4, a3);
  }
  v6 = a1[10];
  if ( v6 )
  {
    a1[11] = 0;
    qfree(v6, a2, v4, a3);
  }
  operator delete(a1, 0xF8u);
}
