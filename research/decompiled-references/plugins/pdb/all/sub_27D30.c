void __fastcall sub_27D30(_QWORD *a1)
{
  char *v1; // rbp
  char *v3; // r12
  char *v4; // rbp
  char *v5; // r12
  __int64 v6; // rbp
  void *v7; // rdi
  __int64 v8; // rbp
  _QWORD *v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rbp
  void *v12; // rdi
  void *v13; // rdi
  __int64 v14; // rbp
  void *v15; // rdi
  __int64 v16; // rbp
  _QWORD *v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rbp
  void *v20; // rdi
  char *v21; // rbp
  char *v22; // r12
  char *v23; // rbx
  char *v24; // rbp

  v1 = (char *)a1[4];
  *a1 = &off_A9EF0;
  while ( v1 )
  {
    v3 = v1;
    sub_26700(*((_QWORD **)v1 + 3));
    v1 = *((char **)v1 + 2);
    clear_tinfo_t(v3 + 48);
    operator delete(v3, 0x40u);
  }
  v4 = (char *)a1[10];
  a1[4] = 0;
  a1[5] = a1 + 3;
  a1[6] = a1 + 3;
  a1[7] = 0;
  while ( v4 )
  {
    v5 = v4;
    sub_264C0(*((_QWORD **)v4 + 3));
    v4 = *((char **)v4 + 2);
    clear_tinfo_t(v5 + 40);
    operator delete(v5, 0x30u);
  }
  v6 = a1[16];
  a1[10] = 0;
  a1[11] = a1 + 9;
  a1[12] = a1 + 9;
  a1[13] = 0;
  while ( v6 )
  {
    sub_26270(*(_QWORD **)(v6 + 24));
    v7 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    operator delete(v7, 0x28u);
  }
  v8 = a1[22];
  a1[16] = 0;
  a1[17] = a1 + 15;
  a1[18] = a1 + 15;
  a1[19] = 0;
  while ( v8 )
  {
    v9 = (_QWORD *)v8;
    sub_27580(*(_QWORD **)(v8 + 24));
    v10 = *(_QWORD *)(v8 + 32);
    v8 = *(_QWORD *)(v8 + 16);
    if ( v10 )
    {
      v9[5] = 0;
      qfree(v10);
    }
    operator delete(v9, 0x40u);
  }
  v11 = a1[28];
  a1[22] = 0;
  a1[23] = a1 + 21;
  a1[24] = a1 + 21;
  a1[25] = 0;
  while ( v11 )
  {
    sub_26270(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x28u);
  }
  v13 = (void *)a1[34];
  a1[28] = 0;
  a1[29] = a1 + 27;
  a1[30] = a1 + 27;
  a1[31] = 0;
  sub_26170(v13);
  v14 = a1[28];
  while ( v14 )
  {
    sub_26270(*(_QWORD **)(v14 + 24));
    v15 = (void *)v14;
    v14 = *(_QWORD *)(v14 + 16);
    operator delete(v15, 0x28u);
  }
  v16 = a1[22];
  while ( v16 )
  {
    v17 = (_QWORD *)v16;
    sub_27580(*(_QWORD **)(v16 + 24));
    v18 = *(_QWORD *)(v16 + 32);
    v16 = *(_QWORD *)(v16 + 16);
    if ( v18 )
    {
      v17[5] = 0;
      qfree(v18);
    }
    operator delete(v17, 0x40u);
  }
  v19 = a1[16];
  while ( v19 )
  {
    sub_26270(*(_QWORD **)(v19 + 24));
    v20 = (void *)v19;
    v19 = *(_QWORD *)(v19 + 16);
    operator delete(v20, 0x28u);
  }
  v21 = (char *)a1[10];
  while ( v21 )
  {
    v22 = v21;
    sub_264C0(*((_QWORD **)v21 + 3));
    v21 = *((char **)v21 + 2);
    clear_tinfo_t(v22 + 40);
    operator delete(v22, 0x30u);
  }
  v23 = (char *)a1[4];
  while ( v23 )
  {
    v24 = v23;
    sub_26700(*((_QWORD **)v23 + 3));
    v23 = *((char **)v23 + 2);
    clear_tinfo_t(v24 + 48);
    operator delete(v24, 0x40u);
  }
}
