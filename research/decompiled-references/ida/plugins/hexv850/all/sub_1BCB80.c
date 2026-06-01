__int64 __fastcall sub_1BCB80(_QWORD *a1, double a2, double a3, __m128 a4)
{
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rdi
  __m128i *v15; // r14
  __int64 v16; // r12
  char *v17; // r13
  unsigned __int64 v18; // rax
  __m128i *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 *v23; // rsi
  void *v24; // r12
  __int64 v25; // r15
  void *v26; // rbp
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  char *v31; // [rsp+0h] [rbp-A0h]
  void *src; // [rsp+18h] [rbp-88h] BYREF
  __int128 v33; // [rsp+20h] [rbp-80h]
  _QWORD *v34; // [rsp+30h] [rbp-70h]
  void *v35; // [rsp+38h] [rbp-68h] BYREF
  __int128 v36; // [rsp+40h] [rbp-60h]
  _QWORD *v37; // [rsp+50h] [rbp-50h]
  unsigned __int64 v38; // [rsp+60h] [rbp-40h]

  v4 = a1[4];
  v38 = __readfsqword(0x28u);
  v34 = a1;
  v5 = nullptr;
  v6 = (int)v4;
  v33 = 0;
  src = nullptr;
  if ( !(_DWORD)v4 )
    goto LABEL_2;
  src = (void *)qvector_reserve();
  memset((char *)src + 4 * v33, 0, 4 * ((int)v4 - (_QWORD)v33));
  *(_QWORD *)&v33 = (int)v4;
  if ( (int)v4 <= 0 )
    goto LABEL_19;
  v9 = (unsigned int)(v4 - 1);
  v10 = 0;
  do
  {
    *((_DWORD *)src + v10) = v10;
    v11 = v10++;
  }
  while ( v9 != v11 );
  v12 = 0;
  v13 = 24 * (v9 + 1);
  do
  {
    v14 = v12 + *v34;
    v15 = *(__m128i **)v14;
    v16 = 8LL * *(_QWORD *)(v14 + 8);
    v17 = (char *)(*(_QWORD *)v14 + v16);
    if ( *(char **)v14 == v17 )
      goto LABEL_17;
    if ( !(v16 >> 3) )
    {
      sub_1B3810(*(__m128i **)v14, (__int64 *)(*(_QWORD *)v14 + v16), -2, 0.0, a3, a4);
LABEL_37:
      sub_1B3740(v15->m128i_i8, v17);
      goto LABEL_17;
    }
    _BitScanReverse64(&v18, v16 >> 3);
    sub_1B3810(*(__m128i **)v14, (__int64 *)(*(_QWORD *)v14 + v16), 2LL * (int)(63 - (v18 ^ 0x3F)), 0.0, a3, a4);
    if ( v16 <= 128 )
      goto LABEL_37;
    v19 = v15 + 8;
    sub_1B3740(v15->m128i_i8, v15[8].m128i_i8);
    do
    {
      v20 = v19->m128i_i64[0];
      v21 = v19[-1].m128i_i64[1];
      v22 = &v19[-1].m128i_i64[1];
      if ( v21 <= v19->m128i_i64[0] )
      {
        v23 = (__int64 *)v19;
      }
      else
      {
        do
        {
          v22[1] = v21;
          v23 = v22;
          v21 = *--v22;
        }
        while ( v20 < v21 );
      }
      v19 = (__m128i *)((char *)v19 + 8);
      *v23 = v20;
    }
    while ( v17 != (char *)v19 );
LABEL_17:
    v12 += 24;
  }
  while ( v13 != v12 );
  v6 = v33;
  if ( !(_QWORD)v33 )
  {
    v5 = src;
LABEL_2:
    v7 = 0;
    goto LABEL_3;
  }
LABEL_19:
  v24 = (void *)qalloc_or_throw();
  memcpy(v24, src, 4 * v6);
  v25 = 4 * v33;
  v31 = (char *)src + 4 * v33;
  v26 = (void *)qalloc_or_throw();
  memcpy(v26, v24, 4 * v6);
  if ( src != v31 )
  {
    v35 = (void *)qalloc_or_throw();
    *((_QWORD *)&v36 + 1) = v6;
    memcpy(v35, v26, 4 * v6);
    *(_QWORD *)&v36 = v6;
    v27 = -2;
    v37 = v34;
    if ( v25 >> 2 )
    {
      _BitScanReverse64(&v28, v25 >> 2);
      v27 = 2LL * (int)v28;
    }
    sub_1BC660((char *)src, v31, v27, (__int64)&v35);
    if ( v35 )
      qfree();
    v35 = nullptr;
    v36 = 0;
    v35 = (void *)qalloc_or_throw();
    *((_QWORD *)&v36 + 1) = v6;
    memcpy(v35, v26, 4 * v6);
    *(_QWORD *)&v36 = v6;
    v37 = v34;
    sub_1B7B10((int *)src, v31, (__int64)&v35);
    if ( v35 )
      qfree();
  }
  if ( v26 )
    qfree();
  if ( v24 )
    qfree();
  v5 = src;
  if ( !(_QWORD)v33 )
    goto LABEL_2;
  v29 = 0;
  v30 = 0;
  do
  {
    if ( *((_DWORD *)src + v30) != v29 )
      break;
    v30 = ++v29;
  }
  while ( v29 < (unsigned __int64)v33 );
  if ( (_QWORD)v33 == v30 )
    goto LABEL_2;
  sub_1B5320(&src);
  v5 = src;
  v7 = 1;
LABEL_3:
  if ( v5 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  return v7;
}

