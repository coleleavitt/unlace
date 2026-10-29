bool __fastcall sub_256450(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  char v5; // cl
  __int64 v6; // rax
  __int64 v8; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 > 69 )
    goto LABEL_6;
  if ( (unsigned int)v3 > 0x45 )
    sub_252A90(a3);
  v5 = *((_BYTE *)&off_4E0320 + 16 * v3 + 9);
  switch ( v5 )
  {
    case 2:
      goto LABEL_13;
    case 3:
      if ( *(_QWORD *)(a2 + 40) == a1 )
        return 1;
LABEL_13:
      if ( *(_QWORD *)(a2 + 32) == a1 )
        return 1;
      goto LABEL_14;
    case 1:
LABEL_14:
      if ( *(_QWORD *)(a2 + 24) == a1 )
        return 1;
      break;
  }
LABEL_6:
  switch ( v3 )
  {
    case '9':
      v9 = *(__int64 **)(a2 + 32);
      v10 = *v9;
      v11 = *v9 + 72 * v9[1];
      if ( v11 == v10 )
        return 0;
      while ( a1 != v10 )
      {
        v10 += 72;
        if ( v11 == v10 )
          return 0;
      }
      return 1;
    case 'H':
    case 'I':
    case 'K':
    case 'L':
    case 'M':
    case 'P':
    case 'T':
      return *(_QWORD *)(a2 + 24) == a1;
    case 'J':
      v6 = *(_QWORD *)(a2 + 24);
      if ( a1 == v6 + 72 || a1 == v6 + 136 )
        return 1;
      return *(_QWORD *)(a2 + 24) == a1;
    case 'S':
      v12 = *(_QWORD *)(a2 + 24);
      v8 = *(_QWORD *)(v12 + 24);
      v13 = v8 + 48LL * *(_QWORD *)(v12 + 32);
      if ( v13 == v8 )
        return 0;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    v14 = *(_QWORD *)(v8 + 24);
    v15 = v14 + 88LL * *(_QWORD *)(v8 + 32);
    if ( v15 != v14 )
      break;
LABEL_10:
    v8 += 48;
    if ( v8 == v13 )
      return 0;
  }
  while ( a1 != v14 )
  {
    v14 += 88;
    if ( v15 == v14 )
      goto LABEL_10;
  }
  return 1;
}

