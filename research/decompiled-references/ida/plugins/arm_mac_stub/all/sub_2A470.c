__int64 __fastcall sub_2A470(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  size_t v8; // r8
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  size_t v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r10
  char *v15; // r10
  size_t v16; // rax
  __int64 v17; // r8
  char *v18; // r10
  size_t v19; // r9
  unsigned __int64 v20; // r11
  char *v21; // r10
  size_t v22; // rax
  __int64 v23; // r8
  char *v24; // r10
  size_t v25; // r9
  unsigned __int64 v26; // r11
  __int64 v27; // rax
  size_t v28; // r15
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  __int64 (__fastcall *v36)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v37; // rax
  unsigned int *v38; // rbp
  __int64 v39; // rax
  unsigned int v40; // r14d
  __int64 v41; // rax
  char *v42; // rbx
  char *v43; // rax
  size_t v45; // rax
  size_t v46; // r13
  void *v47; // rdi
  size_t v48; // r15
  __int64 v49; // rsi
  unsigned __int64 v50; // rax
  __int64 v51; // rsi
  unsigned __int64 v52; // rax
  __int64 v53; // rsi
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  void *v56; // [rsp+0h] [rbp-98h]
  char *v57; // [rsp+8h] [rbp-90h]
  size_t v58; // [rsp+10h] [rbp-88h]
  size_t v59; // [rsp+18h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-78h]
  unsigned __int64 v61; // [rsp+28h] [rbp-70h]
  __int64 v62; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v63; // [rsp+38h] [rbp-60h]
  unsigned __int64 v64; // [rsp+40h] [rbp-58h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  unsigned __int64 v66; // [rsp+58h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  v6 = sub_EBB0();
  if ( *(_BYTE *)(v6 + 80) )
    sub_21830((__int64 *)(a1 + 488), *(const void **)(v6 + 72), *(unsigned __int8 *)(v6 + 80));
  *(_WORD *)(a1 + 960) = 0;
  sub_31A90(&v62, 10);
  v7 = pack_dq() - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v63;
    v10 = v63 + v7;
    if ( __CFADD__(v63, v7) )
    {
      if ( v63 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v63 != 0x7FFFFFFFFFFFFFFFLL )
          v63 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
        memcpy((void *)(v9 + v62), src, v8);
        goto LABEL_9;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v53 = v62;
    v54 = v63;
    if ( v64 < v10 )
    {
      v57 = (char *)v8;
      v56 = (void *)v10;
      v62 = qvector_reserve();
      v53 = v62;
      v8 = (size_t)v57;
      v54 = v63;
      v10 = (unsigned __int64)v56;
    }
    v57 = (char *)v8;
    v56 = (void *)v10;
    memset((void *)(v53 + v54), 0, v10 - v54);
    v8 = (size_t)v57;
    v63 = (unsigned __int64)v56;
    goto LABEL_8;
  }
LABEL_9:
  v11 = pack_dd() - (_QWORD)src;
  v12 = v11;
  if ( !v11 )
    goto LABEL_15;
  v13 = v63;
  v14 = v63 + v11;
  if ( !__CFADD__(v63, v11) )
    goto LABEL_69;
  if ( v63 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v14 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_69:
    v51 = v62;
    v52 = v63;
    if ( v64 < v14 )
    {
      v58 = v63;
      v57 = (char *)v12;
      v56 = (void *)v14;
      v62 = qvector_reserve();
      v51 = v62;
      v13 = v58;
      v52 = v63;
      v12 = (size_t)v57;
      v14 = (unsigned __int64)v56;
    }
    v58 = v13;
    v57 = (char *)v12;
    v56 = (void *)v14;
    memset((void *)(v51 + v52), 0, v14 - v52);
    v12 = (size_t)v57;
    v13 = v58;
    v63 = (unsigned __int64)v56;
    goto LABEL_14;
  }
  if ( v63 != 0x7FFFFFFFFFFFFFFFLL )
    v63 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
  memcpy((void *)(v13 + v62), src, v12);
LABEL_15:
  v15 = (char *)::s;
  if ( *(_QWORD *)(a1 + 816) )
    v15 = *(char **)(a1 + 808);
  if ( v15 )
  {
    v56 = v15;
    v16 = strlen(v15);
    v17 = v63;
    v18 = (char *)v56;
    v19 = v16 + 1;
    v20 = v16 + 1 + v63;
    if ( __CFADD__(v16 + 1, v63) )
    {
      if ( v63 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v63 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_22;
        goto LABEL_21;
      }
      v20 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v17 = v63;
    v19 = 1;
    v18 = "";
    v20 = v63 + 1;
    if ( v63 == -1 )
    {
      v17 = -1;
      v18 = "";
LABEL_21:
      v63 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_22;
    }
  }
  v33 = v62;
  v34 = v17;
  if ( v64 < v20 )
  {
    v59 = v19;
    v58 = v17;
    v57 = v18;
    v56 = (void *)v20;
    v62 = qvector_reserve();
    v33 = v62;
    v19 = v59;
    v34 = v63;
    v17 = v58;
    v18 = v57;
    v20 = (unsigned __int64)v56;
  }
  v56 = (void *)v20;
  v59 = v19;
  v58 = v17;
  v57 = v18;
  memset((void *)(v33 + v34), 0, v20 - v34);
  v18 = v57;
  v17 = v58;
  v19 = v59;
  v63 = (unsigned __int64)v56;
LABEL_22:
  memcpy((void *)(v17 + v62), v18, v19);
  v21 = (char *)::s;
  if ( *(_QWORD *)(a1 + 840) )
    v21 = *(char **)(a1 + 832);
  if ( v21 )
  {
    v56 = v21;
    v22 = strlen(v21);
    v23 = v63;
    v24 = (char *)v56;
    v25 = v22 + 1;
    v26 = v22 + 1 + v63;
    if ( __CFADD__(v22 + 1, v63) )
    {
      if ( v63 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v63 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_29;
        goto LABEL_28;
      }
      v26 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v23 = v63;
    v25 = 1;
    v24 = "";
    v26 = v63 + 1;
    if ( v63 == -1 )
    {
      v23 = -1;
      v24 = "";
LABEL_28:
      v63 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_29;
    }
  }
  v49 = v62;
  v50 = v23;
  if ( v64 < v26 )
  {
    v59 = v23;
    v58 = v25;
    v57 = v24;
    v56 = (void *)v26;
    v62 = qvector_reserve();
    v49 = v62;
    v23 = v59;
    v50 = v63;
    v25 = v58;
    v24 = v57;
    v26 = (unsigned __int64)v56;
  }
  v56 = (void *)v26;
  v59 = v23;
  v58 = v25;
  v57 = v24;
  memset((void *)(v49 + v50), 0, v26 - v50);
  v24 = v57;
  v25 = v58;
  v23 = v59;
  v63 = (unsigned __int64)v56;
LABEL_29:
  memcpy((void *)(v23 + v62), v24, v25);
  v27 = pack_dd() - (_QWORD)src;
  v28 = v27;
  if ( !v27 )
    goto LABEL_42;
  v29 = v63;
  v30 = v63 + v27;
  if ( __CFADD__(v63, v27) )
  {
    if ( v63 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v63 != 0x7FFFFFFFFFFFFFFFLL )
        v63 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_41;
    }
    v30 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v31 = v62;
  v32 = v63;
  if ( v64 < v30 )
  {
    v57 = (char *)v63;
    v56 = (void *)v30;
    v62 = qvector_reserve();
    v31 = v62;
    v29 = (unsigned __int64)v57;
    v32 = v63;
    v30 = (unsigned __int64)v56;
  }
  v57 = (char *)v29;
  v56 = (void *)v30;
  memset((void *)(v31 + v32), 0, v30 - v32);
  v29 = (unsigned __int64)v57;
  v63 = (unsigned __int64)v56;
LABEL_41:
  memcpy((void *)(v29 + v62), src, v28);
LABEL_42:
  v35 = a1 + 864;
  v36 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v36 == sub_BE00 )
    v37 = (unsigned int *)sub_2E450(v35, 10, &v62, 0);
  else
    v37 = (unsigned int *)v36(v35, 10u, (__int64)&v62);
  v38 = v37;
  if ( v37 )
  {
    v39 = *v37;
    s = (char *)v38 + 5;
    v61 = (unsigned __int64)v38 + v39 + 5;
    v40 = unpack_dd();
    v41 = unpack_dq();
    if ( a2 )
      *a2 = v41;
    if ( v40 == 1 )
    {
      sub_2A300(a1);
    }
    else if ( a3 )
    {
      v42 = s;
      v43 = s;
      do
      {
        if ( (unsigned __int64)v43 >= v61 )
          goto LABEL_52;
        ++v43;
      }
      while ( *(v43 - 1) );
      s = v43;
      if ( !v42 || (v45 = strlen(v42), (v46 = v45) == 0) )
      {
LABEL_52:
        *(_QWORD *)(a3 + 8) = 0;
        goto LABEL_53;
      }
      v47 = *(void **)a3;
      v48 = v45 + 1;
      if ( *(_QWORD *)(a3 + 16) < v45 + 1 )
      {
        v55 = qvector_reserve();
        *(_QWORD *)a3 = v55;
        v47 = (void *)v55;
      }
      *(_QWORD *)(a3 + 8) = v48;
      memmove(v47, v42, v46);
      *(_BYTE *)(*(_QWORD *)a3 + v46) = 0;
    }
LABEL_53:
    qfree();
  }
  else
  {
    v40 = -2;
  }
  if ( v62 )
  {
    v63 = 0;
    qfree();
  }
  return v40;
}

