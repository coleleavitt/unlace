__int64 __fastcall sub_1901C0(__int64 a1, unsigned __int16 *a2, __int16 a3, char a4)
{
  __int16 v6; // r10
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned int v11; // edx
  __int16 v12; // dx
  __int64 v13; // rdx
  __int16 v14; // ax
  __int16 v15; // r11
  _BYTE *v16; // rax
  unsigned int v17; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int16 v21; // dx
  _BYTE v22[24]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-10h]

  v23 = __readfsqword(0x28u);
  if ( a3 == 5 )
  {
    v7 = 0;
    v8 = 15;
    v6 = 4;
    v9 = 4;
  }
  else
  {
    v6 = a3;
    if ( a3 == 1 )
    {
      v7 = 7;
      v8 = 8;
      v9 = 1;
    }
    else if ( (unsigned __int16)a3 <= 1u )
    {
      v7 = 10;
      v8 = 5;
      v6 = 0;
      v9 = 0;
    }
    else if ( a3 == 3 )
    {
      v7 = 4;
      v8 = 11;
      v9 = 3;
    }
    else
    {
      v17 = -1;
      if ( a3 != 4 )
        return v17;
      v7 = 0;
      v8 = 15;
      v9 = 4;
    }
  }
  v10 = *a2;
  memset(v22, 0, 22);
  HIWORD(v11) = WORD1(v10);
  LOWORD(v11) = __ROL2__(v10, 8);
  if ( a4 )
    v10 = v11;
  v12 = v10;
  LOWORD(v10) = v10 & 0x7FFF;
  *(_WORD *)v22 = v12 >> 15;
  if ( (_DWORD)v7 )
  {
    *(_WORD *)&v22[4] = v10 & ((1 << v7) - 1);
    v10 = (unsigned int)((__int16)v10 >> v7);
  }
  if ( (_WORD)v10 )
  {
    if ( v6 == 4 )
    {
      if ( a4 )
        v21 = __ROL2__(a2[1], 8);
      else
        v21 = *(a2 - 1);
      if ( v21 >= 0 )
        return (unsigned int)-3;
      v13 = (unsigned int)((1 << v8) - 1);
      if ( (_WORD)v10 == (1 << v8) - 1 )
      {
        v7 = 0x7FFF;
        *(_WORD *)&v22[2] = 0x7FFF;
        if ( !(_DWORD)v9 )
          goto LABEL_24;
        goto LABEL_15;
      }
    }
    else
    {
      *(_WORD *)&v22[4] |= 1 << v7;
      if ( (_WORD)v10 == (1 << v8) - 1 )
      {
        *(_WORD *)&v22[2] = 0x7FFF;
        if ( !(_DWORD)v9 )
          goto LABEL_31;
        goto LABEL_15;
      }
    }
    v7 = (unsigned int)(1 << (v8 - 1));
    v13 = (unsigned int)(v10 - v7);
    LOWORD(v13) = v10 - v7 + 0x4000;
    *(_WORD *)&v22[2] = v13;
    if ( !(_DWORD)v9 )
    {
LABEL_30:
      if ( v6 == 4 )
        goto LABEL_24;
LABEL_31:
      ((void (__fastcall *)(_BYTE *, _QWORD))sub_190F60)(v22, (unsigned int)(v8 - 16));
      goto LABEL_24;
    }
LABEL_15:
    if ( a4 )
    {
      v19 = 1;
      do
      {
        v7 = HIBYTE(a2[v19]);
        v13 = (unsigned int)v7 | (LOBYTE(a2[v19]) << 8);
        *(_WORD *)&v22[2 * v19 + 4] = _byteswap_ushort(a2[v19]);
        ++v19;
      }
      while ( (int)v9 >= (int)v19 );
    }
    else
    {
      v7 = (__int64)(a2 - 1);
      v13 = 1;
      do
      {
        v14 = *(unsigned __int8 *)(v7 + 1);
        v15 = *(unsigned __int8 *)v7;
        v7 -= 2;
        *(_WORD *)&v22[2 * v13++ + 4] = v15 | (v14 << 8);
      }
      while ( (int)v9 >= (int)v13 );
    }
    if ( !(_WORD)v10 )
      goto LABEL_19;
    goto LABEL_30;
  }
  if ( (_DWORD)v9 )
    goto LABEL_15;
LABEL_19:
  if ( v6 || !*(_WORD *)&v22[4] )
  {
    v16 = v22;
    v13 = (__int64)&v22[2 * v9 + 2];
    while ( !*((_WORD *)v16 + 2) )
    {
      v16 += 2;
      if ( (_BYTE *)v13 == v16 )
        goto LABEL_24;
    }
    return (unsigned int)-3;
  }
  v20 = (unsigned int)(1 << (v8 - 1));
  *(_WORD *)&v22[2] = 0x4000 - v20;
  sub_190F60(
    v22,
    4294967286LL,
    v20,
    (unsigned int)(v8 - 1),
    v10,
    v9,
    *(_QWORD *)v22,
    *(_QWORD *)&v22[8],
    *(_QWORD *)&v22[16],
    v23);
LABEL_24:
  if ( a1 )
    sub_191160(v22, a1, v13, v7);
  return 1;
}
