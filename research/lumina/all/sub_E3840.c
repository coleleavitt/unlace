void __fastcall sub_E3840(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v9; // rax
  const char *v10; // r12
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  const char *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edx
  __int64 v25; // rsi
  char v26; // di
  __int64 v27; // rsi
  int v28; // edx
  const char *v29; // rcx

  if ( (*(_BYTE *)(a2 + 50) & 1) != 0 )
  {
    if ( a3 )
    {
      sub_E1710(a1, 95, a3, *(__int16 *)(a2 + 56), 0);
      sub_D04B0(a1, a2, 0xFFFFFFFB, v14, v15, v16);
    }
    else
    {
      sub_D04B0(a1, a2, 0xFFFFFFFB, a4, a5, a6);
      v9 = &unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
        v9 = (_DWORD *)(*(_QWORD *)(a1 + 136) + 24LL * (*(_DWORD *)(a1 + 144) - 1));
      *(_BYTE *)v9 = 95;
      sub_E1710(a1, 97, v9[1], v9[2], v9[3]);
    }
    return;
  }
  v10 = *(const char **)(a2 + 24);
  if ( v10 )
    goto LABEL_7;
  v20 = *(_QWORD *)a1;
  v21 = (const char *)sub_D1E10(*(__int16 *)(a2 + 54) + 1, a2);
  v10 = v21;
  if ( v21 )
  {
    if ( *(__int16 *)(a2 + 54) <= 0 )
    {
      *v21 = 0;
    }
    else
    {
      v22 = 0;
      v23 = 0;
      v24 = 0;
      do
      {
        v25 = v22 + *(_QWORD *)(a2 + 8);
        if ( (*(_BYTE *)(v25 + 14) & 0x20) == 0 )
        {
          v26 = *(_BYTE *)(v25 + 9);
          v27 = v23++;
          v10[v27] = v26;
        }
        ++v24;
        v22 += 16;
      }
      while ( *(__int16 *)(a2 + 54) > v24 );
      v28 = v23 - 1;
      v29 = &v10[v23 - 1];
      while ( 1 )
      {
        v10[v23] = 0;
        if ( v28 < 0 )
          break;
        --v29;
        v23 = v28;
        if ( v29[1] > 65 )
          break;
        --v28;
      }
    }
    *(_QWORD *)(a2 + 24) = v10;
LABEL_7:
    v11 = strlen(v10) & 0x3FFFFFFF;
    if ( v11 )
    {
      if ( a3 )
      {
        v17 = sub_E1710(a1, 96, a3, v11, 0);
        sub_DCC50(a1, v17, (__int64)v10, v11, v18, v19);
      }
      else
      {
        sub_DCC50(a1, -1, (__int64)v10, v11, v12, v13);
      }
    }
    return;
  }
  if ( !*(_BYTE *)(v20 + 103) && !*(_BYTE *)(v20 + 104) )
    sub_DBE60(v20);
}
