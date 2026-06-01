char __fastcall sub_6B2C0(__int64 a1, unsigned int a2, double a3)
{
  __int64 v3; // rax
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // r12
  _DWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  char *v15; // rdi
  __int64 v16; // rsi
  char *v17; // rdx
  __int64 v18; // rax
  int v19; // ebp
  _QWORD *v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v25; // [rsp+0h] [rbp-40h]

  LODWORD(v3) = *(_DWORD *)(a1 + 76);
  if ( !(_DWORD)v3 )
    return v3;
  v6 = *(_QWORD *)(a1 + 64);
  if ( a2 >= *(_DWORD *)(v6 + 64) )
    goto LABEL_35;
  v25 = a2;
  LOBYTE(v3) = sub_6B100(*(_QWORD *)(*(_QWORD *)(v6 + 528) + 8LL * a2), 1, a3);
  if ( (_BYTE)v3 )
  {
    LOBYTE(v3) = sub_6B260(a1, 0, a3);
    return v3;
  }
  v7 = *(_DWORD *)(a1 + 76);
  if ( v7 != 3 )
  {
    if ( (unsigned int)(v7 - 4) > 1 && v7 != 2 )
    {
      if ( !under_debugger )
        sub_383060(0xC36Cu, a3);
      BUG();
    }
    v8 = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 76) = 3;
    v9 = *(_QWORD *)(v8 + 784);
    if ( v9 )
      *(_DWORD *)(v9 + 48) = 63;
    v10 = *(_DWORD **)(a1 + 368);
    v3 = *(_QWORD *)(a1 + 376);
    v11 = &v10[v3];
    if ( v11 != v10 )
    {
      do
      {
        v12 = (unsigned int)*v10;
        if ( a2 != (_DWORD)v12 )
        {
          v13 = *(_QWORD *)(a1 + 64);
          if ( (unsigned int)v12 >= *(_DWORD *)(v13 + 64) )
            goto LABEL_35;
          v14 = *(_QWORD *)(*(_QWORD *)(v13 + 528) + 8 * v12);
          v15 = *(char **)(v14 + 344);
          v16 = *(_QWORD *)(v14 + 352);
          v17 = &v15[4 * v16];
          if ( v15 != v17 )
          {
            while ( *(_DWORD *)(a1 + 72) != *(_DWORD *)v15 )
            {
              v15 += 4;
              if ( v17 == v15 )
                goto LABEL_18;
            }
            if ( v15 != v17 )
            {
              memmove(v15, v15 + 4, v17 - v15 - 4);
              v16 = *(_QWORD *)(v14 + 352) - 1LL;
              *(_QWORD *)(v14 + 352) = v16;
            }
          }
LABEL_18:
          if ( !v16 )
            **(_DWORD **)(v14 + 64) |= 0x400u;
        }
        ++v10;
      }
      while ( v11 != v10 );
      v3 = *(_QWORD *)(a1 + 376);
      v10 = *(_DWORD **)(a1 + 368);
    }
    if ( v3 )
    {
      if ( v3 != 1 )
        *(_QWORD *)(a1 + 376) = 1;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 384) )
      {
        v23 = qvector_reserve(a1 + 368, (__int64)v10, 1, 4);
        *(_QWORD *)(a1 + 368) = v23;
        v10 = (_DWORD *)v23;
        v3 = *(_QWORD *)(a1 + 376);
      }
      LOBYTE(v3) = (unsigned __int8)memset(&v10[v3], 0, 4 * (1 - v3));
      v10 = *(_DWORD **)(a1 + 368);
      *(_QWORD *)(a1 + 376) = 1;
    }
    *v10 = a2;
    if ( v7 == 2 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( a2 < *(_DWORD *)(v18 + 64) )
      {
        v19 = *(_DWORD *)(a1 + 72);
        v20 = *(_QWORD **)(*(_QWORD *)(v18 + 528) + 8 * v25);
        v3 = v20[44];
        v21 = v20[43];
        if ( v20[45] < (unsigned __int64)(v3 + 1) )
        {
          v22 = qvector_reserve((__int64)(v20 + 43), v21, v3 + 1, 4);
          v20[43] = v22;
          v21 = v22;
          v3 = v20[44];
        }
        *(_DWORD *)(v21 + 4 * v3) = v19;
        ++v20[44];
        return v3;
      }
LABEL_35:
      sub_65460(a3);
    }
  }
  return v3;
}

