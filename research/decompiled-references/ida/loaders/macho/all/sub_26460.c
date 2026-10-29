__int64 __fastcall sub_26460(const __m128i *a1)
{
  unsigned int v2; // ebx
  int v4; // ebp
  int v5; // r14d
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  __int64 v9; // rdx
  unsigned __int8 *v10; // rsi
  __int64 v11; // rsi
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm1
  __int64 bytearray_linput; // rax
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdi
  unsigned __int8 *v22; // rsi
  __int64 v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  int v28; // esi
  __int64 v29; // rcx
  unsigned __int32 v30; // [rsp+0h] [rbp-274h] BYREF
  unsigned int v31; // [rsp+4h] [rbp-270h] BYREF
  int v32; // [rsp+8h] [rbp-26Ch] BYREF
  _BYTE v33[4]; // [rsp+Ch] [rbp-268h] BYREF
  unsigned __int32 v34; // [rsp+10h] [rbp-264h]
  unsigned __int8 *v35; // [rsp+1Ch] [rbp-258h] BYREF
  __int128 v36; // [rsp+24h] [rbp-250h]
  __int64 v37; // [rsp+3Ch] [rbp-238h] BYREF
  __m128i v38; // [rsp+44h] [rbp-230h] BYREF
  __m128i v39; // [rsp+5Ch] [rbp-218h] BYREF
  __m128i v40; // [rsp+6Ch] [rbp-208h]
  __int64 v41; // [rsp+7Ch] [rbp-1F8h]
  __int128 v42; // [rsp+84h] [rbp-1F0h]
  __int128 v43; // [rsp+94h] [rbp-1E0h]
  __int128 v44; // [rsp+A4h] [rbp-1D0h]
  int v45; // [rsp+C0h] [rbp-1B4h]
  int v46; // [rsp+C4h] [rbp-1B0h]
  unsigned int v47; // [rsp+C8h] [rbp-1ACh]
  unsigned int v48; // [rsp+CCh] [rbp-1A8h]
  unsigned __int64 v49; // [rsp+244h] [rbp-30h]

  v49 = __readfsqword(0x28u);
  v36 = 0;
  v35 = nullptr;
  v37 = 0;
  v38 = 0;
  if ( a1[7].m128i_i8[0] )
  {
    if ( qlread() != 384 )
    {
LABEL_3:
      v2 = 0;
      goto LABEL_4;
    }
    v5 = v45;
    if ( v45 != 1936947820 && v45 != 1853258348 )
    {
      sub_112F0((__int64)"Compressed prelinked kernel has invalid compressType: 0x%x\n", v45);
      goto LABEL_3;
    }
    v4 = v46;
    v30 = _byteswap_ulong(v48);
    v31 = _byteswap_ulong(v47);
  }
  else
  {
    qlseek();
    if ( !sub_12920((__int64)v33) )
      goto LABEL_3;
    if ( v33[2] )
      goto LABEL_3;
    if ( v33[1] )
      goto LABEL_3;
    if ( v33[0] != 4 )
      goto LABEL_3;
    v30 = v34;
    qlseek();
    qlseek();
    if ( !sub_12920((__int64)&v39)
      || v39.m128i_i8[2]
      || !v39.m128i_i8[1]
      || v39.m128i_i8[0] != 16
      || sub_12A50(&v32) == -1
      || v32 != 1
      || sub_12A50((int *)&v31) == -1 )
    {
      goto LABEL_3;
    }
    qlseek();
    v4 = 0;
    v5 = 846624866;
  }
  sub_254B0(a1[3].m128i_i64[0], &v30, 1u, (__int64)"Number of compressed bytes", -1, -1);
  v6 = v30;
  v7 = v36;
  if ( (unsigned __int64)v36 < v30 )
  {
    v22 = v35;
    if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)v30 )
    {
      v35 = (unsigned __int8 *)qvector_reserve();
      v7 = v36;
      v22 = v35;
    }
    memset(&v22[v7], 0, v6 - v7);
    v8 = v31;
    v9 = v38.m128i_i64[0];
    *(_QWORD *)&v36 = v6;
    if ( v38.m128i_i64[0] >= (unsigned __int64)v31 )
      goto LABEL_29;
  }
  else
  {
    if ( v30 != (_QWORD)v36 )
      *(_QWORD *)&v36 = v30;
    v8 = v31;
    v9 = v38.m128i_i64[0];
    if ( v38.m128i_i64[0] >= (unsigned __int64)v31 )
    {
LABEL_29:
      if ( v8 != v9 )
        v38.m128i_i64[0] = v8;
      goto LABEL_31;
    }
  }
  v23 = v37;
  if ( v38.m128i_i64[1] < v8 )
  {
    v37 = qvector_reserve();
    v9 = v38.m128i_i64[0];
    v23 = v37;
  }
  memset((void *)(v23 + v9), 0, v8 - v9);
  v38.m128i_i64[0] = v8;
LABEL_31:
  v10 = v35;
  if ( v6 != qlread() )
  {
    sub_112F0((__int64)"Cannot read compressed kernel image\n", v10);
    goto LABEL_3;
  }
  if ( v5 == 1936947820 )
  {
    v24 = sub_1A8C0(&v37, &v35);
    v21 = v38.m128i_i64[0];
    v20 = v37;
    v11 = v24;
    if ( v24 != v38.m128i_i64[0] )
      goto LABEL_43;
  }
  else
  {
    if ( v5 != 1853258348 )
    {
      LODWORD(v11) = sub_4ECA0(v37, v38.m128i_i64[0], v35, v36, 0);
      if ( (unsigned int)v11 == v38.m128i_i64[0] )
        goto LABEL_35;
LABEL_43:
      sub_112F0((__int64)"Compressed prelinked kernel uncompressed to an unexpected size: %u\n", v11);
      goto LABEL_3;
    }
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v39 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v35, (__m128i)(unsigned __int64)&v35[v36]);
    v41 = v38.m128i_i64[0] + v37;
    v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
    sub_4FF40(&v39);
    v20 = v37;
    v21 = v38.m128i_i64[0];
    v11 = v40.m128i_i64[0] - v37;
    if ( v40.m128i_i32[0] - (_DWORD)v37 != v38.m128i_i64[0] )
      goto LABEL_43;
  }
  if ( (int)v21 <= 0 )
  {
    v29 = 0x1000000;
  }
  else
  {
    v25 = 0;
    v26 = 0;
    v27 = 1;
    v19 = 2147975281LL;
    do
    {
      if ( __ROR4__(989560465 * v25, 3) <= 0xD1B71u )
      {
        v27 %= 0xFFF1u;
        v26 %= 0xFFF1u;
      }
      v28 = *(unsigned __int8 *)(v20 + v25++);
      v27 += v28;
      v26 += v27;
    }
    while ( v25 != v21 );
    v11 = 2147975281LL;
    v18 = v27 % 0xFFF1;
    v29 = _byteswap_ulong(v18 | ((v26 % 0xFFF1) << 16));
  }
  if ( v4 != (_DWORD)v29 )
  {
    sub_112F0((__int64)"Checksum error for compressed prelinked kernel\n", v11, v18, v29, v20, v19);
    goto LABEL_3;
  }
LABEL_35:
  if ( a1[3].m128i_i8[8] )
    close_linput();
  v12 = _mm_loadu_si128(&v38);
  v13 = a1[30].m128i_i64[1];
  v14 = _mm_loadu_si128(a1 + 31);
  a1[30].m128i_i64[1] = v37;
  a1[31] = v12;
  v37 = v13;
  v38 = v14;
  bytearray_linput = create_bytearray_linput();
  v16 = a1[4].m128i_i64[1];
  a1[3].m128i_i64[0] = bytearray_linput;
  a1[3].m128i_i8[8] = 1;
  a1[6].m128i_i64[0] = 0;
  if ( v16 )
  {
    a1[5].m128i_i64[0] = 0;
    qfree();
    a1[4].m128i_i64[1] = 0;
    a1[5].m128i_i64[1] = 0;
  }
  if ( !sub_25BB0((__int64)a1) )
    goto LABEL_3;
  LOBYTE(v17) = sub_25EF0((__int64)a1, 0, 0, 0);
  v2 = v17;
LABEL_4:
  if ( v37 )
  {
    v38.m128i_i64[0] = 0;
    qfree();
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  return v2;
}

