__int64 __fastcall sub_430A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  void *v4; // rdi
  __int64 v5; // rbp
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi

  *a1 = &off_A0CA0;
  sub_81D90(a1[77]);
  v2 = a1[82];
  a1[77] = 0;
  sub_59130(v2);
  v3 = a1[73];
  a1[82] = 0;
  a1[78] = 0;
  a1[80] = 0;
  a1[21] = 0;
  while ( v3 )
  {
    sub_42ED0(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x40u);
  }
  v5 = a1[67];
  while ( v5 )
  {
    sub_42AD0(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x30u);
  }
  v7 = a1[56];
  if ( v7 )
  {
    a1[57] = 0;
    qfree(v7);
  }
  v8 = a1[53];
  if ( v8 )
  {
    a1[54] = 0;
    qfree(v8);
  }
  v9 = a1[50];
  if ( v9 )
  {
    a1[51] = 0;
    qfree(v9);
  }
  v10 = a1[46];
  if ( v10 )
  {
    a1[47] = 0;
    qfree(v10);
  }
  v11 = a1[43];
  if ( v11 )
  {
    a1[44] = 0;
    qfree(v11);
  }
  v12 = a1[33];
  if ( v12 )
  {
    a1[34] = 0;
    qfree(v12);
  }
  v13 = a1[30];
  if ( v13 )
  {
    a1[31] = 0;
    qfree(v13);
  }
  a1[18] = &off_A4B50;
  remove_event_listener();
  a1[15] = &off_A4B50;
  remove_event_listener();
  *a1 = &off_A4B50;
  return remove_event_listener();
}
