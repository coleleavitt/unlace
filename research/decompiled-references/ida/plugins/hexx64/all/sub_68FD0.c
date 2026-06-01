__int64 __fastcall sub_68FD0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, double a5)
{
  char v5; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // esi
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rax
  int v18; // r14d
  char v19; // al
  __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 v22; // rax
  _QWORD *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rbp
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  char *v31; // rax
  char *v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-48h]
  unsigned int v38; // [rsp+Ch] [rbp-3Ch]
  unsigned int v39; // [rsp+Ch] [rbp-3Ch]
  unsigned int v40; // [rsp+Ch] [rbp-3Ch]

  v5 = a4;
  if ( (_BYTE)a4 )
  {
    v8 = *(_QWORD *)(a1 + 1496);
    if ( *(_QWORD *)(*(_QWORD *)(v8 + 24) + 16LL) == a3 || a3 == -1 || (*(_BYTE *)(v8 + 604) & 1) == 0 )
      return 0;
    v9 = sub_330F80((_QWORD *)a1, a3);
    sub_3311F0((_QWORD *)a1, a2, 0x2Bu, v9);
  }
  v10 = *(_DWORD *)(a1 + 64);
  if ( v10 <= 0
    || (v11 = *(_QWORD *)(a1 + 528), v12 = v10 - 1, a4 = *(_QWORD *)(v11 + 8LL * (v10 - 1)), *(_DWORD *)(a4 + 76) != 1) )
  {
    result = sub_67FD0(a1, a3, 2, a4, a5);
    goto LABEL_9;
  }
  v15 = (unsigned int)(v10 - 2);
  if ( (unsigned int)v10 <= 1 )
    sub_65460(a5);
  v16 = *(_QWORD *)(v11 + 8LL * (int)v15);
  if ( *(_DWORD *)(v16 + 76) == 3 )
  {
    v17 = *(_QWORD *)(v16 + 56);
    if ( v17 )
    {
      if ( *(_DWORD *)v17 == 55 || !*(_DWORD *)(v16 + 376) )
        goto LABEL_15;
      v18 = *(_DWORD *)(v16 + 72);
      v37 = *(_QWORD *)(v17 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(v16 + 376) )
        goto LABEL_15;
      v18 = *(_DWORD *)(v16 + 72);
      v37 = *(_QWORD *)(v16 + 32);
    }
    v19 = sub_A2BB0(v16);
    v21 = v18 + 1;
    if ( !v19 )
    {
      v22 = sub_68AC0(a1, v21, 0, v20, a5);
      v21 = v18 + 1;
      *(_DWORD *)(v22 + 24) |= 2u;
      v23 = (_QWORD *)v22;
      **(_DWORD **)(v16 + 368) = v18 + 1;
      v24 = *(_QWORD *)(v22 + 376);
      v25 = v23[46];
      if ( v23[48] < (unsigned __int64)(v24 + 1) )
      {
        v35 = qvector_reserve((__int64)(v23 + 46), v25, v24 + 1, 4);
        v21 = v18 + 1;
        v23[46] = v35;
        v25 = v35;
        v24 = v23[47];
      }
      *(_DWORD *)(v25 + 4 * v24) = v18 + 2;
      v26 = v23[44];
      ++v23[47];
      v27 = v23[43];
      if ( v23[45] < (unsigned __int64)(v26 + 1) )
      {
        v39 = v21;
        v34 = qvector_reserve((__int64)(v23 + 43), v27, v26 + 1, 4);
        v21 = v39;
        v23[43] = v34;
        v27 = v34;
        v26 = v23[44];
      }
      *(_DWORD *)(v27 + 4 * v26) = v18;
      v28 = (_QWORD *)v23[1];
      ++v23[44];
      v29 = v28[43];
      v30 = v28[44];
      v31 = (char *)(v29 + 4 * v30);
      if ( (char *)v29 == v31 )
        goto LABEL_37;
      v32 = (char *)v28[43];
      while ( *(_DWORD *)v32 != v18 )
      {
        v32 += 4;
        if ( v31 == v32 )
          goto LABEL_37;
      }
      if ( v31 == v32 )
      {
LABEL_37:
        v33 = v30 + 1;
      }
      else
      {
        v38 = v21;
        memmove(v32, v32 + 4, v31 - v32 - 4);
        v33 = v28[44];
        v21 = v38;
        v29 = v28[43];
        v30 = v33 - 1;
        v28[44] = v33 - 1;
      }
      if ( v28[45] < v33 )
      {
        v40 = v21;
        v36 = qvector_reserve((__int64)(v28 + 43), v29, v33, 4);
        v30 = v28[44];
        v21 = v40;
        v28[43] = v36;
        v29 = v36;
      }
      *(_DWORD *)(v29 + 4 * v30) = v21;
      ++v28[44];
      v16 = (__int64)v23;
    }
    sub_B52C0((_QWORD *)v16, v37, v21, v20);
    v12 = *(_DWORD *)(a1 + 64) - 1;
  }
LABEL_15:
  result = sub_68AC0(a1, v12, 0, v15, a5);
  *(_QWORD *)(result + 32) = a3;
LABEL_9:
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (a3 + 1);
  *(_DWORD *)(result + 24) |= 2u;
  *(_QWORD *)(result + 40) = v14;
  if ( v5 )
    *(_DWORD *)(result + 76) = 6;
  return result;
}

