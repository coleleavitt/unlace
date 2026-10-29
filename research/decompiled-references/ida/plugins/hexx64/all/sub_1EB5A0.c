__int64 __fastcall sub_1EB5A0(__int64 a1, unsigned __int8 *a2, __int64 a3, int a4, double a5, __m128 a6)
{
  unsigned __int8 *v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  int v11; // r9d
  _DWORD *v12; // r14
  __int64 v13; // r12
  __int64 *v14; // rdi
  __int64 v15; // rax
  int v17; // ebp
  unsigned __int64 v18; // r9
  unsigned int *v19; // r11
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  int v22; // esi
  unsigned int *v23; // rcx
  unsigned int v24; // r15d
  unsigned __int64 v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // r11
  int v33; // r15d
  __int64 v34; // rax
  int v35; // r10d
  unsigned __int64 v36; // r8
  unsigned int *v37; // rdx
  unsigned __int64 v38; // rax
  unsigned int v39; // ebx
  int v40; // ecx
  unsigned int *v41; // rsi
  unsigned int v42; // r15d
  unsigned __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rax
  char v46; // al
  __int64 v47; // rax
  int v49; // [rsp+0h] [rbp-50h]
  __int64 v50; // [rsp+0h] [rbp-50h]
  __int64 v51; // [rsp+8h] [rbp-48h]
  int v52; // [rsp+14h] [rbp-3Ch]
  char v53; // [rsp+14h] [rbp-3Ch]

  if ( *(_BYTE *)(a1 + 64) != (_BYTE)a4 )
    return 0;
  v7 = a2;
  v8 = *a2;
  if ( (unsigned __int8)v8 > 0xEu )
    return 0;
  v9 = 16498;
  if ( !_bittest64(&v9, v8) )
    return 0;
  v10 = *(_QWORD *)(a1 + 56);
  v11 = a4;
  v12 = *(_DWORD **)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 48);
  v51 = *(_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(v10 + 16) )
  {
    v14 = *(__int64 **)v10;
    goto LABEL_15;
  }
  v14 = *(__int64 **)v10;
  v15 = 0;
  v17 = 0;
  while ( 1 )
  {
    v18 = v14[4];
    v19 = (unsigned int *)(*(_QWORD *)(v10 + 8) + 8 * v15);
    v20 = *v19;
    v21 = *v19;
    if ( v20 >= v18 )
    {
      v24 = *v19;
      v22 = 0;
    }
    else
    {
      v22 = 0;
      while ( 1 )
      {
        v23 = (unsigned int *)(v14[3] + 8 * v20);
        v24 = v21;
        v21 = *v23;
        if ( *v23 == v24 )
          break;
        v20 = v21;
        v22 += v23[1];
        if ( v21 >= v18 )
        {
          v24 = *v23;
          break;
        }
      }
    }
    v25 = v19[1] + v22;
    v26 = (_QWORD *)(*v14 + 24 * v20);
    if ( v25 >= v26[1] )
    {
LABEL_48:
      if ( !under_debugger )
        sub_383060(0xC7A1u, a5);
      BUG();
    }
    v27 = *(_QWORD *)(*v26 + (v25 << 6) + 8);
    if ( *(_DWORD *)(v27 + 4) < *((_DWORD *)a2 + 1) )
      goto LABEL_13;
    if ( sub_1255D0((unsigned __int8 *)v27, v13, (__int64)a2, 1, a5) )
      break;
    v14 = *(__int64 **)v10;
LABEL_13:
    v15 = ++v17;
    if ( (unsigned __int64)v17 >= *(_QWORD *)(v10 + 16) )
    {
      v11 = a4;
      v7 = a2;
      goto LABEL_15;
    }
  }
  v14 = *(__int64 **)v10;
  v7 = a2;
  v11 = a4;
  v30 = **(_QWORD **)v10 + 24LL * (int)v24;
  if ( v30 )
    goto LABEL_21;
LABEL_15:
  if ( *v12 == 4 )
  {
    v31 = v12[9];
  }
  else
  {
    if ( *v12 != 67 )
      goto LABEL_17;
    v31 = v12[17];
    if ( v12[9] != v31 )
      goto LABEL_17;
  }
  if ( *((_DWORD *)v7 + 1) != v31 || (v32 = (__int64)(v12 + 8), !*(_QWORD *)(v10 + 16)) )
  {
LABEL_17:
    v28 = v14[1];
    v29 = *v14;
    if ( v14[2] < (unsigned __int64)(v28 + 1) )
    {
      v53 = v11;
      v47 = qvector_reserve((__int64)v14, v29, v28 + 1, 24);
      LOBYTE(v11) = v53;
      v29 = v47;
      *v14 = v47;
      v28 = v14[1];
    }
    a5 = 0.0;
    v30 = v29 + 24 * v28;
    *(_QWORD *)v30 = 0;
    *(_OWORD *)(v30 + 8) = 0;
    ++v14[1];
    goto LABEL_21;
  }
  v33 = 0;
  v34 = 0;
  v35 = v11;
  while ( 2 )
  {
    v36 = v14[4];
    v37 = (unsigned int *)(*(_QWORD *)(v10 + 8) + 8 * v34);
    v38 = *v37;
    v39 = *v37;
    if ( v38 >= v36 )
    {
      v40 = 0;
    }
    else
    {
      v49 = v33;
      v40 = 0;
      do
      {
        v41 = (unsigned int *)(v14[3] + 8 * v38);
        v42 = v39;
        v39 = *v41;
        if ( v42 == *v41 )
          break;
        v38 = v39;
        v40 += v41[1];
      }
      while ( v39 < v36 );
      v33 = v49;
    }
    v43 = v37[1] + v40;
    v44 = (_QWORD *)(*v14 + 24 * v38);
    if ( v43 >= v44[1] )
      goto LABEL_48;
    v45 = *(_QWORD *)(*v44 + (v43 << 6) + 8);
    if ( *(_DWORD *)(v45 + 4) < v12[9] )
    {
LABEL_38:
      v34 = ++v33;
      if ( (unsigned __int64)v33 >= *(_QWORD *)(v10 + 16) )
      {
        LOBYTE(v11) = v35;
        goto LABEL_17;
      }
      continue;
    }
    break;
  }
  v52 = v35;
  v50 = v32;
  v46 = sub_1255D0((unsigned __int8 *)v45, v13, v32, 1, a5);
  v35 = v52;
  if ( !v46 )
  {
    v14 = *(__int64 **)v10;
    v32 = v50;
    goto LABEL_38;
  }
  v14 = *(__int64 **)v10;
  LOBYTE(v11) = v52;
  v30 = **(_QWORD **)v10 + 24LL * (int)v39;
  if ( !v30 )
    goto LABEL_17;
LABEL_21:
  sub_1EB390(v10, (__int64 *)v30, v51, (__int64)v12, (__int64)v7, (unsigned __int8)v11, a5, a6);
  return 0;
}

