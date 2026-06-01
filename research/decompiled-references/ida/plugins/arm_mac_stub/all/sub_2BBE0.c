__int64 __fastcall sub_2BBE0(__int64 a1, const char *a2, __int16 a3, const char *a4, __int64 *a5)
{
  bool v5; // zf
  __m128i *v7; // rsi
  __m128i si128; // xmm0
  unsigned int v9; // r12d
  size_t v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rax
  const char *v17; // rax
  const char *v18; // r12
  size_t v19; // rax
  size_t v20; // r13
  __int64 v21; // rax
  size_t v22; // r14
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  size_t v27; // rax
  unsigned __int64 v28; // r14
  size_t v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  void *v37; // rdi
  size_t v38; // r14
  __int64 v39; // rsi
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  size_t v43; // r12
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // r9
  __int64 v46; // rsi
  unsigned __int64 v47; // rax
  const char *v48; // rsi
  __int64 v49; // [rsp+0h] [rbp-168h]
  int v50; // [rsp+8h] [rbp-160h]
  unsigned __int64 v51; // [rsp+8h] [rbp-160h]
  unsigned __int64 v52; // [rsp+8h] [rbp-160h]
  unsigned __int64 v53; // [rsp+8h] [rbp-160h]
  unsigned __int64 v54; // [rsp+8h] [rbp-160h]
  unsigned __int64 v55; // [rsp+8h] [rbp-160h]
  unsigned __int64 v56; // [rsp+8h] [rbp-160h]
  int v57; // [rsp+10h] [rbp-158h]
  void *v58; // [rsp+10h] [rbp-158h]
  void *v59; // [rsp+10h] [rbp-158h]
  void *v60; // [rsp+10h] [rbp-158h]
  void *v61; // [rsp+10h] [rbp-158h]
  int v62; // [rsp+18h] [rbp-150h]
  void *src; // [rsp+40h] [rbp-128h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-120h]
  __int64 v65; // [rsp+60h] [rbp-108h] BYREF
  unsigned __int64 v66; // [rsp+68h] [rbp-100h]
  __int128 v67; // [rsp+70h] [rbp-F8h]
  __int16 v68; // [rsp+80h] [rbp-E8h]
  __int64 v69; // [rsp+88h] [rbp-E0h]
  __int128 v70; // [rsp+90h] [rbp-D8h]
  __int64 v71; // [rsp+A0h] [rbp-C8h]
  __int128 v72; // [rsp+A8h] [rbp-C0h]
  __int64 v73; // [rsp+B8h] [rbp-B0h]
  __int128 v74; // [rsp+C0h] [rbp-A8h]
  __int16 v75; // [rsp+D0h] [rbp-98h]
  __int64 v76; // [rsp+D8h] [rbp-90h]
  __int128 v77; // [rsp+E0h] [rbp-88h]
  __int64 v78; // [rsp+F0h] [rbp-78h]
  __int128 v79; // [rsp+F8h] [rbp-70h]
  __int64 v80; // [rsp+108h] [rbp-60h]
  __int64 v81; // [rsp+110h] [rbp-58h]
  int v82; // [rsp+118h] [rbp-50h]
  _BYTE v83[5]; // [rsp+123h] [rbp-45h] BYREF
  unsigned __int64 v84; // [rsp+128h] [rbp-40h]

  v5 = *a2 == 0;
  v84 = __readfsqword(0x28u);
  if ( v5 )
  {
    if ( a5 )
    {
      v7 = (__m128i *)*a5;
      if ( (unsigned __int64)a5[2] <= 0x38 )
      {
        v33 = qvector_reserve();
        *a5 = v33;
        v7 = (__m128i *)v33;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_3AE50);
      a5[1] = 57;
      v7[3].m128i_i64[0] = 0x736E6F6974706F20LL;
      *v7 = si128;
      v7[1] = _mm_load_si128((const __m128i *)&xmmword_3AE60);
      v7[2] = _mm_load_si128((const __m128i *)&xmmword_3AE70);
      *(_BYTE *)(*a5 + 56) = 0;
    }
    return 0;
  }
  *(_BYTE *)(a1 + 872) = 0;
  src = nullptr;
  *(_QWORD *)(a1 + 1040) = sub_30280(0);
  *(_OWORD *)n = 0;
  if ( a2 )
  {
    v14 = strlen(a2);
    src = (void *)qvector_reserve();
    n[0] = v14 + 1;
    memmove(src, a2, v14);
    *((_BYTE *)src + v14) = 0;
    v65 = 192;
    v66 = 0;
    v67 = 0;
    if ( n[0] )
    {
      v66 = qalloc_or_throw();
      *((_QWORD *)&v67 + 1) = n[0];
      memcpy((void *)v66, src, n[0]);
      *(_QWORD *)&v67 = n[0];
    }
  }
  else
  {
    v65 = 192;
    v66 = 0;
    v67 = 0;
  }
  v68 = a3;
  v75 = 0;
  v15 = *(_QWORD *)(a1 + 1040);
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v76 = 0;
  v78 = 0;
  v80 = 0;
  v81 = 0;
  v82 = -1;
  v70 = 0;
  v72 = 0;
  v74 = 0;
  v77 = 0;
  v79 = 0;
  v9 = sub_302F0(v15, &v65);
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree();
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree();
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree();
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree();
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  if ( !(_BYTE)v9 )
  {
LABEL_30:
    if ( a5 )
    {
      v17 = (const char *)sub_302D0(*(_QWORD *)(a1 + 1040));
      v18 = v17;
      if ( v17 && (v19 = strlen(v17), (v20 = v19) != 0) )
      {
        v37 = (void *)*a5;
        v38 = v19 + 1;
        if ( a5[2] < v19 + 1 )
        {
          v41 = qvector_reserve();
          *a5 = v41;
          v37 = (void *)v41;
        }
        a5[1] = v38;
        memmove(v37, v18, v20);
        *(_BYTE *)(*a5 + v20) = 0;
      }
      else
      {
        a5[1] = 0;
      }
    }
    sub_30360(a1 + 1040, 0xFFFFFFFFLL);
    return 0;
  }
  v49 = a1 + 864;
  v16 = sub_318E0(a1 + 864, 3);
  if ( !v16 )
  {
    sub_28F80(v49, (__int64)"ICON ERROR\nAUTOHIDE NONE\nBogus or irresponsive remote server");
    goto LABEL_30;
  }
  if ( *(_BYTE *)(v16 + 4) != 3 )
  {
    sub_28F80(v49, (__int64)"ICON ERROR\nAUTOHIDE NONE\nBogus or irresponsive remote server");
LABEL_29:
    qfree();
    goto LABEL_30;
  }
  v57 = unpack_dd();
  v62 = unpack_dd();
  v50 = unpack_dd();
  if ( (!(unsigned __int8)netnode_inited() || (unsigned __int8)is_miniidb())
    && v50 != ((unsigned __int8)getinf_flag() == 0 ? 4 : 8) )
  {
    v34 = 8 * v50;
    if ( 8 * v50 == 32 )
    {
      setinf_flag();
      setinf_flag();
    }
    else
    {
      if ( v34 != 64 && v34 != 16 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      setinf_flag();
    }
    if ( *(_BYTE *)(a1 + 36) )
    {
      v35 = *(_QWORD *)(a1 + 8);
      v36 = 4;
      if ( v50 == 8 )
      {
        v35 = *(_QWORD *)(a1 + 16);
        v36 = 8;
      }
      *(_QWORD *)(a1 + 24) = v35;
      *(_DWORD *)(a1 + 32) = v36;
    }
    *(_DWORD *)(a1 + 276) = v50;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v57 == 31 && *(_DWORD *)(a1 + 856) == v62 )
  {
    if ( v50 < ((unsigned __int8)getinf_flag() == 0 ? 4 : 8) )
    {
      getinf_flag();
      sub_ED40((__int64 *)&src);
    }
  }
  else
  {
    sub_ED40((__int64 *)&src);
  }
  if ( n[0] > 1 )
  {
    sub_31A90(&v65, 0);
    v42 = pack_dd() - (_QWORD)v83;
    v43 = v42;
    if ( !v42 )
      goto LABEL_91;
    v44 = v66;
    v45 = v66 + v42;
    if ( __CFADD__(v66, v42) )
    {
      if ( v66 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v66 != 0x7FFFFFFFFFFFFFFFLL )
          v66 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_90;
      }
      v45 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v46 = v65;
    v47 = v66;
    if ( (unsigned __int64)v67 < v45 )
    {
      v56 = v45;
      v65 = qvector_reserve();
      v46 = v65;
      v47 = v66;
      v45 = v56;
    }
    v53 = v45;
    memset((void *)(v46 + v47), 0, v45 - v47);
    v66 = v53;
LABEL_90:
    memcpy((void *)(v44 + v65), v83, v43);
LABEL_91:
    sub_30B00(v49, &v65);
    v48 = s;
    if ( n[0] )
      v48 = (const char *)src;
    sub_CA20((__int64)"ICON ERROR\nAUTOHIDE NONE\nIncompatible debugging server:\n%s", v48);
    if ( !v65 )
      goto LABEL_83;
LABEL_82:
    v66 = 0;
    qfree();
LABEL_83:
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
    goto LABEL_29;
  }
  qfree();
  sub_31A90(&v65, 0);
  v21 = pack_dd() - (_QWORD)v83;
  v22 = v21;
  if ( !v21 )
    goto LABEL_47;
  v23 = v66;
  v24 = v66 + v21;
  if ( __CFADD__(v66, v21) )
  {
    if ( v66 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v66 != 0x7FFFFFFFFFFFFFFFLL )
        v66 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_46;
    }
    v24 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v25 = v65;
  v26 = v66;
  if ( (unsigned __int64)v67 < v24 )
  {
    v61 = (void *)v66;
    v55 = v24;
    v65 = qvector_reserve();
    v25 = v65;
    v26 = v66;
    v23 = (unsigned __int64)v61;
    v24 = v55;
  }
  v58 = (void *)v23;
  v51 = v24;
  memset((void *)(v25 + v26), 0, v24 - v26);
  v23 = (unsigned __int64)v58;
  v66 = v51;
LABEL_46:
  memcpy((void *)(v23 + v65), v83, v22);
LABEL_47:
  if ( a4 )
  {
    v27 = strlen(a4);
    v28 = v66;
    v29 = v27 + 1;
    v30 = v27 + 1 + v66;
    if ( __CFADD__(v27 + 1, v66) )
    {
      if ( v66 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v66 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_52;
        goto LABEL_51;
      }
      v30 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v28 = v66;
    a4 = "";
    v29 = 1;
    v30 = v66 + 1;
    if ( v66 == -1 )
    {
      v28 = -1;
      a4 = "";
      v29 = 1;
LABEL_51:
      v66 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_52;
    }
  }
  v39 = v65;
  v40 = v28;
  if ( (unsigned __int64)v67 < v30 )
  {
    v60 = (void *)v29;
    v54 = v30;
    v65 = qvector_reserve();
    v39 = v65;
    v29 = (size_t)v60;
    v40 = v66;
    v30 = v54;
  }
  v59 = (void *)v29;
  v52 = v30;
  memset((void *)(v39 + v40), 0, v30 - v40);
  v29 = (size_t)v59;
  v66 = v52;
LABEL_52:
  memcpy((void *)(v28 + v65), a4, v29);
  sub_30B00(v49, &v65);
  v31 = sub_318E0(v49, 3);
  if ( !v31 )
  {
    if ( v65 )
    {
      v66 = 0;
      qfree();
      if ( !src )
        goto LABEL_30;
    }
    else if ( !src )
    {
      goto LABEL_30;
    }
    n[0] = 0;
    qfree();
    goto LABEL_30;
  }
  if ( *(_BYTE *)(v31 + 4) )
  {
LABEL_81:
    if ( !v65 )
      goto LABEL_83;
    goto LABEL_82;
  }
  if ( !(unsigned int)unpack_dd() )
  {
    sub_CA20((__int64)"ICON ERROR\nAUTOHIDE NONE\nBad password");
    goto LABEL_81;
  }
  qfree();
  v32 = v65;
  *(_BYTE *)(a1 + 933) = 1;
  if ( v32 )
  {
    v66 = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v9;
}

