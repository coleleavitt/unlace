__int64 __fastcall sub_11A0C0(int **a1, _DWORD *a2, _DWORD *a3, char a4)
{
  int v5; // eax
  int v6; // ebp
  int **v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rax
  char v14; // cl
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rax
  char v19; // cl
  int v20; // esi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  int i; // edi
  int v24; // edi
  __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  char v28; // [rsp+Ch] [rbp-3Ch]

  v5 = *(_DWORD *)a1;
  if ( (unsigned int)(*(_DWORD *)a1 - 19) > 1 )
    return 0;
  v6 = *((_DWORD *)a1 + 9);
  if ( (unsigned int)(v6 - 1) > 0xF || ((v6 - 1) & v6) != 0 )
    return 0;
  v11 = a1 + 4;
  if ( v5 == 20 )
  {
    v12 = sub_119DF0(v11);
    v13 = sub_119DF0(a1 + 6);
    v15 = 0;
    v14 = v6 - 1;
  }
  else
  {
    v12 = sub_119F60((char *)v11);
    v13 = sub_119F60((char *)a1 + 48);
    v14 = v6 - 1;
    v15 = 0;
  }
  v16 = v13;
  if ( (*((_BYTE *)a1 + 5) & 0x20) == 0 )
  {
    v28 = v14;
    v12 = sub_117720(v12, v6);
    v18 = sub_117720(v17, v6);
    v14 = v28;
    v15 = 0;
    v16 = v18;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)v6 <= 8 )
    {
      v19 = 8 * v14;
      v20 = 0;
      v21 = 255LL << v19;
      v22 = 255LL << v19;
      do
      {
        if ( (v22 & ~v12) != 0 )
          break;
        ++v20;
        v22 >>= 8;
      }
      while ( v6 != v20 );
      for ( i = 0; i != v6; ++i )
      {
        if ( (v21 & ~v16) != 0 )
          break;
        v21 >>= 8;
      }
      if ( i <= v20 )
      {
        if ( i >= v20 || *((_BYTE *)a1 + 48) != 4 )
          goto LABEL_21;
      }
      else if ( *((_BYTE *)a1 + 32) != 4 )
      {
        goto LABEL_21;
      }
    }
    return 0;
  }
  if ( (unsigned __int64)v6 > 8 )
    return 0;
  v19 = 8 * v14;
LABEL_21:
  v24 = 0;
  v25 = 255;
  v26 = v16 | v12;
  do
  {
    if ( (v25 & ~v26) != 0 )
      break;
    ++v24;
    v25 <<= 8;
  }
  while ( v6 != v24 );
  v27 = 255LL << v19;
  while ( (v27 & ~v26) == 0 )
  {
    ++v15;
    v27 >>= 8;
    if ( v6 == v15 )
      goto LABEL_27;
  }
  if ( !(v24 | v15) )
    return 0;
LABEL_27:
  if ( a2 )
    *a2 = v24;
  if ( a3 )
    *a3 = v6 - v24 - v15;
  return 1;
}

