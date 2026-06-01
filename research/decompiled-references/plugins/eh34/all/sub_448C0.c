__int64 __fastcall sub_448C0(__int64 a1, __int64 *a2, unsigned __int8 **a3, __int64 a4, int a5, int a6)
{
  unsigned __int8 *v8; // rcx
  int v9; // r12d
  unsigned __int8 *v11; // r13
  unsigned int v12; // ebp
  void (__fastcall *hexdsp)(__int64, __int64 *, _QWORD); // rax
  int v14; // r9d
  __int64 v15; // rsi
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r10
  _QWORD *v20; // r12
  __int64 v21; // rax
  _QWORD *v22; // rdi
  __int32 v23; // r11d
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  int v35; // ebp
  __int64 v36; // rsi
  unsigned int v37; // r12d
  __m128i *v38; // rax
  int v39; // eax
  __int64 v40; // rax
  __int64 *v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // r8
  __int64 v45; // rax
  unsigned __int32 v46; // ebp
  unsigned __int64 v47; // rcx
  __int64 *v48; // rdi
  __int64 v49; // rax
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rsi
  signed int v56; // ecx
  const char *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rsi
  const __m128i *v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rdx
  __m128i v64; // xmm0
  bool v65; // cf
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // rcx
  __int64 v69; // rax
  const __m128i *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rdx
  __m128i v73; // xmm0
  __int64 v74; // rax
  const __m128i *v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rsi
  const __m128i *v78; // rcx
  __m128i v79; // xmm0
  __int64 v80; // rax
  const __m128i *v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // r13
  const __m128i *v86; // rsi
  __int64 v87; // rax
  __m128i v88; // xmm0
  __int64 *v89; // [rsp+0h] [rbp-B8h]
  __int64 v90; // [rsp+8h] [rbp-B0h]
  __int64 v91; // [rsp+8h] [rbp-B0h]
  __int64 v92; // [rsp+8h] [rbp-B0h]
  __int64 v93; // [rsp+8h] [rbp-B0h]
  bool v94; // [rsp+10h] [rbp-A8h]
  __int64 v95; // [rsp+10h] [rbp-A8h]
  __int64 v96; // [rsp+10h] [rbp-A8h]
  __int64 v97; // [rsp+10h] [rbp-A8h]
  __int64 v98; // [rsp+10h] [rbp-A8h]
  __int64 v99; // [rsp+18h] [rbp-A0h]
  __int64 v100; // [rsp+20h] [rbp-98h]
  __int32 v101; // [rsp+2Ch] [rbp-8Ch]
  __int64 v102; // [rsp+30h] [rbp-88h]
  __int64 v103; // [rsp+30h] [rbp-88h]
  __int64 v104; // [rsp+38h] [rbp-80h]
  __int64 v105; // [rsp+38h] [rbp-80h]
  signed int v106; // [rsp+48h] [rbp-70h] BYREF
  unsigned int v107; // [rsp+4Ch] [rbp-6Ch] BYREF
  __m128i v108; // [rsp+50h] [rbp-68h] BYREF
  __m128i v109; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v110; // [rsp+78h] [rbp-40h]

  v8 = a3[4];
  v110 = __readfsqword(0x28u);
  if ( v8 != (_BYTE *)&dword_0 + 1 )
  {
    sub_64B50(
      (unsigned int)&v108,
      a2[1],
      (unsigned int)"make_descend_unwind_scaffolding: inlined_handlers has size %d != 1",
      (_DWORD)v8,
      a5,
      a6);
    goto LABEL_14;
  }
  v9 = *((_DWORD *)a3 + 2);
  v107 = -1;
  v11 = *a3;
  v12 = *((_DWORD *)a3 + 3);
  v106 = v9;
  if ( v9 < 0 )
  {
    sub_64B50(
      (unsigned int)&v108,
      a2[1],
      (unsigned int)"make_descend_unwind_scaffolding: from_state %d < 0",
      v9,
      a5,
      a6);
LABEL_14:
    v29 = v108.m128i_i64[0];
    goto LABEL_15;
  }
  hexdsp = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(a1, a2);
  hexdsp(205, a2 + 34, (unsigned int)v9);
  v15 = *((_QWORD *)v11 + 2);
  v16 = *v11;
  if ( v15 == -1 )
  {
    if ( !(_BYTE)v16 )
    {
LABEL_19:
      v32 = sub_4D4A0(a2 + 6, (unsigned int)v106);
      v33 = sub_4C060(v32);
      v34 = a2[18];
      v35 = v33;
      if ( v34 )
      {
        v36 = (__int64)(a2 + 17);
        do
        {
          if ( v106 <= *(_DWORD *)(v34 + 32) )
          {
            v36 = v34;
            v34 = *(_QWORD *)(v34 + 16);
          }
          else
          {
            v34 = *(_QWORD *)(v34 + 24);
          }
        }
        while ( v34 );
        if ( a2 + 17 != (__int64 *)v36 && v106 >= *(_DWORD *)(v36 + 32) )
          goto LABEL_56;
      }
      else
      {
        v36 = (__int64)(a2 + 17);
      }
      v108.m128i_i64[0] = (__int64)&v106;
      v36 = sub_43E90(a2 + 16, v36, (signed int **)&v108);
LABEL_56:
      *(_DWORD *)(v36 + 36) = v35;
      *(_BYTE *)(a1 + 24) = 0;
      return a1;
    }
    v55 = a2[1];
    v56 = v106;
    v57 = "make_descend_unwind_scaffolding: unwind entry %d type %d has no handler";
    goto LABEL_52;
  }
  if ( (_BYTE)v16 == 3 )
  {
    sub_444A0((__int64)&v108, a2, (int *)&v107, v15, (__int64 *)a3[3], v106, -1);
    v29 = v108.m128i_i64[0];
    v91 = v108.m128i_i64[0];
    if ( !v109.m128i_i8[8] )
    {
      v37 = v107;
      v89 = a2 + 6;
      goto LABEL_30;
    }
LABEL_15:
    *(_QWORD *)a1 = v29;
    v30 = _mm_loadu_si128((const __m128i *)&v108.m128i_u64[1]);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v30;
    return a1;
  }
  if ( (unsigned __int8)v16 > 3u )
  {
    v55 = a2[1];
    v56 = v106;
    v57 = "make_descend_unwind_scaffolding: unwind entry %d has invalid type %d";
LABEL_52:
    sub_64B50((unsigned int)&v108, v55, (_DWORD)v57, v56, v16, v14);
    goto LABEL_14;
  }
  if ( !(_BYTE)v16 )
    goto LABEL_19;
  v89 = a2 + 6;
  v17 = sub_4CBD0(a2 + 6);
  v18 = 0;
  v90 = v17;
  if ( v11[28] )
    v18 = *((unsigned int *)v11 + 6);
  v94 = *v11 == 2;
  v19 = a2[5];
  v20 = *(_QWORD **)(v17 + 16);
  v108.m128i_i64[1] = v18;
  v109.m128i_i8[0] = v94;
  v21 = *a2;
  v108.m128i_i64[0] = v19;
  v22 = v20 + 1;
  v23 = *(_DWORD *)(v21 + 4);
  v109.m128i_i32[2] = v23;
  v24 = v20[2];
  v25 = v20[1];
  v26 = v20[3];
  v27 = v24 + 1;
  if ( (unsigned __int64)&v108 < v25 || (unsigned __int64)&v108 >= v25 + 32 * v26 )
  {
    if ( v26 < v27 )
    {
      v95 = v20[3];
      v58 = qvector_reserve(v22, 0, v24 + 1, 32);
      v59 = v20[2];
      v60 = v20[3];
      v61 = (const __m128i *)v20[1];
      v20[3] = v95;
      v62 = v59 - 1;
      if ( v62 >= 0 )
      {
        v63 = v58;
        do
        {
          v64 = _mm_loadu_si128(v61);
          v63 += 32;
          v61 += 2;
          *(__m128i *)(v63 - 32) = v64;
          *(__m128i *)(v63 - 16) = _mm_loadu_si128(v61 - 1);
          v65 = v62-- == 0;
        }
        while ( !v65 );
        v61 = (const __m128i *)v20[1];
      }
      v96 = v58;
      qfree(v61);
      v25 = v96;
      v24 = v20[2];
      v20[1] = v96;
      v20[3] = v60;
    }
    v38 = (__m128i *)(32 * v24 + v25);
    *v38 = _mm_load_si128(&v108);
    v38[1] = _mm_load_si128(&v109);
  }
  else
  {
    if ( v26 < v27 )
    {
      v104 = v20[3];
      v102 = v18;
      v101 = v23;
      v100 = v19;
      v74 = qvector_reserve(v22, 0, v24 + 1, 32);
      v75 = (const __m128i *)v20[1];
      v76 = v74;
      v77 = v20[2] - 1LL;
      v99 = v20[3];
      v20[3] = v104;
      v78 = v75;
      if ( v77 >= 0 )
      {
        do
        {
          v79 = _mm_loadu_si128(v78);
          v76 += 32;
          v78 += 2;
          *(__m128i *)(v76 - 32) = v79;
          *(__m128i *)(v76 - 16) = _mm_loadu_si128(v78 - 1);
          v65 = v77-- == 0;
        }
        while ( !v65 );
        v75 = (const __m128i *)v20[1];
      }
      v105 = v102;
      v103 = v74;
      qfree(v75);
      v25 = v103;
      v24 = v20[2];
      v19 = v100;
      v23 = v101;
      v18 = v105;
      v20[1] = v103;
      v20[3] = v99;
    }
    v28 = v25 + 32 * v24;
    *(_QWORD *)v28 = v19;
    *(_QWORD *)(v28 + 8) = v18;
    *(_BYTE *)(v28 + 16) = v94;
    *(_DWORD *)(v28 + 24) = v23;
  }
  ++v20[2];
  v39 = sub_4C060(v90);
  v91 = 0;
  v107 = v39;
  v37 = v39;
LABEL_30:
  v40 = a2[18];
  v41 = a2 + 17;
  if ( v40 )
  {
    v42 = (unsigned int)v106;
    v43 = (__int64)(a2 + 17);
    do
    {
      v44 = *(_QWORD *)(v40 + 16);
      if ( *(_DWORD *)(v40 + 32) >= v106 )
      {
        v43 = v40;
        v40 = *(_QWORD *)(v40 + 16);
      }
      else
      {
        v40 = *(_QWORD *)(v40 + 24);
      }
    }
    while ( v40 );
    if ( (__int64 *)v43 != v41 && v106 >= *(_DWORD *)(v43 + 32) )
      goto LABEL_38;
  }
  else
  {
    v43 = (__int64)(a2 + 17);
  }
  v108.m128i_i64[0] = (__int64)&v106;
  v53 = sub_43E90(a2 + 16, v43, (signed int **)&v108);
  v42 = (unsigned int)v106;
  v43 = v53;
LABEL_38:
  *(_DWORD *)(v43 + 36) = v37;
  if ( *((_BYTE *)a3 + 17) )
    v45 = sub_4D990(v89, v42, v12, v41, v44);
  else
    v45 = sub_4D8C0(v89, v42, v12, v41, v44);
  v46 = sub_4C060(v45);
  if ( v91 )
  {
    v108.m128i_i64[1] = v91;
    v47 = a2[31];
    v48 = a2 + 31;
    v49 = a2[32];
    v108.m128i_i32[0] = v46;
    v50 = a2[33];
    v51 = v49 + 1;
    if ( (unsigned __int64)&v108 < v47 || (unsigned __int64)&v108 >= v47 + 16 * v50 )
    {
      if ( v50 < v51 )
      {
        v92 = a2[33];
        v66 = qvector_reserve(v48, 0, v51, 16);
        v67 = a2[33];
        v68 = v66;
        v69 = a2[32];
        v70 = (const __m128i *)a2[31];
        a2[33] = v92;
        v71 = v69 - 1;
        if ( v71 >= 0 )
        {
          v72 = v68;
          do
          {
            v73 = _mm_loadu_si128(v70);
            v72 += 16;
            ++v70;
            *(__m128i *)(v72 - 16) = v73;
            v65 = v71-- == 0;
          }
          while ( !v65 );
          v70 = (const __m128i *)a2[31];
        }
        v93 = v68;
        qfree(v70);
        v47 = v93;
        a2[33] = v67;
        v49 = a2[32];
        a2[31] = v93;
      }
      *(__m128i *)(v47 + 16 * v49) = _mm_load_si128(&v108);
    }
    else
    {
      if ( v50 < v51 )
      {
        v97 = a2[33];
        v80 = qvector_reserve(v48, 0, v51, 16);
        v81 = (const __m128i *)a2[31];
        v82 = v80;
        v83 = v80;
        v84 = a2[32];
        v85 = a2[33];
        v86 = v81;
        a2[33] = v97;
        v87 = v84 - 1;
        if ( v87 >= 0 )
        {
          do
          {
            v88 = _mm_loadu_si128(v86);
            v83 += 16;
            ++v86;
            *(__m128i *)(v83 - 16) = v88;
            v65 = v87-- == 0;
          }
          while ( !v65 );
          v81 = (const __m128i *)a2[31];
        }
        v98 = v82;
        qfree(v81);
        v47 = v98;
        a2[33] = v85;
        v49 = a2[32];
        a2[31] = v98;
      }
      v52 = v47 + 16 * v49;
      *(_DWORD *)v52 = v46;
      *(_QWORD *)(v52 + 8) = v91;
    }
    ++a2[32];
  }
  v54 = sub_4CB00(v89, v37, 0);
  sub_4C000(v54, v46);
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}
