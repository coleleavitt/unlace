void __fastcall sub_A1340(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *a1 = &off_238BD8;
  v2 = (void *)a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    j__free(v4);
  }
  operator delete(a1, 0x68u);
}
