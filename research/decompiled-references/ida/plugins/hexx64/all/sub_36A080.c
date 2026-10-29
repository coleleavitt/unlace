__int64 __fastcall sub_36A080(_QWORD *a1, _QWORD *a2, double a3)
{
  int v5; // ebp
  int v6; // r15d
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r14
  int v10; // r13d
  unsigned __int64 v11; // rax
  int v12; // eax
  int v13; // esi
  int v14; // edi
  __int64 v15; // r9
  _DWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  int v20; // eax
  unsigned __int8 v22; // [rsp+Fh] [rbp-39h]

  v22 = 0;
  if ( *(_DWORD *)a2[35] == 4 && a2[27] && *(_DWORD *)a2[26] != -1 && a2[24] )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      while ( *(_DWORD *)(a2[23] + 4 * v7) != -1 )
      {
        v8 = a2[24];
LABEL_7:
        v7 = ++v5;
        if ( v5 >= v8 )
          return v22;
      }
      v9 = v6;
      v10 = *(_DWORD *)(a2[26] + 4LL * v6);
      v11 = sub_13D280(a1, v10, a3);
      v12 = sub_D2A40(a2[35], v11);
      v8 = a2[24];
      v13 = v5 + v12;
      v14 = v12;
      if ( v8 < v5 + v12 )
        goto LABEL_7;
      if ( v5 < v13 )
      {
        v15 = a2[23];
        v16 = (_DWORD *)(v15 + 4LL * v5);
        while ( *v16 == -1 )
        {
          if ( ++v16 == (_DWORD *)(v15 + 4 * (v5 + (unsigned __int64)(unsigned int)v14)) )
            goto LABEL_14;
        }
        goto LABEL_7;
      }
LABEL_14:
      if ( v14 > 0 )
      {
        v17 = v5;
        while ( 1 )
        {
          v18 = v17;
          if ( v17 >= v8 )
            break;
          ++v17;
          *(_DWORD *)(a2[23] + 4 * v18) = v10;
          if ( v13 == v17 )
            break;
          v8 = a2[24];
        }
      }
      v19 = a2[27];
      while ( 1 )
      {
        v20 = v9 >= v19 ? -1 : *(_DWORD *)(a2[26] + 4 * v9);
        if ( v10 != v20 )
          break;
        v9 = ++v6;
      }
      if ( v9 >= v19 || *(_DWORD *)(a2[26] + 4 * v9) == -1 )
        return 1;
      ++v5;
      v22 = 1;
      v7 = v5;
    }
    while ( (unsigned __int64)v5 < a2[24] );
  }
  return v22;
}

