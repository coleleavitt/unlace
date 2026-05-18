void __fastcall sub_9C760(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2389C8;
  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    j__free(v1);
  }
}
