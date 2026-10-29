void __fastcall sub_9C5E0(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2385D8;
  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    j__free(v1);
  }
}
