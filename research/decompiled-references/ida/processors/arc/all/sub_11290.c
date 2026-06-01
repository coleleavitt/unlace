__int64 __fastcall sub_11290(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v3; // ebp
  __int64 v5; // r12
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // al
  bool v8; // r14
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cc
  bool v13; // al
  char v14; // al
  char v15; // al
  __int64 v16; // r12
  int v17; // ecx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  char v20; // al
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rdi
  int v24; // ecx
  char v25; // al
  __int64 v26; // rax
  const __m128i *v27; // r12
  __int64 v28; // rax
  __int16 v29; // ax
  unsigned int *v30; // rdx
  unsigned int v31; // eax
  __m128i *v32; // rax
  int v33; // r10d
  unsigned __int64 v34; // rdx
  __int64 v35; // rdi
  char v36; // al
  unsigned int *v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rax
  char v40; // dl
  __m128i si128; // [rsp+0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+10h] [rbp-58h]
  __int128 v43; // [rsp+18h] [rbp-50h]
  char v44; // [rsp+28h] [rbp-40h]
  char v45; // [rsp+29h] [rbp-3Fh]
  unsigned __int64 v46; // [rsp+38h] [rbp-30h]

  v1 = *(_WORD *)(a1 + 40);
  v46 = __readfsqword(0x28u);
  if ( (unsigned __int16)(v1 - 47) > 1u && v1 != 19 || (*(_BYTE *)(a1 + 44) & 0x1F) != 0 )
    return 0;
  v5 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v5 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v3 )
    return 0;
  v6 = *(_BYTE *)(v5 + 5);
  v7 = *(_BYTE *)(a1 + 61);
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v7 >= v6 && v6 > 0xF9u )
      goto LABEL_18;
  }
  else if ( v7 >= v6 || v6 > 0xF9u || v7 == 2 && *(_BYTE *)(a1 + 8) )
  {
    goto LABEL_18;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v9 == sub_B740 )
    return 0;
  v10 = v9(a1, a1 + 56);
  v11 = v8 || v10 < v6;
  v12 = v10 <= 0xF9u;
  v13 = v10 < v6 && v8;
  if ( !v12 )
    v13 = v11;
  if ( v13 )
    return 0;
LABEL_18:
  v14 = *(_BYTE *)(a1 + 97);
  if ( v14 == 5 )
  {
    v25 = *(_BYTE *)(a1 + 137);
    if ( v25 == 1 )
    {
      if ( *(_WORD *)(a1 + 142) > 0x3Fu )
        return 0;
    }
    else if ( v25 != 4 )
    {
      return 0;
    }
    v26 = *(_QWORD *)(a1 + 32);
    v22 = *(_QWORD *)(a1 + 104);
    *(_DWORD *)(a1 + 916) = 1;
    v27 = (const __m128i *)(a1 + 136);
    *(_QWORD *)(a1 + 904) = v26;
  }
  else
  {
    if ( *(_WORD *)(a1 + 40) != 19 )
    {
      v45 = 0;
      v43 = 0;
      if ( v14 != 1 )
        return 0;
      goto LABEL_21;
    }
    if ( *(_BYTE *)(a1 + 137) != 5 )
    {
      v45 = 0;
      v43 = 0;
      if ( v14 != 1 )
      {
        if ( *(_BYTE *)(a1 + 137) != 1 )
          return 0;
        goto LABEL_42;
      }
LABEL_21:
      v15 = *(_BYTE *)(a1 + 137);
      if ( v15 != 1 )
      {
        if ( v15 != 4 )
          return 0;
        goto LABEL_23;
      }
      if ( *(_WORD *)(a1 + 142) <= 0x3Fu )
      {
LABEL_23:
        v16 = a1 + 16;
        v17 = *(unsigned __int16 *)(a1 + 102);
        v18 = *(_QWORD *)(a1 + 32);
        v19 = *(_QWORD *)(a1 + 888);
        v44 = 0;
        v42 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_1F660);
        v20 = sub_11140(v19, a1 + 16, v18, v17, &si128);
        v21 = si128.m128i_i64[1];
        v22 = si128.m128i_i64[0];
        v23 = v42;
        v24 = v44;
        if ( v20 )
        {
          v27 = (const __m128i *)(a1 + 136);
LABEL_46:
          *(_QWORD *)(a1 + 904) = v21;
          *(_DWORD *)(a1 + 916) = v24;
          if ( v23 )
            qfree(v23);
          goto LABEL_30;
        }
        if ( *(_WORD *)(a1 + 40) != 19 || *(_BYTE *)(a1 + 137) != 1 )
        {
LABEL_25:
          if ( v23 )
            qfree(v23);
          return 0;
        }
        v40 = *(_BYTE *)(a1 + 97);
        if ( v40 == 1 )
        {
          if ( *(_WORD *)(a1 + 102) > 0x3Fu )
            goto LABEL_25;
        }
        else if ( v40 != 4 )
        {
          goto LABEL_25;
        }
LABEL_44:
        v33 = *(unsigned __int16 *)(a1 + 142);
        v34 = *(_QWORD *)(a1 + 32);
        v44 = v24;
        v42 = v23;
        v35 = *(_QWORD *)(a1 + 888);
        si128.m128i_i64[1] = v21;
        si128.m128i_i64[0] = v22;
        v36 = sub_11140(v35, v16, v34, v33, &si128);
        v23 = v42;
        if ( v36 )
        {
          v21 = si128.m128i_i64[1];
          v22 = si128.m128i_i64[0];
          v27 = (const __m128i *)(a1 + 96);
          v24 = v44;
          goto LABEL_46;
        }
        goto LABEL_25;
      }
      if ( *(_WORD *)(a1 + 40) != 19 )
        return 0;
      v14 = *(_BYTE *)(a1 + 97);
      if ( v14 == 1 )
      {
        if ( *(_WORD *)(a1 + 102) > 0x3Fu )
          return 0;
LABEL_43:
        v21 = -1;
        v22 = 0;
        v23 = 0;
        LOBYTE(v24) = 0;
        v16 = a1 + 16;
        goto LABEL_44;
      }
LABEL_42:
      if ( v14 != 4 )
        return 0;
      goto LABEL_43;
    }
    if ( v14 == 1 )
    {
      if ( *(_WORD *)(a1 + 102) > 0x3Fu )
      {
        v45 = 0;
        v43 = 0;
        goto LABEL_21;
      }
    }
    else if ( v14 != 4 )
    {
      return 0;
    }
    v39 = *(_QWORD *)(a1 + 32);
    v22 = *(_QWORD *)(a1 + 144);
    v27 = (const __m128i *)(a1 + 96);
    *(_DWORD *)(a1 + 916) = 2;
    *(_QWORD *)(a1 + 904) = v39;
  }
LABEL_30:
  v28 = *(_QWORD *)(a1 + 376);
  *(_DWORD *)v28 |= 0x200u;
  *(_QWORD *)(v28 + 56) = v22;
  v29 = *(_WORD *)(a1 + 40);
  if ( v29 == 47 )
  {
    v37 = *(unsigned int **)(a1 + 376);
    v38 = *v37 & 0xFFFFFE7F;
    LOBYTE(v38) = *(_BYTE *)v37 & 0x7F | 0x80;
    *v37 = v38;
  }
  else if ( v29 == 48 )
  {
    v30 = *(unsigned int **)(a1 + 376);
    v31 = *v30 & 0xFFFFFE7F;
    BYTE1(v31) |= 1u;
    *v30 = v31;
  }
  v32 = *(__m128i **)(a1 + 864);
  *v32 = _mm_loadu_si128(v27);
  v32[1] = _mm_loadu_si128(v27 + 1);
  v32[2].m128i_i32[0] = v27[2].m128i_i32[0];
  return v3;
}

