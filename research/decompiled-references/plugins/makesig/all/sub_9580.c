void __fastcall sub_9580(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rbp
  void *v3; // rdi

  v1 = a1[2];
  while ( v1 )
  {
    v2 = (void *)v1;
    sub_9340(*(void **)(v1 + 24));
    v3 = *(void **)(v1 + 56);
    v1 = *(_QWORD *)(v1 + 16);
    sub_8120(v3);
    operator delete(v2, 0x58u);
  }
}
