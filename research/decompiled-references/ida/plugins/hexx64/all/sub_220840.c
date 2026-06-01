__int64 __fastcall sub_220840(
        __m128i *a1,
        __int64 a2,
        __m128i *a3,
        unsigned int *a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  __int64 v14; // r14
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned int *v23; // rax
  __int32 v24; // eax
  int v25; // edx
  int v26; // esi
  __int64 v27; // rdx
  char *v28; // rax
  __int64 v29; // rcx
  char *v30; // r13
  unsigned int v31; // r15d
  __int64 v33; // rax
  int v34; // edx
  int v35; // esi
  __int64 v36; // rdi
  __int64 v37; // r13
  int v38; // r8d
  int v39; // r9d
  __int64 *v40; // r14
  __int64 v41; // rdi
  _QWORD *v42; // r13
  char v43; // al
  unsigned __int64 that; // rax
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // edx
  int v50; // esi
  _DWORD *v51; // r14
  __int64 v52; // [rsp-10h] [rbp-110h]
  __int64 v53; // [rsp+0h] [rbp-100h]
  unsigned int v54; // [rsp+8h] [rbp-F8h]
  unsigned int v55; // [rsp+8h] [rbp-F8h]
  __int64 v56; // [rsp+8h] [rbp-F8h]
  __m128i v57; // [rsp+10h] [rbp-F0h] BYREF
  __int64 *v58; // [rsp+20h] [rbp-E0h]
  int v59; // [rsp+28h] [rbp-D8h]
  int v60; // [rsp+2Ch] [rbp-D4h]
  __int64 *v61; // [rsp+30h] [rbp-D0h]
  unsigned int *v62; // [rsp+38h] [rbp-C8h]
  __int64 v63[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 *v64[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v65[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v66; // [rsp+80h] [rbp-80h]
  __int128 v67; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall **v68)(); // [rsp+A0h] [rbp-60h] BYREF
  __m128i *v69; // [rsp+A8h] [rbp-58h]
  __int64 v70; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v71; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v72; // [rsp+C8h] [rbp-38h]

  v60 = a5;
  v72 = __readfsqword(0x28u);
  v62 = a4;
  sub_127A20((__int64)v63, (__int64)a3, (__int64)a4, 1, a5, a6, a7, a8);
  v58 = (__int64 *)&v68;
  sub_127A20((__int64)&v68, (__int64)a3, (__int64)v62, 256, v11, v12, a7, a8);
  v61 = &a1[1].m128i_i64[1];
  sub_648D0(&a1[1].m128i_i64[1], (const void **)&v68, a7);
  v13 = a1[2].m128i_i64[1];
  v14 = v70;
  v70 = 0;
  v15 = _mm_loadu_si128(&v71);
  v71 = 0;
  if ( v13 )
  {
    a1[3].m128i_i64[0] = 0;
    v57 = v15;
    qfree(v13);
    v16 = v70;
    a1[2].m128i_i64[1] = v14;
    v15 = _mm_load_si128(&v57);
    a1[3] = v15;
    if ( v16 )
    {
      v71.m128i_i64[0] = 0;
      qfree(v16);
    }
  }
  else
  {
    a1[2].m128i_i64[1] = v14;
    a1[3] = v15;
  }
  qfree((__int64)v68);
  sub_64640(v63, v61, v17, v18, v19, v20);
  v57.m128i_i64[0] = (__int64)&a1[2].m128i_i64[1];
  sub_317C60((__int64 *)v64, (__int64)&a1[2].m128i_i64[1]);
  v21 = a1[2].m128i_i64[1];
  if ( v21 )
  {
    a1[3].m128i_i64[0] = 0;
    qfree(v21);
    a1[2].m128i_i64[1] = 0;
    a1[3].m128i_i64[1] = 0;
  }
  if ( sub_64930(v63, a1->m128i_i32[0]) )
    goto LABEL_36;
  if ( !a1[4].m128i_i8[0] || v60 == 1 )
    goto LABEL_9;
  v34 = a1->m128i_i32[2];
  v35 = a1->m128i_i32[1];
  v68 = nullptr;
  v69 = nullptr;
  sub_63E80(v58, v35, v34, *(double *)v15.m128i_i64);
  v15.m128i_i64[0] = 0;
  v70 = 0;
  v71 = 0;
  if ( (unsigned __int8)sub_64780(v63, v58) )
  {
    v36 = v70;
    if ( !v70 )
    {
LABEL_43:
      qfree((__int64)v68);
      a1[4].m128i_i8[0] = 0;
      goto LABEL_9;
    }
LABEL_42:
    v71.m128i_i64[0] = 0;
    qfree(v36);
    goto LABEL_43;
  }
  v43 = sub_318470(v64, (__int64)&v70);
  v36 = v70;
  if ( v43 )
  {
    if ( !v70 )
      goto LABEL_43;
    goto LABEL_42;
  }
  if ( v70 )
  {
    v71.m128i_i64[0] = 0;
    qfree(v70);
  }
  qfree((__int64)v68);
LABEL_9:
  if ( *(_BYTE *)(a2 + 32) != 1 )
    sub_21BD20(*(double *)v15.m128i_i64);
  if ( a1->m128i_i32[0] == *(_DWORD *)(a2 + 24) )
  {
    v42 = (_QWORD *)a1[1].m128i_i64[0];
    if ( (unsigned __int8)sub_64820(v42, v61) )
    {
      if ( (unsigned __int8)sub_317F40((__int64 *)v57.m128i_i64[0], (__int64)(v42 + 2)) )
        goto LABEL_56;
    }
  }
  v22 = *v62;
  if ( (_DWORD)v22 == 61 )
  {
    if ( !sub_64930(v61, a1->m128i_i32[0]) )
    {
      v22 = *v62;
      goto LABEL_12;
    }
LABEL_36:
    v31 = 0;
    goto LABEL_32;
  }
LABEL_12:
  if ( (unsigned int)(v22 - 8) > 1 )
  {
LABEL_37:
    if ( (unsigned int)v22 <= 0x29 )
    {
      v33 = 0x3FF60000040LL;
      if ( _bittest64(&v33, v22) )
        goto LABEL_31;
    }
  }
  else
  {
    v23 = v62;
    while ( *((_BYTE *)v23 + 32) == 4 )
    {
      v23 = *((unsigned int **)v23 + 5);
      v22 = *v23;
      if ( (unsigned int)(v22 - 8) > 1 )
        goto LABEL_37;
    }
  }
  if ( !a1[4].m128i_i8[0] )
  {
LABEL_29:
    if ( (unsigned int)sub_64B20((__int64)v61) == 1 && *v62 == 19 )
    {
      v37 = *((_QWORD *)v62 + 2);
      if ( v37 )
      {
        if ( *(_BYTE *)(v37 + 64) == 1 && v62[18] == *(_DWORD *)(v37 + 72) && sub_11E8C0(*((unsigned int **)v62 + 2)) )
        {
          v40 = v58;
          sub_127A20((__int64)v58, (__int64)a3, v37, 256, v38, v39, *(double *)v15.m128i_i64, (__m128)0LL);
          sub_21C010(v61, (__int64)v40, *(double *)v15.m128i_i64);
          sub_93B40(v40);
          v41 = a1[2].m128i_i64[1];
          if ( v41 )
          {
            a1[3].m128i_i64[0] = 0;
            qfree(v41);
            a1[2].m128i_i64[1] = 0;
            a1[3].m128i_i64[1] = 0;
          }
        }
      }
    }
    if ( v60 == 1 && a1[4].m128i_i8[0] && 2 * a1->m128i_i32[2] == (unsigned int)sub_64B20((__int64)v61) )
    {
LABEL_56:
      v31 = 1;
      goto LABEL_32;
    }
LABEL_31:
    v31 = 3;
    goto LABEL_32;
  }
  v59 = sub_64960(v61, 0);
  v24 = a1->m128i_i32[0];
  v25 = a1->m128i_i32[2];
  v26 = a1->m128i_i32[1];
  v65[0] = 0;
  v57.m128i_i32[0] = v24;
  v65[1] = 0;
  sub_63E80(v65, v26, v25, *(double *)v15.m128i_i64);
  v15.m128i_i64[0] = 0;
  v27 = a3[3].m128i_i64[1];
  v66 = 0;
  v67 = 0;
  v28 = (char *)sub_129150((__int64)a3, v65, v27, 0, 0, 0, 0.0, (__m128)0LL, 0x101u);
  v30 = v28;
  if ( v28 && *(_DWORD *)v28 != 61 )
  {
    if ( v60 != 1 )
    {
      v53 = *(_QWORD *)(a3[30].m128i_i64[0] + 112);
      v54 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)v53 + 176LL))(
              v53,
              a1->m128i_u32[1],
              a1->m128i_u32[2],
              v29,
              v52);
      if ( v54 != -1 )
      {
        that = next_that();
        if ( sub_32E930(v58, v53, v54, a3[2].m128i_u64[1], that, a3[2].m128i_u64[1]) )
        {
          if ( !*(_BYTE *)(a3[30].m128i_i64[0] + 145) )
            goto LABEL_25;
          v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v53 + 176LL))(
                  v53,
                  a1->m128i_u32[0],
                  a1->m128i_u32[2]);
          if ( v45 == -1
            || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall **)()))(*(_QWORD *)v53 + 240LL))(
                 v53,
                 v45,
                 v68) != 1 )
          {
            goto LABEL_25;
          }
        }
      }
      if ( (v60 & 2) == 0 )
      {
LABEL_22:
        if ( (*(_DWORD *)v30 == 4 || *(_DWORD *)v30 == 67 && *((_DWORD *)v30 + 9) == *((_DWORD *)v30 + 17))
          && (unsigned __int8)sub_11FD80(v30 + 32, v58, 0)
          && !v68 )
        {
          goto LABEL_65;
        }
        if ( (a1->m128i_i8[12] & 4) == 0 )
        {
          v48 = a3[3].m128i_i64[1];
          v49 = a1->m128i_i32[2];
          v68 = nullptr;
          v50 = a1->m128i_i32[0];
          v69 = nullptr;
          v56 = v48;
          sub_63E80(v58, v50, v49, 0.0);
          v15.m128i_i64[0] = 0;
          v70 = 0;
          v71 = 0;
          v51 = (_DWORD *)sub_129150((__int64)a3, v58, v56, 0, 0, 0, 0.0, (__m128)0LL, 0x101u);
          if ( v70 )
          {
            v71.m128i_i64[0] = 0;
            qfree(v70);
          }
          qfree((__int64)v68);
          if ( v51 )
          {
            if ( *v51 == *(_DWORD *)v30 && (unsigned int)(*v51 - 12) <= 1 )
            {
LABEL_81:
              v31 = 2;
              goto LABEL_61;
            }
          }
        }
LABEL_25:
        if ( v57.m128i_i32[0] == v59 )
        {
LABEL_26:
          if ( v66 )
          {
            *(_QWORD *)&v67 = 0;
            qfree(v66);
          }
          qfree(v65[0]);
          goto LABEL_29;
        }
LABEL_64:
        a1[4].m128i_i8[0] = 0;
        goto LABEL_65;
      }
      v55 = (unsigned __int8)(*(_BYTE *)(a3[30].m128i_i64[0] + 145) ^ (v57.m128i_i32[0] != v59)) | 0xE;
      if ( (unsigned __int8)sub_AB6D0(a3, v62, (int)v62 + 64, v55, 0.0) )
        goto LABEL_81;
      v69 = a3;
      v71.m128i_i16[0] = 257;
      v70 = v55;
      v68 = off_4DF7C0;
      v71.m128i_i8[2] = 0;
      if ( !(unsigned __int8)sub_AA9B0((__int64)v58, v62, v46, v47) )
      {
        if ( v71.m128i_i8[2] && (a1->m128i_i8[12] & 4) == 0 )
          goto LABEL_81;
        goto LABEL_22;
      }
    }
LABEL_65:
    v31 = 1;
    goto LABEL_61;
  }
  if ( v57.m128i_i32[0] == v59 )
    goto LABEL_26;
  v31 = 0;
  if ( v60 != 1 )
    goto LABEL_64;
LABEL_61:
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  qfree(v65[0]);
LABEL_32:
  if ( v64[0] )
  {
    v64[1] = nullptr;
    qfree((__int64)v64[0]);
  }
  qfree(v63[0]);
  return v31;
}

