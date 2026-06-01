__int64 __fastcall sub_6B20(__int64 a1, __int64 a2, int a3, unsigned __int16 a4)
{
  __int16 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r11
  __int16 v9; // di
  char v10; // cl
  int v11; // edx
  unsigned __int8 v12; // cl
  int *v13; // rax
  char *v14; // rax
  __int64 v15; // rdx
  char v16; // cl
  __int16 v17; // di
  __int16 v18; // ax
  __int16 v19; // di
  __int16 v20; // ax
  __int64 result; // rax

  v6 = a4 & 1;
  *(_BYTE *)(a2 + 32) = v6 + 7;
  if ( (a4 & 8) != 0 )
  {
    v7 = a2 + 40;
    v8 = a2 + 80;
  }
  else
  {
    v8 = a2 + 40;
    v7 = a2 + 80;
  }
  v9 = a4 >> 4;
  v10 = 8 * BYTE2(a3);
  v11 = 0;
  v12 = (2 * (a4 >> 3)) & 2 | (4 * (a4 >> 9)) & 4 | ((a4 & 0x10) != 0) | v10 & 0x38;
  v13 = &dword_F344;
  while ( (v12 & *((_BYTE *)v13 + 1)) != *(_BYTE *)v13 )
  {
    ++v11;
    v13 = (int *)((char *)v13 + 6);
    if ( v11 == 22 )
    {
      v16 = 0;
      v15 = 0;
      if ( *(_BYTE *)(v7 + 5) == 7 )
        goto LABEL_21;
LABEL_7:
      *(_BYTE *)(v8 + 1) = 1;
      v17 = v9 & 7;
      goto LABEL_8;
    }
  }
  v14 = &byte_F340[6 * v11];
  *(_WORD *)(a2 + 24) = (unsigned __int8)*v14;
  *(_BYTE *)(v7 + 5) = v14[2];
  *(_BYTE *)(v8 + 5) = v14[1];
  v15 = (unsigned __int8)v14[3];
  v16 = v14[3];
  if ( *(_BYTE *)(v7 + 5) != 7 )
    goto LABEL_7;
LABEL_21:
  *(_BYTE *)(v8 + 1) = 8;
  v17 = v9 & 6;
  *(_BYTE *)(a2 + 114) = 0;
LABEL_8:
  if ( (a4 & 0x1000) != 0 )
    v17 += 32;
  v18 = (a4 >> 7) & 3;
  *(_WORD *)(v8 + 6) = v17;
  v19 = v18 + 4;
  v20 = v18 + 36;
  if ( !v6 )
    v20 = v19;
  *(_WORD *)(v7 + 6) = v20;
  if ( (a4 & 0x400) != 0 )
  {
    if ( (a4 & 0x800) != 0 )
    {
      *(_BYTE *)(v7 + 1) = 4;
      if ( (a4 & 0x4000) != 0 )
        *(_BYTE *)(v7 + 33) = 8;
      else
        *(_BYTE *)(v7 + 33) = 11;
      *(_QWORD *)(v7 + 24) = v15;
      result = (1 - (((a4 & 0x2000) == 0) - 1LL)) << v16;
      *(_QWORD *)(v7 + 16) = result;
    }
    else
    {
      *(_BYTE *)(v7 + 1) = 3;
      *(_BYTE *)(v7 + 33) = 1;
      *(_BYTE *)(v7 + 32) = (a4 >> 13) + 32 * v6;
      *(_QWORD *)(v7 + 24) = v15;
      *(_QWORD *)(v7 + 16) = 0;
      return 0;
    }
  }
  else
  {
    *(_BYTE *)(v7 + 1) = 4;
    *(_BYTE *)(v7 + 33) = 1;
    *(_QWORD *)(v7 + 24) = v15;
    result = (__int64)((a4 >> 13) | (8 * (a4 >> 11)) & 8u) << v16;
    *(_QWORD *)(v7 + 16) = result;
  }
  return result;
}

