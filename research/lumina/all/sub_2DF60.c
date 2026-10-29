void __fastcall sub_2DF60(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  v1 = a1[7];
  *a1 = off_236278;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  while ( v1 )
  {
    sub_2DD90(*(_QWORD **)(v1 + 24));
    v2 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v2, 0x28u);
  }
}
