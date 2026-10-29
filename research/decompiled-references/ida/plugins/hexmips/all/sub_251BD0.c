bool __fastcall sub_251BD0(__int64 a1, __int64 a2)
{
  int v2; // eax
  char v4; // cl
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 > 69 )
    goto LABEL_6;
  if ( (unsigned int)v2 > 0x45 )
    sub_24E210(a1, a2, a1);
  v4 = *((_BYTE *)&off_4C0A60 + 16 * v2 + 9);
  switch ( v4 )
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
  switch ( v2 )
  {
    case '9':
      v8 = *(__int64 **)(a2 + 32);
      v9 = *v8;
      v10 = *v8 + 72 * v8[1];
      if ( v10 == v9 )
        return 0;
      while ( a1 != v9 )
      {
        v9 += 72;
        if ( v10 == v9 )
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
      v5 = *(_QWORD *)(a2 + 24);
      if ( a1 == v5 + 72 || a1 == v5 + 136 )
        return 1;
      return *(_QWORD *)(a2 + 24) == a1;
    case 'S':
      v11 = *(_QWORD *)(a2 + 24);
      v7 = *(_QWORD *)(v11 + 24);
      v12 = v7 + 48LL * *(_QWORD *)(v11 + 32);
      if ( v12 == v7 )
        return 0;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    v13 = *(_QWORD *)(v7 + 24);
    v14 = v13 + 88LL * *(_QWORD *)(v7 + 32);
    if ( v14 != v13 )
      break;
LABEL_10:
    v7 += 48;
    if ( v7 == v12 )
      return 0;
  }
  while ( a1 != v13 )
  {
    v13 += 88;
    if ( v14 == v13 )
      goto LABEL_10;
  }
  return 1;
}

