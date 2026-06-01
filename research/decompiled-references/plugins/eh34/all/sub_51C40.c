__int64 __fastcall sub_51C40(
        __int64 a1,
        __int64 (__fastcall ****a2)(__int64 a1),
        unsigned __int8 *a3,
        __m128i a4,
        double a5,
        __m128i a6,
        __m128i a7)
{
  bool v8; // zf
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r13
  unsigned __int8 v14; // al
  __int64 (__fastcall ***v15)(__int64); // rdi
  int v16; // ebp
  __int64 (__fastcall *v17)(__int64); // rax
  char v18; // al
  __int64 (__fastcall ***v19)(__int64); // rdi
  __int64 (__fastcall ***v20)(__int64); // rsi
  __int64 (__fastcall *v21)(__int64); // rax
  unsigned __int8 v22; // al
  unsigned __int8 v23; // cl
  char v24; // al
  char v25; // cl
  __int64 (__fastcall ***v26)(__int64); // rdi
  __int64 (__fastcall ***v27)(__int64); // rsi
  __int64 (__fastcall *v28)(__int64); // rax
  __int64 (__fastcall **v29)(__int64); // rdi
  __int64 (__fastcall *v30)(__int64); // rcx
  int v31; // eax
  __int64 v32; // rax
  unsigned __int8 v33; // al
  unsigned __int8 v34; // al
  __int64 v35; // rax
  __int64 (__fastcall ***v36)(__int64); // rax
  __int64 (__fastcall ***v37)(__int64); // rdi
  __int64 (__fastcall ***v38)(__int64); // rsi
  __int64 (__fastcall *v39)(__int64); // rax
  __int64 (__fastcall **v40)(__int64); // rdi
  __int64 (__fastcall *v41)(__int64); // rcx
  unsigned __int16 v42; // ax
  __int64 v43; // rax
  __m128i v44; // xmm0
  __int64 (__fastcall ***v45)(__int64); // rdi
  __int64 (__fastcall ***v46)(__int64); // rsi
  __int64 (__fastcall *v47)(__int64); // rax
  __int64 (__fastcall **v48)(__int64); // rdi
  __int64 (__fastcall *v49)(__int64); // rcx
  unsigned __int16 v50; // ax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r13
  _WORD *v54; // rdi
  __int64 v55; // rdx
  __int16 v56; // cx
  __int64 (__fastcall ***v59)(__int64); // rdi
  __int64 (__fastcall ***v60)(__int64); // rsi
  __int64 (__fastcall *v61)(__int64); // rax
  __int64 (__fastcall **v62)(__int64); // rdi
  __int64 (__fastcall *v63)(__int64); // rcx
  unsigned __int16 v64; // ax
  __int64 v65; // rax
  __int64 (__fastcall ***v66)(__int64); // rdi
  __int64 v67; // rbx
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 (__fastcall ***v70)(__int64); // rdi
  __int64 v71; // rbp
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 (__fastcall ***v74)(__int64); // rdi
  __int64 (__fastcall ***v75)(__int64); // rsi
  __int64 (__fastcall *v76)(__int64); // rax
  __int64 (__fastcall **v77)(__int64); // rdi
  __int64 (__fastcall *v78)(__int64); // rcx
  unsigned __int16 v79; // ax
  __int64 (__fastcall ***v80)(__int64); // rdi
  __int64 (__fastcall ***v81)(__int64); // rsi
  __int64 (__fastcall *v82)(__int64); // rax
  __int64 (__fastcall **v83)(__int64); // rdi
  __int64 (__fastcall *v84)(__int64); // rcx
  unsigned __int64 v85; // rbx
  __m128i v86; // xmm0
  __int64 (__fastcall ***v87)(__int64); // [rsp+8h] [rbp-A0h]
  __int64 v88; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v89; // [rsp+17h] [rbp-91h]
  _QWORD v91[2]; // [rsp+20h] [rbp-88h] BYREF
  char v92; // [rsp+30h] [rbp-78h]
  __int64 v93; // [rsp+40h] [rbp-68h] BYREF
  __m128i v94; // [rsp+48h] [rbp-60h] BYREF
  char v95; // [rsp+58h] [rbp-50h]
  unsigned __int64 v96; // [rsp+68h] [rbp-40h]

  v8 = a3[3] == 0;
  v96 = __readfsqword(0x28u);
  if ( v8 )
    goto LABEL_27;
  v10 = 0;
  while ( 2 )
  {
    v11 = *((_QWORD *)a3 + 2);
    if ( *((_QWORD *)a3 + 3) < (unsigned __int64)(v11 + 1) )
    {
      v88 = *((_QWORD *)a3 + 3);
      v51 = qvector_reserve(a3 + 8, 0, v11 + 1, 12);
      v52 = *((_QWORD *)a3 + 2);
      v53 = *((_QWORD *)a3 + 3);
      v54 = *((_WORD **)a3 + 1);
      v12 = v51;
      *((_QWORD *)a3 + 3) = v88;
      v55 = v52 - 1;
      if ( v55 >= 0 )
      {
        do
        {
          v56 = *v54;
          v51 += 12;
          v54 += 6;
          *(_WORD *)(v51 - 12) = v56;
          *(_BYTE *)(v51 - 10) = *((_BYTE *)v54 - 10);
          *(_DWORD *)(v51 - 8) = *((_DWORD *)v54 - 2);
          *(_BYTE *)(v51 - 8) = *((_BYTE *)v54 - 8);
          *(_DWORD *)(v51 - 4) = *((_DWORD *)v54 - 1);
        }
        while ( v55-- != 0 );
        v54 = *((_WORD **)a3 + 1);
      }
      qfree(v54);
      *((_QWORD *)a3 + 1) = v12;
      v11 = *((_QWORD *)a3 + 2);
      *((_QWORD *)a3 + 3) = v53;
    }
    else
    {
      v12 = *((_QWORD *)a3 + 1);
    }
    v13 = v12 + 12 * v11;
    *(_DWORD *)v13 = 0xFFFFFF;
    *(_QWORD *)(v13 + 4) = 0xFFFFFFFFLL;
    v14 = a3[5];
    ++*((_QWORD *)a3 + 2);
    v15 = *a2;
    v16 = *a3;
    v89 = v14;
    v87 = a2[1];
    v17 = ***a2;
    if ( v17 == sub_15B80
      && (v15 = (__int64 (__fastcall ***)(__int64))v15[1], v17 = **v15, v17 == sub_15B80)
      && (v15 = (__int64 (__fastcall ***)(__int64))v15[1], v17 = **v15, v17 == sub_15B80)
      && (v15 = (__int64 (__fastcall ***)(__int64))v15[1], v17 = **v15, v17 == sub_15B80) )
    {
      v18 = (*(__int64 (__fastcall **)(__int64 (__fastcall **)(_QWORD, _QWORD)))*v15[1])((__int64 (__fastcall **)(_QWORD, _QWORD))v15[1]);
    }
    else
    {
      v18 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), __int64 (__fastcall ***)(__int64)))v17)(
              v15,
              v87);
    }
    a2[1] = (__int64 (__fastcall ***)(__int64))((char *)a2[1] + 1);
    *(_BYTE *)v13 = v18;
    v19 = *a2;
    v20 = a2[1];
    v21 = ***a2;
    if ( v21 == sub_15B80
      && (v19 = (__int64 (__fastcall ***)(__int64))v19[1], v21 = **v19, v21 == sub_15B80)
      && (v19 = (__int64 (__fastcall ***)(__int64))v19[1], v21 = **v19, v21 == sub_15B80)
      && (v19 = (__int64 (__fastcall ***)(__int64))v19[1], v21 = **v19, v21 == sub_15B80) )
    {
      v22 = (*(__int64 (__fastcall **)(__int64 (__fastcall **)(__int64), __int64 (__fastcall ***)(__int64)))*v19[1])(
              v19[1],
              v20);
    }
    else
    {
      v22 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), __int64 (__fastcall ***)(__int64)))v21)(
              v19,
              v20);
    }
    v23 = v22;
    v24 = v22 & 0xF;
    a2[1] = (__int64 (__fastcall ***)(__int64))((char *)a2[1] + 1);
    v25 = v23 >> 4;
    *(_BYTE *)(v13 + 1) = v24;
    *(_DWORD *)(v13 + 8) = 0;
    switch ( v24 )
    {
      case 0:
        *(_BYTE *)(v13 + 2) = v25;
        v32 = 8;
        v16 = 1;
        *(_DWORD *)(v13 + 8) = 8;
        goto LABEL_24;
      case 1:
        if ( !v25 )
        {
          v59 = *a2;
          v60 = a2[1];
          v61 = (**a2)[1];
          if ( v61 == sub_15AD0 )
          {
            v62 = v59[1];
            v63 = *((__int64 (__fastcall **)(__int64))*v62 + 1);
            if ( v63 != v61 )
              goto LABEL_106;
            v59 = (__int64 (__fastcall ***)(__int64))v62[1];
            v61 = (*v59)[1];
            if ( v61 == v63 )
            {
              v62 = v59[1];
              v63 = *((__int64 (__fastcall **)(__int64))*v62 + 1);
              if ( v63 == v61 )
              {
                v64 = (*(__int64 (__fastcall **)(__int64 (__fastcall *)(__int64), __int64 (__fastcall ***)(__int64)))(*(_QWORD *)v62[1] + 8LL))(
                        v62[1],
                        v60);
LABEL_72:
                a2[1] = (__int64 (__fastcall ***)(__int64))((char *)a2[1] + 2);
                v16 = 2;
                LODWORD(v32) = 8 * v64;
                a7 = _mm_cvtsi32_si128(v32);
                v32 = (int)v32;
                a4.m128i_i64[0] = _mm_shuffle_epi32(a7, 224).m128i_u64[0];
                *(_QWORD *)(v13 + 4) = a4.m128i_i64[0];
                goto LABEL_24;
              }
LABEL_106:
              v64 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(__int64), __int64 (__fastcall ***)(__int64)))v63)(
                      v62,
                      v60);
              goto LABEL_72;
            }
          }
          v64 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), __int64 (__fastcall ***)(__int64)))v61)(
                  v59,
                  v60);
          goto LABEL_72;
        }
        if ( v25 != 1 )
        {
          sub_19A90(
            (__int64)&v93,
            (__int64)"%a: Invalid opinfo %d for UWOP_ALLOC_LARGE",
            *(double *)a4.m128i_i64,
            (_DWORD)v87);
          v43 = v93;
          v44 = _mm_loadu_si128(&v94);
          goto LABEL_60;
        }
        v80 = *a2;
        v81 = a2[1];
        v82 = (**a2)[2];
        if ( v82 != sub_15A20 )
          goto LABEL_101;
        v83 = v80[1];
        v84 = *((__int64 (__fastcall **)(__int64))*v83 + 2);
        if ( v84 != v82 )
          goto LABEL_105;
        v80 = (__int64 (__fastcall ***)(__int64))v83[1];
        v82 = (*v80)[2];
        if ( v82 == v84 )
        {
          v83 = v80[1];
          v84 = *((__int64 (__fastcall **)(__int64))*v83 + 2);
          if ( v84 == v82 )
            a4 = _mm_cvtsi32_si128(
                   (*(__int64 (__fastcall **)(__int64 (__fastcall *)(__int64), __int64 (__fastcall ***)(__int64)))(*(_QWORD *)v83[1] + 16LL))(
                     v83[1],
                     v81));
          else
LABEL_105:
            a4 = _mm_cvtsi32_si128(
                   ((__int64 (__fastcall *)(__int64 (__fastcall **)(__int64), __int64 (__fastcall ***)(__int64)))v84)(
                     v83,
                     v81));
        }
        else
        {
LABEL_101:
          a4 = _mm_cvtsi32_si128(
                 ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), __int64 (__fastcall ***)(__int64)))v82)(
                   v80,
                   v81));
        }
        *(_QWORD *)&a5 = _mm_shuffle_epi32(a4, 224).m128i_u64[0];
        a2[1] = (__int64 (__fastcall ***)(__int64))((char *)a2[1] + 4);
        v32 = (unsigned int)_mm_cvtsi128_si32(a4);
        v16 = 3;
        *(double *)(v13 + 4) = a5;
        goto LABEL_24;
      case 2:
        v16 = 1;
        LODWORD(v32) = 8 * (unsigned __int8)(v25 + 1);
        a6 = _mm_cvtsi32_si128(v32);
        v32 = (int)v32;
        a4.m128i_i64[0] = _mm_shuffle_epi32(a6, 224).m128i_u64[0];
        *(_QWORD *)(v13 + 4) = a4.m128i_i64[0];
        goto LABEL_24;
      case 3:
        *(_DWORD *)(v13 + 4) = 16 * v89;
        goto LABEL_40;
      case 4:
        goto LABEL_33;
      case 5:
      case 9:
        goto LABEL_18;
      case 6:
        if ( (_BYTE)v16 == 1 )
        {
          *(_BYTE *)(v13 + 1) = 22;
LABEL_33:
          *(_BYTE *)(v13 + 2) = v25;
          v37 = *a2;
          v38 = a2[1];
          v39 = (**a2)[1];
          if ( v39 == sub_15AD0 )
          {
            v40 = v37[1];
            v41 = *((__int64 (__fastcall **)(__int64))*v40 + 1);
            if ( v41 != v39 )
              goto LABEL_77;
            v37 = (__int64 (__fastcall ***)(__int64))v40[1];
            v39 = (*v37)[1];
            if ( v39 == v41 )
            {
              v40 = v37[1];
              v41 = *((__int64 (__fastcall **)(__int64))*v40 + 1);
              if ( v41 == v39 )
              {
                v42 = (*(__int64 (__fastcall **)(__int64 (__fastcall *)(__int64), __int64 (__fastcall ***)(__int64)))(*(_QWORD *)v40[1] + 8LL))(
                        v40[1],
                        v38);
LABEL_38:
                a2[1] = (__int64 (__fastcall ***)(__int64))((char *)a2[1] + 2);
                v16 = 2;
                *(_DWORD *)(v13 + 4) = 8 * v42;
                v32 = *(unsigned int *)(v13 + 8);
                goto LABEL_24;
              }
LABEL_77:
              v42 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(__int64), __int64 (__fastcall ***)(__int64)))v41)(
                      v40,
                      v38);
              goto LABEL_38;
            }
          }
          v42 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), __int64 (__fastcall ***)(__int64)))v39)(
                  v37,
                  v38);
          goto LABEL_38;
        }
        if ( (_BYTE)v16 != 2 )
        {
          sub_19A90(
            (__int64)&v93,
            (__int64)"%a: Invalid version %d for UWOP code 6",
            *(double *)a4.m128i_i64,
            (_DWORD)v87);
          v43 = v93;
          v44 = _mm_loadu_si128(&v94);
          goto LABEL_60;
        }
        *(_BYTE *)(v13 + 1) = 38;
        goto LABEL_81;
      case 7:
        if ( (_BYTE)v16 == 1 )
        {
          *(_BYTE *)(v13 + 1) = 23;
LABEL_18:
          *(_BYTE *)(v13 + 2) = v25;
          v26 = *a2;
          v27 = a2[1];
          v28 = (**a2)[2];
          if ( v28 == sub_15A20 )
          {
            v29 = v26[1];
            v30 = *((__int64 (__fastcall **)(__int64))*v29 + 2);
            if ( v30 != v28 )
              goto LABEL_78;
            v26 = (__int64 (__fastcall ***)(__int64))v29[1];
            v28 = (*v26)[2];
            if ( v28 == v30 )
            {
              v29 = v26[1];
              v30 = *((__int64 (__fastcall **)(__int64))*v29 + 2);
              if ( v30 == v28 )
              {
                v31 = (*(__int64 (__fastcall **)(__int64 (__fastcall *)(__int64), __int64 (__fastcall ***)(__int64)))(*(_QWORD *)v29[1] + 16LL))(
                        v29[1],
                        v27);
LABEL_23:
                a2[1] = (__int64 (__fastcall ***)(__int64))((char *)a2[1] + 4);
                v16 = 3;
                *(_DWORD *)(v13 + 4) = v31;
                v32 = *(unsigned int *)(v13 + 8);
                goto LABEL_24;
              }
LABEL_78:
              v31 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(__int64), __int64 (__fastcall ***)(__int64)))v30)(
                      v29,
                      v27);
              goto LABEL_23;
            }
          }
          v31 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), __int64 (__fastcall ***)(__int64)))v28)(
                  v26,
                  v27);
          goto LABEL_23;
        }
        if ( (_BYTE)v16 != 2 )
        {
          sub_19A90(
            (__int64)&v93,
            (__int64)"%a: Invalid version %d for UWOP code 7",
            *(double *)a4.m128i_i64,
            (_DWORD)v87);
          v43 = v93;
          v44 = _mm_loadu_si128(&v94);
          goto LABEL_60;
        }
        *(_BYTE *)(v13 + 1) = 39;
LABEL_81:
        v74 = *a2;
        v75 = a2[1];
        v76 = (**a2)[1];
        if ( v76 != sub_15AD0 )
          goto LABEL_103;
        v77 = v74[1];
        v78 = *((__int64 (__fastcall **)(__int64))*v77 + 1);
        if ( v78 != v76 )
          goto LABEL_104;
        v74 = (__int64 (__fastcall ***)(__int64))v77[1];
        v76 = (*v74)[1];
        if ( v76 == v78 )
        {
          v77 = v74[1];
          v78 = *((__int64 (__fastcall **)(__int64))*v77 + 1);
          if ( v78 == v76 )
            v79 = (*(__int64 (__fastcall **)(__int64 (__fastcall *)(__int64), __int64 (__fastcall ***)(__int64)))(*(_QWORD *)v77[1] + 8LL))(
                    v77[1],
                    v75);
          else
LABEL_104:
            v79 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(__int64), __int64 (__fastcall ***)(__int64)))v78)(
                    v77,
                    v75);
        }
        else
        {
LABEL_103:
          v79 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), __int64 (__fastcall ***)(__int64)))v76)(
                  v74,
                  v75);
        }
        a2[1] = (__int64 (__fastcall ***)(__int64))((char *)a2[1] + 2);
        *(_DWORD *)(v13 + 4) = v79;
        v32 = *(unsigned int *)(v13 + 8);
LABEL_24:
        *((_QWORD *)a3 + 12) += v32;
        v33 = a3[3];
        v10 += v16;
        if ( (unsigned __int8)v10 < v33 )
          continue;
        if ( (v33 & 1) != 0 )
          a2[1] = (__int64 (__fastcall ***)(__int64))((char *)a2[1] + 2);
LABEL_27:
        v34 = a3[1];
        if ( (v34 & 4) != 0 )
        {
          v85 = (unsigned __int64)a2[1];
          if ( v85 >= 0xFFFFFFFFFFFFFFF4LL )
          {
            sub_19A90((__int64)&v93, (__int64)"[%a,%a): bad range", *(double *)a4.m128i_i64, a5);
            v43 = v93;
            v44 = _mm_loadu_si128(&v94);
          }
          else
          {
            sub_74B30(v91, *a2 + 2, a2[1]);
            if ( v92 )
            {
              if ( v85 + 11 >= v91[0] && v85 + 11 < v91[1] )
              {
                v65 = sub_73440(*a2, a2[1]);
                v66 = *a2;
                v67 = v65;
                v68 = (__int64)a2[1] + 4;
                a2[1] = (__int64 (__fastcall ***)(__int64))v68;
                v69 = sub_73440(v66, v68);
                v70 = *a2;
                v71 = v69;
                v72 = (__int64)a2[1] + 4;
                a2[1] = (__int64 (__fastcall ***)(__int64))v72;
                v73 = sub_73440(v70, v72);
                a2[1] = (__int64 (__fastcall ***)(__int64))((char *)a2[1] + 4);
                if ( a3[56] )
                {
                  *((_QWORD *)a3 + 4) = v67;
                  *(__m128i *)(a3 + 40) = _mm_unpacklo_epi64(
                                            (__m128i)(unsigned __int64)v71,
                                            (__m128i)(unsigned __int64)v73);
                }
                else
                {
                  *((_QWORD *)a3 + 4) = v67;
                  *((_QWORD *)a3 + 5) = v71;
                  *((_QWORD *)a3 + 6) = v73;
                  a3[56] = 1;
                }
                v34 = a3[1];
                if ( (v34 & 4) == 0 )
                  goto LABEL_28;
                goto LABEL_76;
              }
              sub_19A90(
                (__int64)&v93,
                (__int64)"[%a,%a): does not fit in segment [%a,%a)",
                *(double *)a4.m128i_i64,
                a5,
                *(double *)a6.m128i_i64,
                *(double *)a7.m128i_i64);
              v43 = v93;
              v44 = _mm_loadu_si128(&v94);
            }
            else
            {
              sub_19A90((__int64)&v93, (__int64)"[%a,%a): no associated segment", *(double *)a4.m128i_i64, a5);
              v43 = v93;
              v44 = _mm_loadu_si128(&v94);
            }
          }
LABEL_60:
          *(_QWORD *)a1 = v43;
          *(_BYTE *)(a1 + 24) = 1;
          *(__m128i *)(a1 + 8) = v44;
          return a1;
        }
LABEL_28:
        if ( (v34 & 3) == 0 )
        {
LABEL_76:
          *(_BYTE *)(a1 + 24) = 0;
          return a1;
        }
        sub_74310(&v93, *a2);
        if ( v95 )
        {
          v86 = _mm_loadu_si128(&v94);
          *(_QWORD *)a1 = v93;
          *(_BYTE *)(a1 + 24) = 1;
          *(__m128i *)(a1 + 8) = v86;
        }
        else
        {
          v35 = v93;
          a2[1] = (__int64 (__fastcall ***)(__int64))((char *)a2[1] + 4);
          a3[72] = 1;
          *((_QWORD *)a3 + 8) = v35;
          v36 = a2[1];
          a3[88] = 1;
          *((_QWORD *)a3 + 10) = v36;
          *(_BYTE *)(a1 + 24) = 0;
        }
        return a1;
      case 8:
        *(_BYTE *)(v13 + 2) = v25;
        v45 = *a2;
        v46 = a2[1];
        v47 = (**a2)[1];
        if ( v47 != sub_15AD0 )
          goto LABEL_94;
        v48 = v45[1];
        v49 = *((__int64 (__fastcall **)(__int64))*v48 + 1);
        if ( v49 != v47 )
          goto LABEL_100;
        v45 = (__int64 (__fastcall ***)(__int64))v48[1];
        v47 = (*v45)[1];
        if ( v47 == v49 )
        {
          v48 = v45[1];
          v49 = *((__int64 (__fastcall **)(__int64))*v48 + 1);
          if ( v49 == v47 )
            v50 = (*(__int64 (__fastcall **)(__int64 (__fastcall *)(__int64), __int64 (__fastcall ***)(__int64)))(*(_QWORD *)v48[1] + 8LL))(
                    v48[1],
                    v46);
          else
LABEL_100:
            v50 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(__int64), __int64 (__fastcall ***)(__int64)))v49)(
                    v48,
                    v46);
        }
        else
        {
LABEL_94:
          v50 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), __int64 (__fastcall ***)(__int64)))v47)(
                  v45,
                  v46);
        }
        a2[1] = (__int64 (__fastcall ***)(__int64))((char *)a2[1] + 2);
        v16 = 2;
        *(_DWORD *)(v13 + 4) = 16 * v50;
        v32 = *(unsigned int *)(v13 + 8);
        goto LABEL_24;
      case 10:
        *(_BYTE *)(v13 + 4) = v25;
LABEL_40:
        v32 = 0;
        v16 = 1;
        goto LABEL_24;
      default:
        sub_19A90((__int64)&v93, (__int64)"%a: Invalid UWOP code %d", *(double *)a4.m128i_i64, (_DWORD)v87);
        v43 = v93;
        v44 = _mm_loadu_si128(&v94);
        goto LABEL_60;
    }
  }
}
