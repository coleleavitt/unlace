__int64 __fastcall sub_4C270(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_23D538;
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[15];
  if ( v3 )
  {
    a1[16] = 0;
    j__free(v3);
  }
  *a1 = &off_23D410;
  return sub_167940(a1);
}
