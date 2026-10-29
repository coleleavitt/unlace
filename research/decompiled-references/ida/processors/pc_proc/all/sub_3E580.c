__m128i *__fastcall sub_3E580(
        __m128i *a1,
        __int64 (__fastcall ****a2)(__int64 a1),
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall ***v7)(__int64); // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64); // rax
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64); // rax
  char v20; // al
  unsigned __int64 v21; // rsi
  __int64 (__fastcall *v22)(__int64); // rax
  char v23; // al
  __int64 (__fastcall *v24)(__int64); // rax
  unsigned __int8 v25; // al
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  bool v30; // cf
  unsigned __int64 v31; // r14
  __int64 v32; // rcx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r9
  int v35; // r14d
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r13
  __int64 v40; // r15
  int v41; // r13d
  __int64 (__fastcall *v42)(__int64); // rax
  char v43; // al
  unsigned __int64 v44; // rsi
  __int64 (__fastcall *v45)(__int64); // rax
  unsigned int v46; // eax
  char v47; // al
  unsigned __int64 v48; // rsi
  __int64 (__fastcall *v49)(__int64); // rax
  int v50; // eax
  __int64 v51; // rax
  int v52; // edx
  int v53; // ecx
  __m128i v54; // xmm0
  int v55; // eax
  int v56; // eax
  int v57; // edx
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  _WORD *v60; // rax
  __int64 (__fastcall *v61)(__int64); // rax
  unsigned __int16 v62; // ax
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  __int64 (__fastcall *v66)(__int64); // rax
  unsigned __int16 v67; // ax
  __int64 v68; // rax
  __int64 v69; // r15
  _WORD *v70; // rdi
  __int64 v71; // rdx
  __int16 v72; // cx
  __int64 (__fastcall *v73)(__int64); // rax
  unsigned __int16 v74; // ax
  __int64 (__fastcall *v75)(__int64); // rax
  unsigned int v76; // eax
  __m128i v77; // xmm0
  __int64 (__fastcall *v78)(__int64); // rax
  unsigned __int16 v79; // ax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r13
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // r14
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  unsigned __int8 v94; // [rsp+8h] [rbp-148h]
  __int64 v95; // [rsp+8h] [rbp-148h]
  __int64 (__fastcall ***v96)(__int64); // [rsp+20h] [rbp-130h]
  _QWORD v97[4]; // [rsp+28h] [rbp-128h] BYREF
  _QWORD v98[4]; // [rsp+48h] [rbp-108h] BYREF
  unsigned __int64 v99; // [rsp+68h] [rbp-E8h] BYREF
  unsigned __int64 v100; // [rsp+70h] [rbp-E0h]
  __int64 v101; // [rsp+78h] [rbp-D8h]
  __int64 v102; // [rsp+88h] [rbp-C8h] BYREF
  unsigned __int64 v103; // [rsp+90h] [rbp-C0h]
  __int64 v104; // [rsp+98h] [rbp-B8h]
  char v105; // [rsp+A0h] [rbp-B0h]
  int v106; // [rsp+A8h] [rbp-A8h]
  __int16 v107; // [rsp+ACh] [rbp-A4h]
  _WORD *v108; // [rsp+B0h] [rbp-A0h]
  __m128i v109; // [rsp+B8h] [rbp-98h] BYREF
  __m128i v110; // [rsp+C8h] [rbp-88h] BYREF
  __m128i v111; // [rsp+D8h] [rbp-78h] BYREF
  __m128i v112; // [rsp+E8h] [rbp-68h] BYREF
  __m128i v113; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v114; // [rsp+108h] [rbp-48h]
  unsigned __int64 v115; // [rsp+110h] [rbp-40h]

  v7 = *a2;
  v115 = __readfsqword(0x28u);
  v107 = -1;
  v106 = -1;
  v108 = nullptr;
  v111.m128i_i8[8] = 0;
  v112.m128i_i8[8] = 0;
  v113.m128i_i8[8] = 0;
  v114 = 0;
  v109 = 0;
  v8 = a3 + 4;
  if ( a3 < 0xFFFFFFFFFFFFFFFCLL )
  {
    v96 = v7 + 2;
    sub_8D820(&v99, v7 + 2, a3, 0xFFFFFFFFLL, a5, a6);
    if ( !(_BYTE)v101
      || a3 + 3 >= v100
      || a3 + 3 < v99
      || ((v15 = v8, v16 = **v7, v16 != sub_3CA40)
        ? (v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64, __int64, __int64, unsigned __int64))v16)(
                   v7,
                   a3,
                   v13,
                   v14,
                   v99))
        : (v17 = (*(__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64, __int64, __int64, unsigned __int64))*v7[1])(
                   v7[1],
                   a3,
                   v13,
                   v14,
                   v99)),
          (v18 = a3 + 1, BYTE1(v106) = v17 >> 3, LOBYTE(v106) = v17 & 7, v19 = **v7, v19 != sub_3CA40)
        ? (v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64))v19)(v7, v18))
        : (v20 = (*(__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64))*v7[1])(v7[1], v18)),
          (BYTE2(v106) = v20, v21 = a3 + 2, v22 = **v7, v22 != sub_3CA40)
        ? (v23 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64))v22)(v7, v21))
        : (v23 = (*(__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64))*v7[1])(v7[1], v21)),
          (HIBYTE(v106) = v23, v24 = **v7, v24 != sub_3CA40)
        ? (v25 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64))v24)(v7, a3 + 3))
        : (v25 = (*(__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64))*v7[1])(v7[1], a3 + 3)),
          (HIBYTE(v107) = v25 >> 4,
           v29 = 2LL * HIBYTE(v106),
           LOBYTE(v107) = v25 & 0xF,
           v30 = __CFADD__(v8, v29),
           v31 = v8 + v29,
           v30)
       || (sub_8D820(&v99, v96, v8, v26, v27, v28), !(_BYTE)v101)
       || (v33 = v99, v34 = v100, v31 - 1 < v99)
       || v31 - 1 >= v100) )
    {
      sub_3D7B0((__int64)&v102);
      v9 = v102;
      v10 = v103;
      v11 = v104;
      goto LABEL_3;
    }
    v35 = 0;
    if ( HIBYTE(v106) )
    {
      while ( 2 )
      {
        v37 = v109.m128i_i64[1];
        v36 = v109.m128i_i64[0];
        v38 = v109.m128i_i64[0] + 1;
        if ( v109.m128i_i64[1] < (unsigned __int64)(v109.m128i_i64[0] + 1) )
        {
          v95 = v109.m128i_i64[1];
          v68 = qvector_reserve();
          v39 = v68;
          v69 = v109.m128i_i64[1];
          v70 = v108;
          v109.m128i_i64[1] = v95;
          v71 = v109.m128i_i64[0] - 1;
          if ( v109.m128i_i64[0] - 1 >= 0 )
          {
            do
            {
              v72 = *v70;
              v68 += 12;
              v70 += 6;
              *(_WORD *)(v68 - 12) = v72;
              *(_BYTE *)(v68 - 10) = *((_BYTE *)v70 - 10);
              *(_DWORD *)(v68 - 8) = *((_DWORD *)v70 - 2);
              *(_BYTE *)(v68 - 8) = *((_BYTE *)v70 - 8);
              *(_DWORD *)(v68 - 4) = *((_DWORD *)v70 - 1);
              v30 = v71-- == 0;
            }
            while ( !v30 );
          }
          qfree();
          v108 = (_WORD *)v39;
          v36 = v109.m128i_i64[0];
          v109.m128i_i64[1] = v69;
        }
        else
        {
          v39 = (__int64)v108;
        }
        v40 = v39 + 12 * v36;
        *(_DWORD *)v40 = 0xFFFFFF;
        v41 = (unsigned __int8)v106;
        *(_QWORD *)(v40 + 4) = 0xFFFFFFFFLL;
        ++v109.m128i_i64[0];
        v94 = HIBYTE(v107);
        v42 = **v7;
        if ( v42 == sub_3CA40 )
          v43 = (*(__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64, __int64, __int64, __int64, unsigned __int64))*v7[1])(
                  v7[1],
                  v15,
                  v38,
                  v32,
                  v37,
                  v34);
        else
          v43 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64, __int64, __int64, __int64, unsigned __int64))v42)(
                  v7,
                  v15,
                  v38,
                  v32,
                  v37,
                  v34);
        *(_BYTE *)v40 = v43;
        v44 = v15 + 1;
        v45 = **v7;
        if ( v45 == sub_3CA40 )
          v46 = (*(__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64))*v7[1])(v7[1], v44);
        else
          v46 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64))v45)(v7, v44);
        v32 = v46;
        v47 = v46 & 0xF;
        *(_DWORD *)(v40 + 8) = 0;
        v48 = v15 + 2;
        *(_BYTE *)(v40 + 1) = v47;
        LOBYTE(v32) = (unsigned __int8)v32 >> 4;
        switch ( v47 )
        {
          case 0:
            *(_BYTE *)(v40 + 2) = v32;
            v15 += 2LL;
            v51 = 8;
            v41 = 1;
            *(_DWORD *)(v40 + 8) = 8;
            goto LABEL_36;
          case 1:
            if ( (_BYTE)v32 )
            {
              if ( (_BYTE)v32 != 1 )
              {
                sub_3D7B0((__int64)v97);
                v63 = v97[0];
                v64 = v97[1];
                v65 = v97[2];
                goto LABEL_54;
              }
              v75 = (*v7)[2];
              if ( v75 == sub_3CA60 )
                v76 = (*((__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64))*v7[1] + 2))(
                        v7[1],
                        v48);
              else
                v76 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64))v75)(v7, v48);
              v77 = _mm_cvtsi32_si128(v76);
              v15 += 6LL;
              v41 = 3;
              v51 = (unsigned int)_mm_cvtsi128_si32(v77);
              *(_QWORD *)(v40 + 4) = _mm_shuffle_epi32(v77, 224).m128i_u64[0];
            }
            else
            {
              v78 = (*v7)[1];
              if ( v78 == sub_3CA50 )
                v79 = (*((__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64))*v7[1] + 1))(
                        v7[1],
                        v48);
              else
                v79 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64))v78)(v7, v48);
              v15 += 4LL;
              v41 = 2;
              v51 = 8 * v79;
              *(_QWORD *)(v40 + 4) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v51), 224).m128i_u64[0];
            }
            goto LABEL_36;
          case 2:
            v15 += 2LL;
            v41 = 1;
            v51 = 8 * (unsigned __int8)(v32 + 1);
            *(_QWORD *)(v40 + 4) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v51), 224).m128i_u64[0];
            goto LABEL_36;
          case 3:
            *(_DWORD *)(v40 + 4) = 16 * v94;
            goto LABEL_49;
          case 4:
            goto LABEL_45;
          case 5:
          case 9:
            goto LABEL_33;
          case 6:
            if ( (_BYTE)v41 == 1 )
            {
              *(_BYTE *)(v40 + 1) = 22;
LABEL_45:
              *(_BYTE *)(v40 + 2) = v32;
              v61 = (*v7)[1];
              if ( v61 == sub_3CA50 )
                v62 = (*((__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64))*v7[1] + 1))(
                        v7[1],
                        v48);
              else
                v62 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64))v61)(v7, v48);
              v15 += 4LL;
              v41 = 2;
              *(_DWORD *)(v40 + 4) = 8 * v62;
              v51 = *(unsigned int *)(v40 + 8);
            }
            else
            {
              if ( (_BYTE)v41 != 2 )
              {
                sub_3D7B0((__int64)v98);
                v63 = v98[0];
                v64 = v98[1];
                v65 = v98[2];
                goto LABEL_54;
              }
              *(_BYTE *)(v40 + 1) = 38;
LABEL_81:
              v73 = (*v7)[1];
              if ( v73 == sub_3CA50 )
                v74 = (*((__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64))*v7[1] + 1))(
                        v7[1],
                        v48);
              else
                v74 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64))v73)(v7, v48);
              v15 += 4LL;
              *(_DWORD *)(v40 + 4) = v74;
              v51 = *(unsigned int *)(v40 + 8);
            }
LABEL_36:
            v114 += v51;
            v35 += v41;
            if ( (unsigned __int8)v35 < HIBYTE(v106) )
              continue;
            v15 += 2LL * (HIBYTE(v106) & 1);
            break;
          case 7:
            if ( (_BYTE)v41 == 1 )
            {
              *(_BYTE *)(v40 + 1) = 23;
LABEL_33:
              *(_BYTE *)(v40 + 2) = v32;
              v49 = (*v7)[2];
              if ( v49 == sub_3CA60 )
                v50 = (*((__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64))*v7[1] + 2))(
                        v7[1],
                        v48);
              else
                v50 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64))v49)(v7, v48);
              *(_DWORD *)(v40 + 4) = v50;
              v51 = *(unsigned int *)(v40 + 8);
              v15 += 6LL;
              v41 = 3;
              goto LABEL_36;
            }
            if ( (_BYTE)v41 != 2 )
            {
              sub_3D7B0((__int64)&v99);
              v63 = v99;
              v64 = v100;
              v65 = v101;
              goto LABEL_54;
            }
            *(_BYTE *)(v40 + 1) = 39;
            goto LABEL_81;
          case 8:
            *(_BYTE *)(v40 + 2) = v32;
            v66 = (*v7)[1];
            if ( v66 == sub_3CA50 )
              v67 = (*((__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), unsigned __int64))*v7[1] + 1))(
                      v7[1],
                      v48);
            else
              v67 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64))v66)(v7, v48);
            v15 += 4LL;
            v41 = 2;
            *(_DWORD *)(v40 + 4) = 16 * v67;
            v51 = *(unsigned int *)(v40 + 8);
            goto LABEL_36;
          case 10:
            *(_BYTE *)(v40 + 4) = v32;
LABEL_49:
            v51 = 0;
            v15 += 2LL;
            v41 = 1;
            goto LABEL_36;
          default:
            goto LABEL_71;
        }
        break;
      }
    }
    LOBYTE(v52) = BYTE1(v106);
    if ( (v106 & 0x400) != 0 )
    {
      if ( v15 >= 0xFFFFFFFFFFFFFFF4LL
        || (sub_8D820(&v99, v96, v15, v32, v33, v34), !(_BYTE)v101)
        || v15 + 11 >= v100
        || v15 + 11 < v99 )
      {
LABEL_71:
        sub_3D7B0((__int64)&v102);
        goto LABEL_72;
      }
      v82 = sub_8D5F0(v7, v15, v80, v81, v99, v100);
      v87 = sub_8D5F0(v7, v15 + 4, v83, v84, v85, v86);
      v92 = sub_8D5F0(v7, v15 + 8, v88, v89, v90, v91);
      v110.m128i_i64[0] = v82;
      v110.m128i_i64[1] = v87;
      v111.m128i_i64[0] = v92;
      if ( !v111.m128i_i8[8] )
        v111.m128i_i8[8] = 1;
      v52 = BYTE1(v106);
      if ( (v106 & 0x400) != 0 )
        goto LABEL_43;
      v15 += 12LL;
    }
    if ( (v52 & 3) == 0 )
    {
LABEL_42:
      v52 = BYTE1(v106);
LABEL_43:
      v53 = BYTE2(v106);
      v54 = _mm_load_si128(&v109);
      v55 = HIBYTE(v106) << 8;
      a1[6].m128i_i8[8] = 0;
      a1[1] = v54;
      v56 = v52 | ((v53 | v55) << 8);
      v57 = (unsigned __int8)v106;
      a1[2] = _mm_load_si128(&v110);
      a1[3] = _mm_load_si128(&v111);
      v58 = _mm_load_si128(&v112);
      a1->m128i_i32[0] = v57 | (v56 << 8);
      LOWORD(v56) = v107;
      a1[4] = v58;
      v59 = _mm_load_si128(&v113);
      a1->m128i_i16[2] = v56;
      v60 = v108;
      a1[5] = v59;
      a1->m128i_i64[1] = (__int64)v60;
      a1[6].m128i_i64[0] = v114;
      return a1;
    }
    sub_8D670(&v102, v7, v15, v32, v33, v34);
    if ( !v105 )
    {
      v112.m128i_i8[8] = 1;
      v113.m128i_i64[0] = v15 + 4;
      v112.m128i_i64[0] = v102;
      v113.m128i_i8[8] = 1;
      goto LABEL_42;
    }
LABEL_72:
    v63 = v102;
    v64 = v103;
    v65 = v104;
LABEL_54:
    a1->m128i_i64[0] = v63;
    a1->m128i_i64[1] = v64;
    a1[1].m128i_i64[0] = v65;
    a1[6].m128i_i8[8] = 1;
    goto LABEL_4;
  }
  sub_3D7B0((__int64)&v102);
  v9 = v102;
  v10 = v103;
  v11 = v104;
LABEL_3:
  a1->m128i_i64[0] = v9;
  a1->m128i_i64[1] = v10;
  a1[1].m128i_i64[0] = v11;
  a1[6].m128i_i8[8] = 1;
LABEL_4:
  if ( v108 )
  {
    v109.m128i_i64[0] = 0;
    qfree();
  }
  return a1;
}

