__int64 __fastcall sub_DD20(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm0
  void *v13; // r14
  __m128i v14; // xmm0
  void *v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  char v18; // al
  bool v19; // cc
  __int64 v20; // r14
  unsigned int v21; // r13d
  int v22; // r15d
  __int64 v23; // rax
  __int8 v24; // al
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  _BYTE *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 *v35; // rax
  __int64 v36; // rdi
  size_t v37; // r12
  __int64 v38; // rax
  size_t v39; // r8
  __int64 v40; // rsi
  __int64 v41; // rdi
  _BYTE *v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r12
  __int64 v45; // rsi
  unsigned __int64 v46; // rdx
  char v47; // al
  __int64 v48; // r12
  __int64 v49; // rsi
  __int8 v50; // al
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // r12
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int8 v57; // di
  __int64 v58; // r13
  __int64 v59; // r15
  _BYTE *v60; // r12
  __int64 v61; // rbx
  const char *v62; // rsi
  const char *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // [rsp+20h] [rbp-E0h]
  size_t n; // [rsp+28h] [rbp-D8h]
  __int64 na; // [rsp+28h] [rbp-D8h]
  size_t nb; // [rsp+28h] [rbp-D8h]
  void *v72; // [rsp+30h] [rbp-D0h]
  __int8 v73; // [rsp+30h] [rbp-D0h]
  size_t v74; // [rsp+30h] [rbp-D0h]
  __int64 v75; // [rsp+40h] [rbp-C0h]
  int v76; // [rsp+48h] [rbp-B8h]
  int v77; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v78; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v79; // [rsp+48h] [rbp-B8h]
  __m128i v80; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v81; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v82; // [rsp+68h] [rbp-98h] BYREF
  __int64 v83; // [rsp+70h] [rbp-90h] BYREF
  __int128 v84; // [rsp+78h] [rbp-88h]
  void *src; // [rsp+90h] [rbp-70h] BYREF
  __m128i v86; // [rsp+98h] [rbp-68h] BYREF
  __int128 v87; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v88; // [rsp+C8h] [rbp-38h]

  v88 = __readfsqword(0x28u);
  v1 = a1;
  v2 = sub_BB20();
  if ( (unsigned int)sub_A170(v2) != 501 )
    return 0;
  v4 = sub_BB20();
  v5 = sub_B130(v4);
  v75 = v5;
  v6 = sub_BB20();
  sub_A1D0((__int64)&v87, v6, v7, v8);
  v82 = 0;
  v81 = 0;
  v9 = sub_BB20();
  sub_AF80(v9, v5, (__int64)&v82, (__int64)&v81);
  if ( !v82 || !v81 )
    return 0;
  sub_C5F0((__int64)&src, v5);
  v10 = src;
  v11 = *a1;
  v12 = _mm_loadu_si128(&v86);
  src = nullptr;
  v13 = v10;
  v86 = 0;
  if ( v11 )
  {
    v1[1] = 0;
    v80 = v12;
    qfree(v11);
    v14 = _mm_load_si128(&v80);
    v15 = src;
    *v1 = v13;
    *(__m128i *)(v1 + 1) = v14;
    if ( v15 )
    {
      v86.m128i_i64[0] = 0;
      qfree(v15);
    }
  }
  else
  {
    *v1 = v10;
    *(__m128i *)(v1 + 1) = v12;
  }
  v16 = sub_BB20();
  v17 = sub_B0A0(v16);
  v83 = 0;
  v84 = 0;
  v18 = v17 != 0;
  v19 = v81 <= 1;
  *((_BYTE *)v1 + 52) = v18;
  if ( !v19 )
  {
    v80.m128i_i8[0] = 0;
    v20 = 24;
    v21 = 1;
    v22 = 0;
    while ( 1 )
    {
      v23 = sub_BB20();
      v76 = sub_AFE0(v23);
      sub_C5F0((__int64)&src, v75);
      v24 = *((_BYTE *)v1 + 52);
      if ( v24 )
      {
        if ( v76 == 2 && v22 == 1 )
        {
          v72 = nullptr;
          v25 = v86.m128i_i64[0];
          if ( v86.m128i_i64[0] )
          {
            na = v86.m128i_i64[0];
            v72 = (void *)qalloc_or_throw(v86.m128i_i64[0]);
            memcpy(v72, src, na);
            v25 = na;
          }
          v26 = v84;
          v27 = v83;
          if ( *((_QWORD *)&v84 + 1) < (unsigned __int64)(v84 + 1) )
          {
            nb = v25;
            v83 = qvector_reserve(&v83, v83, v84 + 1, 24);
            v26 = v84;
            v27 = v83;
            v25 = nb;
          }
          v28 = v27 + 24 * v26;
          *(_QWORD *)v28 = v72;
          *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
          *(_QWORD *)&v84 = v84 + 1;
          if ( *((_BYTE *)v1 + 52) )
            goto LABEL_50;
          if ( !v80.m128i_i8[0] )
          {
            v29 = v86.m128i_i64[0];
            if ( !v86.m128i_i64[0] )
            {
LABEL_20:
              v80.m128i_i8[0] = 1;
              v30 = src;
              goto LABEL_21;
            }
            goto LABEL_37;
          }
        }
        else
        {
          if ( v22 != 2 )
          {
            if ( !v22 )
              goto LABEL_45;
LABEL_50:
            v42 = src;
            goto LABEL_51;
          }
          if ( !v80.m128i_i8[0] )
            goto LABEL_69;
        }
      }
      else if ( !v80.m128i_i8[0] )
      {
        goto LABEL_36;
      }
      v51 = sub_BB20();
      if ( (unsigned int)sub_B040(v51) || (v52 = sub_BB20(), (unsigned int)sub_B070(v52)) )
      {
        v53 = v1[4];
        v54 = 2;
        v80.m128i_i64[0] = v53;
        if ( v53 )
        {
          v54 = v53 + 1;
          v80.m128i_i64[0] = v53 - 1;
        }
        v55 = v1[3];
        if ( v1[5] < v54 )
        {
          v64 = qvector_reserve(v1 + 3, v55, v54, 1);
          v1[3] = v64;
          v55 = v64;
        }
        v56 = v80.m128i_i64[0];
        v1[4] = v54;
        *(_BYTE *)(v55 + v56) = 32;
        *(_BYTE *)(v1[3] + v56 + 1) = 0;
      }
      v24 = *((_BYTE *)v1 + 52);
LABEL_69:
      v57 = v24 & (v76 == 2);
      v80.m128i_i8[0] = v57;
      if ( !v57 )
      {
LABEL_36:
        v29 = v86.m128i_i64[0];
        if ( !v86.m128i_i64[0] )
          goto LABEL_43;
        goto LABEL_37;
      }
      v29 = v86.m128i_i64[0];
      if ( v83 == v83 + 24LL * (_QWORD)v84 )
      {
LABEL_87:
        v42 = src;
        if ( !v29 )
        {
LABEL_88:
          v30 = v42;
          if ( !v22 )
          {
LABEL_47:
            v22 = 0;
            goto LABEL_21;
          }
LABEL_80:
          if ( v22 != 1 )
          {
            v80.m128i_i8[0] = 1;
            v30 = v42;
            v22 = 2;
            goto LABEL_21;
          }
          v80.m128i_i8[0] = 1;
LABEL_51:
          v30 = v42;
          if ( v86.m128i_i64[0] )
            goto LABEL_83;
LABEL_52:
          v22 = 1;
          goto LABEL_21;
        }
LABEL_37:
        v37 = v29 - 1;
        if ( v29 == 1 )
          goto LABEL_59;
        v38 = v1[4];
        v39 = v29 - 1;
        v80.m128i_i64[0] = v38;
        if ( v38 )
        {
          v80.m128i_i64[0] = v38 - 1;
          v39 = v37 + v38 - 1;
          v29 += v38 - 1;
        }
        v40 = v1[3];
        if ( v1[5] < v29 )
        {
          v74 = v39;
          v78 = v29;
          v65 = qvector_reserve(v1 + 3, v40, v29, 1);
          v1[3] = v65;
          v39 = v74;
          v40 = v65;
          v29 = v78;
        }
        v1[4] = v29;
        v41 = v80.m128i_i64[0];
        *(_BYTE *)(v40 + v39) = 0;
        memcpy((void *)(v1[3] + v41), src, v37);
        v24 = *((_BYTE *)v1 + 52);
        goto LABEL_43;
      }
      v80.m128i_i32[0] = v21;
      v58 = v86.m128i_i64[0];
      v77 = v22;
      v59 = v83 + 24 * v84;
      n = (size_t)v1;
      v60 = src;
      v61 = v83;
      v68 = v83;
      v73 = v57;
      while ( 1 )
      {
        if ( *(_QWORD *)(v61 + 8) )
        {
          v62 = *(const char **)v61;
          v63 = s1;
          if ( !v58 )
            goto LABEL_73;
        }
        else
        {
          if ( !v58 )
          {
            v43 = v59;
            v42 = v60;
            v44 = v61;
            v21 = v80.m128i_i32[0];
            v45 = v68;
            v80.m128i_i8[0] = v73;
            v22 = v77;
            v1 = (_QWORD *)n;
            if ( v44 == v43 )
              goto LABEL_88;
            goto LABEL_54;
          }
          v62 = s1;
        }
        v63 = v60;
LABEL_73:
        if ( !strcmp(v63, v62) )
          break;
        v61 += 24;
        if ( v59 == v61 )
        {
          v29 = v58;
          v21 = v80.m128i_i32[0];
          v22 = v77;
          v1 = (_QWORD *)n;
          v80.m128i_i8[0] = v73;
          goto LABEL_87;
        }
      }
      v44 = v61;
      v66 = v59;
      v29 = v58;
      v45 = v68;
      v21 = v80.m128i_i32[0];
      v22 = v77;
      v80.m128i_i8[0] = v73;
      v1 = (_QWORD *)n;
      if ( v44 == v66 )
        goto LABEL_87;
LABEL_54:
      v46 = 2;
      v47 = -85 * ((v44 - v45) >> 3);
      v48 = v1[4];
      v80.m128i_i8[0] = v47 + 0x80;
      if ( v48 )
        v46 = v48-- + 1;
      v49 = v1[3];
      if ( v1[5] < v46 )
      {
        v79 = v46;
        v67 = qvector_reserve(v1 + 3, v49, v46, 1);
        v1[3] = v67;
        v46 = v79;
        v49 = v67;
      }
      v50 = v80.m128i_i8[0];
      v1[4] = v46;
      *(_BYTE *)(v49 + v48) = v50;
      *(_BYTE *)(v1[3] + v48 + 1) = 0;
LABEL_59:
      v24 = *((_BYTE *)v1 + 52);
LABEL_43:
      v80.m128i_i8[0] = v24;
      if ( !v24 )
        goto LABEL_20;
      if ( v22 )
      {
        v42 = src;
        goto LABEL_80;
      }
LABEL_45:
      v30 = src;
      if ( !v86.m128i_i64[0] || *(_BYTE *)src != 40 || *((_BYTE *)src + 1) )
        goto LABEL_47;
LABEL_83:
      if ( *v30 != 41 || v30[1] )
        goto LABEL_52;
      v22 = 2;
LABEL_21:
      if ( v30 )
      {
        v86.m128i_i64[0] = 0;
        qfree(v30);
      }
      ++v21;
      v20 += 24;
      if ( v21 >= v81 )
      {
        v18 = *((_BYTE *)v1 + 52);
        break;
      }
    }
  }
  if ( v18 )
    *((_DWORD *)v1 + 12) = v84;
  v31 = sub_BB20();
  sub_AFB0(v31, v75, v82, v81);
  v32 = v83;
  if ( v83 )
  {
    if ( (_QWORD)v84 )
    {
      v33 = 0;
      v34 = v84;
      do
      {
        v35 = (__int64 *)(v32 + 24 * v33);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          qfree(v36);
          v32 = v83;
        }
        ++v33;
      }
      while ( v34 != v33 );
    }
    *(_QWORD *)&v84 = 0;
    qfree(v32);
  }
  return 1;
}
