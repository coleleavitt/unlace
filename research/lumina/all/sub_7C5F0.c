void __fastcall sub_7C5F0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    j__free(v3);
  }
}
