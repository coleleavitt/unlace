void __fastcall sub_16D950(void **a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = nullptr;
    j__free(v2);
  }
  v3 = a1[6];
  if ( v3 )
  {
    a1[7] = nullptr;
    j__free(v3);
  }
  v4 = a1[3];
  if ( v4 )
  {
    a1[4] = nullptr;
    j__free(v4);
  }
  v5 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    j__free(v5);
  }
}
