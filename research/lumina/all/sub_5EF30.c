void __fastcall sub_5EF30(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_236B60;
  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    j__free(v1);
  }
}
