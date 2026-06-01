unsigned __int64 __fastcall sub_40DC80(int *a1, __int64 a2, __m128i *a3, double a4)
{
  __int64 v5; // rax
  _QWORD *v6; // rbx
  int v8; // r15d
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 i; // r14
  __int64 v16; // r15
  _QWORD *v17; // rbp
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  __int64 v21; // rcx
  unsigned __int8 v22; // dl
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  const __m128i *v28; // [rsp+8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+10h] [rbp-58h] BYREF
  char v30; // [rsp+18h] [rbp-50h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v5 = a1[111];
  v6 = (_QWORD *)a3->m128i_i64[0];
  v31 = __readfsqword(0x28u);
  v30 = 1;
  v29 = v5;
  v8 = v5;
  if ( v6 )
  {
    v9 = v6;
    if ( a3->m128i_i64[1] )
      v9 = (_QWORD *)v6[1];
    v10 = sub_3ECB40(v9, v6, (__int64)&v29);
    if ( v6 == v10 )
      goto LABEL_6;
    v11 = v10 + 3;
    if ( *((_BYTE *)v10 + 32) != 1 )
      goto LABEL_6;
  }
  else
  {
    v23 = sub_3ECB40(nullptr, nullptr, (__int64)&v29);
    if ( !v23 )
      goto LABEL_8;
    v11 = v23 + 3;
    if ( *((_BYTE *)v23 + 32) != 1 )
      goto LABEL_8;
  }
  if ( *((_BYTE *)v11 + 8) != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCAB4u, a4);
    BUG();
  }
  if ( v8 + 2 > *(_DWORD *)v11 )
  {
    v30 = 1;
    v24 = a1[172];
    v28 = (const __m128i *)&v29;
    v29 = v24;
    sub_40D9A0(a3, (__int64)&v29, &v28);
    v25 = a1[173];
    v30 = 1;
    v28 = (const __m128i *)&v29;
    v29 = v25;
    sub_40D9A0(a3, (__int64)&v29, &v28);
    v26 = a1[174];
    v30 = 1;
    v28 = (const __m128i *)&v29;
    v29 = v26;
    sub_40D9A0(a3, (__int64)&v29, &v28);
    v27 = a1[174];
    v30 = 1;
    v28 = (const __m128i *)&v29;
    v29 = v27 + 1;
    sub_40D9A0(a3, (__int64)&v29, &v28);
    v6 = (_QWORD *)a3->m128i_i64[0];
  }
  if ( !v6 )
    goto LABEL_8;
LABEL_6:
  v12 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v12 )
    goto LABEL_25;
  if ( (*(_BYTE *)v12 & 2) == 0 )
  {
    v21 = a1[131];
    while ( 1 )
    {
      v22 = *(_BYTE *)(v12 + 32);
      if ( v22 <= 1u )
      {
        if ( !v22 )
          goto LABEL_36;
        if ( v21 >= *(_QWORD *)(v12 + 24) )
          break;
      }
      v12 = *(_QWORD *)(v12 + 8);
LABEL_34:
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_8;
    }
    if ( v21 <= *(_QWORD *)(v12 + 24) )
    {
      if ( (_QWORD *)v12 != v6 )
      {
LABEL_25:
        v30 = 1;
        v28 = (const __m128i *)&v29;
        v29 = 0;
        sub_40D9A0(a3, (__int64)&v29, &v28);
        v29 = 1;
        v30 = 1;
        v28 = (const __m128i *)&v29;
        sub_40D9A0(a3, (__int64)&v29, &v28);
        v29 = 2;
        v30 = 1;
        v28 = (const __m128i *)&v29;
        sub_40D9A0(a3, (__int64)&v29, &v28);
        v29 = 3;
        v30 = 1;
        v28 = (const __m128i *)&v29;
        sub_40D9A0(a3, (__int64)&v29, &v28);
        v29 = 4;
        v30 = 1;
        v28 = (const __m128i *)&v29;
        sub_40D9A0(a3, (__int64)&v29, &v28);
        v29 = 5;
        v30 = 1;
        v28 = (const __m128i *)&v29;
        sub_40D9A0(a3, (__int64)&v29, &v28);
      }
      goto LABEL_8;
    }
LABEL_36:
    v12 = *(_QWORD *)(v12 + 16);
    goto LABEL_34;
  }
LABEL_8:
  v13 = *(_QWORD *)(a2 + 920);
  v14 = *(_QWORD *)(v13 + 152);
  for ( i = v13 + 136; v14 != i; v14 = std::_Rb_tree_increment() )
  {
    while ( 1 )
    {
      v16 = *(int *)(v14 + 32);
      v17 = (_QWORD *)a3->m128i_i64[0];
      v30 = 1;
      v18 = nullptr;
      v29 = (int)v16 - 8;
      if ( v17 )
      {
        v18 = v17;
        if ( a3->m128i_i64[1] )
          v18 = (_QWORD *)v17[1];
      }
      v19 = sub_3ECB40(v18, v17, (__int64)&v29);
      if ( v17 != v19 && *((_BYTE *)v19 + 32) == 1 && (int)v16 > *((_DWORD *)v19 + 6) )
        break;
      v14 = std::_Rb_tree_increment();
      if ( v14 == i )
        return v31 - __readfsqword(0x28u);
    }
    v29 = v16;
    v30 = 1;
    v28 = (const __m128i *)&v29;
    sub_40D9A0(a3, (__int64)&v29, &v28);
  }
  return v31 - __readfsqword(0x28u);
}

