__int64 __fastcall sub_1B300(__int64 a1, const char *a2)
{
  __int64 v4; // r13
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r15
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r14
  _BYTE *v13; // rsi
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  __m128i v16; // xmm0
  _BYTE *v18; // [rsp+8h] [rbp-58h]
  __m128i v19; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+20h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v19 = 0;
  v18 = (_BYTE *)qvector_reserve();
  v19.m128i_i64[0] = 2;
  *v18 = 76;
  v18[1] = 0;
  if ( a2 )
  {
    v4 = v19.m128i_i64[0];
    v5 = strlen(a2);
    v6 = v5;
    v7 = v5;
    if ( v19.m128i_i64[0] )
    {
      v4 = v19.m128i_i64[0] - 1;
      v7 = v5 + v19.m128i_i64[0] - 1;
    }
    v8 = v18;
    v9 = v7 + 1;
    if ( v19.m128i_i64[1] < v7 + 1 )
    {
      v18 = (_BYTE *)qvector_reserve();
      v9 = v7 + 1;
      v8 = v18;
    }
    v19.m128i_i64[0] = v9;
    v8[v7] = 0;
    memmove(&v18[v4], a2, v6);
  }
  v10 = v19.m128i_i64[0];
  if ( v19.m128i_i64[0] )
  {
    v11 = v19.m128i_i64[0] + 1;
    v12 = v19.m128i_i64[0];
    v13 = v18;
    v10 = v19.m128i_i64[0] - 1;
    if ( v19.m128i_i64[1] >= (unsigned __int64)(v19.m128i_i64[0] + 1) )
      goto LABEL_9;
  }
  else
  {
    v13 = v18;
    v11 = 2;
    v12 = 1;
    if ( v19.m128i_i64[1] >= 2uLL )
      goto LABEL_9;
  }
  v18 = (_BYTE *)qvector_reserve();
  v13 = v18;
LABEL_9:
  v19.m128i_i64[0] = v11;
  v13[v12] = 0;
  v18[v10] = 59;
  strrpl();
  v14 = v18;
  if ( a1 )
  {
    v14 = *(_BYTE **)a1;
    v15 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v18;
    v16 = _mm_loadu_si128(&v19);
    v19.m128i_i64[1] = v15;
    *(__m128i *)(a1 + 8) = v16;
  }
  if ( v14 )
  {
    v19.m128i_i64[0] = 0;
    qfree();
  }
  return 1;
}

