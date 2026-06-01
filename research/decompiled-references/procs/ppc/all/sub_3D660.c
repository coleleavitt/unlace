__int64 __fastcall sub_3D660(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int16 v4; // ax
  unsigned int v5; // r12d
  int v7; // eax
  int v8; // r13d
  char v9; // al
  __int64 v10; // r14
  unsigned __int8 v11; // r14
  unsigned __int8 v12; // al
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  unsigned __int8 v14; // al
  bool v15; // cl
  bool v16; // cc
  bool v17; // al
  __int16 v18; // cx
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // si
  __m128i *v22; // rax
  int v23; // ecx
  int v24; // ecx
  int v25; // esi

  v3 = a3;
  v4 = *(_WORD *)(a1 + 40);
  if ( v4 == 1191 )
  {
    v9 = *(_BYTE *)(a1 + 137);
LABEL_15:
    if ( v9 != 10 )
      return 0;
    v7 = *(unsigned __int16 *)(a1 + 142);
    v8 = 1;
    goto LABEL_17;
  }
  if ( v4 > 0x4A7u )
  {
    if ( v4 != 1195 )
      return 0;
    goto LABEL_8;
  }
  if ( v4 == 344 )
  {
    v9 = *(_BYTE *)(a1 + 137);
    if ( v9 == 5 )
    {
      v7 = *(_DWORD *)(a1 + 144);
      v8 = 1;
      goto LABEL_17;
    }
    if ( *(_BYTE *)(a1 + 97) == 5 && !v9 )
    {
      v7 = *(_DWORD *)(a1 + 104);
      v8 = 0;
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  if ( v4 == 348 )
  {
LABEL_8:
    if ( *(_BYTE *)(a1 + 137) != 10 )
      return 0;
    v7 = *(char *)(a1 + 168);
    v8 = 1;
LABEL_17:
    if ( a2 != v7 )
      return 0;
    v10 = *(_QWORD *)(a1 + 864);
    if ( !*(_BYTE *)(v10 + 1) )
    {
      *(_BYTE *)(a1 + 792) = 1;
      return 0;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
    if ( !(_BYTE)v5 )
      return 0;
    v11 = *(_BYTE *)(v10 + 5);
    v12 = *(_BYTE *)(a1 + 61);
    if ( v12 <= 0xF9u )
    {
      if ( v11 > 0xF9u || v12 >= v11 || *(_BYTE *)(a1 + 8) && v12 == 2 )
        goto LABEL_29;
    }
    else if ( v11 > 0xF9u && v12 >= v11 )
    {
      goto LABEL_29;
    }
    v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v13 == sub_313C0 )
      return 0;
    v14 = v13(a1, a1 + 56);
    v15 = v11 <= 0xF9u || v14 < v11;
    v16 = v14 <= 0xF9u;
    v17 = v11 <= 0xF9u && v14 < v11;
    if ( !v16 )
      v17 = v15;
    if ( v17 )
      return 0;
LABEL_29:
    v18 = *(_WORD *)(a1 + 40);
    if ( v18 == 348 )
    {
      v23 = 32;
    }
    else
    {
      if ( v18 != 1195 )
      {
LABEL_31:
        v19 = *(_QWORD *)(a1 + 376);
        v20 = a1 + 40LL * v8;
        v21 = *(_BYTE *)(v20 + 61);
        LODWORD(v20) = *(unsigned __int16 *)(v20 + 62);
        *(_BYTE *)(v19 + 68) = v21;
        *(_DWORD *)(v19 + 64) = v20;
        v22 = *(__m128i **)(a1 + 864);
        *v22 = _mm_loadu_si128((const __m128i *)(a1 + (-v8 & 0x28) + 56));
        v22[1] = _mm_loadu_si128((const __m128i *)(a1 + (-v8 & 0x28) + 72));
        v22[2].m128i_i32[0] = *(_DWORD *)(a1 + (-v8 & 0x28) + 88);
        return v5;
      }
      v23 = 64;
    }
    v24 = v23 - *(unsigned __int16 *)(a1 + 142);
    v25 = 1 << v24;
    if ( (unsigned __int64)v24 >= 0x20 )
      v25 = 0;
    *(_DWORD *)(a1 + 896) = v25;
    if ( (_DWORD)v3 != -1 )
      *(_BYTE *)(a1 + v3 + 512) = 1;
    goto LABEL_31;
  }
  return 0;
}
