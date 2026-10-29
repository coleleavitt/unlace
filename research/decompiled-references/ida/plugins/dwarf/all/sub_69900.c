void __fastcall sub_69900(_QWORD *a1)
{
  void *v1; // rbx

  v1 = (void *)a1[4];
  *a1 = &off_C8808;
  if ( v1 )
  {
    sub_1B750((__int64)v1);
    operator delete(v1, 0x108u);
  }
}

