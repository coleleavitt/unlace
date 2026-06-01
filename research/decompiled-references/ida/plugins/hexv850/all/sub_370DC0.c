unsigned __int64 __fastcall sub_370DC0(__int64 a1, char a2, char a3)
{
  int v6; // ebx
  __int64 v7; // rax
  int *v8; // rsi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  int *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  int *v22; // rcx
  int *v23; // rdx
  int v24; // esi
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rax
  int *v28; // [rsp+0h] [rbp-48h]
  __int128 v29; // [rsp+8h] [rbp-40h]
  unsigned __int64 v30; // [rsp+18h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( *(int *)(a1 + 464) <= 1 )
    return v30 - __readfsqword(0x28u);
  v28 = nullptr;
  v6 = 0;
  v29 = 0;
  do
  {
    while ( *(_DWORD *)sub_1386C0((_QWORD *)a1, v6) != 1 )
    {
      if ( ++v6 >= *(_DWORD *)(a1 + 464) )
        goto LABEL_8;
    }
    v7 = v29;
    v8 = v28;
    if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
    {
      v28 = (int *)qvector_reserve();
      v8 = v28;
      v7 = v29;
    }
    v8[v7] = v6++;
    *(_QWORD *)&v29 = v29 + 1;
  }
  while ( v6 < *(_DWORD *)(a1 + 464) );
LABEL_8:
  if ( (int)v29 > 1 )
  {
    v10 = sub_1386C0((_QWORD *)a1, *v28);
    if ( *(_DWORD *)v10 == 1 )
      v11 = *(_QWORD *)(v10 + 8);
    else
      v11 = -1;
    v12 = sub_1386C0((_QWORD *)a1, v28[1]);
    if ( *(_DWORD *)v12 == 1 )
      v13 = *(_QWORD *)(v12 + 8);
    else
      v13 = -1;
    if ( a2 )
    {
      if ( v11 >= v13 )
      {
        if ( !v28 )
          return v30 - __readfsqword(0x28u);
        goto LABEL_10;
      }
    }
    else if ( v11 <= v13 )
    {
      goto LABEL_9;
    }
    v14 = v28;
    v15 = (int)v29 - 1LL;
    v16 = v28[v15];
    v17 = (int)v29 >> 1;
    v18 = v15;
    if ( a3 )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = *(_QWORD *)(a1 + 456);
        v21 = v14[v19++];
        --v18;
        v22 = (int *)(v20 + 4 * v16);
        v23 = (int *)(v20 + 4 * v21);
        v24 = *v23;
        *v23 = *v22;
        *v22 = v24;
        if ( v17 == v19 )
          break;
        v14 = v28;
        v16 = v28[v18];
      }
    }
    else
    {
      v25 = 0;
      while ( 1 )
      {
        v26 = sub_1386C0((_QWORD *)a1, v16);
        v27 = sub_1386C0((_QWORD *)a1, v28[v25]);
        sub_370A80(v27, v26);
        ++v25;
        --v18;
        if ( v25 == v17 )
          break;
        LODWORD(v16) = v28[v18];
      }
    }
  }
LABEL_9:
  if ( v28 )
LABEL_10:
    qfree();
  return v30 - __readfsqword(0x28u);
}

