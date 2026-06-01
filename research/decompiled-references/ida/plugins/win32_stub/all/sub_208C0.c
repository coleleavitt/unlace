__int64 __fastcall sub_208C0(
        __int64 a1,
        const char *a2,
        const char *a3,
        __int64 *a4,
        const char *a5,
        __int64 a6,
        char *s,
        __int64 a8,
        __int64 a9)
{
  char *v11; // r12
  char *v13; // r15
  size_t v14; // rax
  __int64 v15; // r8
  size_t v16; // r9
  unsigned __int64 v17; // r10
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  size_t v20; // rax
  __int64 v21; // r12
  size_t v22; // r8
  unsigned __int64 v23; // r9
  size_t v24; // rax
  __int64 v25; // r12
  size_t v26; // r13
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  size_t v29; // rbx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r8
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  size_t v34; // rax
  __int64 v35; // rbx
  size_t v36; // r14
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  size_t v39; // rbx
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // r15
  __int64 v42; // rsi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v46; // rdx
  char v47; // bl
  __int64 v48; // rax
  size_t v49; // rbx
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // r14
  __int64 v52; // r15
  __int64 v53; // rbp
  const char *v54; // r14
  size_t v55; // rax
  __int64 v56; // rbx
  size_t v57; // r8
  unsigned __int64 v58; // r10
  __int64 v59; // rsi
  unsigned __int64 v60; // rax
  unsigned int v61; // ebx
  __int64 v63; // rsi
  unsigned __int64 v64; // rax
  __int64 v65; // rsi
  unsigned __int64 v66; // rax
  __int64 v67; // rsi
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  size_t v70; // rbp
  unsigned __int64 v71; // rbx
  unsigned __int64 v72; // r13
  __int64 v73; // rsi
  unsigned __int64 v74; // rax
  __int64 v75; // rsi
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // [rsp+0h] [rbp-98h]
  size_t v78; // [rsp+8h] [rbp-90h]
  __int64 *v79; // [rsp+10h] [rbp-88h]
  __int64 v80; // [rsp+18h] [rbp-80h]
  __int64 v81; // [rsp+20h] [rbp-78h]
  __int64 v82; // [rsp+28h] [rbp-70h]
  __int64 v83; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v84; // [rsp+38h] [rbp-60h]
  unsigned __int64 v85; // [rsp+40h] [rbp-58h]
  _BYTE src[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v87; // [rsp+58h] [rbp-40h]

  v11 = (char *)a2;
  v80 = a1;
  v13 = s;
  v81 = a9;
  v87 = __readfsqword(0x28u);
  getinf_flag();
  v79 = &v83;
  sub_27550(&v83, 13);
  if ( a2 )
  {
    v14 = strlen(a2);
    v15 = v84;
    v16 = v14 + 1;
    v17 = v14 + 1 + v84;
    if ( __CFADD__(v14 + 1, v84) )
    {
      if ( v84 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v84 != 0x7FFFFFFFFFFFFFFFLL )
          v84 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_10;
      }
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v15 = v84;
    v16 = 1;
    v11 = "";
    v17 = v84 + 1;
    if ( v84 == -1 )
    {
      v15 = -1;
      v11 = "";
      v84 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_10;
    }
  }
  v18 = v83;
  v19 = v15;
  if ( v85 < v17 )
  {
    v82 = v15;
    v78 = v16;
    v77 = v17;
    v83 = qvector_reserve();
    v18 = v83;
    v15 = v82;
    v19 = v84;
    v16 = v78;
    v17 = v77;
  }
  v82 = v15;
  v78 = v16;
  v77 = v17;
  memset((void *)(v18 + v19), 0, v17 - v19);
  v16 = v78;
  v15 = v82;
  v84 = v77;
LABEL_10:
  memcpy((void *)(v15 + v83), v11, v16);
  if ( a3 )
  {
    v20 = strlen(a3);
    v21 = v84;
    v22 = v20 + 1;
    v23 = v20 + 1 + v84;
    if ( __CFADD__(v20 + 1, v84) )
    {
      if ( v84 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v84 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_15;
        goto LABEL_14;
      }
      v23 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v21 = v84;
    v22 = 1;
    a3 = "";
    v23 = v84 + 1;
    if ( v84 == -1 )
    {
      v21 = -1;
      a3 = "";
LABEL_14:
      v84 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_15;
    }
  }
  v67 = v83;
  v68 = v21;
  if ( v85 < v23 )
  {
    v77 = v23;
    v78 = v22;
    v83 = qvector_reserve();
    v67 = v83;
    v22 = v78;
    v68 = v84;
    v23 = v77;
  }
  v78 = v22;
  v77 = v23;
  memset((void *)(v67 + v68), 0, v23 - v68);
  v22 = v78;
  v84 = v77;
LABEL_15:
  memcpy((void *)(v21 + v83), a3, v22);
  if ( a5 )
  {
    v24 = strlen(a5);
    v25 = v84;
    v26 = v24 + 1;
    v27 = v24 + 1 + v84;
    if ( __CFADD__(v24 + 1, v84) )
    {
      if ( v84 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v84 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_20;
        goto LABEL_19;
      }
      v27 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v25 = v84;
    v26 = 1;
    a5 = "";
    v27 = v84 + 1;
    if ( v84 == -1 )
    {
      v25 = -1;
      a5 = "";
LABEL_19:
      v84 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_20;
    }
  }
  v65 = v83;
  v66 = v25;
  if ( v85 < v27 )
  {
    v77 = v27;
    v83 = qvector_reserve();
    v65 = v83;
    v27 = v77;
    v66 = v84;
  }
  v77 = v27;
  memset((void *)(v65 + v66), 0, v27 - v66);
  v84 = v77;
LABEL_20:
  memcpy((void *)(v25 + v83), a5, v26);
  v28 = pack_dd() - (_QWORD)src;
  v29 = v28;
  if ( !v28 )
    goto LABEL_29;
  v30 = v84;
  v31 = v84 + v28;
  if ( __CFADD__(v84, v28) )
  {
    if ( v84 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v84 != 0x7FFFFFFFFFFFFFFFLL )
        v84 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_28;
    }
    v31 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v32 = v83;
  v33 = v84;
  if ( v85 < v31 )
  {
    v77 = v31;
    v83 = qvector_reserve();
    v32 = v83;
    v31 = v77;
    v33 = v84;
  }
  v77 = v31;
  memset((void *)(v32 + v33), 0, v31 - v33);
  v84 = v77;
LABEL_28:
  memcpy((void *)(v30 + v83), src, v29);
LABEL_29:
  if ( s )
  {
    v34 = strlen(s);
    v35 = v84;
    v36 = v34 + 1;
    v37 = v34 + 1 + v84;
    if ( __CFADD__(v34 + 1, v84) )
    {
      if ( v84 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v84 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_34;
        goto LABEL_33;
      }
      v37 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v35 = v84;
    v36 = 1;
    v13 = "";
    v37 = v84 + 1;
    if ( v84 == -1 )
    {
      v35 = -1;
      v13 = "";
LABEL_33:
      v84 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_34;
    }
  }
  v63 = v83;
  v64 = v35;
  if ( v85 < v37 )
  {
    v77 = v37;
    v83 = qvector_reserve();
    v63 = v83;
    v37 = v77;
    v64 = v84;
  }
  v77 = v37;
  memset((void *)(v63 + v64), 0, v37 - v64);
  v84 = v77;
LABEL_34:
  memcpy((void *)(v83 + v35), v13, v36);
  v38 = pack_dd() - (_QWORD)src;
  v39 = v38;
  if ( !v38 )
    goto LABEL_43;
  v40 = v84;
  v41 = v84 + v38;
  if ( __CFADD__(v84, v38) )
  {
    if ( v84 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v84 != 0x7FFFFFFFFFFFFFFFLL )
        v84 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_42;
    }
    v41 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v42 = v83;
  v43 = v84;
  if ( v85 < v41 )
  {
    v83 = qvector_reserve();
    v42 = v83;
    v43 = v84;
  }
  memset((void *)(v42 + v43), 0, v41 - v43);
  v84 = v41;
LABEL_42:
  memcpy((void *)(v40 + v83), src, v39);
LABEL_43:
  v44 = v84;
  v45 = v83;
  v46 = v84 + 1;
  if ( a4 )
  {
    v47 = *((_BYTE *)a4 + 24);
    if ( v85 < v46 )
    {
      v83 = qvector_reserve();
      v45 = v83;
      v44 = v84;
    }
    *(_BYTE *)(v45 + v44) = v47;
    ++v84;
    v48 = pack_dd() - (_QWORD)src;
    v49 = v48;
    if ( !v48 )
    {
LABEL_52:
      v52 = *a4;
      v53 = *a4 + 24 * a4[1];
      if ( v53 == v52 )
        goto LABEL_71;
      while ( 1 )
      {
        v54 = &::s;
        if ( *(_QWORD *)(v52 + 8) )
          v54 = *(const char **)v52;
        if ( !v54 )
          break;
        v55 = strlen(v54);
        v56 = v84;
        v57 = v55 + 1;
        v58 = v55 + 1 + v84;
        if ( !__CFADD__(v55 + 1, v84) )
          goto LABEL_62;
        if ( v84 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v58 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_62:
          v59 = v83;
          v60 = v56;
          if ( v85 < v58 )
          {
            v77 = v58;
            v78 = v57;
            v83 = qvector_reserve();
            v59 = v83;
            v57 = v78;
            v60 = v84;
            v58 = v77;
          }
          v78 = v57;
          v77 = v58;
          memset((void *)(v59 + v60), 0, v58 - v60);
          v57 = v78;
          v84 = v77;
          goto LABEL_57;
        }
        if ( v84 != 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_56;
LABEL_57:
        v52 += 24;
        memcpy((void *)(v83 + v56), v54, v57);
        if ( v53 == v52 )
          goto LABEL_71;
      }
      v56 = v84;
      v57 = 1;
      v54 = "";
      v58 = v84 + 1;
      if ( v84 != -1 )
        goto LABEL_62;
      v56 = -1;
      v54 = "";
LABEL_56:
      v84 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_57;
    }
    v50 = v84;
    v51 = v84 + v48;
    if ( __CFADD__(v84, v48) )
    {
      if ( v84 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v84 != 0x7FFFFFFFFFFFFFFFLL )
          v84 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_51:
        memcpy((void *)(v50 + v83), src, v49);
        goto LABEL_52;
      }
      v51 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v75 = v83;
    v76 = v84;
    if ( v85 < v51 )
    {
      v83 = qvector_reserve();
      v75 = v83;
      v76 = v84;
    }
    memset((void *)(v75 + v76), 0, v51 - v76);
    v84 = v51;
    goto LABEL_51;
  }
  if ( v85 < v46 )
  {
    v83 = qvector_reserve();
    v45 = v83;
    v44 = v84;
  }
  *(_BYTE *)(v45 + v44) = 1;
  ++v84;
  v69 = pack_dd() - (_QWORD)src;
  v70 = v69;
  if ( v69 )
  {
    v71 = v84;
    v72 = v84 + v69;
    if ( __CFADD__(v84, v69) )
    {
      if ( v84 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v84 != 0x7FFFFFFFFFFFFFFFLL )
          v84 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_70;
      }
      v72 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v73 = v83;
    v74 = v84;
    if ( v85 < v72 )
    {
      v83 = qvector_reserve();
      v73 = v83;
      v74 = v84;
    }
    memset((void *)(v73 + v74), 0, v72 - v74);
    v84 = v72;
LABEL_70:
    memcpy((void *)(v83 + v71), src, v70);
  }
LABEL_71:
  v61 = sub_20720(v80, (__int64)v79, v81);
  if ( v83 )
  {
    v84 = 0;
    qfree();
  }
  return v61;
}

