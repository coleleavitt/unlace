__int64 __fastcall sub_BBEC0(__int64 a1, int a2, double a3)
{
  __int64 v3; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // r11
  char v10; // r8
  int v11; // esi
  int v12; // eax
  __int64 result; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9

  v3 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * a2);
  if ( (_DWORD)v3 == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xC379u, a3);
    goto LABEL_39;
  }
  v5 = *(_QWORD *)(a1 + 328);
  if ( (unsigned int)v3 >= *(_DWORD *)(v5 + 64) )
    sub_B7BA0(a3);
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL * a2);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL) + 8LL * a2) + 48LL);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 528) + 8 * v3) + 48LL);
  if ( v8 )
  {
    v9 = *(_QWORD **)a1;
    v10 = 0;
    v11 = 0;
    while ( !v9 )
    {
LABEL_6:
      if ( v7 )
      {
        while ( 1 )
        {
          v12 = *(_DWORD *)(v7 + 4);
          if ( (v12 & 4) == 0 )
            break;
LABEL_11:
          v7 = *(_QWORD *)(v7 + 8);
          ++v11;
          v10 = 1;
          if ( !v7 )
            goto LABEL_12;
        }
        while ( 1 )
        {
          result = v12 & 1;
          if ( !(_DWORD)result )
            break;
          v7 = *(_QWORD *)(v7 + 8);
          ++v11;
          if ( !v7 )
            return result;
          v12 = *(_DWORD *)(v7 + 4);
          v10 = 0;
          if ( (v12 & 4) != 0 )
            goto LABEL_11;
        }
      }
      if ( !v10 )
        return 1;
LABEL_12:
      v8 = *(_QWORD *)(v8 + 8);
      if ( !v8 )
        return 0;
    }
    v14 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v14 )
        {
          if ( (*(_BYTE *)v14 & 2) != 0 )
            goto LABEL_6;
          v16 = *(_QWORD *)(v14 + 24);
          if ( v8 < v16 )
          {
LABEL_21:
            v15 = *(_QWORD *)(v15 + 8);
            goto LABEL_22;
          }
          while ( v16 < v8 )
          {
            v15 = *(_QWORD *)(v15 + 16);
LABEL_22:
            if ( (*(_BYTE *)v15 & 2) != 0 )
              goto LABEL_6;
            v16 = *(_QWORD *)(v15 + 24);
            if ( v8 < v16 )
              goto LABEL_21;
          }
          if ( v9 == (_QWORD *)v15 )
            goto LABEL_6;
        }
        if ( (unsigned __int64)v11 < v6[1] && *(_QWORD *)(*v6 + 8LL * v11) == v8 )
          break;
        v8 = *(_QWORD *)(v8 + 8);
        if ( !v8 )
          return 0;
      }
      if ( !v7 )
        break;
      v8 = *(_QWORD *)(v8 + 8);
      v7 = *(_QWORD *)(v7 + 8);
      ++v11;
      if ( !v8 )
        return 0;
      v10 = 0;
    }
    if ( !under_debugger )
      sub_383060(0xC863u, a3);
LABEL_39:
    BUG();
  }
  return 0;
}

