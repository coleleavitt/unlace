__int64 __fastcall sub_AF40(__m128i *a1, const void *a2, __int64 a3)
{
  __m128i *v3; // rbx
  _QWORD *v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i si128; // xmm1
  __int64 v10; // rdi
  bool v11; // zf
  bool v12; // cc
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // ebp
  unsigned int v16; // r14d
  int v17; // ebp
  __int64 flags; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  const __m128i *v25; // rdi
  __int64 v26; // rdx
  __m128i v27; // xmm0
  bool v28; // cf
  __int64 v29; // rax
  __int64 v30; // r14
  const __m128i *v31; // rdi
  __int64 v32; // rdx
  __m128i v33; // xmm0
  _BYTE v34[24]; // [rsp+0h] [rbp-428h] BYREF
  __int64 v35; // [rsp+18h] [rbp-410h]
  __int64 v36; // [rsp+20h] [rbp-408h]
  __m128i v37; // [rsp+30h] [rbp-3F8h] BYREF
  __m128i v38; // [rsp+40h] [rbp-3E8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-3D8h]
  __int64 (__fastcall **v40)(); // [rsp+60h] [rbp-3C8h] BYREF
  char v41; // [rsp+68h] [rbp-3C0h]
  _BYTE v42[360]; // [rsp+70h] [rbp-3B8h] BYREF
  _QWORD v43[2]; // [rsp+1D8h] [rbp-250h] BYREF
  __int64 v44; // [rsp+1E8h] [rbp-240h]
  int v45; // [rsp+270h] [rbp-1B8h]
  char v46; // [rsp+379h] [rbp-AFh]
  void *v47; // [rsp+388h] [rbp-A0h]
  __int64 v48; // [rsp+390h] [rbp-98h]
  __int128 v49; // [rsp+398h] [rbp-90h]
  __int64 v50; // [rsp+3A8h] [rbp-80h]
  __int128 v51; // [rsp+3B0h] [rbp-78h]
  const __m128i *v52; // [rsp+3C0h] [rbp-68h] BYREF
  __int128 v53; // [rsp+3C8h] [rbp-60h]
  __int64 v54; // [rsp+3D8h] [rbp-50h]
  __int64 v55; // [rsp+3E0h] [rbp-48h]
  __int64 v56; // [rsp+3E8h] [rbp-40h]
  unsigned int v57; // [rsp+3F0h] [rbp-38h]
  unsigned __int64 v58; // [rsp+3F8h] [rbp-30h]

  v3 = a1;
  v58 = __readfsqword(0x28u);
  v40 = off_23B50;
  v5 = &v42[40];
  v41 = 1;
  *(_QWORD *)&v42[24] = 0;
  *(_QWORD *)&v42[32] = 0;
  memset(v42, 255, 24);
  v6.m128i_i64[0] = 0;
  do
  {
    v7 = 0;
    v8 = 0;
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( v43 != v5 );
  v43[0] = a1;
  v45 = -1;
  v46 = 0;
  v47 = &unk_15FA0;
  v48 = 0;
  v50 = 0;
  v52 = nullptr;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  if ( !a1 )
  {
    v20 = *((_QWORD *)&v53 + 1);
    memset(v34, 0, sizeof(v34));
    v35 = 0;
    LODWORD(v36) = 0;
    goto LABEL_25;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_15FE0);
  v10 = a1[6].m128i_i64[0];
  v3[4].m128i_i8[4] = 0;
  v3->m128i_i32[0] = 0x800000;
  *(__m128i *)((char *)v3 + 8) = si128;
  v3->m128i_i16[2] = 0;
  v3[2].m128i_i32[2] = 0;
  v3[3].m128i_i64[0] = 0;
  v3[3].m128i_i64[1] = 0;
  v3[4].m128i_i32[0] = -1;
  v3[4].m128i_i64[1] = 0;
  v3[5].m128i_i32[0] = 2;
  v3[5].m128i_i64[1] = -1;
  *(__m128i *)((char *)&v3[1] + 8) = (__m128i)-1LL;
  if ( !v10 )
  {
    *(_QWORD *)v34 = 0;
    v35 = 0;
    LODWORD(v36) = 0;
    *(__m128i *)((char *)&v3[6] + 8) = 0;
    *(_OWORD *)&v34[8] = 0;
    goto LABEL_20;
  }
  v3[6].m128i_i64[1] = 0;
  qfree(v10, 0, v43, 0.0);
  v6.m128i_i64[0] = 0;
  v11 = (_QWORD)v53 == 1;
  v12 = (unsigned __int64)v53 <= 1;
  v3[6].m128i_i64[0] = 0;
  *(__m128i *)((char *)&v3[6] + 8) = 0;
  if ( v11 )
    goto LABEL_6;
  memset(v34, 0, sizeof(v34));
  v35 = 0;
  LODWORD(v36) = 0;
  if ( v12 )
  {
LABEL_20:
    v3 = (__m128i *)v52;
    v20 = *((_QWORD *)&v53 + 1);
    if ( v34 < (_BYTE *)v52 )
    {
LABEL_21:
      if ( v20 )
        goto LABEL_22;
      v23 = qvector_reserve(&v52, 0, 1, 40, v7, v8, *(_QWORD *)v34, *(_QWORD *)&v34[8], *(_QWORD *)&v34[16], v35);
      v24 = *((_QWORD *)&v53 + 1);
      v3 = (__m128i *)v23;
      *((_QWORD *)&v53 + 1) = 0;
      v25 = v52;
      v26 = v53 - 1;
      if ( (__int64)v53 - 1 >= 0 )
      {
        do
        {
          v27 = _mm_loadu_si128(v25);
          v23 += 40;
          v25 = (const __m128i *)((char *)v25 + 40);
          *(__m128i *)(v23 - 40) = v27;
          v6 = _mm_loadu_si128((const __m128i *)((char *)v25 - 24));
          *(__m128i *)(v23 - 24) = v6;
          *(_QWORD *)(v23 - 8) = v25[-1].m128i_i64[1];
          v28 = v26-- == 0;
        }
        while ( !v28 );
        v25 = v52;
      }
      qfree(v25, 0, v26, *(double *)v6.m128i_i64);
      v52 = v3;
      *((_QWORD *)&v53 + 1) = v24;
      if ( !(_QWORD)v53 )
      {
LABEL_22:
        v21 = v36;
        *v3 = _mm_load_si128((const __m128i *)v34);
        v6 = _mm_load_si128((const __m128i *)&v34[16]);
        v3[2].m128i_i64[0] = v21;
        v3[1] = v6;
      }
      goto LABEL_23;
    }
LABEL_25:
    if ( v34 < &v3->m128i_i8[40 * v20] )
    {
      v37 = _mm_load_si128((const __m128i *)v34);
      v6 = _mm_load_si128((const __m128i *)&v34[16]);
      v39 = v36;
      v38 = v6;
      if ( v20 )
        goto LABEL_27;
      v29 = qvector_reserve(&v52, 0, 1, 40, v7, v8, *(_QWORD *)v34, *(_QWORD *)&v34[8], *(_QWORD *)&v34[16], v35);
      v30 = *((_QWORD *)&v53 + 1);
      v3 = (__m128i *)v29;
      *((_QWORD *)&v53 + 1) = 0;
      v31 = v52;
      v32 = v53 - 1;
      if ( (__int64)v53 - 1 >= 0 )
      {
        do
        {
          v33 = _mm_loadu_si128(v31);
          v29 += 40;
          v31 = (const __m128i *)((char *)v31 + 40);
          *(__m128i *)(v29 - 40) = v33;
          v6 = _mm_loadu_si128((const __m128i *)((char *)v31 - 24));
          *(__m128i *)(v29 - 24) = v6;
          *(_QWORD *)(v29 - 8) = v31[-1].m128i_i64[1];
          v28 = v32-- == 0;
        }
        while ( !v28 );
        v31 = v52;
      }
      qfree(v31, 0, v32, *(double *)v6.m128i_i64);
      v52 = v3;
      *((_QWORD *)&v53 + 1) = v30;
      if ( !(_QWORD)v53 )
      {
LABEL_27:
        v22 = v39;
        *v3 = _mm_load_si128(&v37);
        v6 = _mm_load_si128(&v38);
        v3[2].m128i_i64[0] = v22;
        v3[1] = v6;
      }
      goto LABEL_23;
    }
    goto LABEL_21;
  }
LABEL_23:
  *(_QWORD *)&v53 = 1;
LABEL_6:
  v40 = off_23C20;
  v54 = a3;
  *(_DWORD *)v43[0] |= 0x40000u;
  qmemcpy(v42, a2, sizeof(v42));
  v13 = (__int64)a2 + 360;
  v40 = off_21D78;
  v55 = 0;
  v56 = -1;
  v57 = -1;
  v15 = 0;
  if ( (unsigned __int8)match_jpt(&v40) )
  {
    v16 = v57;
    v17 = *(_DWORD *)(v54 + 340);
    flags = get_flags_ex(v56, 0);
    if ( !(unsigned __int8)is_defarg(flags, v16) )
      op_offset(v56, v57, (unsigned __int8)v17 | 0x40u, *(_QWORD *)(v43[0] + 8LL), 0, 0);
    if ( (get_flags_ex(v44, 4) & 0xF000000) == 0 )
      op_offset(v44, 1, 4, *(_QWORD *)(v43[0] + 8LL), 0, 0);
    v13 = 3;
    mark_switch_insns_jpt(&v40, 3, 0);
    v15 = 1;
  }
  v40 = off_23B50;
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52, v13, v14, *(double *)v6.m128i_i64);
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50, v13, v14, *(double *)v6.m128i_i64);
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48, v13, v14, *(double *)v6.m128i_i64);
  }
  return v15;
}

