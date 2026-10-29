void __fastcall sub_5FC90(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *a1 = &off_2369E0;
  v2 = (void *)a1[10];
  if ( v2 )
  {
    a1[11] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[3];
  if ( v4 )
  {
    a1[4] = 0;
    j__free(v4);
  }
  operator delete(a1, 0x68u);
}
