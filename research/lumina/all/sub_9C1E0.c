void __fastcall sub_9C1E0(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_237DC8;
  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    j__free(v1);
  }
}
