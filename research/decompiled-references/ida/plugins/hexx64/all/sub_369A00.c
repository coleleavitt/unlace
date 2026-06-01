__int64 __fastcall sub_369A00(__int64 a1, _QWORD *a2, int a3, double a4)
{
  int v6; // ebp
  int v7; // ebx
  _QWORD *v8; // rdx
  int i; // r13d
  int v10; // esi
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  int v13; // eax
  int v14; // edi
  int v15; // r8d
  int v16; // esi
  __int64 v17; // rdx
  _DWORD *v18; // rax
  _DWORD *v19; // rdx

  v6 = -1;
  v7 = *(_DWORD *)(a1 + 36);
  v8 = *(_QWORD **)a1;
  if ( v7 )
    v6 = *(_DWORD *)(v8[26] + 4LL * (v7 - 1));
  for ( i = 0; a3 >= v7; ++v7 )
  {
    v10 = v6;
    v6 = *(_DWORD *)(v8[26] + 4LL * v7);
    if ( v6 != v10 )
    {
      v11 = v8[35];
      v12 = sub_13D280(a2, v6, a4);
      v13 = sub_D2A40(v11, v12);
      v8 = *(_QWORD **)a1;
      i += v13;
    }
  }
  v14 = *(_DWORD *)(a1 + 32);
  v15 = *(_DWORD *)(a1 + 40);
  v16 = i + v14 + v15;
  if ( v8[24] < (unsigned __int64)v16 )
    v16 = v8[24];
  if ( v14 >= v16 )
  {
LABEL_14:
    *(_DWORD *)(a1 + 40) = i + v15;
    return 1;
  }
  else
  {
    v17 = v8[23];
    v18 = (_DWORD *)(v17 + 4LL * v14);
    v19 = (_DWORD *)(v17 + 4 * (v14 + (unsigned __int64)(unsigned int)(v16 - v14)));
    while ( *v18 == -1 )
    {
      if ( v19 == ++v18 )
        goto LABEL_14;
    }
    return 0;
  }
}

