void __fastcall sub_52F60(_QWORD *a1)
{
  void *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = (void *)a1[5];
  *a1 = &off_B2C38;
  if ( v2 )
  {
    sub_7DB00(v2);
    operator delete(v2, 0xE8u);
  }
  v3 = a1[10];
  a1[5] = 0;
  if ( v3 )
  {
    a1[11] = 0;
    qfree(v3);
  }
  v4 = a1[6];
  if ( v4 )
  {
    a1[7] = 0;
    qfree(v4);
  }
}
