__int64 __fastcall sub_A9C0(__m128i *a1, const void *a2, __int64 a3)
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
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  const __m128i *v22; // rdi
  __int64 v23; // rdx
  __m128i v24; // xmm0
  bool v25; // cf
  __int64 v26; // rax
  __int64 v27; // r14
  const __m128i *v28; // rdi
  __int64 v29; // rdx
  __m128i v30; // xmm0
  _BYTE v31[24]; // [rsp+0h] [rbp-418h] BYREF
  __int64 v32; // [rsp+18h] [rbp-400h]
  __int64 v33; // [rsp+20h] [rbp-3F8h]
  __m128i v34; // [rsp+30h] [rbp-3E8h] BYREF
  __m128i v35; // [rsp+40h] [rbp-3D8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-3C8h]
  __int64 (__fastcall **v37)(); // [rsp+60h] [rbp-3B8h] BYREF
  char v38; // [rsp+68h] [rbp-3B0h]
  _BYTE v39[360]; // [rsp+70h] [rbp-3A8h] BYREF
  _QWORD v40[19]; // [rsp+1D8h] [rbp-240h] BYREF
  int v41; // [rsp+270h] [rbp-1A8h]
  char v42; // [rsp+379h] [rbp-9Fh]
  void *v43; // [rsp+388h] [rbp-90h]
  __int64 v44; // [rsp+390h] [rbp-88h]
  __int128 v45; // [rsp+398h] [rbp-80h]
  __int64 v46; // [rsp+3A8h] [rbp-70h]
  __int128 v47; // [rsp+3B0h] [rbp-68h]
  const __m128i *v48; // [rsp+3C0h] [rbp-58h] BYREF
  __int128 v49; // [rsp+3C8h] [rbp-50h]
  __int64 v50; // [rsp+3D8h] [rbp-40h]
  unsigned __int64 v51; // [rsp+3E8h] [rbp-30h]

  v3 = a1;
  v51 = __readfsqword(0x28u);
  v37 = off_23B50;
  v5 = &v39[40];
  v38 = 1;
  *(_QWORD *)&v39[24] = 0;
  *(_QWORD *)&v39[32] = 0;
  memset(v39, 255, 24);
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
  while ( v40 != v5 );
  v40[0] = a1;
  v41 = -1;
  v42 = 0;
  v43 = &unk_15F90;
  v44 = 0;
  v46 = 0;
  v48 = nullptr;
  v45 = 0;
  v47 = 0;
  v49 = 0;
  if ( !a1 )
  {
    v17 = *((_QWORD *)&v49 + 1);
    memset(v31, 0, sizeof(v31));
    v32 = 0;
    LODWORD(v33) = 0;
    goto LABEL_21;
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
    *(_QWORD *)v31 = 0;
    v32 = 0;
    LODWORD(v33) = 0;
    *(__m128i *)((char *)&v3[6] + 8) = 0;
    *(_OWORD *)&v31[8] = 0;
    goto LABEL_16;
  }
  v3[6].m128i_i64[1] = 0;
  qfree(v10, 0, v40, 0.0);
  v6.m128i_i64[0] = 0;
  v11 = (_QWORD)v49 == 1;
  v12 = (unsigned __int64)v49 <= 1;
  v3[6].m128i_i64[0] = 0;
  *(__m128i *)((char *)&v3[6] + 8) = 0;
  if ( v11 )
    goto LABEL_6;
  memset(v31, 0, sizeof(v31));
  v32 = 0;
  LODWORD(v33) = 0;
  if ( v12 )
  {
LABEL_16:
    v3 = (__m128i *)v48;
    v17 = *((_QWORD *)&v49 + 1);
    if ( v31 < (_BYTE *)v48 )
    {
LABEL_17:
      if ( v17 )
        goto LABEL_18;
      v20 = qvector_reserve(&v48, 0, 1, 40, v7, v8, *(_QWORD *)v31, *(_QWORD *)&v31[8], *(_QWORD *)&v31[16], v32);
      v21 = *((_QWORD *)&v49 + 1);
      v3 = (__m128i *)v20;
      *((_QWORD *)&v49 + 1) = 0;
      v22 = v48;
      v23 = v49 - 1;
      if ( (__int64)v49 - 1 >= 0 )
      {
        do
        {
          v24 = _mm_loadu_si128(v22);
          v20 += 40;
          v22 = (const __m128i *)((char *)v22 + 40);
          *(__m128i *)(v20 - 40) = v24;
          v6 = _mm_loadu_si128((const __m128i *)((char *)v22 - 24));
          *(__m128i *)(v20 - 24) = v6;
          *(_QWORD *)(v20 - 8) = v22[-1].m128i_i64[1];
          v25 = v23-- == 0;
        }
        while ( !v25 );
        v22 = v48;
      }
      qfree(v22, 0, v23, *(double *)v6.m128i_i64);
      v48 = v3;
      *((_QWORD *)&v49 + 1) = v21;
      if ( !(_QWORD)v49 )
      {
LABEL_18:
        v18 = v33;
        *v3 = _mm_load_si128((const __m128i *)v31);
        v6 = _mm_load_si128((const __m128i *)&v31[16]);
        v3[2].m128i_i64[0] = v18;
        v3[1] = v6;
      }
      goto LABEL_19;
    }
LABEL_21:
    if ( v31 < &v3->m128i_i8[40 * v17] )
    {
      v34 = _mm_load_si128((const __m128i *)v31);
      v6 = _mm_load_si128((const __m128i *)&v31[16]);
      v36 = v33;
      v35 = v6;
      if ( v17 )
        goto LABEL_23;
      v26 = qvector_reserve(&v48, 0, 1, 40, v7, v8, *(_QWORD *)v31, *(_QWORD *)&v31[8], *(_QWORD *)&v31[16], v32);
      v27 = *((_QWORD *)&v49 + 1);
      v3 = (__m128i *)v26;
      *((_QWORD *)&v49 + 1) = 0;
      v28 = v48;
      v29 = v49 - 1;
      if ( (__int64)v49 - 1 >= 0 )
      {
        do
        {
          v30 = _mm_loadu_si128(v28);
          v26 += 40;
          v28 = (const __m128i *)((char *)v28 + 40);
          *(__m128i *)(v26 - 40) = v30;
          v6 = _mm_loadu_si128((const __m128i *)((char *)v28 - 24));
          *(__m128i *)(v26 - 24) = v6;
          *(_QWORD *)(v26 - 8) = v28[-1].m128i_i64[1];
          v25 = v29-- == 0;
        }
        while ( !v25 );
        v28 = v48;
      }
      qfree(v28, 0, v29, *(double *)v6.m128i_i64);
      v48 = v3;
      *((_QWORD *)&v49 + 1) = v27;
      if ( !(_QWORD)v49 )
      {
LABEL_23:
        v19 = v36;
        *v3 = _mm_load_si128(&v34);
        v6 = _mm_load_si128(&v35);
        v3[2].m128i_i64[0] = v19;
        v3[1] = v6;
      }
      goto LABEL_19;
    }
    goto LABEL_17;
  }
LABEL_19:
  *(_QWORD *)&v49 = 1;
LABEL_6:
  v37 = off_23C20;
  v50 = a3;
  *(_DWORD *)v40[0] |= 0x40000u;
  v37 = off_21E48;
  *(_DWORD *)v40[0] |= 0x400000u;
  qmemcpy(v39, a2, sizeof(v39));
  v13 = (__int64)a2 + 360;
  v15 = 0;
  if ( (unsigned __int8)match_jpt(&v37) )
  {
    v13 = 2;
    mark_switch_insns_jpt(&v37, 2, 0);
    v15 = 1;
  }
  v37 = off_23B50;
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48, v13, v14, *(double *)v6.m128i_i64);
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46, v13, v14, *(double *)v6.m128i_i64);
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44, v13, v14, *(double *)v6.m128i_i64);
  }
  return v15;
}
