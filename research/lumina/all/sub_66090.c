void __fastcall sub_66090(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *a1 = &off_236F48;
  v2 = (void *)a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    j__free(v4);
  }
}
