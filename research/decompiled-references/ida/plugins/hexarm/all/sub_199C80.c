__int64 __fastcall sub_199C80(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int16 *v7; // r15
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // r13
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rax
  __int16 v20; // r11
  __int64 v21; // rcx
  unsigned __int64 *v22; // rsi
  _DWORD *v23; // rdi
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  _QWORD *v27; // r10
  __int64 v28; // r8
  _QWORD *v29; // r11
  __int64 *v30; // r15
  unsigned __int64 v31; // r14
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r14
  __int64 v35; // rax
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  unsigned __int64 v42; // r13
  __int64 v43; // rbp
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // r10
  __int32 v47; // eax
  _QWORD *v48; // r11
  __int64 *v49; // rax
  bool v50; // zf
  unsigned __int64 *v51; // rsi
  __int64 v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int32 v57; // edx
  __int32 v58; // eax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r14
  const __m128i *v62; // rdi
  __int64 v63; // rcx
  __int64 v64; // rdx
  __m128i v65; // xmm0
  char v67; // al
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // [rsp+8h] [rbp-A0h]
  _QWORD *v74; // [rsp+8h] [rbp-A0h]
  _QWORD *v75; // [rsp+8h] [rbp-A0h]
  _QWORD *v76; // [rsp+8h] [rbp-A0h]
  _QWORD *v77; // [rsp+8h] [rbp-A0h]
  _QWORD *v78; // [rsp+8h] [rbp-A0h]
  unsigned __int64 *v79; // [rsp+10h] [rbp-98h]
  unsigned __int64 *v80; // [rsp+18h] [rbp-90h]
  _QWORD *v81; // [rsp+20h] [rbp-88h]
  __int64 v82; // [rsp+20h] [rbp-88h]
  __int16 v83; // [rsp+28h] [rbp-80h]
  _QWORD *v84; // [rsp+28h] [rbp-80h]
  unsigned __int64 v85; // [rsp+38h] [rbp-70h] BYREF
  __m128i v86; // [rsp+40h] [rbp-68h] BYREF
  __m128i v87; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v88; // [rsp+68h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  if ( a3 < 0 )
    return 0;
  v6 = a1[6];
  v87.m128i_i64[0] = -1;
  v86 = (__m128i)-1LL;
  v87.m128i_i64[1] = -1;
  v7 = (__int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  v8 = sub_199960(a1, (__int64 *)&v85, a3, *v7, *((char *)v7 + 10));
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *((_BYTE *)v8 + 64) ? v8[4] : v85;
  v11 = (_QWORD *)a1[6];
  v86.m128i_i64[0] = v10;
  v12 = (_QWORD *)v11[35];
  v13 = v12[18];
  if ( v10 < v13
    || v10 >= v13 + *(_DWORD *)(v12[188] + 80LL) * *(_DWORD *)(v12[187] + 656LL)
    || v10 % *(char *)((*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11) + 12) )
  {
    return 0;
  }
  v15 = sub_199960(a1, (__int64 *)&v85, a3, v7[1], *((char *)v7 + 10));
  v80 = v15;
  v16 = -1;
  if ( v15 )
  {
    if ( *((_BYTE *)v15 + 64) )
      v16 = v15[5];
    else
      v16 = v85;
  }
  v86.m128i_i64[1] = v16;
  v17 = v7[2];
  v79 = nullptr;
  if ( (_WORD)v17 != 0xFFFF )
  {
    v51 = sub_199960(a1, (__int64 *)&v85, a3, v17, *((char *)v7 + 10));
    v79 = v51;
    v52 = -1;
    if ( v51 )
    {
      if ( *((_BYTE *)v51 + 64) )
        v52 = v51[6];
      else
        v52 = v85;
    }
    v87.m128i_i64[0] = v52;
  }
  v18 = v7[4];
  v73 = *((char *)v7 + 11);
  v19 = v7[3];
  v20 = v7[4];
  v21 = v19;
  if ( v20 > (__int16)v19 )
  {
    if ( *((char *)v7 + 11) + (_DWORD)v19 != v18 )
      goto LABEL_49;
  }
  else if ( v73 + v18 != (_DWORD)v19 )
  {
    goto LABEL_49;
  }
  v22 = &v85;
  if ( v20 > (__int16)v19 )
    v20 = v7[3];
  v23 = a1;
  v83 = v20;
  v24 = sub_199960(a1, (__int64 *)&v85, a3, v20, 2 * v73);
  v27 = v24;
  if ( !v24 )
  {
    v21 = v7[3];
LABEL_49:
    v45 = sub_199960(a1, (__int64 *)&v85, a3, v21, v73);
    v46 = v45;
    if ( v45 )
    {
      if ( *((_BYTE *)v45 + 64) )
      {
        v47 = *((_DWORD *)v45 + 14);
        v48 = v46 + 3;
      }
      else
      {
        v47 = v85;
        v48 = nullptr;
      }
      v87.m128i_i32[2] = v47;
      v22 = &v85;
      v23 = a1;
      v84 = v48;
      v81 = v46;
      v49 = sub_199960(a1, (__int64 *)&v85, a3, v7[4], v73);
      v27 = v81;
      v29 = v84;
      v30 = v49;
      if ( v49 )
      {
        if ( *((_BYTE *)v49 + 64) )
        {
          v50 = *((_BYTE *)v81 + 64) == 0;
          v87.m128i_i32[3] = *((_DWORD *)v49 + 15);
          if ( !v50 )
            goto LABEL_55;
          return 0;
        }
        v50 = *((_BYTE *)v81 + 64) == 0;
        v87.m128i_i32[3] = v85;
        if ( !v50 )
          return 0;
      }
      else
      {
        v87.m128i_i32[3] = -1;
      }
      if ( v84 )
        goto LABEL_21;
      goto LABEL_65;
    }
    v22 = &v85;
    v23 = a1;
    v87.m128i_i32[2] = -1;
    v53 = sub_199960(a1, (__int64 *)&v85, a3, v7[4], v73);
    v30 = v53;
    if ( v53 )
    {
      v27 = nullptr;
      if ( !*((_BYTE *)v53 + 64) )
      {
        v87.m128i_i32[3] = v85;
        goto LABEL_65;
      }
      v87.m128i_i32[3] = *((_DWORD *)v53 + 15);
LABEL_55:
      v29 = v30 + 3;
      goto LABEL_21;
    }
    return 0;
  }
  v28 = (unsigned int)(2 * v73);
  if ( *((_BYTE *)v24 + 64) )
  {
    v29 = v24 + 3;
    v30 = nullptr;
    v87.m128i_i64[1] = v24[7];
LABEL_21:
    *(_DWORD *)(a2 + 8) |= 2u;
    *(_QWORD *)(a2 + 88) = *v29;
    goto LABEL_22;
  }
  v75 = v24;
  v67 = sub_1997E0((__int64)a1, (__int64)&v86, v83, v85, v28);
  v27 = v75;
  if ( !v67 )
  {
    if ( !under_debugger )
      sub_3835A0(51479);
    BUG();
  }
  v30 = nullptr;
LABEL_65:
  v74 = v27;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __m128i *))(*(_QWORD *)a1[6] + 48LL))(a1[6], &v86) )
    return 0;
  sub_1992D0(a1[6], (__int64)&v86);
  v22 = (unsigned __int64 *)a2;
  (*(void (__fastcall **)(_QWORD, __int64, __m128i *))(*(_QWORD *)a1[6] + 56LL))(a1[6], a2, &v86);
  v23 = (_DWORD *)a1[6];
  v54 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 32LL))(v23);
  v27 = v74;
  v55 = *(_QWORD *)(v54 + 8);
  if ( v55 == -1 )
  {
    v56 = *(_QWORD *)(v54 + 16);
    if ( v56 == -1 || v56 == v87.m128i_i64[0] )
      goto LABEL_74;
LABEL_98:
    v23 = (_DWORD *)a1[6];
    goto LABEL_71;
  }
  if ( v55 == v86.m128i_i64[1] )
  {
    v56 = *(_QWORD *)(v54 + 16);
    if ( v56 == -1 || v87.m128i_i64[0] == v56 )
      goto LABEL_74;
    goto LABEL_98;
  }
  v23 = (_DWORD *)a1[6];
  if ( *(_DWORD *)(a2 + 40) != v23[6] )
    return 0;
  v86.m128i_i64[1] = *(_QWORD *)(v54 + 8);
  v56 = *(_QWORD *)(v54 + 16);
  if ( v56 == -1 || v87.m128i_i64[0] == v56 )
    goto LABEL_73;
LABEL_71:
  if ( *(_DWORD *)(a2 + 64) != v23[12] )
    return 0;
  v87.m128i_i64[0] = v56;
LABEL_73:
  v82 = v54;
  v22 = (unsigned __int64 *)a2;
  (*(void (__fastcall **)(_DWORD *, __int64, __m128i *))(*(_QWORD *)v23 + 56LL))(v23, a2, &v86);
  v54 = v82;
  v27 = v74;
LABEL_74:
  v57 = *(_DWORD *)(v54 + 24);
  if ( v57 != -1 && v57 > v87.m128i_i32[2] )
    return 0;
  v58 = *(_DWORD *)(v54 + 28);
  if ( v58 != -1 && v58 > v87.m128i_i32[3] )
    return 0;
  v25 = *(unsigned int *)(a2 + 40);
  if ( !(_DWORD)v25
    && !*(_DWORD *)(a2 + 64)
    && ((*(_BYTE *)(*(_QWORD *)(*a1 + 112LL) + 48LL) & 0x20) == 0
     || *(_QWORD *)(a2 + 80) == *(_QWORD *)(*(_QWORD *)(a1[6] + 280LL) + 144LL)) )
  {
    return 0;
  }
LABEL_22:
  v31 = *v9;
  if ( !*v9 )
    goto LABEL_102;
  v32 = *(_QWORD *)(a2 + 104);
  v22 = *(unsigned __int64 **)(a2 + 96);
  if ( *(_QWORD *)(a2 + 112) < (unsigned __int64)(v32 + 1) )
  {
    v23 = (_DWORD *)(a2 + 96);
    v77 = v27;
    v69 = qvector_reserve();
    v27 = v77;
    *(_QWORD *)(a2 + 96) = v69;
    v22 = (unsigned __int64 *)v69;
    v32 = *(_QWORD *)(a2 + 104);
  }
  v22[v32] = v31;
  v25 = *(_QWORD *)(a2 + 104);
  v26 = v25 + 1;
  *(_QWORD *)(a2 + 104) = v25 + 1;
  if ( v80 )
  {
    v33 = *v80;
    if ( !*v80 )
      goto LABEL_102;
    v22 = *(unsigned __int64 **)(a2 + 96);
    v25 += 2LL;
    if ( *(_QWORD *)(a2 + 112) < v25 )
    {
      v23 = (_DWORD *)(a2 + 96);
      v76 = v27;
      v68 = qvector_reserve();
      v26 = *(_QWORD *)(a2 + 104);
      v27 = v76;
      *(_QWORD *)(a2 + 96) = v68;
      v22 = (unsigned __int64 *)v68;
    }
    v22[v26] = v33;
    ++*(_QWORD *)(a2 + 104);
  }
  if ( v79 )
  {
    v34 = *v79;
    if ( !*v79 )
      goto LABEL_102;
    v35 = *(_QWORD *)(a2 + 104);
    v22 = *(unsigned __int64 **)(a2 + 96);
    v25 = v35 + 1;
    if ( *(_QWORD *)(a2 + 112) < (unsigned __int64)(v35 + 1) )
    {
      v23 = (_DWORD *)(a2 + 96);
      v78 = v27;
      v72 = qvector_reserve();
      v27 = v78;
      *(_QWORD *)(a2 + 96) = v72;
      v22 = (unsigned __int64 *)v72;
      v35 = *(_QWORD *)(a2 + 104);
    }
    v22[v35] = v34;
    ++*(_QWORD *)(a2 + 104);
  }
  if ( v27 )
  {
    v36 = *v27;
    if ( !*v27 )
      goto LABEL_102;
    v37 = *(_QWORD *)(a2 + 104);
    v22 = *(unsigned __int64 **)(a2 + 96);
    v25 = v37 + 1;
    if ( *(_QWORD *)(a2 + 112) < (unsigned __int64)(v37 + 1) )
    {
      v23 = (_DWORD *)(a2 + 96);
      v71 = qvector_reserve();
      *(_QWORD *)(a2 + 96) = v71;
      v22 = (unsigned __int64 *)v71;
      v37 = *(_QWORD *)(a2 + 104);
    }
    v22[v37] = v36;
    ++*(_QWORD *)(a2 + 104);
  }
  if ( v30 )
  {
    v38 = *v30;
    if ( *v30 )
    {
      v39 = *(_QWORD *)(a2 + 104);
      v40 = *(_QWORD *)(a2 + 96);
      if ( *(_QWORD *)(a2 + 112) < (unsigned __int64)(v39 + 1) )
      {
        v70 = qvector_reserve();
        *(_QWORD *)(a2 + 96) = v70;
        v40 = v70;
        v39 = *(_QWORD *)(a2 + 104);
      }
      *(_QWORD *)(v40 + 8 * v39) = v38;
      ++*(_QWORD *)(a2 + 104);
      goto LABEL_45;
    }
LABEL_102:
    sub_194F00(v23, v22, v25, v26, v28);
  }
LABEL_45:
  *(_QWORD *)(a2 + 72) = a3;
  v41 = a1[9];
  v42 = a1[10];
  if ( v42 < v41 + 1 )
  {
    v59 = qvector_reserve();
    v60 = a1[9];
    v61 = a1[10];
    a1[10] = v42;
    v62 = (const __m128i *)a1[8];
    v43 = v59;
    v63 = v60 - 1;
    if ( v63 >= 0 )
    {
      v64 = v59;
      do
      {
        v65 = _mm_loadu_si128(v62);
        v64 += 40;
        v62 = (const __m128i *)((char *)v62 + 40);
        *(__m128i *)(v64 - 40) = v65;
        *(__m128i *)(v64 - 24) = _mm_loadu_si128((const __m128i *)((char *)v62 - 24));
        *(_QWORD *)(v64 - 8) = v62[-1].m128i_i64[1];
      }
      while ( v63-- != 0 );
    }
    qfree();
    a1[8] = v43;
    v41 = a1[9];
    a1[10] = v61;
  }
  else
  {
    v43 = a1[8];
  }
  v44 = v43 + 40 * v41;
  *(_OWORD *)v44 = -1;
  *(_OWORD *)(v44 + 16) = -1;
  *(_QWORD *)(v44 + 32) = -1;
  ++a1[9];
  *(_QWORD *)v44 = a3;
  *(__m128i *)(v44 + 8) = _mm_load_si128(&v86);
  *(__m128i *)(v44 + 24) = _mm_load_si128(&v87);
  return 1;
}

