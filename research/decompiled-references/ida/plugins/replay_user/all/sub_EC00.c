void __fastcall sub_EC00(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  __int64 v6; // rbx
  void *v7; // rdi

  v2 = a1[122];
  *a1 = off_20820;
  while ( v2 )
  {
    sub_DE00(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = a1[116];
  while ( v4 )
  {
    sub_DE00(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = a1[110];
  while ( v6 )
  {
    sub_DE00(*(_QWORD **)(v6 + 24));
    v7 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    operator delete(v7, 0x30u);
  }
  sub_9FB0((__int64)a1);
}

