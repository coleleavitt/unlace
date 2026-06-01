__int64 __fastcall sub_279060(_QWORD *a1)
{
  _QWORD *v1; // r10
  unsigned int v2; // r9d
  _QWORD *v3; // rsi
  int v4; // r9d
  int v5; // edi
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx

  v1 = (_QWORD *)*a1;
  v2 = 0;
  if ( !*a1 )
    return v2;
  if ( !a1[1] )
    return v2;
  v3 = (_QWORD *)v1[1];
  if ( v1 == v3 )
    return v2;
  v4 = -1;
  v5 = 0;
  do
  {
    while ( 1 )
    {
LABEL_5:
      v6 = *((_DWORD *)v3 + 14);
      v7 = *((_DWORD *)v3 + 10);
      if ( v6 > 0 && v7 > v6 )
      {
        if ( v4 == -1 )
          goto LABEL_11;
        if ( v7 == v4 )
          goto LABEL_12;
        if ( v7 <= v4 )
        {
          if ( v4 % v7 )
            return (unsigned int)-1;
LABEL_11:
          v4 = *((_DWORD *)v3 + 10);
          goto LABEL_12;
        }
        if ( v7 % v4 )
          return (unsigned int)-1;
      }
LABEL_12:
      v8 = *v3;
      if ( v5 < v6 )
        v5 = *((_DWORD *)v3 + 14);
      if ( (v8 & 2) != 0 )
        goto LABEL_17;
      v9 = (_QWORD *)v3[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        break;
      do
      {
        v3 = v9;
        v9 = (_QWORD *)v9[1];
      }
      while ( (*(_BYTE *)v9 & 2) == 0 );
LABEL_17:
      if ( v1 == v3 )
        goto LABEL_18;
    }
    v11 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    v12 = *v11;
    if ( (*v11 & 2) == 0 )
    {
      while ( (_QWORD *)v11[2] == v3 )
      {
        v3 = v11;
        v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
        v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v12 & 2) != 0 )
        {
          v3 = (_QWORD *)v13;
          if ( v1 != (_QWORD *)v13 )
            goto LABEL_5;
          goto LABEL_18;
        }
        v11 = (_QWORD *)v13;
      }
    }
    v3 = v11;
  }
  while ( v1 != v11 );
LABEL_18:
  if ( v4 == -1 )
    return 0;
  if ( v5 > v4 )
    return (unsigned int)-1;
  return (unsigned int)v4;
}

