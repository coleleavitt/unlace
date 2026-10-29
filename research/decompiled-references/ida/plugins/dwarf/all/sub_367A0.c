__int64 __fastcall sub_367A0(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  char v6; // r8
  __int64 v7; // rdi
  unsigned __int8 v8; // cl
  __int64 v10; // rdi
  __int64 idati; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r8
  size_t v18; // r9
  _QWORD *v19; // r13
  __int64 *v20; // rax
  const char *v21; // rbx
  __int64 *v22; // rax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  const char *v26; // rsi
  const void *v27; // r13
  void *v28; // rax
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // rax
  const char *v31; // rbx
  __int64 *v32; // rax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  const char *v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // r13
  __int64 v39; // rbp
  _QWORD *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 *v43; // rax
  const char *v44; // rbx
  __int64 *v45; // rax
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  const char *v49; // rsi
  const char *v50; // rbx
  __int64 *v51; // rax
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  const char *v55; // rsi
  unsigned __int64 v56; // [rsp+0h] [rbp-88h]
  unsigned __int64 v57; // [rsp+0h] [rbp-88h]
  size_t v58; // [rsp+8h] [rbp-80h]
  __int64 v59; // [rsp+10h] [rbp-78h] BYREF
  __int128 v60; // [rsp+18h] [rbp-70h]
  __int128 v61; // [rsp+28h] [rbp-60h]
  __int64 v62; // [rsp+38h] [rbp-50h]
  int v63; // [rsp+40h] [rbp-48h]
  unsigned __int64 v64; // [rsp+48h] [rbp-40h]

  v1 = *(unsigned __int8 *)(a1 + 142);
  v64 = __readfsqword(0x28u);
  if ( (unsigned __int8)v1 > 2u )
    return v1;
  v2 = *(_QWORD *)(a1 + 152);
  if ( !v2 )
  {
    if ( (_BYTE)v1 == 1 )
      return 1;
LABEL_10:
    v10 = a1 + 8;
    idati = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL) + 96LL);
    WORD4(v60) = 0;
    *(_QWORD *)&v60 = "";
    if ( !idati )
    {
      idati = get_idati();
      v10 = a1 + 8;
    }
    v59 = idati;
    create_tinfo(v10, 29, 189, &v59);
    return 1;
  }
  v4 = *(_QWORD *)(a1 + 144);
  v5 = 0;
  v6 = 3;
  do
  {
    v7 = *(_QWORD *)(v4 + 8 * v5);
    v8 = *(_BYTE *)(v7 + 142);
    if ( v8 <= 1u )
    {
      v6 = 1;
    }
    else if ( v8 == 5 )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v20 = sub_34340(v7);
        v21 = src;
        if ( v20[1] )
          v21 = (const char *)*v20;
        v22 = sub_34340(a1);
        v26 = src;
        if ( v22[1] )
          v26 = (const char *)*v22;
        sub_88B80(
          (unsigned int)"Error union DIE %s dependency DIE %s processing error\n",
          (_DWORD)v26,
          (_DWORD)v21,
          v23,
          v24,
          v25);
      }
      return 5;
    }
    ++v5;
  }
  while ( v5 != v2 );
  if ( v6 == (_BYTE)v1 )
    return 1;
  if ( v6 == 1 )
    goto LABEL_10;
  v63 = 1;
  v12 = 0;
  v13 = 0;
  v59 = 0;
  v14 = 0;
  v15 = 0;
  v62 = 0;
  v60 = 0;
  v61 = 0;
  while ( 1 )
  {
    v19 = *(_QWORD **)(v4 + 8 * v15);
    if ( v13 < v14 + 1 )
    {
      v59 = qvector_reserve(&v59, v12, v14 + 1, 144);
      v12 = v59;
      v14 = v60;
    }
    v16 = v12 + 144 * v14;
    *(_QWORD *)(v16 + 16) = 0;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 112) = 1;
    *(_DWORD *)(v16 + 120) = -1;
    *(_QWORD *)(v16 + 128) = 0;
    *(_BYTE *)(v16 + 136) = 0;
    *(_OWORD *)v16 = 0;
    *(_OWORD *)(v16 + 24) = 0;
    *(_OWORD *)(v16 + 48) = 0;
    *(_OWORD *)(v16 + 64) = 0;
    *(_QWORD *)&v60 = v60 + 1;
    if ( !(unsigned __int8)sub_350A0((__int64)v19, v16 + 64) )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v43 = sub_34340((__int64)v19);
        v44 = src;
        if ( v43[1] )
          v44 = (const char *)*v43;
        v45 = sub_34340(a1);
        v49 = src;
        if ( v45[1] )
          v49 = (const char *)*v45;
        sub_88B80(
          (unsigned int)"Error union DIE %s propagating type info from DIE %s\n",
          (_DWORD)v49,
          (_DWORD)v44,
          v46,
          v47,
          v48);
      }
      goto LABEL_49;
    }
    *(_QWORD *)v16 = 0;
    *(_QWORD *)(v16 + 8) = v19[23];
    if ( (_QWORD *)(v16 + 16) != v19 + 5 )
    {
      v17 = v19[6];
      if ( v17 && (v18 = v17 - 1, v17 != 1) )
      {
        v27 = (const void *)v19[5];
        v28 = *(void **)(v16 + 16);
        if ( *(_QWORD *)(v16 + 32) < v17 )
        {
          v58 = v17 - 1;
          v57 = v17;
          v28 = (void *)qvector_reserve(v16 + 16, *(_QWORD *)(v16 + 16), v17, 1);
          v18 = v58;
          v17 = v57;
          *(_QWORD *)(v16 + 16) = v28;
        }
        *(_QWORD *)(v16 + 24) = v17;
        v56 = v17;
        memmove(v28, v27, v18);
        *(_BYTE *)(*(_QWORD *)(v16 + 16) + v56 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v16 + 24) = 0;
      }
    }
    v14 = v60;
    if ( (unsigned __int64)++v15 >= *(_QWORD *)(a1 + 152) )
      break;
    v4 = *(_QWORD *)(a1 + 144);
    v13 = *((_QWORD *)&v60 + 1);
    v12 = v59;
  }
  *((_QWORD *)&v61 + 1) = 0;
  if ( (_QWORD)v60 )
  {
    v29 = (unsigned __int64 *)(v59 + 8);
    v30 = 0;
    do
    {
      if ( v30 < *v29 )
        v30 = *v29;
      v29 += 18;
      *((_QWORD *)&v61 + 1) = v30;
    }
    while ( (unsigned __int64 *)(v59 + 144 * v60 + 8) != v29 );
    v14 = (v30 + 7) >> 3;
  }
  *((_QWORD *)&v61 + 1) = v14;
  *(_QWORD *)&v61 = *(unsigned int *)(a1 + 136);
  HIBYTE(v63) = 1;
  if ( !(unsigned __int8)create_tinfo(a1 + 8, 29, 13, &v59) )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v31 = src;
      if ( *(_QWORD *)(a1 + 48) )
        v31 = *(const char **)(a1 + 40);
      v32 = sub_34340(a1);
      v36 = src;
      if ( v32[1] )
        v36 = (const char *)*v32;
      sub_88B80(
        (unsigned int)"Error union DIE %s constructing IDA type %s info\n",
        (_DWORD)v36,
        (_DWORD)v31,
        v33,
        v34,
        v35);
    }
LABEL_49:
    v1 = 5;
    goto LABEL_50;
  }
  if ( !set_tinfo_property(a1 + 8, 2, 4) && (debug & 0x400000) != 0 )
  {
    v50 = src;
    if ( *(_QWORD *)(a1 + 48) )
      v50 = *(const char **)(a1 + 40);
    v51 = sub_34340(a1);
    v55 = src;
    if ( v51[1] )
      v55 = (const char *)*v51;
    sub_88B80(
      (unsigned int)"Warning union DIE %s calculating alignment IDA type %s info\n",
      (_DWORD)v55,
      (_DWORD)v50,
      v52,
      v53,
      v54);
  }
  v1 = 3;
LABEL_50:
  v37 = v59;
  if ( v59 )
  {
    v38 = v60;
    if ( (_QWORD)v60 )
    {
      v39 = 0;
      do
      {
        v40 = (_QWORD *)(v37 + 144 * v39);
        clear_tinfo_t(v40 + 8);
        v41 = v40[5];
        if ( v41 )
        {
          v40[6] = 0;
          qfree(v41);
        }
        v42 = v40[2];
        if ( v42 )
        {
          v40[3] = 0;
          qfree(v42);
        }
        ++v39;
        v37 = v59;
      }
      while ( v38 != v39 );
    }
    *(_QWORD *)&v60 = 0;
    qfree(v37);
  }
  return v1;
}

