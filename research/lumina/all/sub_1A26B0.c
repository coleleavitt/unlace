void __fastcall sub_1A26B0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &unk_23DCB8;
  v2 = (void *)a1[1];
  if ( v2 )
  {
    dlclose(v2);
    a1[1] = 0;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    j__free(v3);
  }
}
