void __fastcall sub_9C6A0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_238728;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    j__free(v3);
  }
}
