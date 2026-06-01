__int64 __fastcall sub_1DC00(__int64 a1, __int64 a2, __int32 a3, __int64 *a4)
{
  int v4; // ebp
  unsigned int v5; // ebp
  __int64 v7; // r15
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  char v13; // r8
  __int64 v14; // r12
  unsigned __int64 v15; // r14
  __m128i *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __m128i *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  __m128i *v25; // r13
  __int64 v26; // r14
  __m128i *v27; // r12
  unsigned __int64 v28; // rdx
  const __m128i *v29; // r13
  const __m128i *v30; // r12
  __m128i *v31; // rcx
  __m128i *v32; // rdx
  __m128i v33; // xmm0
  const __m128i *v34; // rdx
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rsi
  __m128i *v37; // rsi
  __m128i *v38; // rdi
  char v39; // [rsp+Fh] [rbp-89h]
  __m128i v40; // [rsp+10h] [rbp-88h] BYREF
  __int64 v41; // [rsp+20h] [rbp-78h] BYREF
  __int128 v42; // [rsp+28h] [rbp-70h]
  __int64 v43; // [rsp+40h] [rbp-58h] BYREF
  __int128 v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  LOBYTE(v4) = a2 == 0;
  v5 = ((unsigned int)a3 >> 31) | v4;
  LOBYTE(v5) = (a4 == nullptr) | v5;
  if ( (_BYTE)v5 )
    return 0;
  v7 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)getinf(5) - 10 > 1 || *(_DWORD *)(v7 + 4) || (getinf(3) & 6) != 2 )
    return 0;
  v11 = *a4;
  v41 = 0;
  v43 = 0;
  v42 = 0;
  v44 = 0;
  sub_153C0(a1, &v41, &v43, v11, -4, a3);
  v12 = v44;
  if ( (_QWORD)v44 != (_QWORD)v42 )
    goto LABEL_19;
  v13 = 0;
  v14 = 0;
  v15 = -1;
  if ( !(_QWORD)v44 )
    goto LABEL_18;
  while ( 1 )
  {
    if ( ++v14 < v12 && *(_QWORD *)(v41 + 8 * v14 - 8) == *(_QWORD *)(v41 + 8 * v14) )
    {
      v19 = v15;
      goto LABEL_13;
    }
    v20 = *(_QWORD *)(a2 + 8);
    v21 = *(__m128i **)a2;
    v22 = v20 + 1;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v20 + 1) )
    {
      v39 = v13;
      v23 = qvector_reserve(a2, v21, v22, 16);
      *(_QWORD *)a2 = v23;
      v21 = (__m128i *)v23;
      v20 = *(_QWORD *)(a2 + 8);
      v13 = v39;
      v22 = v20 + 1;
    }
    *(_QWORD *)(a2 + 8) = v22;
    v16 = &v21[v20];
    v17 = v41;
    v18 = *(_QWORD *)(v43 + 8 * v14 - 8);
    v16->m128i_i32[2] = v18;
    v19 = *(_QWORD *)(v17 + 8 * v14 - 8);
    v16->m128i_i64[0] = v19;
    if ( (int)v18 < -2 || a3 < (int)v18 )
      goto LABEL_19;
    v13 |= v15 >= v19 && v15 != -1;
    if ( v14 == v12 )
      break;
LABEL_13:
    v15 = v19;
  }
  v24 = *(_QWORD *)(a2 + 8);
  if ( v24 <= 1 || !v13 )
    goto LABEL_18;
  v25 = *(__m128i **)a2;
  v26 = 16 * v24;
  v27 = (__m128i *)(*(_QWORD *)a2 + 16 * v24);
  if ( *(__m128i **)a2 == v27 )
    goto LABEL_35;
  if ( !(v26 >> 4) )
  {
    sub_1D9C0(
      *(__m128i **)a2,
      (__int64 *)(*(_QWORD *)a2 + 16 * v24),
      -2,
      (__int64 (__fastcall *)(__int64, __int64))sub_1A120);
    goto LABEL_41;
  }
  _BitScanReverse64(&v28, v26 >> 4);
  sub_1D9C0(
    *(__m128i **)a2,
    (__int64 *)(*(_QWORD *)a2 + 16 * v24),
    2LL * (int)v28,
    (__int64 (__fastcall *)(__int64, __int64))sub_1A120);
  if ( v26 <= 256 )
  {
LABEL_41:
    sub_1D6B0(v25, v27, (__int64 (__fastcall *)(__m128i *, __m128i *))sub_1A120);
    goto LABEL_34;
  }
  sub_1D6B0(v25, v25 + 16, (__int64 (__fastcall *)(__m128i *, __m128i *))sub_1A120);
  v29 = v25 + 15;
  v30 = v27 - 1;
  v31 = &v40;
  do
  {
    v32 = (__m128i *)v29;
    v40 = _mm_loadu_si128(v29 + 1);
    while ( sub_1A120(v31, v32) )
    {
      v33 = _mm_loadu_si128(v34);
      v32 = (__m128i *)&v34[-1];
      v32[2] = v33;
    }
    ++v29;
    v34[1] = _mm_load_si128(&v40);
  }
  while ( v29 != v30 );
LABEL_34:
  v27 = *(__m128i **)a2;
LABEL_35:
  v35 = v24 - 1;
  while ( 1 )
  {
    v36 = v35--;
    v37 = &v27[v36];
    v38 = &v27[v35];
    if ( v37->m128i_i64[0] == v38->m128i_i64[0] )
    {
      memmove(v38, v37, 16LL * *(_QWORD *)(a2 + 8) - 16 - 16 * v35);
      --*(_QWORD *)(a2 + 8);
    }
    if ( !v35 )
      break;
    v27 = *(__m128i **)a2;
  }
LABEL_18:
  v5 = 1;
LABEL_19:
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  return v5;
}

