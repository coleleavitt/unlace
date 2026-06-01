__int64 __fastcall sub_7EE50(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  size_t v4; // rax
  __int64 result; // rax
  __int64 *v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r15
  size_t v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 i; // r15
  size_t v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // edx
  size_t v21; // r13
  size_t v22; // rdx
  __int64 v23; // r13
  unsigned __int64 v24; // rdx
  size_t v25; // r9
  __int64 v26; // r8
  size_t v27; // r10
  char *v28; // rsi
  const char *v29; // rsi
  _BYTE *v30; // rax
  size_t v31; // r14
  size_t v32; // r9
  size_t v33; // r14
  char *v34; // rsi
  unsigned int v35; // [rsp+8h] [rbp-100h]
  __int64 v36; // [rsp+10h] [rbp-F8h]
  unsigned int v37; // [rsp+10h] [rbp-F8h]
  unsigned int v38; // [rsp+10h] [rbp-F8h]
  __int64 v39; // [rsp+10h] [rbp-F8h]
  size_t v40; // [rsp+10h] [rbp-F8h]
  __int64 v41; // [rsp+18h] [rbp-F0h]
  __int64 v42; // [rsp+18h] [rbp-F0h]
  size_t v43; // [rsp+28h] [rbp-E0h]
  int v44; // [rsp+34h] [rbp-D4h]
  unsigned __int64 v45; // [rsp+38h] [rbp-D0h]
  size_t v46; // [rsp+40h] [rbp-C8h]
  size_t v47; // [rsp+48h] [rbp-C0h]
  __int64 v48; // [rsp+50h] [rbp-B8h]
  __int64 v49; // [rsp+58h] [rbp-B0h]
  void *v50; // [rsp+60h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+68h] [rbp-A0h]
  void *src; // [rsp+80h] [rbp-88h] BYREF
  __int128 v53; // [rsp+88h] [rbp-80h]
  char *v54; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v55; // [rsp+A8h] [rbp-60h]
  _BYTE v56[10]; // [rsp+BEh] [rbp-4Ah] BYREF
  unsigned __int64 v57; // [rsp+C8h] [rbp-40h]

  v2 = (__int64 *)(a1 + 72);
  v57 = __readfsqword(0x28u);
  v3 = a2;
  sub_78470((__int64 *)(a1 + 72));
  if ( *(_QWORD *)a2 == -1 )
  {
    sub_76400(v2, 2);
  }
  else
  {
    if ( *(_QWORD *)a2 >= *(_QWORD *)(a1 + 64) )
      sub_76400(v2, 0);
    else
      sub_76400(v2, 1);
    v4 = pack_dq() - (_QWORD)v56;
    if ( v4 )
      sub_77B40(v2, v56, v4);
  }
  sub_78470(v2);
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
      return sub_7CE80(a1, a2, *(_QWORD ***)(a2 + 24));
    case 'I':
      sub_76400(v2, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 72LL) == 0);
      return 0;
    case 'M':
      sub_7CCB0((_QWORD *)a1, *(_QWORD *)(a2 + 24) + 64LL);
      sub_78470(v2);
      v10 = *(_QWORD *)(a2 + 24);
      v11 = *(_QWORD *)(v10 + 120);
      v12 = *(_QWORD *)(v10 + 112);
      if ( v12 == v12 + 56 * v11 )
        goto LABEL_26;
      v41 = v12 + 56 * v11;
      v36 = v3;
      while ( 1 )
      {
        sub_78470(v2);
        v13 = *(_QWORD *)(v12 + 32);
        v14 = v13 + 8LL * *(_QWORD *)(v12 + 40);
        for ( i = v13; v14 != i; i += 8 )
        {
          v16 = pack_dq() - (_QWORD)v56;
          if ( v16 )
            sub_77B40(v2, v56, v16);
        }
        result = sub_250E80(a1, v12, v36);
        if ( (_DWORD)result )
          break;
        v12 += 56;
        if ( v12 == v41 )
        {
          v3 = v36;
          v10 = *(_QWORD *)(v36 + 24);
LABEL_26:
          result = sub_250E80(a1, v10, v3);
          if ( !(_DWORD)result )
            *(_DWORD *)(a1 + 8) |= 1u;
          return result;
        }
      }
      return result;
    case 'Q':
      sub_78470(v2);
      return 0;
    case 'R':
      v6 = *(__int64 **)(a2 + 24);
      sub_78470(v2);
      v7 = *v6;
      v8 = *v6 + 8 * v6[1];
      if ( *v6 != v8 )
      {
        do
        {
          v9 = pack_dq() - (_QWORD)v56;
          if ( v9 )
            sub_77B40(v2, v56, v9);
          v7 += 8;
        }
        while ( v8 != v7 );
      }
      return 0;
    case 'S':
      v17 = *(_QWORD *)(a2 + 24);
      result = sub_7CE80(a1, a2, (_QWORD **)v17);
      if ( (_DWORD)result )
        return result;
      sub_78470(v2);
      sub_78470(v2);
      sub_78470(v2);
      sub_78470(v2);
      v18 = *(_QWORD *)(v17 + 24);
      v19 = 48LL * *(_QWORD *)(v17 + 32);
      v49 = v18 + v19;
      if ( v18 + v19 == v18 )
        return 0;
      v42 = *(_QWORD *)(v17 + 24);
      v20 = 0;
LABEL_33:
      v44 = v20 + 1;
      v50 = nullptr;
      *(_OWORD *)n = 0;
      sub_674F0((__int64 *)&v50);
      sub_7D4C0((__int64)&src, "block.size");
      v21 = n[0];
      v54 = nullptr;
      v55 = 0;
      if ( n[0] )
      {
        v54 = (char *)qalloc_or_throw();
        *((_QWORD *)&v55 + 1) = v21;
        memcpy(v54, v50, v21);
        *(_QWORD *)&v55 = v21;
        if ( !(_QWORD)v53 )
          goto LABEL_35;
        v33 = v53 - 1;
        if ( (_QWORD)v53 == 1 )
          goto LABEL_35;
        --v21;
        v32 = v53 - 1 + v21;
        v22 = v53 + v21;
      }
      else
      {
        v22 = v53;
        if ( !(_QWORD)v53 )
          goto LABEL_35;
        v32 = v53 - 1;
        if ( (_QWORD)v53 == 1 )
          goto LABEL_35;
        v33 = v53 - 1;
      }
      v34 = v54;
      if ( *((_QWORD *)&v55 + 1) < v22 )
      {
        v43 = v32;
        v40 = v22;
        v54 = (char *)qvector_reserve();
        v32 = v43;
        v34 = v54;
        v22 = v40;
      }
      *(_QWORD *)&v55 = v22;
      v34[v32] = 0;
      memcpy(&v54[v21], src, v33);
LABEL_35:
      result = sub_7CE80(a1, v3, (_QWORD **)v42);
      if ( v54 )
      {
        v37 = result;
        *(_QWORD *)&v55 = 0;
        qfree();
        result = v37;
      }
      if ( src )
      {
        v38 = result;
        *(_QWORD *)&v53 = 0;
        qfree();
        result = v38;
      }
      if ( (_DWORD)result )
        goto LABEL_63;
      sub_7D4C0((__int64)&src, "catchexprs.size");
      sub_7ED50((__int64)&v54, (__int64)&v50, (__int64)&src);
      sub_78470(v2);
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        qfree();
      }
      if ( src )
      {
        *(_QWORD *)&v53 = 0;
        qfree();
      }
      v23 = *(_QWORD *)(v42 + 24);
      v39 = v23 + 88LL * *(_QWORD *)(v42 + 32);
      if ( v39 == v23 )
        goto LABEL_65;
      break;
    default:
      if ( !under_debugger )
        sub_37DDE0(52344);
      BUG();
  }
  do
  {
    v53 = 0;
    src = nullptr;
    v30 = (_BYTE *)qvector_reserve();
    src = v30;
    *(_QWORD *)&v53 = 10;
    *(_QWORD *)v30 = 0x7079745F656B6166LL;
    v30[8] = 101;
    *((_BYTE *)src + 9) = 0;
    v31 = n[0];
    v54 = nullptr;
    v55 = 0;
    if ( n[0] )
    {
      v54 = (char *)qalloc_or_throw();
      *((_QWORD *)&v55 + 1) = v31;
      memcpy(v54, v50, v31);
      *(_QWORD *)&v55 = v31;
    }
    v24 = v53;
    if ( (_QWORD)v53 )
    {
      v25 = v53 - 1;
      if ( (_QWORD)v53 != 1 )
      {
        v26 = v55;
        v27 = v53 - 1;
        if ( (_QWORD)v55 )
        {
          v26 = v55 - 1;
          v27 = v25 + v55 - 1;
          v24 = v53 + v55 - 1;
        }
        v28 = v54;
        if ( *((_QWORD *)&v55 + 1) < v24 )
        {
          v48 = v26;
          v47 = v53 - 1;
          v46 = v27;
          v45 = v24;
          v54 = (char *)qvector_reserve();
          v26 = v48;
          v28 = v54;
          v25 = v47;
          v27 = v46;
          v24 = v45;
        }
        *(_QWORD *)&v55 = v24;
        v28[v27] = 0;
        memcpy(&v54[v26], src, v25);
      }
    }
    v29 = s1;
    if ( *(_QWORD *)(v23 + 72) )
      v29 = *(const char **)(v23 + 64);
    sub_784D0(v2, v29);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree();
    }
    if ( src )
    {
      *(_QWORD *)&v53 = 0;
      qfree();
    }
    result = sub_250E80(a1, v23, v3);
    if ( (_DWORD)result )
    {
LABEL_63:
      if ( v50 )
      {
        v35 = result;
        n[0] = 0;
        qfree();
        return v35;
      }
      return result;
    }
    v23 += 88;
  }
  while ( v39 != v23 );
LABEL_65:
  if ( v50 )
  {
    n[0] = 0;
    qfree();
  }
  v42 += 48;
  if ( v49 != v42 )
  {
    v20 = v44;
    goto LABEL_33;
  }
  return 0;
}

