__int64 __fastcall sub_83310(__int64 a1, __int64 a2, double a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rbp
  size_t v5; // rax
  __int64 result; // rax
  __int64 *v7; // r13
  __int64 v8; // rbp
  __int64 v9; // r15
  size_t v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 i; // r15
  size_t v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  size_t v24; // r13
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r13
  unsigned __int64 v28; // rdx
  size_t v29; // r9
  __int64 v30; // r8
  size_t v31; // r10
  char *v32; // rsi
  const char *v33; // rsi
  _BYTE *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  size_t v37; // r14
  size_t v38; // r9
  size_t v39; // r14
  char *v40; // rsi
  unsigned int v41; // [rsp+8h] [rbp-100h]
  __int64 v42; // [rsp+10h] [rbp-F8h]
  unsigned int v43; // [rsp+10h] [rbp-F8h]
  unsigned int v44; // [rsp+10h] [rbp-F8h]
  __int64 v45; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v46; // [rsp+10h] [rbp-F8h]
  __int64 v47; // [rsp+18h] [rbp-F0h]
  __int64 v48; // [rsp+18h] [rbp-F0h]
  size_t v49; // [rsp+28h] [rbp-E0h]
  int v50; // [rsp+34h] [rbp-D4h]
  unsigned __int64 v51; // [rsp+38h] [rbp-D0h]
  size_t v52; // [rsp+40h] [rbp-C8h]
  size_t v53; // [rsp+48h] [rbp-C0h]
  __int64 v54; // [rsp+50h] [rbp-B8h]
  __int64 v55; // [rsp+58h] [rbp-B0h]
  void *v56; // [rsp+60h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+68h] [rbp-A0h]
  void *src; // [rsp+80h] [rbp-88h] BYREF
  __int128 v59; // [rsp+88h] [rbp-80h]
  char *v60; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v61; // [rsp+A8h] [rbp-60h]
  _BYTE v62[10]; // [rsp+BEh] [rbp-4Ah] BYREF
  unsigned __int64 v63; // [rsp+C8h] [rbp-40h]

  v3 = (__int64 *)(a1 + 72);
  v63 = __readfsqword(0x28u);
  v4 = a2;
  sub_7C7F0((__int64 *)(a1 + 72));
  if ( *(_QWORD *)a2 == -1 )
  {
    sub_7A780(v3, 2);
  }
  else
  {
    if ( *(_QWORD *)a2 >= *(_QWORD *)(a1 + 64) )
      sub_7A780(v3, 0);
    else
      sub_7A780(v3, 1);
    v5 = pack_dq() - (_QWORD)v62;
    if ( v5 )
      sub_7BEC0(v3, v62, v5);
  }
  sub_7C7F0(v3);
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 'F':
    case 'H':
    case 'J':
    case 'K':
    case 'L':
    case 'N':
    case 'O':
    case 'P':
    case 'T':
      return 0;
    case 'G':
      return sub_81340(a1, a2, *(_QWORD ***)(a2 + 24));
    case 'I':
      sub_7A780(v3, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 72LL) == 0);
      return 0;
    case 'M':
      sub_81170((_QWORD *)a1, *(_QWORD *)(a2 + 24) + 64LL);
      sub_7C7F0(v3);
      v11 = *(_QWORD *)(a2 + 24);
      v12 = *(_QWORD *)(v11 + 120);
      v13 = *(_QWORD *)(v11 + 112);
      if ( v13 == v13 + 56 * v12 )
        goto LABEL_26;
      v47 = v13 + 56 * v12;
      v42 = v4;
      while ( 1 )
      {
        sub_7C7F0(v3);
        v14 = *(_QWORD *)(v13 + 32);
        v15 = v14 + 8LL * *(_QWORD *)(v13 + 40);
        for ( i = v14; v15 != i; i += 8 )
        {
          v17 = pack_dq() - (_QWORD)v62;
          if ( v17 )
            sub_7BEC0(v3, v62, v17);
        }
        result = sub_255A80((__int64 *)a1, v13, v42);
        if ( (_DWORD)result )
          break;
        v13 += 56;
        if ( v13 == v47 )
        {
          v4 = v42;
          v11 = *(_QWORD *)(v42 + 24);
LABEL_26:
          result = sub_255A80((__int64 *)a1, v11, v4);
          if ( !(_DWORD)result )
            *(_DWORD *)(a1 + 8) |= 1u;
          return result;
        }
      }
      return result;
    case 'Q':
      sub_7C7F0(v3);
      return 0;
    case 'R':
      v7 = *(__int64 **)(a2 + 24);
      sub_7C7F0(v3);
      v8 = *v7;
      v9 = *v7 + 8 * v7[1];
      if ( *v7 != v9 )
      {
        do
        {
          v10 = pack_dq() - (_QWORD)v62;
          if ( v10 )
            sub_7BEC0(v3, v62, v10);
          v8 += 8;
        }
        while ( v9 != v8 );
      }
      return 0;
    case 'S':
      v18 = *(_QWORD *)(a2 + 24);
      result = sub_81340(a1, a2, (_QWORD **)v18);
      if ( (_DWORD)result )
        return result;
      sub_7C7F0(v3);
      sub_7C7F0(v3);
      sub_7C7F0(v3);
      sub_7C7F0(v3);
      v19 = *(_QWORD *)(v18 + 24);
      v20 = 48LL * *(_QWORD *)(v18 + 32);
      v55 = v19 + v20;
      if ( v19 + v20 == v19 )
        return 0;
      v48 = *(_QWORD *)(v18 + 24);
      v21 = 0;
LABEL_33:
      v50 = v21 + 1;
      v56 = nullptr;
      *(_OWORD *)n = 0;
      sub_6B870((__int64 *)&v56);
      sub_81980((__int64)&src, "block.size");
      v24 = n[0];
      v60 = nullptr;
      v61 = 0;
      if ( n[0] )
      {
        v60 = (char *)qalloc_or_throw(n[0], (__int64)"block.size", v22, v23);
        *((_QWORD *)&v61 + 1) = v24;
        memcpy(v60, v56, v24);
        *(_QWORD *)&v61 = v24;
        if ( !(_QWORD)v59 )
          goto LABEL_35;
        v39 = v59 - 1;
        if ( (_QWORD)v59 == 1 )
          goto LABEL_35;
        --v24;
        v38 = v59 - 1 + v24;
        v25 = v59 + v24;
      }
      else
      {
        v25 = v59;
        if ( !(_QWORD)v59 )
          goto LABEL_35;
        v38 = v59 - 1;
        if ( (_QWORD)v59 == 1 )
          goto LABEL_35;
        v39 = v59 - 1;
      }
      v40 = v60;
      if ( *((_QWORD *)&v61 + 1) < v25 )
      {
        v49 = v38;
        v46 = v25;
        v60 = (char *)qvector_reserve((__int64)&v60, (__int64)v60, v25, 1);
        v38 = v49;
        v40 = v60;
        v25 = v46;
      }
      *(_QWORD *)&v61 = v25;
      v40[v38] = 0;
      memcpy(&v60[v24], src, v39);
LABEL_35:
      result = sub_81340(a1, v4, (_QWORD **)v48);
      if ( v60 )
      {
        v43 = result;
        *(_QWORD *)&v61 = 0;
        qfree((__int64)v60);
        result = v43;
      }
      if ( src )
      {
        v44 = result;
        *(_QWORD *)&v59 = 0;
        qfree((__int64)src);
        result = v44;
      }
      if ( (_DWORD)result )
        goto LABEL_63;
      sub_81980((__int64)&src, "catchexprs.size");
      sub_83210((__int64)&v60, (__int64)&v56, (__int64)&src, v26);
      sub_7C7F0(v3);
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree((__int64)v60);
      }
      if ( src )
      {
        *(_QWORD *)&v59 = 0;
        qfree((__int64)src);
      }
      v27 = *(_QWORD *)(v48 + 24);
      v45 = v27 + 88LL * *(_QWORD *)(v48 + 32);
      if ( v45 == v27 )
        goto LABEL_65;
      break;
    default:
      if ( !under_debugger )
        sub_383060(0xCC78u, a3);
      BUG();
  }
  do
  {
    v59 = 0;
    src = nullptr;
    v34 = (_BYTE *)qvector_reserve((__int64)&src, 0, 10, 1);
    src = v34;
    *(_QWORD *)&v59 = 10;
    *(_QWORD *)v34 = 0x7079745F656B6166LL;
    v34[8] = 101;
    *((_BYTE *)src + 9) = 0;
    v37 = n[0];
    v60 = nullptr;
    v61 = 0;
    if ( n[0] )
    {
      v60 = (char *)qalloc_or_throw(n[0], 0, v35, v36);
      *((_QWORD *)&v61 + 1) = v37;
      memcpy(v60, v56, v37);
      *(_QWORD *)&v61 = v37;
    }
    v28 = v59;
    if ( (_QWORD)v59 )
    {
      v29 = v59 - 1;
      if ( (_QWORD)v59 != 1 )
      {
        v30 = v61;
        v31 = v59 - 1;
        if ( (_QWORD)v61 )
        {
          v30 = v61 - 1;
          v31 = v29 + v61 - 1;
          v28 = v59 + v61 - 1;
        }
        v32 = v60;
        if ( *((_QWORD *)&v61 + 1) < v28 )
        {
          v54 = v30;
          v53 = v59 - 1;
          v52 = v31;
          v51 = v28;
          v60 = (char *)qvector_reserve((__int64)&v60, (__int64)v60, v28, 1);
          v30 = v54;
          v32 = v60;
          v29 = v53;
          v31 = v52;
          v28 = v51;
        }
        *(_QWORD *)&v61 = v28;
        v32[v31] = 0;
        memcpy(&v60[v30], src, v29);
      }
    }
    v33 = s1;
    if ( *(_QWORD *)(v27 + 72) )
      v33 = *(const char **)(v27 + 64);
    sub_7C850(v3, v33);
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree((__int64)v60);
    }
    if ( src )
    {
      *(_QWORD *)&v59 = 0;
      qfree((__int64)src);
    }
    result = sub_255A80((__int64 *)a1, v27, v4);
    if ( (_DWORD)result )
    {
LABEL_63:
      if ( v56 )
      {
        v41 = result;
        n[0] = 0;
        qfree((__int64)v56);
        return v41;
      }
      return result;
    }
    v27 += 88;
  }
  while ( v45 != v27 );
LABEL_65:
  if ( v56 )
  {
    n[0] = 0;
    qfree((__int64)v56);
  }
  v48 += 48;
  if ( v55 != v48 )
  {
    v21 = v50;
    goto LABEL_33;
  }
  return 0;
}

