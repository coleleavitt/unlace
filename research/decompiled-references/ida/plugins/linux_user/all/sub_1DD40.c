__int64 __fastcall sub_1DD40(__int64 a1, unsigned int *a2, _BYTE *a3)
{
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v16; // rax
  _DWORD *v17; // rdx

  if ( a3 )
    *a3 = 0;
  v6 = a1 + 1216;
  while ( 1 )
  {
    v7 = sub_25CB0(a1, a2 + 1, 0xFFFFFFFFLL, 0);
    *a2 = v7;
    if ( v7 <= 0 )
    {
      if ( *(_DWORD *)(a1 + 1408) && (unsigned __int8)sub_12CA0(a1, (int *)a2, a2 + 1) )
      {
        sub_1DC40(a1, a3, a2);
        return 1;
      }
      v8 = a2[2];
      if ( !(_DWORD)v8 )
        return 0;
      v9 = sub_25CB0(a1, a2 + 1, 0xFFFFFFFFLL, v8);
      *a2 = v9;
      if ( v9 <= 0 )
        return 0;
    }
    sub_1DC40(a1, a3, a2);
    v10 = *(_QWORD *)(a1 + 1224);
    v11 = *a2;
    v12 = a1 + 1216;
    if ( v10 )
    {
      do
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(v10 + 16);
          v14 = *(_QWORD *)(v10 + 24);
          if ( (int)v11 > *(_DWORD *)(v10 + 32) )
            break;
          v12 = v10;
          v10 = *(_QWORD *)(v10 + 16);
          if ( !v13 )
            goto LABEL_14;
        }
        v10 = *(_QWORD *)(v10 + 24);
      }
      while ( v14 );
LABEL_14:
      if ( v6 != v12 && (int)v11 >= *(_DWORD *)(v12 + 32) )
        return 1;
    }
    v16 = *(_DWORD **)(a1 + 1256);
    v17 = &v16[*(_QWORD *)(a1 + 1264)];
    if ( v16 == v17 )
      goto LABEL_24;
    while ( (_DWORD)v11 != *v16 )
    {
      if ( v17 == ++v16 )
        goto LABEL_24;
    }
    if ( v17 == v16 )
LABEL_24:
      sub_15670((_QWORD *)a1, v11, a2[1]);
    else
      ptrace(PTRACE_CONT, v11, 0, 0);
    a2[2] = 0;
  }
}

