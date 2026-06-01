__m128i *__fastcall sub_40B80(__m128i *a1, _QWORD *a2, unsigned int a3, double a4, double a5, double a6, double a7)
{
  __int64 v7; // rax
  __int64 v8; // r12
  bool v10; // cf
  __int64 v11; // rax
  __int64 v12; // rbp
  __m128i v13; // kr00_16
  __int64 v14; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r10
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // xmm0
  __m128i *v26; // rax
  _QWORD **v27; // rdi
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(__int64); // rax
  __int32 v30; // eax
  __int64 v31; // rcx
  _QWORD **v32; // rdi
  __m128i v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rdi
  __int64 (*v36)(void); // rax
  _QWORD *v37; // rdi
  _QWORD *v38; // rdi
  _QWORD **v39; // rdi
  __int32 v40; // eax
  __int64 v41; // rcx
  _QWORD **v42; // rdi
  __m128i v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rdi
  __int64 (*v46)(void); // rax
  _QWORD *v47; // rdi
  _QWORD *v48; // rdi
  _QWORD **v49; // rdi
  __int32 v50; // eax
  const __m128i *v51; // rsi
  __int64 v52; // rax
  __m128i *v53; // rax
  __m128i v54; // xmm0
  __int64 v55; // rax
  const __m128i *v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // r9
  const __m128i *v59; // rax
  __int64 v60; // rcx
  __m128i v61; // xmm0
  __int64 v62; // rax
  const __m128i *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // r9
  const __m128i *v66; // rax
  __int64 v67; // rcx
  __m128i v68; // xmm0
  _BOOL8 v69; // [rsp+0h] [rbp-128h]
  __int64 v70; // [rsp+0h] [rbp-128h]
  __int64 v71; // [rsp+0h] [rbp-128h]
  __int64 v72; // [rsp+8h] [rbp-120h]
  __int64 v73; // [rsp+8h] [rbp-120h]
  const __m128i *v74; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v75; // [rsp+58h] [rbp-D0h]
  __m128i v76[4]; // [rsp+70h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v78; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v79; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v80; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v81; // [rsp+E8h] [rbp-40h]

  v7 = 20LL * a3;
  v8 = a2[1];
  v81 = __readfsqword(0x28u);
  v10 = __CFADD__(v8, v7);
  v11 = v8 + v7;
  v12 = v11;
  if ( v10 )
  {
    sub_19A90((__int64)&si128, (__int64)"[%a,%a): bad range", v8, v11);
LABEL_3:
    v13 = si128;
    v14 = v78.m128i_i64[0];
LABEL_4:
    *a1 = v13;
    a1[1].m128i_i64[0] = v14;
    a1[1].m128i_i8[8] = 1;
    return a1;
  }
  v69 = v10;
  sub_74B30(v76, *a2 + 16LL, v8);
  v19 = v69;
  if ( !v76[1].m128i_i8[0] )
  {
    sub_19A90((__int64)&si128, (__int64)"[%a,%a): no associated segment", v8, v12);
    goto LABEL_3;
  }
  v21 = v76[0].m128i_i64[1];
  v20 = v76[0].m128i_i64[0];
  if ( (unsigned __int64)(v12 - 1) < v76[0].m128i_i64[0] || (unsigned __int64)(v12 - 1) >= v76[0].m128i_i64[1] )
  {
    sub_19A90((__int64)&si128, (__int64)"[%a,%a): does not fit in segment [%a,%a)", a4, a5, a6, a7);
    v14 = v78.m128i_i64[0];
    v13 = si128;
    goto LABEL_4;
  }
  v22 = 0;
  v23 = 0;
  v74 = nullptr;
  v24 = 0;
  v75 = 0;
  if ( a3 )
  {
    do
    {
      while ( 1 )
      {
        v27 = (_QWORD **)*a2;
        v28 = a2[1];
        memset((char *)v76[0].m128i_i64 + 4, 0, 52);
        v29 = (__int64 (__fastcall *)(__int64))(*v27)[2];
        if ( v29 == sub_15A20
          && (v27 = (_QWORD **)v27[1], v29 = (__int64 (__fastcall *)(__int64))(*v27)[2], v29 == sub_15A20)
          && (v27 = (_QWORD **)v27[1], v29 = (__int64 (__fastcall *)(__int64))(*v27)[2], v29 == sub_15A20)
          && (v27 = (_QWORD **)v27[1], v29 = (__int64 (__fastcall *)(__int64))(*v27)[2], v29 == sub_15A20) )
        {
          v30 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(*v27[1] + 16LL))(
                  v27[1],
                  v28,
                  v24,
                  v18,
                  v20,
                  v21);
        }
        else
        {
          v30 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64, __int64, __int64, __int64))v29)(
                  v27,
                  v28,
                  v24,
                  v18,
                  v20,
                  v21);
        }
        v31 = a2[1];
        v32 = (_QWORD **)*a2;
        v76[0].m128i_i32[0] = v30;
        a2[1] = v31 + 4;
        v33.m128i_i64[0] = sub_73650(v32);
        v34 = a2[1];
        v35 = (_QWORD *)*a2;
        si128 = v33;
        a2[1] = v34 + 4;
        *(__m128i *)((char *)v76 + 8) = v33;
        v36 = *(__int64 (**)(void))(*v35 + 16LL);
        if ( (char *)v36 == (char *)sub_15A20
          && (v37 = (_QWORD *)v35[1], v36 = *(__int64 (**)(void))(*v37 + 16LL), (char *)v36 == (char *)sub_15A20)
          && (v38 = (_QWORD *)v37[1], v36 = *(__int64 (**)(void))(*v38 + 16LL), (char *)v36 == (char *)sub_15A20)
          && (v39 = (_QWORD **)v38[1], v36 = (__int64 (*)(void))(*v39)[2], (char *)v36 == (char *)sub_15A20) )
        {
          v40 = (*(__int64 (__fastcall **)(_QWORD *))(*v39[1] + 16LL))(v39[1]);
        }
        else
        {
          v40 = v36();
        }
        v41 = a2[1];
        v42 = (_QWORD **)*a2;
        v76[1].m128i_i32[2] = v40;
        a2[1] = v41 + 4;
        v43.m128i_i64[0] = sub_73650(v42);
        v44 = a2[1];
        v45 = (_QWORD *)*a2;
        si128 = v43;
        a2[1] = v44 + 4;
        v76[2] = v43;
        v46 = *(__int64 (**)(void))(*v45 + 16LL);
        if ( (char *)v46 == (char *)sub_15A20
          && (v47 = (_QWORD *)v45[1], v46 = *(__int64 (**)(void))(*v47 + 16LL), (char *)v46 == (char *)sub_15A20)
          && (v48 = (_QWORD *)v47[1], v46 = *(__int64 (**)(void))(*v48 + 16LL), (char *)v46 == (char *)sub_15A20)
          && (v49 = (_QWORD **)v48[1], v46 = (__int64 (*)(void))(*v49)[2], (char *)v46 == (char *)sub_15A20) )
        {
          v50 = (*(__int64 (__fastcall **)(_QWORD *))(*v49[1] + 16LL))(v49[1]);
        }
        else
        {
          v50 = v46();
        }
        v76[3].m128i_i32[0] = v50;
        v51 = v74;
        v52 = v75;
        a2[1] += 4LL;
        v20 = *((_QWORD *)&v75 + 1);
        v19 = v52 + 1;
        if ( v76 < v51 || v76 >= (const __m128i *)((char *)v51 + 56 * *((_QWORD *)&v75 + 1)) )
          break;
        si128 = _mm_load_si128(v76);
        v25 = _mm_load_si128(&v76[1]);
        v80 = v76[3].m128i_i64[0];
        v78 = v25;
        v79 = _mm_load_si128(&v76[2]);
        if ( *((_QWORD *)&v75 + 1) < v19 )
        {
          v71 = *((_QWORD *)&v75 + 1);
          v62 = qvector_reserve(&v74, 0, v52 + 1, 56);
          v63 = v74;
          v51 = (const __m128i *)v62;
          v64 = v62;
          v65 = *((_QWORD *)&v75 + 1);
          v66 = v74;
          *((_QWORD *)&v75 + 1) = v71;
          v67 = v75 - 1;
          if ( (__int64)v75 - 1 >= 0 )
          {
            do
            {
              v68 = _mm_loadu_si128(v66);
              v64 += 56;
              v66 = (const __m128i *)((char *)v66 + 56);
              *(__m128i *)(v64 - 56) = v68;
              *(__m128i *)(v64 - 40) = _mm_loadu_si128((const __m128i *)((char *)v66 - 40));
              *(__m128i *)(v64 - 24) = _mm_loadu_si128((const __m128i *)((char *)v66 - 24));
              *(_QWORD *)(v64 - 8) = v66[-1].m128i_i64[1];
              v10 = v67-- == 0;
            }
            while ( !v10 );
          }
          v73 = v65;
          qfree(v63);
          v21 = v73;
          v52 = v75;
          v74 = v51;
          *((_QWORD *)&v75 + 1) = v73;
          v19 = v75 + 1;
        }
        ++v22;
        v26 = (__m128i *)((char *)v51 + 56 * v52);
        *v26 = _mm_load_si128(&si128);
        v26[1] = _mm_load_si128(&v78);
        v26[2] = _mm_load_si128(&v79);
        v24 = v80;
        v26[3].m128i_i64[0] = v80;
        *(_QWORD *)&v75 = v19;
        if ( a3 == v22 )
          goto LABEL_33;
      }
      if ( *((_QWORD *)&v75 + 1) < v19 )
      {
        v70 = *((_QWORD *)&v75 + 1);
        v55 = qvector_reserve(&v74, 0, v52 + 1, 56);
        v56 = v74;
        v51 = (const __m128i *)v55;
        v57 = v55;
        v58 = *((_QWORD *)&v75 + 1);
        v59 = v74;
        *((_QWORD *)&v75 + 1) = v70;
        v60 = v75 - 1;
        if ( (__int64)v75 - 1 >= 0 )
        {
          do
          {
            v61 = _mm_loadu_si128(v59);
            v57 += 56;
            v59 = (const __m128i *)((char *)v59 + 56);
            *(__m128i *)(v57 - 56) = v61;
            *(__m128i *)(v57 - 40) = _mm_loadu_si128((const __m128i *)((char *)v59 - 40));
            *(__m128i *)(v57 - 24) = _mm_loadu_si128((const __m128i *)((char *)v59 - 24));
            *(_QWORD *)(v57 - 8) = v59[-1].m128i_i64[1];
            v10 = v60-- == 0;
          }
          while ( !v10 );
        }
        v72 = v58;
        qfree(v56);
        v21 = v72;
        v52 = v75;
        v74 = v51;
        *((_QWORD *)&v75 + 1) = v72;
        v19 = v75 + 1;
      }
      ++v22;
      v53 = (__m128i *)((char *)v51 + 56 * v52);
      v24 = v76[3].m128i_i64[0];
      *v53 = _mm_load_si128(v76);
      v53[1] = _mm_load_si128(&v76[1]);
      v54 = _mm_load_si128(&v76[2]);
      v53[3].m128i_i64[0] = v24;
      v53[2] = v54;
      *(_QWORD *)&v75 = v19;
    }
    while ( a3 != v22 );
LABEL_33:
    v24 = (__int64)v74;
    v23 = *((_QWORD *)&v75 + 1);
  }
  a1->m128i_i64[0] = v24;
  a1->m128i_i64[1] = v19;
  a1[1].m128i_i64[0] = v23;
  a1[1].m128i_i8[8] = 0;
  return a1;
}

