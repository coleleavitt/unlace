unsigned __int64 __fastcall sub_296B0(
        __m128i *a1,
        __int64 *a2,
        __int64 a3,
        __m128i a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 a8,
        __int64 a9)
{
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 *v13; // rbx
  __int64 *v14; // rbp
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 (__fastcall *v22)(__int64, __int64); // rax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r12
  __int64 (__fastcall *v26)(__int64, __int64); // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // r13
  __int64 (__fastcall *v31)(__int64, __int64); // rax
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 *v34; // r12
  __int64 v35; // rbx
  __int64 (__fastcall *v36)(__int64, __int64); // rax
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rbx
  __int64 (__fastcall *v40)(__int64, __int64); // rax
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rbx
  __int64 (__fastcall *v46)(__int64, __int64); // rax
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rbx
  __int64 (__fastcall *v50)(__int64, __int64); // rax
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // r12
  __int64 (__fastcall *v56)(__int64, __int64); // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // r13
  __int64 (__fastcall *v61)(__int64, __int64); // rax
  __m128d v62; // xmm0
  __m128i v63; // xmm0
  __int64 v64; // rbx
  __int64 *v65; // rbx
  __int64 v66; // rcx
  __int64 v68; // rbx
  __int64 v69; // rbx
  __int64 (__fastcall *v70)(__int64, __int64); // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // r12
  __int64 (__fastcall *v75)(__int64, __int64); // rax
  __int64 v76; // rax
  __int64 v77; // r12
  __int64 v78; // r12
  __int64 (__fastcall *v79)(__int64, __int64); // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // r12
  __int64 v83; // r13
  __int64 (__fastcall *v84)(__int64, __int64); // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 *v87; // [rsp+38h] [rbp-E0h]
  __int64 *i; // [rsp+48h] [rbp-D0h]
  __int64 v90; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v91; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v92; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v93; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+80h] [rbp-98h] BYREF
  __int64 v95; // [rsp+88h] [rbp-90h] BYREF
  __int64 v96; // [rsp+90h] [rbp-88h] BYREF
  __int64 v97; // [rsp+98h] [rbp-80h] BYREF
  __m128i v98; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v99; // [rsp+B0h] [rbp-68h]
  __m128i v100; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v101; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v102; // [rsp+D8h] [rbp-40h]

  v102 = __readfsqword(0x28u);
  v9 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 128 )
  {
    for ( i = a2; ; i = v87 )
    {
      v10 = v9;
      v11 = v9 >> 4;
      v12 = v10 >> 3;
      if ( !a3 )
        break;
      v13 = &a1->m128i_i64[v11];
      v14 = &a1->m128i_i64[1];
      --a3;
      v15 = *v13;
      if ( !(unsigned __int8)sub_27400(&v90, a1->m128i_i64[1]) || !(unsigned __int8)sub_27400(&v91, v15) )
LABEL_49:
        sub_273C0();
      v16 = v90;
      hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
      v18 = hexdsp(268, v16);
      v19 = *(_QWORD *)(v16 + 8);
      v20 = v91;
      v21 = *(_QWORD *)(v18 + 8) + v19;
      v22 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
      v23 = *(_QWORD *)(v22(268, v20) + 8) + *(_QWORD *)(v20 + 8);
      v24 = *(i - 1);
      if ( v21 >= v23 )
      {
        if ( !(unsigned __int8)sub_27400(&v96, a1->m128i_i64[1]) || !(unsigned __int8)sub_27400(&v97, v24) )
          goto LABEL_49;
        v55 = v96;
        v56 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
        v57 = v56(268, v55);
        v58 = *(_QWORD *)(v55 + 8);
        v59 = v97;
        v60 = *(_QWORD *)(v57 + 8) + v58;
        v61 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
        if ( v60 >= *(_QWORD *)(v61(268, v59) + 8) + *(_QWORD *)(v59 + 8) )
        {
          v77 = *(i - 1);
          if ( !(unsigned __int8)sub_27400(&v98, *v13) || !(unsigned __int8)sub_27400(&v100, v77) )
            goto LABEL_49;
          v78 = v98.m128i_i64[0];
          v79 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
          v80 = v79(268, v78);
          v81 = *(_QWORD *)(v78 + 8);
          v82 = v100.m128i_i64[0];
          v83 = *(_QWORD *)(v80 + 8) + v81;
          v84 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
          v85 = v84(268, v82);
          v86 = a1->m128i_i64[0];
          if ( v83 >= *(_QWORD *)(v85 + 8) + *(_QWORD *)(v82 + 8) )
          {
            a1->m128i_i64[0] = *v13;
            *v13 = v86;
          }
          else
          {
            a1->m128i_i64[0] = *(i - 1);
            *(i - 1) = v86;
          }
          v33 = a1->m128i_i64[0];
        }
        else
        {
          v62 = (__m128d)_mm_loadu_si128(a1);
          v33 = a1->m128i_i64[1];
          a4 = (__m128i)_mm_shuffle_pd(v62, v62, 1);
          *a1 = a4;
        }
      }
      else
      {
        if ( !(unsigned __int8)sub_27400(&v92, *v13) || !(unsigned __int8)sub_27400(&v93, v24) )
          goto LABEL_49;
        v25 = v92;
        v26 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
        v27 = v26(268, v25);
        v28 = *(_QWORD *)(v25 + 8);
        v29 = v93;
        v30 = *(_QWORD *)(v27 + 8) + v28;
        v31 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
        if ( v30 >= *(_QWORD *)(v31(268, v29) + 8) + *(_QWORD *)(v29 + 8) )
        {
          v68 = *(i - 1);
          if ( !(unsigned __int8)sub_27400(&v94, a1->m128i_i64[1]) || !(unsigned __int8)sub_27400(&v95, v68) )
            goto LABEL_49;
          v69 = v94;
          v70 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
          v71 = v70(268, v69);
          v72 = *(_QWORD *)(v69 + 8);
          v73 = v95;
          v74 = *(_QWORD *)(v71 + 8) + v72;
          v75 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
          v76 = v75(268, v73);
          a4 = _mm_loadl_epi64(a1);
          if ( v74 >= *(_QWORD *)(v76 + 8) + *(_QWORD *)(v73 + 8) )
          {
LABEL_47:
            v33 = a1->m128i_i64[1];
            *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, a4);
          }
          else
          {
            a1->m128i_i64[0] = *(i - 1);
            *(i - 1) = a4.m128i_i64[0];
            v33 = a1->m128i_i64[0];
          }
        }
        else
        {
          v32 = a1->m128i_i64[0];
          a1->m128i_i64[0] = *v13;
          *v13 = v32;
          v33 = a1->m128i_i64[0];
        }
      }
      v34 = i;
      while ( 1 )
      {
LABEL_13:
        if ( !(unsigned __int8)sub_27400(&v96, *v14) || !(unsigned __int8)sub_27400(&v97, v33) )
        {
LABEL_45:
          if ( under_debugger )
            BUG();
          interr();
          goto LABEL_47;
        }
        v35 = v96;
        v36 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
        v37 = v36(268, v35);
        v38 = v97;
        v39 = *(_QWORD *)(v37 + 8) + *(_QWORD *)(v35 + 8);
        v40 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
        v41 = v40(268, v38);
        v42 = a1->m128i_i64[0];
        v43 = *(_QWORD *)(v41 + 8) + *(_QWORD *)(v38 + 8);
        v33 = a1->m128i_i64[0];
        if ( v39 >= v43 )
          break;
        ++v14;
      }
      v87 = v14;
      --v34;
      v14 = (__int64 *)&v100;
      while ( 1 )
      {
        v44 = *v34;
        if ( !(unsigned __int8)sub_27400(&v98, v42) || !(unsigned __int8)sub_27400(&v100, v44) )
          goto LABEL_45;
        v45 = v98.m128i_i64[0];
        v46 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
        v47 = v46(268, v45);
        v48 = v100.m128i_i64[0];
        v49 = *(_QWORD *)(v47 + 8) + *(_QWORD *)(v45 + 8);
        v50 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
        if ( v49 >= *(_QWORD *)(v50(268, v48) + 8) + *(_QWORD *)(v48 + 8) )
          break;
        v42 = a1->m128i_i64[0];
        --v34;
      }
      if ( v87 < v34 )
      {
        v54 = *v87;
        v14 = v87 + 1;
        *v87 = *v34;
        *v34 = v54;
        v33 = a1->m128i_i64[0];
        goto LABEL_13;
      }
      a4 = _mm_loadu_si128((const __m128i *)&a8);
      sub_296B0((_DWORD)v87, (_DWORD)i, a3, v51, v52, v53, (__int128)a4, a9);
      v9 = (char *)v87 - (char *)a1;
      if ( (char *)v87 - (char *)a1 <= 128 )
        return v102 - __readfsqword(0x28u);
    }
    v63 = _mm_loadu_si128((const __m128i *)&a8);
    v64 = v11 - 1;
    v99 = a9;
    v101 = a9;
    v98 = v63;
    v100 = v63;
    while ( 1 )
    {
      sub_293D0((__int64)a1, v64, v12, a1->m128i_i64[v64]);
      if ( !v64 )
        break;
      --v64;
    }
    if ( (char *)i - (char *)a1 > 8 )
    {
      v65 = i;
      do
      {
        v66 = *--v65;
        *v65 = a1->m128i_i64[0];
        sub_293D0((__int64)a1, 0, ((char *)v65 - (char *)a1) >> 3, v66);
      }
      while ( (char *)v65 - (char *)a1 > 8 );
    }
  }
  return v102 - __readfsqword(0x28u);
}
