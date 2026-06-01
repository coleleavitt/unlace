__int64 __fastcall sub_B8480(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdi
  _QWORD *v5; // r10
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r11
  char v9; // r8
  int v10; // esi
  int v11; // eax
  __int64 result; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r9

  v2 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * a2);
  if ( (_DWORD)v2 == -1 )
  {
    if ( !under_debugger )
      sub_37EEE0(50041);
    goto LABEL_39;
  }
  v4 = *(_QWORD *)(a1 + 328);
  if ( (unsigned int)v2 >= *(_DWORD *)(v4 + 64) )
    sub_B4160(v4);
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL * a2);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL) + 8LL * a2) + 48LL);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 528) + 8 * v2) + 48LL);
  if ( v7 )
  {
    v8 = *(_QWORD **)a1;
    v9 = 0;
    v10 = 0;
    while ( !v8 )
    {
LABEL_6:
      if ( v6 )
      {
        while ( 1 )
        {
          v11 = *(_DWORD *)(v6 + 4);
          if ( (v11 & 4) == 0 )
            break;
LABEL_11:
          v6 = *(_QWORD *)(v6 + 8);
          ++v10;
          v9 = 1;
          if ( !v6 )
            goto LABEL_12;
        }
        while ( 1 )
        {
          result = v11 & 1;
          if ( !(_DWORD)result )
            break;
          v6 = *(_QWORD *)(v6 + 8);
          ++v10;
          if ( !v6 )
            return result;
          v11 = *(_DWORD *)(v6 + 4);
          v9 = 0;
          if ( (v11 & 4) != 0 )
            goto LABEL_11;
        }
      }
      if ( !v9 )
        return 1;
LABEL_12:
      v7 = *(_QWORD *)(v7 + 8);
      if ( !v7 )
        return 0;
    }
    v13 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v13 )
        {
          if ( (*(_BYTE *)v13 & 2) != 0 )
            goto LABEL_6;
          v15 = *(_QWORD *)(v13 + 24);
          if ( v7 < v15 )
          {
LABEL_21:
            v14 = *(_QWORD *)(v14 + 8);
            goto LABEL_22;
          }
          while ( v15 < v7 )
          {
            v14 = *(_QWORD *)(v14 + 16);
LABEL_22:
            if ( (*(_BYTE *)v14 & 2) != 0 )
              goto LABEL_6;
            v15 = *(_QWORD *)(v14 + 24);
            if ( v7 < v15 )
              goto LABEL_21;
          }
          if ( v8 == (_QWORD *)v14 )
            goto LABEL_6;
        }
        if ( (unsigned __int64)v10 < v5[1] && *(_QWORD *)(*v5 + 8LL * v10) == v7 )
          break;
        v7 = *(_QWORD *)(v7 + 8);
        if ( !v7 )
          return 0;
      }
      if ( !v6 )
        break;
      v7 = *(_QWORD *)(v7 + 8);
      v6 = *(_QWORD *)(v6 + 8);
      ++v10;
      if ( !v7 )
        return 0;
      v9 = 0;
    }
    if ( !under_debugger )
      sub_37EEE0(51299);
LABEL_39:
    BUG();
  }
  return 0;
}

