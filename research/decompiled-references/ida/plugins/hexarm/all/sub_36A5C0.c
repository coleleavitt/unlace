__int64 __fastcall sub_36A5C0(_QWORD *a1, _QWORD *a2)
{
  int v4; // ebp
  int v5; // r15d
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  int v9; // r13d
  __int64 v10; // rax
  int v11; // eax
  int v12; // esi
  int v13; // edi
  __int64 v14; // r9
  _DWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  int v19; // eax
  unsigned __int8 v21; // [rsp+Fh] [rbp-39h]

  v21 = 0;
  if ( *(_DWORD *)a2[35] == 4 && a2[27] && *(_DWORD *)a2[26] != -1 && a2[24] )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      while ( *(_DWORD *)(a2[23] + 4 * v6) != -1 )
      {
        v7 = a2[24];
LABEL_7:
        v6 = ++v4;
        if ( v4 >= v7 )
          return v21;
      }
      v8 = v5;
      v9 = *(_DWORD *)(a2[26] + 4LL * v5);
      v10 = sub_13CCC0(a1, v9);
      v11 = sub_D2480(a2[35], v10);
      v7 = a2[24];
      v12 = v4 + v11;
      v13 = v11;
      if ( v7 < v4 + v11 )
        goto LABEL_7;
      if ( v4 < v12 )
      {
        v14 = a2[23];
        v15 = (_DWORD *)(v14 + 4LL * v4);
        while ( *v15 == -1 )
        {
          if ( ++v15 == (_DWORD *)(v14 + 4 * (v4 + (unsigned __int64)(unsigned int)v13)) )
            goto LABEL_14;
        }
        goto LABEL_7;
      }
LABEL_14:
      if ( v13 > 0 )
      {
        v16 = v4;
        while ( 1 )
        {
          v17 = v16;
          if ( v16 >= v7 )
            break;
          ++v16;
          *(_DWORD *)(a2[23] + 4 * v17) = v9;
          if ( v12 == v16 )
            break;
          v7 = a2[24];
        }
      }
      v18 = a2[27];
      while ( 1 )
      {
        v19 = v8 >= v18 ? -1 : *(_DWORD *)(a2[26] + 4 * v8);
        if ( v9 != v19 )
          break;
        v8 = ++v5;
      }
      if ( v8 >= v18 || *(_DWORD *)(a2[26] + 4 * v8) == -1 )
        return 1;
      ++v4;
      v21 = 1;
      v6 = v4;
    }
    while ( (unsigned __int64)v4 < a2[24] );
  }
  return v21;
}

