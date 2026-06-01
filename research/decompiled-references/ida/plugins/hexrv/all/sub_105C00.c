__int64 __fastcall sub_105C00(__int64 a1, int a2, __m128i *a3, unsigned __int64 a4, unsigned __int8 a5, __int64 *a6)
{
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  __int64 v10; // r13
  __int64 v11; // rax
  int v12; // r15d
  int v13; // ecx
  int v14; // r14d
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rbx
  unsigned __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rcx
  char v23; // al
  __int64 *v24; // rdx
  __int64 *v25; // rdi
  __int64 *v26; // r9
  __int64 *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r10
  int v32; // r8d
  int v33; // r9d
  const char *v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // ebx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // r14
  int v39; // r11d
  __int64 *v40; // r9
  __int64 *v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  char v46; // bl
  _QWORD *v47; // rax
  char v48; // al
  __int64 v49; // rdx
  _QWORD *v50; // rbx
  __int64 *v52; // [rsp+0h] [rbp-100h]
  unsigned int v53; // [rsp+8h] [rbp-F8h]
  int v54; // [rsp+Ch] [rbp-F4h]
  __m128i *v58; // [rsp+30h] [rbp-D0h]
  __int64 v60[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  char v64; // [rsp+70h] [rbp-90h]
  unsigned __int64 v65; // [rsp+78h] [rbp-88h]
  char v66; // [rsp+80h] [rbp-80h]
  __int64 *v67; // [rsp+90h] [rbp-70h] BYREF
  __int128 v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  char v70; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v71; // [rsp+B8h] [rbp-48h]
  char v72; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v73; // [rsp+C8h] [rbp-38h]

  v52 = a6;
  v73 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a1 + 52) + 1;
  *(_DWORD *)(a1 + 52) = v6;
  if ( v6 > 9999 )
    return (unsigned int)-19;
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_QWORD *)(a4 + 8) == 0;
  v60[0] = 0;
  v60[1] = 0;
  *(_DWORD *)(a4 + 44) = v7;
  if ( v8 )
  {
LABEL_62:
    sub_5FF00(v52, v60);
    v36 = 0;
    --*(_DWORD *)(a1 + 52);
    goto LABEL_60;
  }
  v54 = 0;
  v10 = *(_QWORD *)(a4 + 24);
  v11 = 0;
  v12 = *(unsigned __int8 *)(a4 + 32);
  v13 = *(_DWORD *)(a4 + 40);
LABEL_4:
  v14 = v12;
  v15 = *(int *)(*(_QWORD *)a4 + 4 * v11);
  v16 = *(_QWORD **)(a1 + 40);
  if ( !a5 )
    v16 = *(_QWORD **)(a1 + 32);
  v53 = v15;
  v17 = *v16 + 24 * v15;
  v18 = v10;
  v58 = (__m128i *)v17;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)v12 >= (unsigned __int8)v14
        && ((unsigned __int8)v14 < (unsigned __int8)v12 || v10 >= v18 + v13) )
      {
        v11 = ++v54;
        if ( (unsigned __int64)v54 >= *(_QWORD *)(a4 + 8) )
          goto LABEL_62;
        v12 = v14;
        v10 = v18;
        goto LABEL_4;
      }
      v69 = v10;
      v67 = nullptr;
      v71 = 0xFFFFFFFF00000001LL;
      v70 = v12;
      v72 = 1;
      v68 = 0;
      v19 = sub_FFCE0((unsigned __int64 *)v58, (__int64)&v67);
      if ( v19 == (_QWORD *)v58->m128i_i64[0] || (v20 = (unsigned __int64)(v19 + 3)) == 0 )
      {
        v46 = *(_BYTE *)(a4 + 48);
        v66 = 1;
        v63 = v10;
        v61 = 0;
        v64 = v12;
        v65 = 0xFFFFFFFF00000001LL;
        v62 = 0;
        v61 = qvector_reserve();
        *(_DWORD *)(v61 + 4 * v62) = a2;
        v67 = &v61;
        v66 |= v46 & 4 | 8;
        *(_QWORD *)&v62 = v62 + 1;
        sub_103110(v58, (__int64)&v61, (__int64 *)&v67);
        v69 = v10;
        v67 = nullptr;
        v70 = v12;
        v71 = 0xFFFFFFFF00000001LL;
        v72 = 1;
        v68 = 0;
        v47 = sub_FFCE0((unsigned __int64 *)v58, (__int64)&v67);
        if ( v47 == (_QWORD *)v58->m128i_i64[0] || (v20 = (unsigned __int64)(v47 + 3), v47 == (_QWORD *)-24LL) )
        {
          if ( !under_debugger )
            sub_37DDE0(50165);
LABEL_72:
          BUG();
        }
        if ( v61 )
        {
          *(_QWORD *)&v62 = 0;
          qfree();
        }
        v14 = *(unsigned __int8 *)(a4 + 32);
      }
      v21 = *(int *)(v20 + 40);
      v22 = v21;
      v10 += v21;
      if ( *(_DWORD *)(v20 + 44) != *(_DWORD *)(a1 + 48) )
        break;
      v13 = *(_DWORD *)(a4 + 40);
      v18 = *(_QWORD *)(a4 + 24);
    }
    v23 = *(_BYTE *)(v20 + 32);
    if ( (_BYTE)v14 != v23 )
      break;
    v37 = *(_QWORD *)(a4 + 24);
    v38 = *(_QWORD *)(v20 + 24);
    v39 = *(_DWORD *)(a4 + 40);
    if ( v37 == v38 && (_DWORD)v21 == v39 )
      goto LABEL_29;
    v40 = *(__int64 **)(a1 + 40);
    v41 = *(__int64 **)(a1 + 32);
    v25 = v40;
    v24 = v41;
    if ( !v39 || v38 < v37 || v37 + v39 - 1 < v38 + v21 - 1 )
      goto LABEL_17;
    v42 = 3;
    if ( a5 )
    {
      v41 = *(__int64 **)(a1 + 40);
      v42 = 1;
      v40 = *(__int64 **)(a1 + 32);
    }
    v43 = *(_QWORD *)(a1 + 24);
    v44 = *(_QWORD *)(a1 + 16);
    if ( v23 == 1 )
    {
      v37 = (int)v37;
    }
    else if ( v23 != 5 )
    {
      sub_FD870(v25, v42, v43, v44);
    }
    v67 = (__int64 *)v37;
    LOBYTE(v68) = v23;
    DWORD1(v68) = v39;
    v45 = sub_104780(v58, v20, (__int64)&v67, v44, v41, v40, v42, v43, v60);
    if ( v45 )
    {
      *(_BYTE *)(a1 + 58) = 1;
      if ( v45 == 2 || sub_605B0(v60, a2) )
        goto LABEL_59;
      v48 = *(_BYTE *)(a4 + 32);
      v49 = *(_QWORD *)(a4 + 24);
      v67 = nullptr;
      v72 = 1;
      v70 = v48;
      v69 = v49;
      v71 = 0xFFFFFFFF00000001LL;
      v68 = 0;
      v50 = sub_FFCE0((unsigned __int64 *)v58, (__int64)&v67);
      if ( v50 == (_QWORD *)v58->m128i_i64[0] || (v20 = (unsigned __int64)(v50 + 3)) == 0 )
      {
        if ( !under_debugger )
          sub_37DDE0(51763);
        goto LABEL_72;
      }
      ++*(_DWORD *)(a1 + 48);
      *(_BYTE *)(a1 + 56) = 1;
      goto LABEL_27;
    }
    if ( (*(_BYTE *)(a4 + 48) & 4) == 0 )
    {
      if ( !under_debugger )
        sub_37DDE0(51762);
      goto LABEL_72;
    }
LABEL_24:
    v34 = s1;
    v35 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v35 + 8) )
      v34 = *(const char **)v35;
    sub_32BE10(*(_QWORD *)(a1 + 16), -1, 20, (_DWORD)v34, v32, v33);
    *(_BYTE *)(a1 + 57) = 1;
LABEL_27:
    v36 = sub_105C00(a1, v53, v58, v20, a5 ^ 1u, v60, v52);
    if ( v36 )
      goto LABEL_60;
    *(_BYTE *)(a1 + 58) = 1;
LABEL_29:
    if ( sub_605B0(v60, a2) )
      goto LABEL_59;
    v13 = *(_DWORD *)(a4 + 40);
    v18 = *(_QWORD *)(a4 + 24);
    v14 = *(unsigned __int8 *)(a4 + 32);
  }
  v24 = *(__int64 **)(a1 + 32);
  v25 = *(__int64 **)(a1 + 40);
LABEL_17:
  v26 = v24;
  v27 = v25;
  v28 = 1;
  if ( a5 )
  {
    v27 = v26;
    v28 = 3;
    v26 = v25;
  }
  v29 = *(_QWORD *)(a1 + 24);
  v30 = *(_QWORD *)(a1 + 16);
  if ( v23 == 1 )
  {
    v31 = *(int *)(v20 + 24);
  }
  else
  {
    if ( v23 != 5 )
      sub_FD870(v29, v30, v28, v22);
    v31 = *(_QWORD *)(v20 + 24);
  }
  DWORD1(v68) = v22;
  v67 = (__int64 *)v31;
  LOBYTE(v68) = v23;
  if ( !(unsigned int)sub_104780(a3, a4, (__int64)&v67, v30, v27, v26, v28, v29, v60) )
  {
    if ( (*(_BYTE *)(v20 + 48) & 4) == 0 )
    {
      if ( !under_debugger )
        sub_37DDE0(51764);
      goto LABEL_72;
    }
    goto LABEL_24;
  }
  *(_BYTE *)(a1 + 58) = 1;
  *(_BYTE *)(a1 + 56) = 1;
LABEL_59:
  v36 = -36;
LABEL_60:
  qfree();
  return v36;
}

