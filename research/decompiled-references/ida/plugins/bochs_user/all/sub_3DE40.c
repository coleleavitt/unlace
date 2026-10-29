void __fastcall sub_3DE40(_QWORD *a1)
{
  _QWORD *v2; // r12
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // rbx
  void *v6; // rdi

  v2 = (_QWORD *)a1[1];
  *a1 = off_71CF0;
  if ( v2 )
  {
    v3 = v2[526];
    while ( v3 )
    {
      sub_3DAA0(*(_QWORD **)(v3 + 24));
      v4 = (void *)v3;
      v3 = *(_QWORD *)(v3 + 16);
      operator delete(v4, 0x30u);
    }
    v5 = v2[2];
    while ( v5 )
    {
      sub_3DC70(*(_QWORD **)(v5 + 24));
      v6 = (void *)v5;
      v5 = *(_QWORD *)(v5 + 16);
      operator delete(v6, 0x1028u);
    }
    operator delete(v2, 0x1098u);
  }
  operator delete(a1, 0x10u);
}

