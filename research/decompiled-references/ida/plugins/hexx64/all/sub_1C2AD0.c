__int64 __fastcall sub_1C2AD0(int *a1, int *a2, double a3)
{
  int v3; // edx
  int v4; // eax
  _QWORD *v5; // rbx
  _QWORD *v6; // rbp
  __int64 result; // rax
  bool v8; // zf
  unsigned int v9; // ecx
  unsigned int v10; // eax
  signed int v11; // edi
  int v12; // edx
  bool v13; // cc
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  bool v17; // cc
  signed int v18; // ecx
  signed int v19; // eax
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rsi
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // dx

  v3 = *a2;
  v4 = *a1;
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  if ( v4 > v3 )
    return 1;
  v5 = *((_QWORD **)a1 + 1);
  v6 = *((_QWORD **)a2 + 1);
  if ( v5 == v6 )
    return 0;
  switch ( v4 )
  {
    case 0:
      return 0;
    case 1:
      v17 = (__int64)v6 < (__int64)v5;
      goto LABEL_20;
    case 2:
      v15 = v5[1];
      v16 = v6[1];
      if ( (int)v15 != v16 )
      {
        if ( v16 < (int)v15 )
          goto LABEL_21;
        goto LABEL_12;
      }
      if ( (int)v15 <= 0 )
        return 0;
      v20 = 0;
      v21 = 8 * (3LL * (unsigned int)(v15 - 1) + 3);
      while ( 1 )
      {
        v22 = v20 + *v5;
        v23 = v20 + *v6;
        v24 = *(_WORD *)(v22 + 16);
        v25 = *(_WORD *)(v23 + 16);
        if ( v24 != v25 )
          break;
        v24 = *(_WORD *)(v22 + 18);
        v25 = *(_WORD *)(v23 + 18);
        if ( v24 != v25 )
          break;
        result = sub_1C2AD0((int *)v22, (int *)v23);
        if ( (_DWORD)result )
          return result;
        v20 += 24;
        if ( v20 == v21 )
          return 0;
      }
      if ( v25 >= v24 )
        goto LABEL_12;
      goto LABEL_21;
    case 3:
    case 4:
      v8 = v4 == 4;
      v9 = a1[2];
      v10 = a2[2];
      v11 = (unsigned __int16)v9;
      if ( !v8 )
        v11 = v9;
      v8 = v3 == 4;
      v12 = (unsigned __int16)v10;
      if ( !v8 )
        v12 = a2[2];
      v13 = v11 <= v12;
      if ( v11 != v12 )
        goto LABEL_11;
      v18 = HIWORD(v9);
      v19 = HIWORD(v10);
      v17 = v19 < v18;
      if ( v19 == v18 )
      {
        result = 0;
      }
      else
      {
LABEL_20:
        if ( v17 )
LABEL_21:
          result = 1;
        else
LABEL_12:
          result = 0xFFFFFFFFLL;
      }
      break;
    case 5:
      v14 = *((_DWORD *)v6 + 2);
      v13 = *((_DWORD *)v5 + 2) <= v14;
      if ( *((_DWORD *)v5 + 2) == v14 )
      {
        v13 = *v5 <= *v6;
        if ( *v5 == *v6 )
          return 0;
      }
LABEL_11:
      if ( v13 )
        goto LABEL_12;
      goto LABEL_21;
    case 6:
      if ( v6 >= v5 )
        goto LABEL_12;
      goto LABEL_21;
    default:
      if ( !under_debugger )
        sub_383060(0xC7A6u, a3);
      BUG();
  }
  return result;
}

