unsigned __int64 __fastcall sub_15DE0(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v3; // r15
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  size_t v9; // r12
  void *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rsi
  char v13; // r12
  unsigned __int64 v14; // rbp
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned __int64 v22; // rbp
  size_t v23; // r8
  __int64 v24; // r15
  size_t v25; // r9
  __int64 v26; // rsi
  unsigned __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // rbx
  _QWORD *v30; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rbp
  __int64 v36; // r12
  __int64 v37; // rsi
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // [rsp+0h] [rbp-68h]
  size_t v42; // [rsp+0h] [rbp-68h]
  size_t v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+10h] [rbp-58h]
  __int128 v45; // [rsp+18h] [rbp-50h]
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD **)a3;
  v4 = *(_QWORD *)(a3 + 8);
  v5 = 0;
  v46 = __readfsqword(0x28u);
  v45 = 0;
  v44 = 0;
  v41 = &v3[v4];
  if ( v3 == v41 )
  {
    a2[1] = 0;
    return v46 - __readfsqword(0x28u);
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 48) + 160LL * *v3;
    if ( *(_QWORD *)(v8 + 128) )
      break;
LABEL_5:
    if ( v41 == ++v3 )
    {
      v13 = 0;
      goto LABEL_12;
    }
  }
  if ( v5 <= 0xA )
  {
    v9 = *(_QWORD *)(v8 + 8);
    v10 = nullptr;
    if ( !v9
      || (v10 = (void *)qalloc_or_throw(),
          memcpy(v10, *(const void **)v8, v9),
          v11 = v45,
          v12 = v44,
          *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1)) )
    {
      v44 = qvector_reserve();
      v11 = v45;
      v12 = v44;
    }
    v7 = v12 + 24 * v11;
    *(_QWORD *)v7 = v10;
    *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
    v5 = v45 + 1;
    *(_QWORD *)&v45 = v45 + 1;
    goto LABEL_5;
  }
  v13 = 1;
LABEL_12:
  v14 = v44;
  v15 = 24 * v5;
  v16 = v44 + 24 * v5;
  if ( v44 == v16 )
  {
    a2[1] = 0;
    goto LABEL_48;
  }
  v17 = 0xAAAAAAAAAAAAAAABLL * (v15 >> 3);
  if ( !v17 )
  {
    sub_15710(v44, v16, -2);
    goto LABEL_42;
  }
  _BitScanReverse64(&v18, v17);
  sub_15710(v44, v16, 2LL * (int)v18);
  if ( v15 <= 384 )
  {
LABEL_42:
    sub_F570(v44, v16);
    goto LABEL_17;
  }
  v19 = v44 + 384;
  sub_F570(v44, v44 + 384);
  do
  {
    v20 = v19;
    v19 += 24;
    sub_F480(v20);
  }
  while ( v16 != v19 );
LABEL_17:
  v14 = v44;
  a2[1] = 0;
  v21 = v44;
  v16 = v44 + 24 * v45;
  if ( v44 == v16 )
  {
LABEL_48:
    if ( !v13 )
      goto LABEL_33;
    goto LABEL_49;
  }
  while ( 1 )
  {
    v22 = *(_QWORD *)(v21 + 8);
    if ( v22 )
    {
LABEL_19:
      v23 = v22 - 1;
      if ( v22 != 1 )
      {
        v24 = a2[1];
        v25 = v22 - 1;
        if ( v24 )
        {
          --v24;
          v25 = v23 + v24;
          v22 += v24;
        }
        v26 = *a2;
        if ( a2[2] < v22 )
        {
          v43 = v25;
          v42 = v23;
          v33 = qvector_reserve();
          v25 = v43;
          v23 = v42;
          *a2 = v33;
          v26 = v33;
        }
        a2[1] = v22;
        *(_BYTE *)(v26 + v25) = 0;
        memcpy((void *)(v24 + *a2), *(const void **)v21, v23);
      }
    }
    v21 += 24;
    if ( v21 == v16 )
      break;
    while ( 1 )
    {
      v27 = a2[1];
      if ( v27 <= 1 )
        break;
      v28 = *a2;
      if ( a2[2] < v27 + 1 )
      {
        v32 = qvector_reserve();
        *a2 = v32;
        v28 = v32;
      }
      a2[1] = v27 + 1;
      *(_BYTE *)(v28 + v27 - 1) = 95;
      *(_BYTE *)(*a2 + v27) = 0;
      v22 = *(_QWORD *)(v21 + 8);
      if ( v22 )
        goto LABEL_19;
      v21 += 24;
      if ( v21 == v16 )
        goto LABEL_31;
    }
  }
LABEL_31:
  if ( v13 )
  {
    v34 = a2[1];
    if ( v34 )
    {
      v35 = v34 - 1;
      v36 = v34 + 5;
      v37 = *a2;
      v38 = v34 + 6;
      if ( a2[2] >= v38 )
      {
LABEL_45:
        a2[1] = v38;
        *(_BYTE *)(v37 + v36) = 0;
        v39 = v35 + *a2;
        *(_DWORD *)v39 = 1601463647;
        *(_WORD *)(v39 + 4) = 27745;
        v14 = v44;
        v16 = v44;
        goto LABEL_33;
      }
LABEL_50:
      v40 = qvector_reserve();
      *a2 = v40;
      v37 = v40;
      goto LABEL_45;
    }
LABEL_49:
    v37 = *a2;
    v38 = 7;
    v36 = 6;
    v35 = 0;
    if ( (unsigned __int64)a2[2] >= 7 )
      goto LABEL_45;
    goto LABEL_50;
  }
  v16 = v44;
  v14 = v44;
LABEL_33:
  if ( v16 )
  {
    if ( (_QWORD)v45 )
    {
      v29 = 0;
      do
      {
        v30 = (_QWORD *)(v16 + 24 * v29);
        if ( *v30 )
        {
          v30[1] = 0;
          qfree();
          v14 = v44;
        }
        ++v29;
        v16 = v14;
      }
      while ( (_QWORD)v45 != v29 );
    }
    qfree();
  }
  return v46 - __readfsqword(0x28u);
}

