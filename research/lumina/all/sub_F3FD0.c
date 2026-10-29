__int64 __fastcall sub_F3FD0(__int64 a1, int a2, __int64 a3, int a4, __int64 *a5, double a6)
{
  __int64 v6; // r10
  char *v7; // r11
  char v8; // al
  int v9; // ebx
  int v10; // eax
  __int64 v12; // r15
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int8 *v18; // rbp
  char v19; // al
  char v20; // al
  char v21; // r10
  int v22; // esi
  __int64 v23; // rdi
  _BYTE **v24; // rax
  _BYTE *v25; // rsi
  unsigned __int8 *i; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v30; // [rsp+8h] [rbp-70h]
  __int64 v31; // [rsp+10h] [rbp-68h]
  __int64 v35; // [rsp+30h] [rbp-48h]

  v6 = *a5;
  v7 = *(char **)(*a5 + 16);
  v8 = *v7;
  if ( *v7 == -80 )
    v8 = v7[2];
  if ( v8 == -79 )
  {
    v9 = **((_DWORD **)v7 + 4);
  }
  else
  {
    v9 = 1;
    if ( v8 == -118 )
      v9 = **(_DWORD **)(*((_QWORD *)v7 + 4) + 32LL);
  }
  v10 = *(unsigned __int16 *)(a3 + 96) - a4;
  if ( v10 > v9 )
    v10 = v9;
  if ( v10 > 1 )
  {
    v35 = (unsigned int)(v10 - 2) + 2LL;
    v12 = 1;
    v31 = a4 + 1;
    while ( 1 )
    {
      v13 = v12;
      v14 = 24LL * (int)v12;
      v15 = *(_QWORD *)(v14 + *((_QWORD *)v7 + 4) + 8);
      v16 = *(_QWORD *)(v6 + 24);
      v17 = *(_QWORD *)(v16 + 32);
      if ( (*(_BYTE *)(v16 + 5) & 8) != 0 )
      {
        v18 = *(unsigned __int8 **)(*(_QWORD *)(v17 + 32) + v14 + 8);
        if ( *(_BYTE *)v15 != 0xA7 )
          return v13;
      }
      else
      {
        v18 = *(unsigned __int8 **)(v17 + v14 + 8);
        if ( *(_BYTE *)v15 != 0xA7 )
          return v13;
      }
      if ( *(_DWORD *)(v15 + 44) != a2
        || *(_WORD *)(v15 + 48) != *(_WORD *)(*(_QWORD *)(a3 + 8) + 2 * (v31 + v12) - 2)
        || *(_BYTE *)(*(_QWORD *)(a3 + 56) + v31 - 1 + v12) != *(_BYTE *)(*(_QWORD *)(a3 + 56) + a4) )
      {
        return v13;
      }
      v30 = *(_QWORD *)(v14 + *((_QWORD *)v7 + 4) + 8);
      v19 = sub_C6820((unsigned __int8 *)v15);
      v20 = sub_C68F0(v18, v19);
      v21 = 68;
      v22 = *(__int16 *)(v30 + 48);
      if ( v22 >= 0 )
      {
        v23 = *(_QWORD *)(a3 + 24);
        if ( v22 < *(__int16 *)(v23 + 54) )
          v21 = *(_BYTE *)(*(_QWORD *)(v23 + 8) + 16LL * *(__int16 *)(v30 + 48) + 9);
      }
      if ( v20 != v21 )
        return v13;
      v24 = (_BYTE **)sub_F3B40(a1, (unsigned __int8 *)v30, v18, a6);
      if ( !v24 )
        return v13;
      v25 = *v24;
      for ( i = *(unsigned __int8 **)(*(_QWORD *)(a3 + 64) + 8 * (v31 + v12) - 8); ; ++i )
      {
        v27 = (unsigned __int8)*v25;
        v28 = *i;
        if ( (_DWORD)v27 == (_DWORD)v28 )
          break;
        if ( byte_1BF000[v27] != byte_1BF000[v28] )
          return v13;
LABEL_22:
        ++v25;
      }
      if ( *v25 )
        goto LABEL_22;
      v13 = ++v12;
      if ( v12 == v35 )
        return v13;
      v6 = *a5;
      v7 = *(char **)(*a5 + 16);
    }
  }
  return 1;
}
