void __fastcall sub_328D0(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbp
  void *v5; // r12
  __int64 v6; // rbx
  void *v7; // rdi

  v2 = a1[9];
  *a1 = &off_871D0;
  while ( v2 )
  {
    sub_31EB0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = a1[3];
  while ( v4 )
  {
    v5 = (void *)v4;
    sub_32850(*(void ***)(v4 + 24));
    v6 = *(_QWORD *)(v4 + 56);
    v4 = *(_QWORD *)(v4 + 16);
    while ( v6 )
    {
      sub_32680(*(_QWORD **)(v6 + 24));
      v7 = (void *)v6;
      v6 = *(_QWORD *)(v6 + 16);
      operator delete(v7, 0x30u);
    }
    operator delete(v5, 0x58u);
  }
}
