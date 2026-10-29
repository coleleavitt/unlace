__int64 __fastcall sub_1954B0(__int64 *a1)
{
  __int64 *v1; // rbx
  int v2; // r8d
  int v3; // r9d
  const char *v4; // rdx
  const char *v5; // rbp
  __int64 v6; // rax
  size_t v8; // rax
  __int64 v9; // r14
  size_t v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  void *v15; // rbp
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // rax
  void *v19; // rdi
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // [rsp+0h] [rbp-1088h] BYREF
  void *v25; // [rsp+10h] [rbp-1078h] BYREF
  __int128 v26; // [rsp+18h] [rbp-1070h]
  void *ptr; // [rsp+30h] [rbp-1058h] BYREF
  __m128i v28; // [rsp+38h] [rbp-1050h] BYREF
  char v29; // [rsp+50h] [rbp-1038h] BYREF
  unsigned __int64 v30; // [rsp+1058h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v1 = a1;
  sub_195070(a1, "cfg", 6);
  v25 = nullptr;
  v26 = 0;
  if ( !(unsigned __int8)sub_194A40(&v25) )
    goto LABEL_5;
  v4 = s1;
  if ( (_QWORD)v26 )
    LODWORD(v4) = (_DWORD)v25;
  v5 = (const char *)sub_197540((unsigned int)&v29, 4096, (_DWORD)v4, 0, v2, v3);
  if ( !(unsigned __int8)sub_197CF0(v5) )
    goto LABEL_5;
  ptr = nullptr;
  v28 = 0;
  if ( v5 )
  {
    v8 = strlen(v5);
    v9 = v8 + 1;
    v10 = v8;
    ptr = (void *)sub_1987B0(&ptr, 0, v8 + 1, 1);
    v28.m128i_i64[0] = v9;
    memmove(ptr, v5, v10);
    *((_BYTE *)ptr + v10) = 0;
  }
  v11 = a1[1];
  v12 = *a1;
  v13 = a1[2];
  v14 = v11 + 1;
  if ( (unsigned __int64)&ptr < *v1 || (unsigned __int64)&ptr >= v12 + 24 * v13 )
  {
    if ( v13 < v14 )
    {
      v22 = sub_1987B0(v1, v12, v11 + 1, 24);
      *v1 = v22;
      v12 = v22;
      v11 = v1[1];
    }
    v20 = _mm_loadu_si128(&v28);
    v21 = v12 + 24 * v11;
    *(_QWORD *)v21 = ptr;
    *(__m128i *)(v21 + 8) = v20;
    v6 = v1[1] + 1;
    v1[1] = v6;
  }
  else
  {
    v15 = ptr;
    v16 = _mm_loadl_epi64(&v28);
    ptr = nullptr;
    v17 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
    v28 = 0;
    if ( v13 < v14 )
    {
      v24.m128i_i64[1] = v17.m128i_i64[0];
      v24.m128i_i64[0] = v16.m128i_i64[0];
      v23 = sub_1987B0(v1, v12, v11 + 1, 24);
      *v1 = v23;
      v12 = v23;
      v11 = v1[1];
      v17 = _mm_loadl_epi64((const __m128i *)&v24.m128i_u64[1]);
      v16 = _mm_loadl_epi64(&v24);
    }
    v18 = v12 + 24 * v11;
    *(_QWORD *)v18 = v15;
    v19 = ptr;
    *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v16, v17);
    v6 = v1[1] + 1;
    v1[1] = v6;
    if ( v19 )
    {
      v28.m128i_i64[0] = 0;
      j__free(v19);
LABEL_5:
      v6 = v1[1];
    }
  }
  LOBYTE(v1) = v6 != 0;
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    j__free(v25);
  }
  return (unsigned int)v1;
}
