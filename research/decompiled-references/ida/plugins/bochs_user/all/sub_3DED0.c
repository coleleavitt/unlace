void __fastcall sub_3DED0(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi

  v1 = (_QWORD *)a1[1];
  *a1 = off_71CF0;
  if ( v1 )
  {
    v2 = v1[526];
    while ( v2 )
    {
      sub_3DAA0(*(_QWORD **)(v2 + 24));
      v3 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      operator delete(v3, 0x30u);
    }
    v4 = v1[2];
    while ( v4 )
    {
      sub_3DC70(*(_QWORD **)(v4 + 24));
      v5 = (void *)v4;
      v4 = *(_QWORD *)(v4 + 16);
      operator delete(v5, 0x1028u);
    }
    operator delete(v1, 0x1098u);
  }
}

