__int64 __fastcall sub_4200(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  size_t v15; // r12
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  void *v24; // rax
  __int64 v25; // [rsp+8h] [rbp-70h]
  _DWORD n[3]; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v4 = a1[1];
  v5 = a1[3];
  n[0] = 0;
  v6 = v4 + v5;
  v7 = a1[4] + v4;
  if ( v6 >= v7 || (v8 = sub_E440(v6, v7, n), (v9 = v8) == 0) )
    sub_3890((__int64)"read_str: couldn't read size");
  v10 = a1[3];
  v11 = n[0];
  v12 = v8 + v10;
  a1[5] = v10;
  a1[3] = v12;
  if ( a1[4] < (unsigned __int64)(v12 + v11) )
    sub_3890((__int64)"read_str: invalid size", v7, v9);
  v13 = 0;
  v14 = 0;
  create_data(v10, 0, v9, -1);
  v15 = n[0];
  *(_QWORD *)&n[1] = 0;
  v16 = a1[1];
  v17 = a1[3];
  v27 = 0;
  if ( n[0] )
  {
    v25 = v17;
    v24 = (void *)qvector_reserve(&n[1], 0, n[0] + 1LL, 1);
    *(_QWORD *)&v27 = v15 + 1;
    *(_QWORD *)&n[1] = v24;
    memmove(v24, (const void *)(v16 + v25), v15);
    *(_BYTE *)(*(_QWORD *)&n[1] + v15) = 0;
    v14 = *(_QWORD *)&n[1];
    v13 = *((_QWORD *)&v27 + 1);
    v15 = v27;
  }
  v18 = *a2;
  *(_QWORD *)&n[1] = 0;
  v27 = 0;
  if ( v18 )
  {
    a2[1] = 0;
    qfree(v18);
    v19 = *(_QWORD *)&n[1];
    *a2 = v14;
    a2[1] = v15;
    a2[2] = v13;
    if ( v19 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v19);
    }
  }
  else
  {
    *a2 = v14;
    a2[1] = v15;
    a2[2] = v13;
  }
  v20 = a1[3];
  v21 = n[0];
  v22 = v20 + n[0];
  a1[5] = v20;
  a1[3] = v22;
  create_strlit(v20, v21, 0);
  return 1;
}
