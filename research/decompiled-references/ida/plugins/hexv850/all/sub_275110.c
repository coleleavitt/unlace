void __fastcall sub_275110(__int64 a1)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 *v3; // r8
  __int64 v4; // rax
  __int64 *v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rdx

  if ( *(_QWORD *)(a1 + 8) > 1u )
  {
    v2 = 0;
    v3 = *(unsigned __int64 **)a1;
    if ( *(_QWORD *)a1 )
      v2 = v3[1];
    v4 = *(_QWORD *)v2;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (v4 & 2) != 0 )
        {
LABEL_24:
          v7 = v2;
          goto LABEL_25;
        }
        v5 = *(__int64 **)(v2 + 16);
        if ( (*v5 & 2) != 0 )
          break;
        v6 = *(_QWORD *)(v2 + 16);
        do
        {
          v7 = v6;
          v6 = *(_QWORD *)(v6 + 8);
        }
        while ( (*(_BYTE *)v6 & 2) == 0 );
        if ( (unsigned __int64 *)v7 == v3 )
          return;
        v8 = v2 + 24;
        v9 = v7 + 24;
        if ( *(_DWORD *)(v7 + 44) == *(_DWORD *)(v2 + 44) )
          goto LABEL_11;
LABEL_13:
        while ( (*(_BYTE *)v5[1] & 2) == 0 )
          v5 = (__int64 *)v5[1];
        v4 = *v5;
        v2 = (unsigned __int64)v5;
      }
      v7 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v10 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v10 & 2) != 0 || *(_QWORD *)(v7 + 16) != v2 )
      {
LABEL_19:
        if ( (unsigned __int64 *)v7 == v3 )
          return;
        v8 = v2 + 24;
        v9 = v7 + 24;
        if ( *(_DWORD *)(v2 + 44) == *(_DWORD *)(v7 + 44) )
          goto LABEL_11;
      }
      else
      {
        while ( 1 )
        {
          v11 = v7;
          v12 = v10 & 0xFFFFFFFFFFFFFFFCLL;
          v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v10 & 2) != 0 )
            break;
          v7 = v12;
          if ( *(_QWORD *)(v12 + 16) != v11 )
            goto LABEL_19;
        }
        if ( (unsigned __int64 *)v12 == v3 )
          return;
        v8 = v2 + 24;
        v9 = v12 + 24;
        v7 = v12;
        if ( *(_DWORD *)(v2 + 44) == *(_DWORD *)(v12 + 44) )
        {
LABEL_11:
          if ( *(_DWORD *)(v9 + 16) == *(_DWORD *)(v8 + 16) )
            goto LABEL_27;
          if ( (*v5 & 2) == 0 )
            goto LABEL_13;
        }
      }
      v7 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v13 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v13 & 2) != 0 )
      {
LABEL_25:
        if ( (unsigned __int64 *)v7 == v3 )
          return;
        v9 = v7 + 24;
        v2 = v7;
        v8 = v7 + 24;
LABEL_27:
        if ( (unsigned int)sub_272F00((_QWORD *)(v8 + 24), (__int64 *)(v9 + 24)) != 1 )
        {
          sub_274D70((unsigned __int64 **)a1, (__int64 *)v2);
          v3 = *(unsigned __int64 **)a1;
          goto LABEL_29;
        }
        sub_274D70((unsigned __int64 **)a1, (__int64 *)v7);
        v3 = *(unsigned __int64 **)a1;
        v4 = *(_QWORD *)v2;
      }
      else
      {
        while ( *(_QWORD *)(v7 + 16) == v2 )
        {
          v2 = v13 & 0xFFFFFFFFFFFFFFFCLL;
          v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v13 & 2) != 0 )
            goto LABEL_24;
          v14 = v7;
          v7 = v2;
          v2 = v14;
        }
LABEL_29:
        v4 = *(_QWORD *)v7;
        v2 = v7;
      }
    }
  }
}

