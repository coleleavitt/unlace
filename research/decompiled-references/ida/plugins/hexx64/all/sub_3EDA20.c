__int64 __fastcall sub_3EDA20(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rbx
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi

  v2 = a1[18];
  *a1 = off_4E9A58;
  while ( v2 )
  {
    sub_3ED510(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = a1[13];
  if ( v4 )
  {
    a1[14] = 0;
    qfree(v4);
  }
  v5 = a1[9];
  while ( v5 )
  {
    sub_3ED1D0(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x28u);
  }
  v7 = a1[4];
  *a1 = &off_4DBD38;
  if ( v7 )
  {
    a1[5] = 0;
    qfree(v7);
  }
  v8 = a1[1];
  if ( v8 )
  {
    a1[2] = 0;
    qfree(v8);
  }
  return j__qfree((__int64)a1);
}

