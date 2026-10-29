void __fastcall sub_16DA50(_QWORD *a1)
{
  void *v1; // rax

  v1 = (void *)a1[1];
  if ( v1 )
  {
    a1[2] = 0;
    j__free(v1);
  }
}
