__int64 __fastcall sub_216A0(__int64 a1, const char *a2, __int16 a3, const char *a4, __int64 *a5)
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
  __int64 v48; // [rsp+0h] [rbp-168h]
  int v49; // [rsp+8h] [rbp-160h]
  unsigned __int64 v50; // [rsp+8h] [rbp-160h]
  unsigned __int64 v51; // [rsp+8h] [rbp-160h]
  unsigned __int64 v52; // [rsp+8h] [rbp-160h]
  unsigned __int64 v53; // [rsp+8h] [rbp-160h]
  unsigned __int64 v54; // [rsp+8h] [rbp-160h]
  unsigned __int64 v55; // [rsp+8h] [rbp-160h]
  int v56; // [rsp+10h] [rbp-158h]
  void *v57; // [rsp+10h] [rbp-158h]
  void *v58; // [rsp+10h] [rbp-158h]
  void *v59; // [rsp+10h] [rbp-158h]
  void *v60; // [rsp+10h] [rbp-158h]
  int v61; // [rsp+18h] [rbp-150h]
  void *src; // [rsp+40h] [rbp-128h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-120h]
  __int64 v64; // [rsp+60h] [rbp-108h] BYREF
  unsigned __int64 v65; // [rsp+68h] [rbp-100h]
  __int128 v66; // [rsp+70h] [rbp-F8h]
  __int16 v67; // [rsp+80h] [rbp-E8h]
  __int64 v68; // [rsp+88h] [rbp-E0h]
  __int128 v69; // [rsp+90h] [rbp-D8h]
  __int64 v70; // [rsp+A0h] [rbp-C8h]
  __int128 v71; // [rsp+A8h] [rbp-C0h]
  __int64 v72; // [rsp+B8h] [rbp-B0h]
  __int128 v73; // [rsp+C0h] [rbp-A8h]
  __int16 v74; // [rsp+D0h] [rbp-98h]
  __int64 v75; // [rsp+D8h] [rbp-90h]
  __int128 v76; // [rsp+E0h] [rbp-88h]
  __int64 v77; // [rsp+F0h] [rbp-78h]
  __int128 v78; // [rsp+F8h] [rbp-70h]
  __int64 v79; // [rsp+108h] [rbp-60h]
  __int64 v80; // [rsp+110h] [rbp-58h]
  int v81; // [rsp+118h] [rbp-50h]
  _BYTE v82[5]; // [rsp+123h] [rbp-45h] BYREF
  unsigned __int64 v83; // [rsp+128h] [rbp-40h]

  v5 = *a2 == 0;
  v83 = __readfsqword(0x28u);
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
      si128 = _mm_load_si128((const __m128i *)&xmmword_305C0);
      a5[1] = 57;
      v7[3].m128i_i64[0] = 0x736E6F6974706F20LL;
      *v7 = si128;
      v7[1] = _mm_load_si128((const __m128i *)&xmmword_305D0);
      v7[2] = _mm_load_si128((const __m128i *)&xmmword_305E0);
      *(_BYTE *)(*a5 + 56) = 0;
    }
    return 0;
  }
  *(_BYTE *)(a1 + 872) = 0;
  src = nullptr;
  *(_QWORD *)(a1 + 1040) = sub_25D40(0);
  *(_OWORD *)n = 0;
  if ( a2 )
  {
    v14 = strlen(a2);
    src = (void *)qvector_reserve();
    n[0] = v14 + 1;
    memmove(src, a2, v14);
    *((_BYTE *)src + v14) = 0;
    v64 = 192;
    v65 = 0;
    v66 = 0;
    if ( n[0] )
    {
      v65 = qalloc_or_throw();
      *((_QWORD *)&v66 + 1) = n[0];
      memcpy((void *)v65, src, n[0]);
      *(_QWORD *)&v66 = n[0];
    }
  }
  else
  {
    v64 = 192;
    v65 = 0;
    v66 = 0;
  }
  v67 = a3;
  v74 = 0;
  v15 = *(_QWORD *)(a1 + 1040);
  v68 = 0;
  v70 = 0;
  v72 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v80 = 0;
  v81 = -1;
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v76 = 0;
  v78 = 0;
  v9 = sub_25DB0(v15, &v64);
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree();
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree();
  }
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
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
      v17 = (const char *)sub_25D90(*(_QWORD *)(a1 + 1040));
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
    sub_25E20(a1 + 1040, 0xFFFFFFFFLL);
    return 0;
  }
  v48 = a1 + 864;
  v16 = sub_273A0(a1 + 864, 3);
  if ( !v16 )
  {
    sub_1EA40(v48, (__int64)"ICON ERROR\nAUTOHIDE NONE\nBogus or irresponsive remote server");
    goto LABEL_30;
  }
  if ( *(_BYTE *)(v16 + 4) != 3 )
  {
    sub_1EA40(v48, (__int64)"ICON ERROR\nAUTOHIDE NONE\nBogus or irresponsive remote server");
LABEL_29:
    qfree();
    goto LABEL_30;
  }
  v56 = unpack_dd();
  v61 = unpack_dd();
  v49 = unpack_dd();
  if ( (!(unsigned __int8)netnode_inited() || (unsigned __int8)is_miniidb())
    && v49 != ((unsigned __int8)getinf_flag() == 0 ? 4 : 8) )
  {
    v34 = 8 * v49;
    if ( 8 * v49 == 32 )
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
      if ( v49 == 8 )
      {
        v35 = *(_QWORD *)(a1 + 16);
        v36 = 8;
      }
      *(_QWORD *)(a1 + 24) = v35;
      *(_DWORD *)(a1 + 32) = v36;
    }
    *(_DWORD *)(a1 + 276) = v49;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v56 == 31 && *(_DWORD *)(a1 + 856) == v61 )
  {
    if ( v49 < ((unsigned __int8)getinf_flag() == 0 ? 4 : 8) )
    {
      getinf_flag();
      sub_C7A0((__int64 *)&src);
    }
  }
  else
  {
    sub_C7A0((__int64 *)&src);
  }
  if ( n[0] > 1 )
  {
    sub_27550(&v64, 0);
    v42 = pack_dd() - (_QWORD)v82;
    v43 = v42;
    if ( !v42 )
      goto LABEL_91;
    v44 = v65;
    v45 = v65 + v42;
    if ( __CFADD__(v65, v42) )
    {
      if ( v65 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v65 != 0x7FFFFFFFFFFFFFFFLL )
          v65 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_90;
      }
      v45 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v46 = v64;
    v47 = v65;
    if ( (unsigned __int64)v66 < v45 )
    {
      v55 = v45;
      v64 = qvector_reserve();
      v46 = v64;
      v47 = v65;
      v45 = v55;
    }
    v52 = v45;
    memset((void *)(v46 + v47), 0, v45 - v47);
    v65 = v52;
LABEL_90:
    memcpy((void *)(v44 + v64), v82, v43);
LABEL_91:
    sub_265C0(v48, &v64);
    sub_B5C0();
    if ( !v64 )
    {
LABEL_83:
      if ( src )
      {
        n[0] = 0;
        qfree();
      }
      goto LABEL_29;
    }
LABEL_82:
    v65 = 0;
    qfree();
    goto LABEL_83;
  }
  qfree();
  sub_27550(&v64, 0);
  v21 = pack_dd() - (_QWORD)v82;
  v22 = v21;
  if ( !v21 )
    goto LABEL_47;
  v23 = v65;
  v24 = v65 + v21;
  if ( __CFADD__(v65, v21) )
  {
    if ( v65 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v65 != 0x7FFFFFFFFFFFFFFFLL )
        v65 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_46;
    }
    v24 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v25 = v64;
  v26 = v65;
  if ( (unsigned __int64)v66 < v24 )
  {
    v60 = (void *)v65;
    v54 = v24;
    v64 = qvector_reserve();
    v25 = v64;
    v26 = v65;
    v23 = (unsigned __int64)v60;
    v24 = v54;
  }
  v57 = (void *)v23;
  v50 = v24;
  memset((void *)(v25 + v26), 0, v24 - v26);
  v23 = (unsigned __int64)v57;
  v65 = v50;
LABEL_46:
  memcpy((void *)(v23 + v64), v82, v22);
LABEL_47:
  if ( a4 )
  {
    v27 = strlen(a4);
    v28 = v65;
    v29 = v27 + 1;
    v30 = v27 + 1 + v65;
    if ( __CFADD__(v27 + 1, v65) )
    {
      if ( v65 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v65 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_52;
        goto LABEL_51;
      }
      v30 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v28 = v65;
    a4 = "";
    v29 = 1;
    v30 = v65 + 1;
    if ( v65 == -1 )
    {
      v28 = -1;
      a4 = "";
      v29 = 1;
LABEL_51:
      v65 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_52;
    }
  }
  v39 = v64;
  v40 = v28;
  if ( (unsigned __int64)v66 < v30 )
  {
    v59 = (void *)v29;
    v53 = v30;
    v64 = qvector_reserve();
    v39 = v64;
    v29 = (size_t)v59;
    v40 = v65;
    v30 = v53;
  }
  v58 = (void *)v29;
  v51 = v30;
  memset((void *)(v39 + v40), 0, v30 - v40);
  v29 = (size_t)v58;
  v65 = v51;
LABEL_52:
  memcpy((void *)(v28 + v64), a4, v29);
  sub_265C0(v48, &v64);
  v31 = sub_273A0(v48, 3);
  if ( !v31 )
  {
    if ( v64 )
    {
      v65 = 0;
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
    if ( !v64 )
      goto LABEL_83;
    goto LABEL_82;
  }
  if ( !(unsigned int)unpack_dd() )
  {
    sub_B5C0();
    goto LABEL_81;
  }
  qfree();
  v32 = v64;
  *(_BYTE *)(a1 + 933) = 1;
  if ( v32 )
  {
    v65 = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v9;
}

