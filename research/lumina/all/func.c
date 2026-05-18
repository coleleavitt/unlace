void __fastcall func(void **a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = a1[3];
  if ( v2 )
  {
    a1[4] = nullptr;
    j__free(v2);
  }
  v3 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    j__free(v3);
  }
}
