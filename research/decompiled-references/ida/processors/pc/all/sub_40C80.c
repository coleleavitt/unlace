void __fastcall sub_40C80(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // r8
  int v4; // eax
  int *v5; // rdx
  int v6; // r9d
  int v7; // eax
  _BYTE *v8; // rdx
  unsigned int v9; // ecx
  int v10; // esi
  int v11; // esi
  __int64 v12; // rdx
  int *v13; // rdx
  _BYTE *v14; // rax

  v3 = a1[1];
  if ( a2 >= a3 )
  {
    v4 = a3;
    a3 = a2;
    a2 = v4;
  }
  v5 = (int *)(v3 + 4LL * a3);
  v6 = *v5;
  if ( *v5 == -1 )
  {
    if ( a2 == -1 )
      return;
    if ( a2 >= -1 )
    {
      v5 = (int *)(v3 + 4LL * a2);
      v7 = *v5;
      if ( *v5 == -1 )
        return;
      goto LABEL_11;
    }
    do
      v7 = *(_DWORD *)(v3 - 4);
    while ( v7 == -1 );
    v5 = (int *)(v3 - 4);
    goto LABEL_10;
  }
  v7 = *v5;
  if ( a2 != -1 )
  {
LABEL_10:
    v6 = *(_DWORD *)(v3 + 4LL * a2);
    goto LABEL_11;
  }
  v6 = -1;
LABEL_11:
  *v5 = v6;
  v8 = (_BYTE *)(a1[4] + ((unsigned __int64)v7 >> 3));
  v9 = v7 & 7;
  v10 = (unsigned __int8)*v8;
  if ( _bittest(&v10, v9) )
  {
    *v8 &= ~(1 << v9);
    if ( a1[2] )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        v13 = (int *)(a1[1] + 4 * v12);
        if ( *v13 == v7 )
          *v13 = v6;
        v12 = ++v11;
      }
      while ( (unsigned __int64)v11 < a1[2] );
    }
  }
  if ( v6 != -1 )
  {
    v14 = (_BYTE *)(a1[4] + ((unsigned __int64)v6 >> 3));
    *v14 |= 1 << (v6 & 7);
  }
}
