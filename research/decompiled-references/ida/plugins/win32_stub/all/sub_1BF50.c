__int64 __fastcall sub_1BF50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v11; // rax
  size_t v12; // r13
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  size_t v16; // r14
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  size_t v20; // r14
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  size_t v24; // r13
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r8
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 (__fastcall *v31)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v32; // rax
  unsigned int *v33; // r13
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbp
  char *v38; // rbx
  char *v39; // rax
  __int64 v40; // rsi
  unsigned __int64 v41; // rax
  __int64 v42; // rsi
  unsigned __int64 v43; // rax
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  size_t v46; // rax
  size_t v47; // r12
  size_t v48; // r14
  void *v49; // rdi
  _QWORD *v50; // r15
  _QWORD *v51; // r15
  __int64 v52; // rax
  unsigned __int64 v53; // [rsp+8h] [rbp-B0h]
  __int64 v54; // [rsp+10h] [rbp-A8h]
  __int64 v55; // [rsp+18h] [rbp-A0h]
  __int64 v56; // [rsp+20h] [rbp-98h]
  __int64 v57; // [rsp+28h] [rbp-90h]
  unsigned __int64 v58; // [rsp+30h] [rbp-88h]
  unsigned __int64 v59; // [rsp+38h] [rbp-80h]
  char *s; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-70h]
  __int64 v62; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v63; // [rsp+58h] [rbp-60h]
  unsigned __int64 v64; // [rsp+60h] [rbp-58h]
  _BYTE src[5]; // [rsp+6Eh] [rbp-4Ah] BYREF
  unsigned __int64 v66; // [rsp+78h] [rbp-40h]

  LODWORD(v53) = a4;
  v54 = a5;
  v56 = a8;
  v55 = a6;
  v57 = a9;
  v66 = __readfsqword(0x28u);
  sub_27550(&v62, 41);
  v11 = pack_dq() - (_QWORD)src;
  v12 = v11;
  if ( v11 )
  {
    v13 = v63;
    v14 = v63 + v11;
    if ( __CFADD__(v63, v11) )
    {
      if ( v63 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v63 != 0x7FFFFFFFFFFFFFFFLL )
          v63 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v13 + v62), src, v12);
        goto LABEL_7;
      }
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v40 = v62;
    v41 = v63;
    if ( v64 < v14 )
    {
      v59 = v63;
      v58 = v14;
      v62 = qvector_reserve();
      v40 = v62;
      v13 = v59;
      v41 = v63;
      v14 = v58;
    }
    v59 = v13;
    v58 = v14;
    memset((void *)(v40 + v41), 0, v14 - v41);
    v13 = v59;
    v63 = v58;
    goto LABEL_6;
  }
LABEL_7:
  v15 = pack_dd() - (_QWORD)src;
  v16 = v15;
  if ( !v15 )
    goto LABEL_13;
  v17 = v63;
  v18 = v63 + v15;
  if ( !__CFADD__(v63, v15) )
    goto LABEL_54;
  if ( v63 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_54:
    v42 = v62;
    v43 = v63;
    if ( v64 < v18 )
    {
      v59 = v63;
      v58 = v18;
      v62 = qvector_reserve();
      v42 = v62;
      v17 = v59;
      v43 = v63;
      v18 = v58;
    }
    v59 = v17;
    v58 = v18;
    memset((void *)(v42 + v43), 0, v18 - v43);
    v17 = v59;
    v63 = v58;
    goto LABEL_12;
  }
  if ( v63 != 0x7FFFFFFFFFFFFFFFLL )
    v63 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v17 + v62), src, v16);
LABEL_13:
  v19 = pack_dd() - (_QWORD)src;
  v20 = v19;
  if ( !v19 )
    goto LABEL_19;
  v21 = v63;
  v22 = v63 + v19;
  if ( !__CFADD__(v63, v19) )
    goto LABEL_58;
  if ( v63 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_58:
    v44 = v62;
    v45 = v63;
    if ( v64 < v22 )
    {
      v58 = v63;
      v53 = v22;
      v62 = qvector_reserve();
      v44 = v62;
      v21 = v58;
      v45 = v63;
      v22 = v53;
    }
    v58 = v21;
    v53 = v22;
    memset((void *)(v44 + v45), 0, v22 - v45);
    v21 = v58;
    v63 = v53;
    goto LABEL_18;
  }
  if ( v63 != 0x7FFFFFFFFFFFFFFFLL )
    v63 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
  memcpy((void *)(v21 + v62), src, v20);
LABEL_19:
  v23 = pack_dd() - (_QWORD)src;
  v24 = v23;
  if ( !v23 )
    goto LABEL_25;
  v25 = v63;
  v26 = v63 + v23;
  if ( __CFADD__(v63, v23) )
  {
    if ( v63 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v63 != 0x7FFFFFFFFFFFFFFFLL )
        v63 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_24;
    }
    v26 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v27 = v62;
  v28 = v63;
  if ( v64 < v26 )
  {
    v53 = v26;
    v62 = qvector_reserve();
    v27 = v62;
    v26 = v53;
    v28 = v63;
  }
  v53 = v26;
  memset((void *)(v27 + v28), 0, v26 - v28);
  v63 = v53;
LABEL_24:
  memcpy((void *)(v25 + v62), src, v24);
LABEL_25:
  v29 = 0;
  if ( (a10 & 1) == 0 )
    v29 = a7;
  sub_25910(&v62, v54, v55, v29);
  v30 = a1 + 864;
  v31 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v31 != sub_A900 )
  {
    v32 = (unsigned int *)v31(v30, 41u, (__int64)&v62);
    v33 = v32;
    if ( v32 )
      goto LABEL_29;
LABEL_48:
    v36 = -1;
    goto LABEL_34;
  }
  v32 = (unsigned int *)sub_23F10(v30, 41, &v62, 0);
  v33 = v32;
  if ( !v32 )
    goto LABEL_48;
LABEL_29:
  v34 = *v32;
  s = (char *)v33 + 5;
  v61 = (unsigned __int64)v33 + v34 + 5;
  v35 = unpack_dq();
  v36 = v35 - 1;
  if ( v35 )
  {
    if ( (a10 & 1) == 0 && a7 )
      sub_253C0(a7, 1, &s);
  }
  else
  {
    if ( (a10 & 2) != 0 )
      sub_24C30(v57, &s);
    if ( v56 )
    {
      v38 = s;
      v39 = s;
      do
      {
        if ( (unsigned __int64)v39 >= v61 )
          goto LABEL_46;
        ++v39;
      }
      while ( *(v39 - 1) );
      s = v39;
      if ( !v38 || (v46 = strlen(v38), (v47 = v46) == 0) )
      {
LABEL_46:
        *(_QWORD *)(v56 + 8) = 0;
        goto LABEL_33;
      }
      v48 = v46 + 1;
      v49 = *(void **)v56;
      if ( *(_QWORD *)(v56 + 16) < v46 + 1 )
      {
        v51 = (_QWORD *)v56;
        v52 = qvector_reserve();
        *v51 = v52;
        v49 = (void *)v52;
      }
      v50 = (_QWORD *)v56;
      *(_QWORD *)(v56 + 8) = v48;
      memmove(v49, v38, v47);
      *(_BYTE *)(*v50 + v47) = 0;
    }
  }
LABEL_33:
  qfree();
LABEL_34:
  if ( v62 )
  {
    v63 = 0;
    qfree();
  }
  return v36;
}

