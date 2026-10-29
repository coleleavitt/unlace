_BOOL8 __fastcall sub_1320(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  __m128i *v3; // rax
  __m128i *v4; // rbx
  __m128i *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-E0h] BYREF
  _BYTE v13[32]; // [rsp+10h] [rbp-D8h] BYREF
  _WORD v14[3]; // [rsp+30h] [rbp-B8h] BYREF
  __int32 v15; // [rsp+36h] [rbp-B2h]
  __int16 v16; // [rsp+3Ah] [rbp-AEh]
  __int64 v17; // [rsp+3Ch] [rbp-ACh] BYREF
  __m128i v18; // [rsp+50h] [rbp-98h] BYREF
  __m128i v19; // [rsp+60h] [rbp-88h] BYREF
  __m128i v20; // [rsp+70h] [rbp-78h] BYREF
  __m128i v21; // [rsp+80h] [rbp-68h] BYREF
  __m128i v22; // [rsp+90h] [rbp-58h] BYREF
  __int16 v23; // [rsp+A2h] [rbp-46h]
  int v24; // [rsp+A4h] [rbp-44h]
  int v25; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+B8h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  netnode_check(&v11, "$ EXP header info", 0, 0);
  if ( netnode_supval(v11, 0, v14, 124, 83) <= 0 )
    return 0;
  netnode_check(&v12, "$ EXP RTP info", 0, 0);
  if ( netnode_supval(v12, 0, v13, 22, 83) <= 0 )
    return 0;
  if ( !a1 )
    return 0;
  *(__int32 *)((char *)&v18.m128i_i32[1] + 2) = 512;
  v16 = 0;
  v14[2] = 384;
  v17 = 0x8000000180LL;
  v1 = getinf(20);
  v2 = getinf(19);
  v23 &= 0xFFFCu;
  v25 = 0;
  *(__int32 *)((char *)&v18.m128i_i32[2] + 2) = v1 - v2;
  v24 = v1 - v2;
  v15 = v1 - v2 + *(__int32 *)((char *)&v18.m128i_i32[1] + 2);
  v3 = (__m128i *)qalloc(512);
  v4 = v3;
  if ( !v3 )
    return 0;
  v5 = v3;
  v3->m128i_i64[0] = 0;
  v3[31].m128i_i64[1] = 0;
  memset(
    (void *)((unsigned __int64)&v3->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v3 - (((_DWORD)v3 + 8) & 0xFFFFFFF8) + 512) >> 3));
  *v3 = _mm_load_si128((const __m128i *)v14);
  v3[1] = _mm_load_si128((const __m128i *)((char *)&v17 + 4));
  v3[2] = _mm_load_si128(&v18);
  v6 = *(_QWORD *)&v13[14];
  v4[3] = _mm_load_si128(&v19);
  v4[4] = _mm_load_si128(&v20);
  v4[5] = _mm_load_si128(&v21);
  v4[6] = _mm_load_si128(&v22);
  *(__m128i *)((char *)v4 + 108) = _mm_loadu_si128((const __m128i *)((char *)&v22.m128i_u64[1] + 4));
  v4[24] = _mm_load_si128((const __m128i *)v13);
  *(__int64 *)((char *)&v4[24].m128i_i64[1] + 6) = v6;
  v7 = qfwrite(a1, v5, 512);
  v8 = getinf(20);
  v9 = getinf(19);
  base2file(a1, 512, v9, v8);
  qfree(v4);
  return v7 == 512;
}
