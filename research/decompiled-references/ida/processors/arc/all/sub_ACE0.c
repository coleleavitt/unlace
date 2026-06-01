__int64 __fastcall sub_ACE0(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, double a6)
{
  int *v6; // r13
  int v8; // eax
  unsigned int v10; // esi
  unsigned int v11; // r8d
  int v12; // r9d
  int v13; // eax
  int v14; // esi
  int v15; // edx
  int v16; // r8d
  int *v17; // rdx
  __int64 result; // rax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int *v22; // r14
  int *v23; // r13
  int v24; // r8d
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  int v27; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-40h]

  v6 = (int *)(a5 + 32LL * a4);
  v8 = *v6;
  v28 = __readfsqword(0x28u);
  if ( v8 < 0 )
  {
    do
    {
      v10 = v8;
      v11 = v8;
      v12 = v8 & 0x1F;
      v13 = (((unsigned int)v8 >> 8) & 0x1F) - v12 + 1;
      v14 = HIBYTE(v10) & 0x1F;
      v15 = (a3 >> v12) & ((1 << v13) - 1);
      v16 = HIWORD(v11) & 0x1F;
      if ( v16 && v14 )
        v15 |= ((a3 >> v16) & ((1 << (v14 + 1 - v16)) - 1)) << v13;
      v17 = (int *)(*((_QWORD *)v6 + 3) + 32LL * v15);
      v8 = *v17;
      v6 = v17;
    }
    while ( *v17 < 0 );
  }
  if ( (*((_BYTE *)v6 + 5) & 0x20) != 0 && (a3 & 0x8000) != 0 )
    v6 += 512;
  result = 0;
  if ( *(_QWORD *)v6 && (*(_DWORD *)(a1 + 5272) == 2 || (*((_BYTE *)v6 + 5) & 0x10) == 0) )
  {
    v19 = *v6;
    *(_WORD *)(a2 + 24) = *v6;
    v20 = v6[1];
    if ( (v20 & 0x100) != 0 )
    {
      v20 &= 0xFFFFCEE0;
      *(_DWORD *)(a2 + 28) = v6[1] & 0x1F | *(_DWORD *)(a2 + 28) & 0xFFFFFFE0;
    }
    else if ( (v20 & 4) != 0 )
    {
      v20 &= 0xFFFFCFFB;
      *(_DWORD *)(a2 + 28) = a3 & 0x1F | *(_DWORD *)(a2 + 28) & 0xFFFFFFE0;
    }
    else
    {
      BYTE1(v20) &= 0xCFu;
    }
    if ( (v20 & 0x10000) != 0 )
    {
      if ( (a3 & 0x20) != 0 )
        *(_DWORD *)(a2 + 28) = a3 & 0x1F | *(_DWORD *)(a2 + 28) & 0xFFFFFFE0;
      v20 &= ~0x10000u;
    }
    v21 = v20 & 0xC00;
    if ( (v20 & 0xC00) != 0 )
    {
      if ( (a3 & 0x8000) != 0 )
      {
        if ( v21 == 1024 )
        {
          *(_DWORD *)(a2 + 28) |= 0x100u;
        }
        else if ( v21 == 3072 )
        {
          *(_DWORD *)(a2 + 28) |= 0x20u;
        }
      }
      if ( (~a3 & 0xC00000) == 0 )
        *(_DWORD *)(a2 + 28) = a3 & 0x1F | *(_DWORD *)(a2 + 28) & 0xFFFFFFE0;
      BYTE1(v20) &= 0xF3u;
    }
    if ( (v20 & 0x200) != 0 )
    {
      BYTE1(v20) &= ~2u;
      *(_DWORD *)(a2 + 28) = a3 & 0x20 | *(_DWORD *)(a2 + 28) & 0xFFFFFFDF;
    }
    if ( (v20 & 2) != 0 )
    {
      v20 &= ~2u;
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a2 + 28) & 0xFFFFFFF9 | 4;
    }
    if ( (v20 & 1) != 0 )
    {
      v20 &= ~1u;
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a2 + 28) & 0xFFFFFFF9 | 2;
    }
    if ( (v20 & 0x80u) != 0 )
    {
      *(_DWORD *)(a2 + 28) |= 1u;
      LOBYTE(v20) = v20 & 0x7F;
    }
    if ( (v20 & 0x40) != 0 )
    {
      v20 &= ~0x40u;
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a2 + 28) & 0xFFFFFF9F | 0x20;
    }
    if ( (v20 & 0x10) != 0 )
    {
      v20 &= ~0x10u;
      *(_DWORD *)(a2 + 28) = (a3 >> 6) & 0x3F | *(_DWORD *)(a2 + 28) & 0xFFFFFFC0;
    }
    if ( (v20 & 0x20) != 0 )
    {
      v20 &= ~0x20u;
      *(_DWORD *)(a2 + 28) = a3 & 0x3E | *(_DWORD *)(a2 + 28) & 0xFFFFFFC0;
    }
    if ( (v20 & 8) != 0 )
    {
      v20 &= ~8u;
      *(_DWORD *)(a2 + 28) = HIWORD(a3) & 6
                           | (a3 >> 19) & 0x18
                           | (a3 >> 10) & 0x20
                           | HIWORD(a3) & 1
                           | *(_DWORD *)(a2 + 28) & 0xFFFFFFC0;
    }
    if ( (v20 & 0x8000) != 0 )
    {
      *(_DWORD *)(a2 + 28) |= 0x18u;
      BYTE1(v20) &= ~0x80u;
    }
    if ( (v20 & 0x20000) != 0 )
    {
      if ( ((a3 & 8) == 0) != ((_WORD)v19 == 43) )
        *(_DWORD *)(a2 + 28) |= 0x400u;
      v20 &= ~0x20000u;
    }
    if ( v20 )
      sub_9000((__int64)"%a: unhandled aux bits: %08X\n", a6, *(_QWORD *)(a2 + 16));
    if ( *(_DWORD *)(a1 + 5272) == 2 && *(_WORD *)(a2 + 24) == 5 && (a3 & 0x8000) != 0 )
      *(_WORD *)(a2 + 24) = 310;
    v27 = 0;
    v22 = v6 + 2;
    v23 = v6 + 5;
    do
    {
      v24 = *v22++;
      sub_9E20(a1, a2, a3, &v27, v24, a6);
    }
    while ( v22 != v23 );
    if ( v27 <= 3 )
    {
      v25 = a2 + 40LL * v27;
      v26 = a2 + 40 * (v27 + (unsigned __int64)(unsigned int)(3 - v27)) + 40;
      if ( ((-96 - 40 * (_BYTE)v27) & 8) == 0 || (*(_BYTE *)(v25 + 41) = 0, v25 += 40, v26 != v25) )
      {
        do
        {
          *(_BYTE *)(v25 + 41) = 0;
          v25 += 80;
          *(_BYTE *)(v25 + 1) = 0;
        }
        while ( v26 != v25 );
      }
      v27 = 4;
    }
    if ( *(_WORD *)(a2 + 24) == 33 && *(_BYTE *)(a2 + 41) == 5 && *(_QWORD *)(a2 + 48) == 63 )
    {
      *(_BYTE *)(a2 + 41) = 0;
      *(_WORD *)(a2 + 24) = 31;
    }
    return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}

