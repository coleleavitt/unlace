__int64 __fastcall sub_23FE0(_QWORD *a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rbp
  __int16 v5; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  int v13; // edx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx

  v2 = *(_DWORD *)(a2 + 28);
  if ( (v2 & 0x10) == 0 )
  {
    v3 = *(_DWORD *)(a2 + 28) & 0x818;
    if ( v3 && v3 != 2056 )
      goto LABEL_4;
LABEL_21:
    v4 = 4;
    goto LABEL_5;
  }
  v4 = 8;
  if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
    goto LABEL_5;
  v4 = 2;
  if ( (v2 & 0x800) == 0 )
    goto LABEL_5;
  v13 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v13 <= 0x39u )
  {
    v4 = 8;
    if ( (unsigned __int16)v13 > 0x34u )
      goto LABEL_5;
    if ( (unsigned __int16)v13 <= 0x12u )
    {
      if ( (unsigned __int16)v13 > 0xFu )
        goto LABEL_5;
LABEL_20:
      if ( (*(_DWORD *)(a2 + 28) & 0x818) != 0x810 )
      {
LABEL_4:
        v4 = 2;
        goto LABEL_5;
      }
      goto LABEL_21;
    }
LABEL_18:
    v14 = (unsigned int)(v13 - 37);
    if ( (unsigned __int16)v14 > 0x3Bu )
      goto LABEL_20;
    v15 = 0xA1A000000E00005LL;
    v4 = 8;
    if ( !_bittest64(&v15, v14) )
      goto LABEL_20;
    goto LABEL_5;
  }
  v4 = 8;
  if ( (unsigned __int16)(v13 - 61) <= 0x18u )
    goto LABEL_5;
  if ( (unsigned __int16)v13 <= 0xA0u )
  {
    if ( (unsigned __int16)v13 > 0x6Cu )
    {
      v17 = 0xC050682000555LL;
      if ( !_bittest64(&v17, (unsigned int)(v13 - 109)) )
        goto LABEL_20;
      goto LABEL_5;
    }
    goto LABEL_18;
  }
  if ( (_WORD)v13 != 738 && (_WORD)v13 != 741 )
    goto LABEL_20;
LABEL_5:
  v5 = *(_WORD *)(a2 + 46);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = sub_23F00((__int64)a1);
  v8 = a1[1];
  v9 = v7;
  v10 = a1[2];
  if ( a1[3] < (unsigned __int64)(v10 + 1) )
  {
    v16 = qvector_reserve();
    a1[1] = v16;
    v8 = v16;
    v10 = a1[2];
  }
  v11 = 32 * v10 + v8;
  *(_QWORD *)v11 = v6;
  *(_QWORD *)(v11 + 8) = v9;
  *(_QWORD *)(v11 + 16) = v4;
  *(_WORD *)(v11 + 24) = v5;
  *(_WORD *)(v11 + 26) = 0;
  ++a1[2];
  return 0;
}

