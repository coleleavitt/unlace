__int64 __fastcall sub_3A900(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 i,
        __int64 a9)
{
  int v9; // r12d
  __int64 v10; // r14
  _QWORD *v11; // r11
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // r10
  int v22; // ebp
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  volatile signed __int32 *v30; // r12
  __m128 v31; // xmm0
  __int64 v32; // r10
  __int64 v33; // r9
  __m128 v34; // xmm1
  __int64 v35; // rbx
  __int64 v36; // r9
  __m128i v37; // xmm0
  __int64 v38; // rbp
  __m128 v39; // xmm0
  volatile signed __int32 *v40; // xmm3_8
  volatile signed __int32 *v41; // rdi
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // [rsp+8h] [rbp-120h]
  __int64 v47; // [rsp+8h] [rbp-120h]
  __int64 v48; // [rsp+8h] [rbp-120h]
  volatile signed __int32 *v49; // [rsp+8h] [rbp-120h]
  __int64 v50; // [rsp+10h] [rbp-118h]
  volatile signed __int32 *v51; // [rsp+10h] [rbp-118h]
  __int64 v52; // [rsp+18h] [rbp-110h]
  volatile signed __int32 *v53; // [rsp+18h] [rbp-110h]
  __m128i v54; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v55; // [rsp+40h] [rbp-E8h] BYREF
  __m128i v56; // [rsp+50h] [rbp-D8h] BYREF
  __m128i v57; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v58; // [rsp+70h] [rbp-B8h] BYREF
  __m128 v59; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v60; // [rsp+90h] [rbp-98h] BYREF
  __m128i v61; // [rsp+A0h] [rbp-88h] BYREF
  __m128 v62; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v63; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v64; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v65; // [rsp+E8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 104) != 4 )
    return 0;
  v11 = *(_QWORD **)(a1 + 56);
  if ( *v11 )
    return 0;
  v14 = *(_QWORD **)(a1 + 96);
  v15 = v14[6];
  v16 = v14[7];
  v17 = v14[3];
  v18 = v14[2];
  v19 = v14[4];
  v20 = v14[5];
  v21 = v15;
  v22 = v16;
  v23 = (unsigned int)v17;
  if ( (_DWORD)v17 != (_DWORD)v16 )
    goto LABEL_10;
  v10 = v18 + v15;
  if ( (unsigned int)(v17 - 1) <= 1 || (_DWORD)v17 == 4 )
    goto LABEL_11;
  if ( (_DWORD)v17 != 8 )
  {
LABEL_28:
    v24 = sub_31CC0();
    goto LABEL_29;
  }
  for ( i = -1; ; v10 &= i )
  {
    v9 = v20;
    if ( (_DWORD)v20 == (_DWORD)v23 )
    {
      if ( v10 == v19 )
      {
        v15 = v19;
        v9 = v17;
        v19 = v18;
      }
      else
      {
        v10 = v19 + v18;
        i &= v19 + v18;
        if ( v15 != i )
        {
          v24 = v19 + v15;
          if ( (unsigned int)(v23 - 1) <= 1 || (_DWORD)v23 == 4 )
            goto LABEL_21;
          if ( v18 == v24 )
          {
            v9 = 8;
            v22 = 8;
            goto LABEL_18;
          }
          return 0;
        }
        v20 = v16;
        v21 = v18;
        v22 = v17;
      }
      v18 = v15;
      v17 = v20;
      if ( v9 == v22 )
        break;
    }
LABEL_10:
    v15 = sub_31CA0(v20, v17, v23, i, a9, v19);
LABEL_11:
    i = (1LL << (8 * (unsigned __int8)v23)) - 1;
  }
  v24 = v19 + v21;
  if ( (unsigned int)(v9 - 1) <= 1 || v9 == 4 )
    goto LABEL_22;
  if ( v9 != 8 )
    goto LABEL_28;
LABEL_18:
  while ( 2 )
  {
    if ( v9 != (_DWORD)v17 )
    {
LABEL_19:
      if ( under_debugger )
        BUG();
      LOBYTE(v20) = -15;
      v24 = interr(30705);
LABEL_21:
      if ( v18 != (v24 & ~(-1LL << (8 * (unsigned __int8)v20))) )
        return 0;
LABEL_22:
      v24 &= ~(-1LL << (8 * (unsigned __int8)v9));
      continue;
    }
    break;
  }
LABEL_29:
  if ( v18 != v24 )
    goto LABEL_19;
  v52 = v21;
  v46 = v19;
  v25 = sub_31D00((__int64)v11, *(_QWORD *)(a1 + 64), v18, v9);
  v26 = sub_31D00(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), v46, v9);
  v27 = sub_31D00(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), v52, v22);
  v28 = v25 | v26;
  v29 = v27 | v25;
  sub_35840(&v54, byte_4E9E0, *(_DWORD *)(a1 + 16), v28);
  v30 = (volatile signed __int32 *)v54.m128i_i64[1];
  sub_35840(&v55, byte_4E9E0, *(_DWORD *)(a1 + 16), v29);
  v31 = (__m128)_mm_load_si128(&v55);
  v32 = v52;
  v33 = v46;
  v34 = _mm_movehl_ps(a3, v31);
  v62 = v31;
  if ( v34.m128_u64[0] )
  {
    sub_3A8E0(v34.m128_i64[0]);
    v32 = v52;
    v33 = v46;
  }
  v50 = v32;
  v47 = v33;
  v35 = operator new(0x20u);
  *(_QWORD *)v35 = off_4DA48;
  *(_QWORD *)(v35 + 8) = 0x100000001LL;
  *(_QWORD *)(v35 + 16) = off_4D960;
  *(_QWORD *)(v35 + 24) = v50;
  v61.m128i_i64[0] = v35 + 16;
  v61.m128i_i64[1] = v35;
  sub_38200(&v63, &v61, (const __m128i *)&v62, *(double *)v31.m128_u64, v34, a4);
  v36 = v47;
  v37 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v54), (__m128i)(unsigned __int64)v30);
  v53 = (volatile signed __int32 *)v63.m128i_i64[1];
  v57 = v37;
  if ( v30 )
  {
    sub_3A8E0((__int64)v30);
    v36 = v47;
  }
  v48 = v36;
  v38 = operator new(0x20u);
  *(_QWORD *)v38 = off_4DA48;
  *(_QWORD *)(v38 + 8) = 0x100000001LL;
  *(_QWORD *)(v38 + 16) = off_4D960;
  *(_QWORD *)(v38 + 24) = v48;
  v56.m128i_i64[0] = v38 + 16;
  v56.m128i_i64[1] = v38;
  sub_38200(&v58, &v56, &v57, *(double *)v37.m128i_i64, v34, (__m128)(unsigned __int64)v30);
  v39 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 80));
  v40 = (volatile signed __int32 *)_mm_movehl_ps(a5, v39).m128_u64[0];
  v51 = (volatile signed __int32 *)v58.m128i_i64[1];
  v59 = v39;
  if ( v40 )
    sub_3A8E0((__int64)v40);
  sub_38330(&v60, (const __m128i *)&v59, &v58, *(double *)v39.m128_u64, v34, (__m128)(unsigned __int64)v30);
  v49 = (volatile signed __int32 *)v60.m128i_i64[1];
  sub_38330(&v64, &v60, &v63, *(double *)v39.m128_u64, v34, (__m128)(unsigned __int64)v30);
  v41 = *(volatile signed __int32 **)(a1 + 88);
  *(__m128i *)(a1 + 80) = _mm_load_si128(&v64);
  if ( v41 )
    sub_1C430(v41);
  if ( v49 )
    sub_1C430(v49);
  if ( v40 )
    sub_1C430(v40);
  if ( v51 )
    sub_1C430(v51);
  if ( v38 )
    sub_1C430((volatile signed __int32 *)v38);
  if ( v30 )
    sub_1C430(v30);
  if ( v53 )
    sub_1C430(v53);
  if ( v35 )
    sub_1C430((volatile signed __int32 *)v35);
  if ( v34.m128_u64[0] )
    sub_1C430((volatile signed __int32 *)v34.m128_u64[0]);
  v42 = *(_QWORD **)(a1 + 56);
  v43 = &v42[2 * *(_QWORD *)(a1 + 64)];
  if ( v42 != v43 )
  {
    if ( ((16 * *(_BYTE *)(a1 + 64)) & 0x10) == 0 || (*v42 = 0, v42 += 2, v43 != v42) )
    {
      do
      {
        *v42 = 0;
        v42 += 4;
        *(v42 - 2) = 0;
      }
      while ( v43 != v42 );
    }
  }
  sub_32600((__int64 *)(a1 + 32), (unsigned __int64 *)(a1 + 56));
  sub_35940((_QWORD *)a1, (__m128i *)(a1 + 56), v44, v45);
  if ( v34.m128_u64[0] )
    sub_1C430((volatile signed __int32 *)v34.m128_u64[0]);
  if ( v30 )
    sub_1C430(v30);
  return 1;
}
