void __fastcall sub_756E0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v2 = (void *)a1[24];
  if ( v2 )
  {
    a1[25] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[20];
  if ( v3 )
  {
    a1[21] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[13];
  if ( v4 )
  {
    a1[14] = 0;
    j__free(v4);
  }
  sub_2F570((__int64)(a1 + 4));
  v5 = (void *)a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    j__free(v5);
  }
}
