__int64 __fastcall sub_2E51D0(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm0
  __int64 v4; // r15
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  int v10; // r13d
  __int64 v11; // r12
  __int64 v12; // rdx
  __m128i v13; // xmm1
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm3
  __int64 result; // rax
  __m128i v20; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v21; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-A8h]
  __int64 v23; // [rsp+28h] [rbp-A0h]
  __m128i v24; // [rsp+38h] [rbp-90h]
  __m128i v25; // [rsp+70h] [rbp-58h]

  v3 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v4 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v24 = v3;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 56);
  *(_OWORD *)(a1 + 40) = 0;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_DWORD *)(a1 + 80);
  v11 = *(_QWORD *)(a1 + 88);
  v25 = v6;
  *(_QWORD *)(a1 + 8) = v9;
  LODWORD(v9) = *(_DWORD *)(a2 + 16);
  v20 = v5;
  *(_DWORD *)(a1 + 16) = v9;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 28) = *(_BYTE *)(a2 + 28);
  *(_BYTE *)(a1 + 29) = *(_BYTE *)(a2 + 29);
  *(_BYTE *)(a1 + 30) = *(_BYTE *)(a2 + 30);
  *(_BYTE *)(a1 + 31) = *(_BYTE *)(a2 + 31);
  v12 = *(_QWORD *)(a2 + 32);
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_QWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 40) = 0;
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    v23 = v7;
    v22 = v12;
    v21 = v13;
    qfree(v14);
    v7 = v23;
    v13 = _mm_load_si128(&v21);
    v12 = v22;
  }
  *(_QWORD *)(a1 + 32) = v12;
  *(__m128i *)(a1 + 40) = v13;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
  v15 = v24.m128i_i64[0];
  v16 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v7;
  *(_QWORD *)(a2 + 8) = v15;
  *(_DWORD *)(a2 + 16) = v24.m128i_i32[2];
  if ( v16 )
  {
    *(_QWORD *)(a2 + 40) = 0;
    qfree(v16);
  }
  v17 = v25.m128i_i64[0];
  v18 = _mm_load_si128(&v20);
  *(_QWORD *)(a2 + 32) = v4;
  *(_QWORD *)(a2 + 56) = v8;
  *(_QWORD *)(a2 + 64) = v17;
  result = v25.m128i_u32[2];
  *(_DWORD *)(a2 + 80) = v10;
  *(_DWORD *)(a2 + 72) = result;
  *(_QWORD *)(a2 + 88) = v11;
  *(__m128i *)(a2 + 40) = v18;
  return result;
}

