__int64 __fastcall sub_2E05D0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // r15
  __m128i v4; // xmm2
  __m128i v5; // xmm1
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  int v9; // r13d
  __int64 v10; // r12
  __int64 v11; // rdx
  __m128i v12; // xmm1
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  __m128i v16; // xmm3
  __int64 result; // rax
  __m128i v18; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v19; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-A8h]
  __int64 v21; // [rsp+28h] [rbp-A0h]
  __m128i v22; // [rsp+38h] [rbp-90h]
  __m128i v23; // [rsp+70h] [rbp-58h]

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v22 = v2;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 56);
  *(_OWORD *)(a1 + 40) = 0;
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_DWORD *)(a1 + 80);
  v10 = *(_QWORD *)(a1 + 88);
  v23 = v5;
  *(_QWORD *)(a1 + 8) = v8;
  LODWORD(v8) = *(_DWORD *)(a2 + 16);
  v18 = v4;
  *(_DWORD *)(a1 + 16) = v8;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 28) = *(_BYTE *)(a2 + 28);
  *(_BYTE *)(a1 + 29) = *(_BYTE *)(a2 + 29);
  *(_BYTE *)(a1 + 30) = *(_BYTE *)(a2 + 30);
  *(_BYTE *)(a1 + 31) = *(_BYTE *)(a2 + 31);
  v11 = *(_QWORD *)(a2 + 32);
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_QWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 40) = 0;
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_QWORD *)(a1 + 40) = 0;
    v21 = v6;
    v20 = v11;
    v19 = v12;
    qfree();
    v6 = v21;
    v12 = _mm_load_si128(&v19);
    v11 = v20;
  }
  *(_QWORD *)(a1 + 32) = v11;
  *(__m128i *)(a1 + 40) = v12;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
  v13 = v22.m128i_i64[0];
  v14 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v6;
  *(_QWORD *)(a2 + 8) = v13;
  *(_DWORD *)(a2 + 16) = v22.m128i_i32[2];
  if ( v14 )
  {
    *(_QWORD *)(a2 + 40) = 0;
    qfree();
  }
  v15 = v23.m128i_i64[0];
  v16 = _mm_load_si128(&v18);
  *(_QWORD *)(a2 + 32) = v3;
  *(_QWORD *)(a2 + 56) = v7;
  *(_QWORD *)(a2 + 64) = v15;
  result = v23.m128i_u32[2];
  *(_DWORD *)(a2 + 80) = v9;
  *(_DWORD *)(a2 + 72) = result;
  *(_QWORD *)(a2 + 88) = v10;
  *(__m128i *)(a2 + 40) = v16;
  return result;
}

