__int64 __fastcall sub_AD80(__int64 a1)
{
  __int64 v2; // rbp
  char v3; // al
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rcx
  char v5; // al
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  bool v8; // r12
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cc
  bool v13; // al
  __m128i *v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 *v17; // rax
  char v18; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+168h] [rbp-30h] BYREF

  v19 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 20 )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  v3 = *(_BYTE *)(v2 + 1);
  if ( !v3 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v4 != sub_9290 )
  {
    v5 = v4(a1, a1 + 96, *(_QWORD *)(a1 + 864));
LABEL_11:
    if ( !v5 )
      return 0;
    goto LABEL_12;
  }
  if ( v3 != *(_BYTE *)(a1 + 97) )
    return 0;
  if ( v3 != 99 )
  {
    if ( v3 == 100 )
    {
      v5 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v2 + 8);
    }
    else
    {
      if ( v3 != 1 )
        return 0;
      v5 = *(_WORD *)(a1 + 102) == *(_WORD *)(v2 + 6);
    }
    goto LABEL_11;
  }
LABEL_12:
  v6 = *(_BYTE *)(v2 + 5);
  v7 = *(_BYTE *)(a1 + 101);
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v6 <= 0xF9u || v7 < v6 )
      goto LABEL_17;
LABEL_21:
    v14 = *(__m128i **)(a1 + 864);
    v14[5] = _mm_loadu_si128((const __m128i *)(a1 + 56));
    v14[6] = _mm_loadu_si128((const __m128i *)(a1 + 72));
    v14[7].m128i_i32[0] = *(_DWORD *)(a1 + 88);
    v15 = *(_QWORD *)(a1 + 376);
    v16 = *(unsigned __int16 *)(a1 + 102);
    *(_BYTE *)(v15 + 68) = *(_BYTE *)(a1 + 101);
    *(_DWORD *)(v15 + 64) = v16;
    v17 = (unsigned __int64 *)&v18;
    do
    {
      *(_WORD *)v17 = 0;
      v17 += 5;
      *((_WORD *)v17 - 19) = 0;
      *((_WORD *)v17 - 18) = 0;
      *((_DWORD *)v17 - 2) = 0;
      *((_WORD *)v17 - 17) = 0;
      *((_OWORD *)v17 - 2) = 0;
      *(v17 - 2) = 0;
    }
    while ( &v19 != v17 );
    decode_insn();
    return 0;
  }
  if ( v6 > 0xF9u || v7 >= v6 || *(_BYTE *)(a1 + 8) && v7 == 2 )
    goto LABEL_21;
LABEL_17:
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v9 != sub_92F0 )
  {
    v10 = v9(a1, a1 + 96);
    v11 = v8 || v10 < v6;
    v12 = v10 <= 0xF9u;
    v13 = v8 && v10 < v6;
    if ( !v12 )
      v13 = v11;
    if ( !v13 )
      goto LABEL_21;
  }
  return 0;
}

