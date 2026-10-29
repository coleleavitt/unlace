void __fastcall sub_2DFB0(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  v2 = a1[7];
  *a1 = off_236278;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  while ( v2 )
  {
    sub_2DD90(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  operator delete(a1, 0x58u);
}
