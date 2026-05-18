void __fastcall sub_30C50(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  v2 = (void *)a1[14];
  if ( v2 )
  {
    a1[15] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[11];
  if ( v3 )
  {
    a1[12] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[8];
  if ( v4 )
  {
    a1[9] = 0;
    j__free(v4);
  }
  v5 = (void *)a1[5];
  if ( v5 )
  {
    a1[6] = 0;
    j__free(v5);
  }
  v6 = (void *)a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    j__free(v6);
  }
}
