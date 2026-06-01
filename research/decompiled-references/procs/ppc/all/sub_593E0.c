void __fastcall sub_593E0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = &off_94790;
  reg_finder_dtr();
  v3 = a1[26];
  if ( v3 )
  {
    a1[27] = 0;
    qfree(v3, a2);
  }
  v4 = a1[10];
  if ( v4 )
  {
    a1[11] = 0;
    qfree(v4, a2);
  }
  operator delete(a1, 0xF8u);
}
