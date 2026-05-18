void __fastcall sub_4C4F0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v2 = (void *)a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    j__free(v4);
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    j__free(v5);
  }
}
