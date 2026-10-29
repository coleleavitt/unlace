__int64 __fastcall sub_52F0(_QWORD *a1)
{
  void *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  _QWORD *v6; // rbx

  v2 = (void *)a1[536];
  *a1 = off_1BA08;
  if ( v2 )
  {
    delete_dirtree();
    operator delete(v2, 8u);
  }
  v3 = a1[544];
  a1[543] = off_1B960;
  if ( v3 )
    qfclose();
  v4 = a1[539];
  while ( v4 )
  {
    sub_5060(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = a1 + 19;
  *a1 = &unk_1BC90;
  do
  {
    if ( *v6 )
    {
      v6[1] = 0;
      qfree();
    }
    v6 -= 3;
  }
  while ( v6 != a1 + 7 );
  return qfree();
}

