__int64 __fastcall sub_33C10(const __m128i *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v6; // rax
  __m128i v7; // xmm2
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  unsigned __int64 v10; // rbp
  void **v11; // r15
  void *v12; // rdi
  __m128i v13; // xmm5
  __int64 v14; // rax
  const void *v15; // r12
  size_t v16; // rax
  __int64 v17; // r14
  size_t v18; // rbp
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // rbp
  char v24; // bp
  unsigned int v25; // ebp
  unsigned int v27; // eax
  int v28; // r12d
  __m128i v29; // [rsp+0h] [rbp-34C8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-34B0h]
  __m128i v31; // [rsp+20h] [rbp-34A8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-3498h]
  char *v33; // [rsp+38h] [rbp-3490h]
  _OWORD v34[2]; // [rsp+40h] [rbp-3488h] BYREF
  __m256i v35; // [rsp+60h] [rbp-3468h] BYREF
  char v36[1024]; // [rsp+80h] [rbp-3448h] BYREF
  char v37; // [rsp+480h] [rbp-3048h] BYREF
  unsigned __int64 v38; // [rsp+3488h] [rbp-40h]

  v32 = a3;
  v30 = a2;
  v38 = __readfsqword(0x28u);
  v33 = &v37;
  qgetcwd();
  v6 = a1[75].m128i_i64[0];
  a1[169].m128i_i8[8] = *(_DWORD *)(v6 + 8204) == 2;
  a1[169].m128i_i8[9] = *(_DWORD *)(v6 + 8204) == 3;
  a1[169].m128i_i8[10] = *(_DWORD *)(v6 + 8196);
  a1[169].m128i_i8[10] &= 1u;
  get_path();
  qdirname();
  if ( a1[169].m128i_i8[9] )
  {
    if ( !*a4 )
      qdirname();
    if ( (unsigned int)qchdir() )
      return (unsigned int)-2;
  }
  else if ( (unsigned int)qchdir() )
  {
    return (unsigned int)-2;
  }
  v7 = _mm_loadu_si128(a1 + 166);
  v8 = _mm_loadu_si128(a1 + 167);
  v9 = _mm_loadu_si128(a1 + 168);
  v31 = _mm_loadu_si128(a1 + 165);
  v34[0] = v8;
  v34[1] = v9;
  *(__m128i *)v35.m256i_i8 = v31;
  v29 = v7;
  *(__m128i *)&v35.m256i_u64[2] = v7;
  sub_31DF0(v35.m256i_i64, (__int64 *)v34);
  v10 = a1[168].m128i_i64[1] + 8;
  v11 = (void **)(v7.m128i_i64[1] + 8);
  if ( v7.m128i_i64[1] + 8 < v10 )
  {
    do
    {
      v12 = *v11++;
      operator delete(v12, 0x1F8u);
    }
    while ( (unsigned __int64)v11 < v10 );
  }
  v13 = _mm_load_si128(&v29);
  a1[167] = _mm_load_si128(&v31);
  a1[168] = v13;
  sub_25E70((__int64)a1);
  qstrncpy();
  qstrncpy();
  qstrncpy();
  get_path();
  sub_30570();
  v14 = a1[75].m128i_i64[0];
  memset(&v35, 0, 24);
  v15 = (const void *)(v14 + 11408);
  v16 = strlen((const char *)(v14 + 11408));
  v17 = v16 + 1;
  v18 = v16;
  v35.m256i_i64[0] = qvector_reserve();
  v35.m256i_i64[1] = v17;
  memmove((void *)v35.m256i_i64[0], v15, v18);
  *(_BYTE *)(v35.m256i_i64[0] + v18) = 0;
  v19 = v35.m256i_i64[1];
  if ( v35.m256i_i64[1] )
  {
    v22 = v35.m256i_i64[1] + 4;
    v21 = v35.m256i_i64[1] + 5;
    v20 = v35.m256i_i64[0];
    v19 = v35.m256i_i64[1] - 1;
    if ( v35.m256i_i64[2] >= (unsigned __int64)(v35.m256i_i64[1] + 5) )
      goto LABEL_9;
  }
  else
  {
    v20 = v35.m256i_i64[0];
    v21 = 6;
    v22 = 5;
    if ( v35.m256i_i64[2] >= 6uLL )
      goto LABEL_9;
  }
  v35.m256i_i64[0] = qvector_reserve();
  v20 = v35.m256i_i64[0];
LABEL_9:
  v35.m256i_i64[1] = v21;
  *(_BYTE *)(v20 + v22) = 0;
  v23 = v35.m256i_i64[0] + v19;
  *(_DWORD *)v23 = 1668246574;
  *(_BYTE *)(v23 + 4) = 107;
  v24 = qfileexist();
  if ( v35.m256i_i64[0] )
  {
    v35.m256i_i64[1] = 0;
    qfree();
  }
  if ( v24 )
  {
    sub_EB00((__int64)"Image file is locked (%s.lock is present)", (const char *)(a1[75].m128i_i64[0] + 11408));
    return (unsigned int)-2;
  }
  sub_32AA0((__int64)a1);
  if ( (unsigned int)sub_32C10((__int64)a1, 0.0) )
  {
    sub_EBD0((__int64)"Error: one or more input parameters required for this operation mode are missing!");
LABEL_14:
    v25 = 0;
LABEL_15:
    (*(void (__fastcall **)(const __m128i *, _QWORD, _QWORD))(a1->m128i_i64[0] + 32))(a1, 0, 0);
    goto LABEL_16;
  }
  v27 = sub_33870(
          (__int64)a1,
          (const char *)(a1[75].m128i_i64[0] + 11408),
          a1[75].m128i_i64[0] + 12432,
          0.0,
          *(double *)v8.m128i_i64);
  v25 = v27;
  if ( v27 )
  {
    if ( v27 != 28 )
      goto LABEL_14;
LABEL_22:
    v25 = -2;
    goto LABEL_15;
  }
  sub_41770(a1[75].m128i_i64[0], a1[75].m128i_i64[0] + 12432, v36, 1024, &v35);
  v28 = sub_27B20(
          (__int64)&a1[75].m128i_i64[1],
          v36,
          (const char **)v35.m256i_i64[0],
          *(_BYTE *)(a1[75].m128i_i64[0] + 8193));
  sub_41770(0, 0, 0, 0, &v35);
  if ( v28 )
    goto LABEL_22;
  if ( !(unsigned __int8)sub_32F50((__int64)a1) )
    goto LABEL_15;
  v25 = 1;
LABEL_16:
  if ( (unsigned int)qchdir() )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  return v25;
}

