unsigned __int64 __fastcall sub_32950(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // xmm0_8
  _QWORD *v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  unsigned int v12; // ecx
  __int32 v13; // eax
  unsigned int v14; // edx
  __m128i *v15; // r12
  __int64 v16; // rdx
  void (__fastcall *v17)(__int64, unsigned __int64 *, _QWORD *); // rax
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 (__fastcall *v23)(__int64, int); // rax
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 i; // r12
  int v27; // r15d
  void (__fastcall *v28)(__int64, __int64, _QWORD); // rax
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, int, int); // rax
  int v31; // eax
  void (__fastcall *hexdsp)(__int64, _QWORD *, _QWORD *); // rax
  __int64 v34; // rdi
  _QWORD *v35; // rsi
  __m128i v36; // xmm0
  __int64 v37; // r12
  __int64 v38; // rax
  unsigned __int64 v39; // r14
  __m128i *v40; // r12
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  void (__fastcall *v43)(__int64, unsigned __int64 *, _QWORD *); // rax
  __int64 v44; // rdi
  __m128i v45; // xmm0
  __int64 v46; // rdi
  _QWORD *v47; // rdi
  __int64 v48; // r12
  __int64 v49; // rax
  const __m128i *v50; // r13
  __int64 v51; // r12
  unsigned __int64 v52; // r15
  __int32 v53; // eax
  void (__fastcall *v54)(__int64, unsigned __int64, unsigned __int64 *); // rax
  __int64 v55; // rax
  __m128i v56; // xmm0
  bool v57; // cf
  _QWORD *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r12
  const __m128i *v62; // r13
  __int64 v63; // r12
  __int64 v64; // r14
  __int32 v65; // eax
  void (__fastcall *v66)(__int64, __int64, unsigned __int64 *); // rax
  __int64 v67; // rax
  __m128i v68; // xmm0
  __int64 v69; // [rsp+8h] [rbp-F8h]
  __int64 v71; // [rsp+20h] [rbp-E0h]
  __int64 v72; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v73; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+40h] [rbp-C0h]
  __int64 v75; // [rsp+48h] [rbp-B8h]
  _QWORD v76[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+60h] [rbp-A0h]
  __m128i v78; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v79; // [rsp+78h] [rbp-88h]
  __int64 v80; // [rsp+80h] [rbp-80h]
  __int8 v81; // [rsp+88h] [rbp-78h]
  __int32 v82; // [rsp+8Ch] [rbp-74h]
  _QWORD v83[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v84; // [rsp+A0h] [rbp-60h]
  __m128i v85; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v86; // [rsp+C0h] [rbp-40h]

  v5 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 224).m128i_u64[0];
  v6 = *(_QWORD **)a1;
  v7 = (__int64 *)&v73;
  v8 = a4;
  v9 = v6[70];
  v10 = v6[72];
  v86 = __readfsqword(0x28u);
  v74 = a3;
  v76[0] = 0;
  v75 = (unsigned __int8)a4;
  v76[1] = 0;
  v77 = 0;
  v73 = v5;
  v78 = 0;
  if ( (unsigned __int64)&v73 >= v9 && (unsigned __int64)&v73 < v9 + (v10 << 6) )
  {
    v80 = a3;
    v81 = a4;
    v82 = 0;
    v83[0] = 0;
    v83[1] = 0;
    v79 = v5;
    hexdsp = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(&v73, a4);
    v34 = 203;
    v35 = v83;
    hexdsp(203, v83, v76);
    v36 = _mm_load_si128(&v78);
    v37 = v6[71];
    v38 = v77;
    v39 = v6[72];
    v77 = 0;
    v85 = v36;
    v84 = v38;
    v78 = 0;
    if ( v39 < v37 + 1 )
    {
      v35 = nullptr;
      v58 = v6 + 70;
      v59 = qvector_reserve(v6 + 70, 0, v37 + 1, 64);
      v60 = v6[72];
      v61 = v6[71];
      v69 = v59;
      v6[72] = v39;
      v62 = (const __m128i *)v6[70];
      v72 = v60;
      v63 = v61 - 1;
      if ( v63 >= 0 )
      {
        v64 = v59;
        do
        {
          *(_QWORD *)v64 = v62->m128i_i64[0];
          *(_QWORD *)(v64 + 8) = v62->m128i_i64[1];
          *(_BYTE *)(v64 + 16) = v62[1].m128i_i8[0];
          v65 = v62[1].m128i_i32[1];
          *(_QWORD *)(v64 + 24) = 0;
          *(_DWORD *)(v64 + 20) = v65;
          *(_QWORD *)(v64 + 32) = 0;
          v66 = (void (__fastcall *)(__int64, __int64, unsigned __int64 *))get_hexdsp(v58, v64 + 24);
          v35 = (_QWORD *)(v64 + 24);
          v66(203, v64 + 24, &v62[1].m128i_u64[1]);
          v67 = v62[2].m128i_i64[1];
          v68 = _mm_loadu_si128(v62 + 3);
          v64 += 64;
          v62 += 4;
          v62[-2].m128i_i64[1] = 0;
          *(_QWORD *)(v64 - 24) = v67;
          v62[-1].m128i_i64[1] = 0;
          *(__m128i *)(v64 - 16) = v68;
          v58 = (_QWORD *)v62[-3].m128i_i64[1];
          qfree(v58);
          v57 = v63-- == 0;
        }
        while ( !v57 );
        v62 = (const __m128i *)v6[70];
      }
      v34 = (__int64)v62;
      qfree(v62);
      v37 = v6[71];
      v6[70] = v69;
      v6[72] = v72;
    }
    else
    {
      v69 = v6[70];
    }
    v40 = (__m128i *)((v37 << 6) + v69);
    v41 = v79;
    v40[1].m128i_i64[1] = 0;
    v40->m128i_i64[0] = v41;
    v42 = v80;
    v40[2].m128i_i64[0] = 0;
    v40->m128i_i64[1] = v42;
    v40[1].m128i_i8[0] = v81;
    v40[1].m128i_i32[1] = v82;
    v43 = (void (__fastcall *)(__int64, unsigned __int64 *, _QWORD *))get_hexdsp(v34, v35);
    v18 = (__int64)&v40[1].m128i_i64[1];
    v43(203, &v40[1].m128i_u64[1], v83);
    v44 = v83[0];
    v45 = _mm_load_si128(&v85);
    v40[2].m128i_i64[1] = v84;
    v40[3] = v45;
    qfree(v44);
    v46 = v77;
    ++v6[71];
    if ( v46 )
    {
      v78.m128i_i64[0] = 0;
      qfree(v46);
    }
  }
  else
  {
    v11 = v6[71];
    if ( v10 < v11 + 1 )
    {
      v47 = v6 + 70;
      v9 = qvector_reserve(v6 + 70, 0, v11 + 1, 64);
      v48 = v6[71];
      v49 = v6[72];
      v6[72] = v10;
      v50 = (const __m128i *)v6[70];
      v71 = v49;
      v51 = v48 - 1;
      if ( v51 >= 0 )
      {
        v52 = v9;
        do
        {
          *(_QWORD *)v52 = v50->m128i_i64[0];
          *(_QWORD *)(v52 + 8) = v50->m128i_i64[1];
          *(_BYTE *)(v52 + 16) = v50[1].m128i_i8[0];
          v53 = v50[1].m128i_i32[1];
          *(_QWORD *)(v52 + 24) = 0;
          *(_DWORD *)(v52 + 20) = v53;
          *(_QWORD *)(v52 + 32) = 0;
          v54 = (void (__fastcall *)(__int64, unsigned __int64, unsigned __int64 *))get_hexdsp(v47, v52 + 24);
          v54(203, v52 + 24, &v50[1].m128i_u64[1]);
          v55 = v50[2].m128i_i64[1];
          v56 = _mm_loadu_si128(v50 + 3);
          v52 += 64LL;
          v50 += 4;
          v50[-2].m128i_i64[1] = 0;
          *(_QWORD *)(v52 - 24) = v55;
          v50[-1].m128i_i64[1] = 0;
          *(__m128i *)(v52 - 16) = v56;
          v47 = (_QWORD *)v50[-3].m128i_i64[1];
          qfree(v47);
          v57 = v51-- == 0;
        }
        while ( !v57 );
        v50 = (const __m128i *)v6[70];
      }
      v7 = (__int64 *)v50;
      qfree(v50);
      v12 = v73;
      v6[70] = v9;
      v11 = v6[71];
      v14 = HIDWORD(v73);
      v6[72] = v71;
      v8 = (unsigned __int8)v75;
      v13 = HIDWORD(v75);
    }
    else
    {
      v12 = a2;
      v13 = 0;
      v14 = a2;
    }
    v15 = (__m128i *)(v9 + (v11 << 6));
    v15->m128i_i32[1] = v14;
    v16 = v74;
    v15->m128i_i32[0] = v12;
    v15->m128i_i64[1] = v16;
    v15[1].m128i_i8[0] = v8;
    v15[1].m128i_i32[1] = v13;
    v15[1].m128i_i64[1] = 0;
    v15[2].m128i_i64[0] = 0;
    v17 = (void (__fastcall *)(__int64, unsigned __int64 *, _QWORD *))get_hexdsp(v7, v8);
    v18 = (__int64)&v15[1].m128i_i64[1];
    v17(203, &v15[1].m128i_u64[1], v76);
    v19 = _mm_load_si128(&v78);
    v15[2].m128i_i64[1] = v77;
    v15[3] = v19;
    ++v6[71];
  }
  qfree(v76[0]);
  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( a2 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      if ( (signed int)a2 <= *(_DWORD *)(v20 + 204) )
      {
        v21 = *(_QWORD *)(*(_QWORD *)a1 + 560LL);
        v22 = *(_QWORD *)(*(_QWORD *)a1 + 568LL);
        v23 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v20 + 96LL);
        if ( v23 == sub_BA40 )
        {
          if ( !*(_QWORD *)(v20 + 56) )
            return v86 - __readfsqword(0x28u);
          v24 = *(int *)(*(_QWORD *)(v20 + 48) + 24LL * (int)a2 + 8);
        }
        else
        {
          v18 = a2;
          v24 = (int)v23(v20, a2);
        }
        if ( (int)v24 > 0 )
        {
          v25 = v21 + (v22 << 6) - 40;
          for ( i = 0; i != v24; ++i )
          {
            v29 = *(_QWORD *)(a1 + 8);
            v30 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)v29 + 112LL);
            if ( v30 == sub_BA80 )
            {
              v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 48) + 24LL * (int)a2) + 4 * i);
            }
            else
            {
              v18 = a2;
              v31 = v30(v29, a2, i);
              v29 = *(_QWORD *)(a1 + 8);
              v27 = v31;
            }
            if ( v27 > 0 && v27 <= *(_DWORD *)(v29 + 204) )
            {
              v28 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v29, v18);
              v18 = v25;
              v28(205, v25, (unsigned int)v27);
            }
          }
        }
      }
    }
  }
  return v86 - __readfsqword(0x28u);
}

