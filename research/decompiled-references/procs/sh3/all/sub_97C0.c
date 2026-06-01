void __fastcall sub_97C0(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi

  v2 = *(_QWORD *)(a1 + 136);
  while ( v2 )
  {
    sub_8B70(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = *(_QWORD *)(a1 + 88);
  while ( v4 )
  {
    sub_8D40(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
}
