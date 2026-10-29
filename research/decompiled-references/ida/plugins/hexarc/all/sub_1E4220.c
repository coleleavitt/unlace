__int64 __fastcall sub_1E4220(__int64 a1, unsigned __int8 *a2, __int64 a3, int a4)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 **v8; // r13
  int v9; // r9d
  _DWORD *v10; // r14
  __int64 v11; // r12
  __int64 *v12; // rdi
  __int64 v13; // rax
  int v15; // ebp
  unsigned __int64 v16; // r9
  __int64 *v17; // r11
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // esi
  unsigned int *v21; // rcx
  unsigned int v22; // r15d
  unsigned __int64 v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rsi
  int v29; // eax
  __int64 v30; // r11
  int v31; // r15d
  __int64 v32; // rax
  int v33; // r10d
  unsigned __int64 v34; // r8
  __int64 *v35; // rdx
  unsigned __int64 v36; // rax
  unsigned int v37; // ebx
  int v38; // ecx
  unsigned int *v39; // rsi
  unsigned int v40; // r15d
  unsigned __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  char v44; // al
  __int64 v45; // rax
  int v47; // [rsp+0h] [rbp-50h]
  __int64 v48; // [rsp+0h] [rbp-50h]
  __int64 v49; // [rsp+8h] [rbp-48h]
  int v50; // [rsp+14h] [rbp-3Ch]
  char v51; // [rsp+14h] [rbp-3Ch]

  if ( *(_BYTE *)(a1 + 64) != (_BYTE)a4 )
    return 0;
  v5 = (__int64)a2;
  v6 = *a2;
  if ( (unsigned __int8)v6 > 0xEu )
    return 0;
  v7 = 16498;
  if ( !_bittest64(&v7, v6) )
    return 0;
  v8 = *(__int64 ***)(a1 + 56);
  v9 = a4;
  v10 = *(_DWORD **)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 48);
  v49 = *(_QWORD *)(a1 + 16);
  if ( !v8[2] )
  {
    v12 = *v8;
    goto LABEL_15;
  }
  v12 = *v8;
  v13 = 0;
  v15 = 0;
  while ( 1 )
  {
    v16 = v12[4];
    v17 = &v8[1][v13];
    v18 = *(unsigned int *)v17;
    v19 = *(_DWORD *)v17;
    if ( v18 >= v16 )
    {
      v22 = *(_DWORD *)v17;
      v20 = 0;
    }
    else
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = (unsigned int *)(v12[3] + 8 * v18);
        v22 = v19;
        v19 = *v21;
        if ( *v21 == v22 )
          break;
        v18 = v19;
        v20 += v21[1];
        if ( v19 >= v16 )
        {
          v22 = *v21;
          break;
        }
      }
    }
    v23 = (unsigned int)(*((_DWORD *)v17 + 1) + v20);
    v24 = (_QWORD *)(*v12 + 24 * v18);
    if ( v23 >= v24[1] )
    {
LABEL_48:
      if ( !under_debugger )
        sub_37B760(51105);
      BUG();
    }
    v25 = *(_QWORD *)(*v24 + (v23 << 6) + 8);
    if ( *(_DWORD *)(v25 + 4) < *((_DWORD *)a2 + 1) )
      goto LABEL_13;
    if ( sub_11EF10((unsigned __int8 *)v25, v11, (__int64)a2, 1u) )
      break;
    v12 = *v8;
LABEL_13:
    v13 = ++v15;
    if ( v15 >= (unsigned __int64)v8[2] )
    {
      v9 = a4;
      v5 = (__int64)a2;
      goto LABEL_15;
    }
  }
  v12 = *v8;
  v5 = (__int64)a2;
  v9 = a4;
  v28 = **v8 + 24LL * (int)v22;
  if ( v28 )
    goto LABEL_21;
LABEL_15:
  if ( *v10 == 4 )
  {
    v29 = v10[9];
  }
  else
  {
    if ( *v10 != 67 )
      goto LABEL_17;
    v29 = v10[17];
    if ( v10[9] != v29 )
      goto LABEL_17;
  }
  if ( *(_DWORD *)(v5 + 4) != v29 || (v30 = (__int64)(v10 + 8), !v8[2]) )
  {
LABEL_17:
    v26 = v12[1];
    v27 = *v12;
    if ( v12[2] < (unsigned __int64)(v26 + 1) )
    {
      v51 = v9;
      v45 = qvector_reserve();
      LOBYTE(v9) = v51;
      v27 = v45;
      *v12 = v45;
      v26 = v12[1];
    }
    v28 = v27 + 24 * v26;
    *(_QWORD *)v28 = 0;
    *(_OWORD *)(v28 + 8) = 0;
    ++v12[1];
    goto LABEL_21;
  }
  v31 = 0;
  v32 = 0;
  v33 = v9;
  while ( 2 )
  {
    v34 = v12[4];
    v35 = &v8[1][v32];
    v36 = *(unsigned int *)v35;
    v37 = *(_DWORD *)v35;
    if ( v36 >= v34 )
    {
      v38 = 0;
    }
    else
    {
      v47 = v31;
      v38 = 0;
      do
      {
        v39 = (unsigned int *)(v12[3] + 8 * v36);
        v40 = v37;
        v37 = *v39;
        if ( v40 == *v39 )
          break;
        v36 = v37;
        v38 += v39[1];
      }
      while ( v37 < v34 );
      v31 = v47;
    }
    v41 = (unsigned int)(*((_DWORD *)v35 + 1) + v38);
    v42 = (_QWORD *)(*v12 + 24 * v36);
    if ( v41 >= v42[1] )
      goto LABEL_48;
    v43 = *(_QWORD *)(*v42 + (v41 << 6) + 8);
    if ( *(_DWORD *)(v43 + 4) < v10[9] )
    {
LABEL_38:
      v32 = ++v31;
      if ( v31 >= (unsigned __int64)v8[2] )
      {
        LOBYTE(v9) = v33;
        goto LABEL_17;
      }
      continue;
    }
    break;
  }
  v50 = v33;
  v48 = v30;
  v44 = sub_11EF10((unsigned __int8 *)v43, v11, v30, 1u);
  v33 = v50;
  if ( !v44 )
  {
    v12 = *v8;
    v30 = v48;
    goto LABEL_38;
  }
  v12 = *v8;
  LOBYTE(v9) = v50;
  v28 = **v8 + 24LL * (int)v37;
  if ( !v28 )
    goto LABEL_17;
LABEL_21:
  sub_1E4010((__int64)v8, (__int64 *)v28, v49, (__int64)v10, v5, v9);
  return 0;
}

