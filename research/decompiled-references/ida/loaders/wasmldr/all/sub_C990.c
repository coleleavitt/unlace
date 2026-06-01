__int64 __fastcall sub_C990(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  char *v7; // rsi
  size_t v8; // rbx
  int v9; // edx
  size_t v10; // r12
  unsigned __int64 v11; // rax
  size_t *v12; // rdi
  size_t v13; // rbp
  __int64 *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 *v18; // rbx
  __int64 v19; // rdx
  char *v20; // r15
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  char *v23; // rsi
  __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  const char *v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // r15
  unsigned __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rsi
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  const char *v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // r15
  unsigned __int64 v40; // rcx
  unsigned int v41; // eax
  __int64 v43; // r15
  __int64 v44; // rax
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  int v48; // edx
  size_t v49; // r15
  unsigned __int64 v50; // rdx
  __int64 v51; // r10
  size_t v52; // r9
  char *v53; // rsi
  char *v54; // rsi
  __int64 v55; // rsi
  __int64 v56; // r15
  __int64 v57; // rdx
  int v58; // ecx
  int v59; // r8d
  int v60; // r9d
  int v61; // edx
  _BYTE *v62; // rax
  size_t v63; // rbx
  unsigned __int64 v64; // rdx
  size_t v65; // r15
  size_t v66; // r8
  char *v67; // rsi
  char *v68; // rsi
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rax
  const char *v72; // rdx
  int v73; // [rsp+0h] [rbp-138h]
  int *v74; // [rsp+8h] [rbp-130h]
  __m128i v75; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v76; // [rsp+20h] [rbp-118h]
  unsigned __int64 v77; // [rsp+28h] [rbp-110h]
  __int64 v78; // [rsp+30h] [rbp-108h]
  size_t v79; // [rsp+38h] [rbp-100h]
  unsigned int v80; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v81; // [rsp+44h] [rbp-F4h] BYREF
  int v82; // [rsp+48h] [rbp-F0h] BYREF
  char *v83; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v84; // [rsp+58h] [rbp-E0h]
  void *v85; // [rsp+70h] [rbp-C8h] BYREF
  size_t n[3]; // [rsp+78h] [rbp-C0h]
  void *src; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v88; // [rsp+98h] [rbp-A0h]
  __int64 v89; // [rsp+A8h] [rbp-90h]
  __int128 v90; // [rsp+B0h] [rbp-88h]
  char *v91; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v92; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v93; // [rsp+D8h] [rbp-60h]
  __int128 v94; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v95; // [rsp+F8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v95 = __readfsqword(0x28u);
  v3 = v1 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, a1 + 48)) == 0 )
    sub_3890((__int64)"type section: couldn't read type count");
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  create_data(v6, 0, v5, -1);
  v84 = 0;
  v83 = nullptr;
  v83 = (char *)qvector_reserve(&v83, 0, 11, 1);
  v84.m128i_i64[0] = 11;
  strcpy(v83, "type count");
  sub_4EE0((__int64 *)&v83, (__int64)"(%u)", *(_DWORD *)(a1 + 48));
  v7 = (char *)&unk_10F58;
  if ( v84.m128i_i64[0] )
    v7 = v83;
  set_cmt(*(_QWORD *)(a1 + 40), v7, 0);
  v8 = *(unsigned int *)(a1 + 48);
  v9 = *(_DWORD *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24) < v8 )
    sub_3890((__int64)"type section: invalid count", v7, v8);
  v10 = *(_QWORD *)(a1 + 176);
  if ( v8 != v10 )
  {
    src = nullptr;
    v89 = 0;
    v88 = 0;
    v90 = 0;
    if ( v8 < v10 )
    {
      v13 = v8;
      do
      {
        v14 = (__int64 *)(*(_QWORD *)(a1 + 168) + 48 * v13);
        v15 = v14[3];
        if ( v15 )
        {
          v14[4] = 0;
          qfree(v15);
        }
        v16 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v16);
        }
        ++v13;
      }
      while ( v13 < v10 );
      *(_QWORD *)(a1 + 176) = v8;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 168);
      v12 = (size_t *)(a1 + 168);
      if ( (unsigned __int64)&src < v11 || (unsigned __int64)&src >= 48LL * *(_QWORD *)(a1 + 184) + v11 )
      {
        sub_C790(v12, v8, (__int64)&src);
      }
      else
      {
        v91 = nullptr;
        v93 = 0;
        v92 = 0;
        v94 = 0;
        sub_C790(v12, v8, (__int64)&v91);
        if ( v93 )
        {
          *(_QWORD *)&v94 = 0;
          qfree(v93);
        }
        if ( v91 )
        {
          v92.m128i_i64[0] = 0;
          qfree(v91);
        }
      }
    }
    if ( v89 )
    {
      *(_QWORD *)&v90 = 0;
      qfree(v89);
    }
    if ( src )
    {
      *(_QWORD *)&v88 = 0;
      qfree(src);
    }
    v9 = *(_DWORD *)(a1 + 48);
  }
  if ( v9 )
  {
    v17 = 0;
    v74 = &v82;
    while ( 1 )
    {
      LODWORD(v76) = v17;
      v18 = (__int64 *)(*(_QWORD *)(a1 + 168) + 48 * v17);
      v19 = sub_3F50((_QWORD *)a1, v74);
      if ( !v19 )
        sub_3890((__int64)"0x%llx :type section couldn't read type(%u)", *(_QWORD *)(a1 + 40), v76);
      if ( v82 != -32 )
      {
        sub_4FA0((__int64)&v91, v74);
        v72 = (const char *)&unk_10F58;
        if ( v92.m128i_i64[0] )
          v72 = v91;
        sub_3890((__int64)"0x%llx :type section expected a function type but got %s", *(_QWORD *)(a1 + 40), v72);
      }
      create_data(*(_QWORD *)(a1 + 40), 0, v19, -1);
      v92 = 0;
      v91 = nullptr;
      v91 = (char *)qvector_reserve(&v91, 0, 11, 1);
      v92.m128i_i64[0] = 11;
      strcpy(v91, "func type ");
      v20 = v91;
      v21 = _mm_loadu_si128(&v92);
      v91 = nullptr;
      v92 = 0;
      if ( v83 )
      {
        v75 = v21;
        v84.m128i_i64[0] = 0;
        qfree(v83);
        v22 = _mm_load_si128(&v75);
        v83 = v20;
        v84 = v22;
        if ( v91 )
        {
          v92.m128i_i64[0] = 0;
          qfree(v91);
        }
      }
      else
      {
        v83 = v20;
        v84 = v21;
      }
      sub_4EE0((__int64 *)&v83, (__int64)"%u", v76);
      v23 = (char *)&unk_10F58;
      if ( v84.m128i_i64[0] )
        v23 = v83;
      set_cmt(*(_QWORD *)(a1 + 40), v23, 0);
      v24 = *(_QWORD *)(a1 + 8);
      v25 = v24 + *(_QWORD *)(a1 + 24);
      v26 = *(_QWORD *)(a1 + 32) + v24;
      if ( v25 >= v26 || (v27 = sub_E440(v25, v26, &v80)) == 0 )
      {
        sub_4FA0((__int64)&v91, v74);
        v28 = (const char *)&unk_10F58;
        if ( v92.m128i_i64[0] )
          v28 = v91;
        sub_3890((__int64)"type section: couldn't read parameter count for form %u - %s", v76, v28);
      }
      v29 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = v29;
      *(_QWORD *)(a1 + 24) = v27 + v29;
      create_data(v29, 0, v27, -1);
      set_cmt(*(_QWORD *)(a1 + 40), "param count", 0);
      v30 = v80;
      v31 = v18[1];
      v32 = v80;
      if ( v31 < v80 )
      {
        v55 = *v18;
        if ( v18[2] < (unsigned __int64)v80 )
        {
          v70 = qvector_reserve(v18, v55, v80, 8);
          *v18 = v70;
          v31 = v18[1];
          v55 = v70;
        }
        memset((void *)(v55 + 8 * v31), 0, 8 * (v30 - v31));
        v18[1] = v30;
        v32 = v80;
      }
      else if ( v80 != v31 )
      {
        v18[1] = v80;
      }
      if ( v32 )
        break;
LABEL_45:
      v33 = *(_QWORD *)(a1 + 8);
      v34 = v33 + *(_QWORD *)(a1 + 24);
      v35 = *(_QWORD *)(a1 + 32) + v33;
      if ( v34 >= v35 || (v36 = sub_E440(v34, v35, &v81)) == 0 )
      {
        sub_4FA0((__int64)&v91, v74);
        v37 = (const char *)&unk_10F58;
        if ( v92.m128i_i64[0] )
          v37 = v91;
        sub_3890((__int64)"type section: couldn't read result count for form %u - %s", v76, v37);
      }
      v38 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = v38;
      *(_QWORD *)(a1 + 24) = v36 + v38;
      create_data(v38, 0, v36, -1);
      set_cmt(*(_QWORD *)(a1 + 40), "result count", 0);
      v39 = v81;
      v40 = v18[4];
      v75.m128i_i64[0] = (__int64)(v18 + 3);
      v41 = v81;
      if ( v40 < v81 )
      {
        v69 = v18[3];
        if ( v18[5] < (unsigned __int64)v81 )
        {
          v71 = qvector_reserve(v75.m128i_i64[0], v69, v81, 8);
          v18[3] = v71;
          v40 = v18[4];
          v69 = v71;
        }
        memset((void *)(v69 + 8 * v40), 0, 8 * (v39 - v40));
        v18[4] = v39;
        v41 = v81;
      }
      else if ( v81 != v40 )
      {
        v18[4] = v81;
      }
      if ( !v41 )
        goto LABEL_54;
      v56 = 0;
      v77 = *(_QWORD *)(a1 + 24);
      do
      {
        v57 = sub_3F50((_QWORD *)a1, &v91);
        if ( !v57 )
          sub_3890((__int64)"type section: couldn't read result type %u", v76);
        if ( (unsigned int)((_DWORD)v91 + 4) > 3 )
          sub_3890((__int64)"type section: result type %u is not valid", v76);
        create_data(*(_QWORD *)(a1 + 40), 0, v57, -1);
        v61 = (int)v91;
        *(_QWORD *)(v18[3] + 8 * v56++) = v91;
      }
      while ( (unsigned int)v56 < v81 );
      sub_E8A0(
        (unsigned int)&src,
        v75.m128i_i32[0],
        v61,
        v58,
        v59,
        v60,
        v73,
        (_DWORD)v74,
        v75.m128i_i32[0],
        v75.m128i_i32[2],
        v76,
        v77,
        v78,
        v79,
        v80,
        v82,
        (_DWORD)v83,
        v84.m128i_i32[0],
        v84.m128i_i64[1]);
      *(_OWORD *)n = 0;
      v85 = nullptr;
      v62 = (_BYTE *)qvector_reserve(&v85, 0, 10, 1);
      v85 = v62;
      n[0] = 10;
      *(_QWORD *)v62 = 0x3A73746C75736572LL;
      v62[8] = 32;
      *((_BYTE *)v85 + 9) = 0;
      v63 = n[0];
      v91 = nullptr;
      v92 = 0;
      if ( n[0] )
      {
        v91 = (char *)qalloc_or_throw(n[0]);
        v92.m128i_i64[1] = v63;
        memcpy(v91, v85, v63);
        v92.m128i_i64[0] = v63;
        if ( !(_QWORD)v88 )
          goto LABEL_93;
        v66 = v88 - 1;
        if ( (_QWORD)v88 == 1 )
          goto LABEL_93;
        --v63;
        v65 = v88 - 1 + v63;
        v64 = v88 + v63;
      }
      else
      {
        v64 = v88;
        if ( !(_QWORD)v88 )
          goto LABEL_108;
        v65 = v88 - 1;
        if ( (_QWORD)v88 == 1 )
          goto LABEL_108;
        v66 = v88 - 1;
      }
      v67 = v91;
      if ( v92.m128i_i64[1] < v64 )
      {
        v75.m128i_i64[0] = v66;
        v76 = v64;
        v91 = (char *)qvector_reserve(&v91, v91, v64, 1);
        v66 = v75.m128i_i64[0];
        v67 = v91;
        v64 = v76;
      }
      v92.m128i_i64[0] = v64;
      v67[v65] = 0;
      memcpy(&v91[v63], src, v66);
      if ( !v92.m128i_i64[0] )
      {
LABEL_108:
        v68 = (char *)&unk_10F58;
        goto LABEL_94;
      }
LABEL_93:
      v68 = v91;
LABEL_94:
      set_cmt(v77, v68, 0);
      if ( v91 )
      {
        v92.m128i_i64[0] = 0;
        qfree(v91);
      }
      if ( v85 )
      {
        n[0] = 0;
        qfree(v85);
      }
      if ( src )
      {
        *(_QWORD *)&v88 = 0;
        qfree(src);
      }
LABEL_54:
      sub_3AE0(*(_QWORD *)(a1 + 24), 1u, (__int64)"");
      if ( (unsigned int)++v17 >= *(_DWORD *)(a1 + 48) )
        goto LABEL_55;
    }
    v43 = 0;
    v75.m128i_i64[0] = *(_QWORD *)(a1 + 24);
    do
    {
      v44 = sub_3F50((_QWORD *)a1, &v91);
      if ( !v44 )
        sub_3890((__int64)"type section: couldn't read param type %u", v76);
      if ( (unsigned int)v91 < 0xFFFFFFFC )
        sub_3890((__int64)"type section: param type %u is not valid", v76);
      create_data(*(_QWORD *)(a1 + 40), 0, v44, -1);
      v48 = (int)v91;
      *(_QWORD *)(*v18 + 8 * v43++) = v91;
    }
    while ( (unsigned int)v43 < v80 );
    sub_E8A0(
      (unsigned int)&src,
      (_DWORD)v18,
      v48,
      v45,
      v46,
      v47,
      v73,
      (_DWORD)v74,
      v75.m128i_i32[0],
      v75.m128i_i32[2],
      v76,
      v77,
      v78,
      v79,
      v80,
      v82,
      (_DWORD)v83,
      v84.m128i_i32[0],
      v84.m128i_i64[1]);
    *(_OWORD *)n = 0;
    v85 = nullptr;
    v85 = (void *)qvector_reserve(&v85, 0, 9, 1);
    n[0] = 9;
    strcpy((char *)v85, "params: ");
    v49 = n[0];
    v91 = nullptr;
    v92 = 0;
    if ( n[0] )
    {
      v91 = (char *)qalloc_or_throw(n[0]);
      v92.m128i_i64[1] = v49;
      memcpy(v91, v85, v49);
      v92.m128i_i64[0] = v49;
      if ( !(_QWORD)v88 || (v52 = v88 - 1, (_QWORD)v88 == 1) )
      {
LABEL_70:
        v54 = v91;
LABEL_71:
        set_cmt(v75.m128i_i64[0], v54, 0);
        if ( v91 )
        {
          v92.m128i_i64[0] = 0;
          qfree(v91);
        }
        if ( v85 )
        {
          n[0] = 0;
          qfree(v85);
        }
        if ( src )
        {
          *(_QWORD *)&v88 = 0;
          qfree(src);
        }
        goto LABEL_45;
      }
      --v49;
      v51 = v52 + v49;
      v50 = v88 + v49;
    }
    else
    {
      v50 = v88;
      if ( !(_QWORD)v88 )
        goto LABEL_104;
      v51 = v88 - 1;
      if ( (_QWORD)v88 == 1 )
        goto LABEL_104;
      v52 = v88 - 1;
    }
    v53 = v91;
    if ( v92.m128i_i64[1] < v50 )
    {
      v79 = v52;
      v78 = v51;
      v77 = v50;
      v91 = (char *)qvector_reserve(&v91, v91, v50, 1);
      v52 = v79;
      v53 = v91;
      v51 = v78;
      v50 = v77;
    }
    v92.m128i_i64[0] = v50;
    v53[v51] = 0;
    memcpy(&v91[v49], src, v52);
    if ( v92.m128i_i64[0] )
      goto LABEL_70;
LABEL_104:
    v54 = (char *)&unk_10F58;
    goto LABEL_71;
  }
LABEL_55:
  if ( v83 )
  {
    v84.m128i_i64[0] = 0;
    qfree(v83);
  }
  return 1;
}

