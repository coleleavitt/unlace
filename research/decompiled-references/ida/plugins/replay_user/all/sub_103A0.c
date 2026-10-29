__int64 __fastcall sub_103A0(__int64 a1)
{
  __int64 v2; // rbp
  void *v3; // rdi
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 v6; // rbp
  void *v7; // rdi

  v2 = *(_QWORD *)(a1 + 880);
  *(_DWORD *)(a1 + 1024) = 0;
  *(_BYTE *)(a1 + 1028) = 0;
  *(_QWORD *)(a1 + 1032) = -1;
  *(_WORD *)(a1 + 1040) = 0;
  *(_OWORD *)(a1 + 1008) = -1;
  while ( v2 )
  {
    sub_DE00(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = *(_QWORD *)(a1 + 928);
  *(_QWORD *)(a1 + 880) = 0;
  *(_QWORD *)(a1 + 888) = a1 + 872;
  *(_QWORD *)(a1 + 896) = a1 + 872;
  *(_QWORD *)(a1 + 904) = 0;
  while ( v4 )
  {
    sub_DE00(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = *(_QWORD *)(a1 + 976);
  *(_QWORD *)(a1 + 928) = 0;
  *(_QWORD *)(a1 + 936) = a1 + 920;
  *(_QWORD *)(a1 + 944) = a1 + 920;
  *(_QWORD *)(a1 + 952) = 0;
  while ( v6 )
  {
    sub_DE00(*(_QWORD **)(v6 + 24));
    v7 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    operator delete(v7, 0x30u);
  }
  *(_QWORD *)(a1 + 976) = 0;
  *(_QWORD *)(a1 + 984) = a1 + 968;
  *(_QWORD *)(a1 + 992) = a1 + 968;
  *(_QWORD *)(a1 + 1000) = 0;
  sub_15970(a1);
  return sub_16020(a1, 0);
}

