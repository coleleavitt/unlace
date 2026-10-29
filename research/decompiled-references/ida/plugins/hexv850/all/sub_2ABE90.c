__int64 __fastcall sub_2ABE90(const __m128i *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int32 v4; // eax
  __m128i v5; // xmm2
  __int64 v6; // r13
  __int8 v7; // r12
  __int64 v8; // r14
  __m128i si128; // xmm1
  __int64 v10; // rdi
  __m128i v11; // xmm3
  __int32 v12; // edx
  __int64 result; // rax
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15[3]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a1->m128i_i64[1];
  v4 = a1[1].m128i_i32[0];
  *(const __m128i *)((char *)a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)(a2 + 8) = v3;
  *(_DWORD *)(a2 + 16) = v4;
  v5 = _mm_loadu_si128(a1 + 2);
  v6 = a1[1].m128i_i64[1];
  a1[2] = 0;
  v7 = a1[3].m128i_i8[0];
  a1[1].m128i_i64[1] = 0;
  v8 = *(_QWORD *)(a2 + 24);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  *(_QWORD *)(a2 + 24) = 0;
  *(_OWORD *)(a2 + 32) = 0;
  v10 = a1[1].m128i_i64[1];
  v14 = v5;
  if ( v10 )
  {
    a1[2].m128i_i64[0] = 0;
    v15[0] = si128;
    qfree();
    si128 = _mm_load_si128(v15);
  }
  a1[1].m128i_i64[1] = v8;
  a1[2] = si128;
  a1[3].m128i_i8[0] = *(_BYTE *)(a2 + 48);
  if ( *(_QWORD *)(a2 + 24) )
  {
    *(_QWORD *)(a2 + 32) = 0;
    qfree();
  }
  v11 = _mm_load_si128(&v14);
  v12 = *(_DWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 24) = v6;
  *(_BYTE *)(a2 + 48) = v7;
  *(__m128i *)(a2 + 32) = v11;
  result = a1[4].m128i_u32[2];
  a1[4].m128i_i32[2] = v12;
  *(_DWORD *)(a2 + 72) = result;
  return result;
}

