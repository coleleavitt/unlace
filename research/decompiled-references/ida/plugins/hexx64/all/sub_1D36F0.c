__int64 __fastcall sub_1D36F0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, double a5)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13

  if ( *(_BYTE *)a3 != 7 )
  {
    if ( *(_BYTE *)a3 != 6 )
    {
      if ( !under_debugger )
        sub_383060(0xCA64u, a5);
      BUG();
    }
    sub_339C80(*(_QWORD *)(a1 + 1504), a3);
    v8 = *(_QWORD *)(a3 + 8);
    if ( v8 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL)
      || v8 == -1
      || (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL)) == 0 )
    {
LABEL_23:
      if ( a4 )
      {
        if ( a4 == 1 )
        {
          v9 = sub_68FD0(a1, a2, v8, 1, a5);
          if ( !v9 )
            return 0;
          goto LABEL_19;
        }
        v9 = sub_68FD0(a1, a2, a2, 0, a5);
        if ( v9 )
        {
          v17 = j__qalloc_or_throw(80, a2, v15, v16);
          *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v17 + 40) = 0;
          *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v17 + 56) = 0;
          *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v17 + 72) = 0;
          sub_330970(v17, a2);
          *(_DWORD *)v17 = 55;
          sub_11CA10((char *)a3, (char *)(v17 + 32));
          sub_B5290((_QWORD *)v9, v17, a5);
LABEL_19:
          v12 = *(_DWORD *)(v9 + 72);
          *(_BYTE *)a3 = 7;
          *(_DWORD *)(a3 + 8) = v12;
          return v9;
        }
      }
    }
    else
    {
      v10 = 0;
      do
      {
        while ( *(_QWORD *)(v9 + 32) != v8 )
        {
          v11 = *(_QWORD *)(v9 + 48);
          if ( v11 )
          {
            if ( *(_QWORD *)(v11 + 24) == v8 )
              break;
          }
          v9 = *(_QWORD *)(v9 + 8);
          if ( !v9 )
            goto LABEL_15;
        }
        if ( (*(_BYTE *)(v9 + 24) & 2) == 0 )
          goto LABEL_17;
        if ( !v10 )
          v10 = v9;
        v9 = *(_QWORD *)(v9 + 8);
      }
      while ( v9 );
LABEL_15:
      if ( !v10 )
        goto LABEL_23;
      v9 = v10;
LABEL_17:
      if ( *(_DWORD *)(v9 + 76) != 6 || a4 )
        goto LABEL_19;
    }
    return 0;
  }
  v14 = *(unsigned int *)(a3 + 8);
  if ( (unsigned int)v14 >= *(_DWORD *)(a1 + 64) )
    sub_1D36D0(a5);
  return *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v14);
}

