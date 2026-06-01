__int64 __fastcall sub_C960(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebp
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // al
  bool v6; // r13
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i *v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  unsigned __int8 v20; // al
  bool v21; // dl
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // [rsp+0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+8h] [rbp-50h] BYREF
  __int64 v26; // [rsp+10h] [rbp-48h] BYREF
  __int64 v27; // [rsp+18h] [rbp-40h] BYREF
  __int64 v28[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 864);
  v28[1] = __readfsqword(0x28u);
  if ( !*(_BYTE *)(v1 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v1) )
    return 0;
  v4 = *(_BYTE *)(v1 + 5);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v4 > 0xF9u && v5 >= v4 )
      goto LABEL_11;
  }
  else if ( v4 > 0xF9u || v5 >= v4 || *(_BYTE *)(a1 + 8) && v5 == 2 )
  {
    goto LABEL_11;
  }
  v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v19 == sub_A190 )
    return 0;
  v20 = v19(a1, a1 + 56);
  v21 = v6 || v20 < v4;
  if ( v20 <= 0xF9u )
    v21 = v6 && v20 < v4;
  if ( v21 )
    return 0;
LABEL_11:
  if ( *(_WORD *)(a1 + 40) != 10 )
    return 0;
  if ( *(_QWORD *)(a1 + 184) != 2 )
    return 0;
  if ( !(unsigned int)sub_BE80(
                        *(_QWORD *)(a1 + 888),
                        (__int64)&v25,
                        &v26,
                        &v24,
                        &v27,
                        (_DWORD *)&v24 + 1,
                        v28,
                        *(_QWORD *)(a1 + 32),
                        *(unsigned __int16 *)(a1 + 102),
                        0) )
    return 0;
  v7 = v27;
  if ( v27 == -1 )
    return 0;
  if ( (v28[0] & v26) != 0xFFFFFFFFFFFFFFFFLL )
    return 0;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL) & (*(_QWORD *)(a1 + 896) + v25);
  v9 = use_mapping(v8);
  v2 = is_mapped(v9);
  if ( !(_BYTE)v2 )
    return 0;
  v12 = *(__m128i **)(a1 + 864);
  *v12 = _mm_loadu_si128((const __m128i *)(a1 + 136));
  v12[1] = _mm_loadu_si128((const __m128i *)(a1 + 152));
  v12[2].m128i_i32[0] = *(_DWORD *)(a1 + 168);
  v13 = *(_QWORD *)(a1 + 376);
  v14 = *(unsigned __int16 *)(a1 + 142);
  *(_BYTE *)(v13 + 68) = *(_BYTE *)(a1 + 141);
  *(_DWORD *)(v13 + 64) = v14;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v8;
  **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
  v15 = *(_QWORD **)(a1 + 840);
  v16 = *(_QWORD *)(a1 + 848);
  *(_QWORD *)(a1 + 904) = v7;
  v17 = &v15[v16];
  if ( v15 == v17 )
    goto LABEL_22;
  v18 = v15;
  while ( v7 != *v18 )
  {
    if ( v17 == ++v18 )
      goto LABEL_22;
  }
  if ( v18 == v17 )
  {
LABEL_22:
    if ( *(_QWORD *)(a1 + 856) < (unsigned __int64)(v16 + 1) )
    {
      v22 = qvector_reserve(a1 + 840, v15, v16 + 1, 8, v10, v11, v24, v25, v26, v27);
      v23 = *(_QWORD *)(a1 + 848);
      *(_QWORD *)(a1 + 840) = v22;
      v17 = (_QWORD *)(v22 + 8 * v23);
    }
    *v17 = v7;
    ++*(_QWORD *)(a1 + 848);
  }
  return v2;
}

