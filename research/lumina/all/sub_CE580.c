void __fastcall sub_CE580(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v2; // rcx
  _DWORD *i; // r8
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  _DWORD *v10; // rdi
  _DWORD *v11; // rdi
  _DWORD *v12; // rdi

  v2 = a1;
  for ( i = a2; v2; v2 = (_QWORD *)v2[10] )
  {
    v4 = v2[6];
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 40);
      if ( v5 > *i )
        *i = v5;
    }
    v6 = v2[8];
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 40);
      if ( v7 > *i )
        *i = v7;
    }
    v8 = v2[12];
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 40);
      if ( v9 > *i )
        *i = v9;
    }
    v10 = (_DWORD *)v2[4];
    if ( v10 )
      sub_CE540(v10, i);
    v11 = (_DWORD *)v2[7];
    if ( v11 )
      sub_CE540(v11, i);
    v12 = (_DWORD *)v2[9];
    if ( v12 )
      sub_CE540(v12, i);
  }
}
