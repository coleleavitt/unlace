void __fastcall sub_6B810(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  *a1 = &off_237518;
  v2 = (void *)a1[25];
  if ( v2 )
  {
    a1[26] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[22];
  if ( v3 )
  {
    a1[23] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[15];
  if ( v4 )
  {
    a1[16] = 0;
    j__free(v4);
  }
  sub_2F570((__int64)(a1 + 6));
  v5 = (void *)a1[3];
  if ( v5 )
  {
    a1[4] = 0;
    j__free(v5);
  }
  operator delete(a1, 0xF0u);
}
