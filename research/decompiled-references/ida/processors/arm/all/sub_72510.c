__int64 __fastcall sub_72510(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r12
  __int64 v5; // r13
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // al
  bool v8; // r14
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cc
  bool v13; // al
  char v14; // al
  int v15; // eax
  int v16; // edx
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // r12d
  __int64 v21; // r14
  __int64 *v22; // rax
  char v23; // dl
  int v24; // ecx
  __int64 v25; // rax
  __int16 v26; // ax
  __int64 *v27; // [rsp+0h] [rbp-58h] BYREF
  __int128 v28; // [rsp+8h] [rbp-50h]
  char v29; // [rsp+18h] [rbp-40h]
  _QWORD v30[7]; // [rsp+20h] [rbp-38h] BYREF

  v30[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 48) & 0xF) != 0xE )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v5 = a1 + 56;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v1 )
    return 0;
  v6 = *(_BYTE *)(v3 + 5);
  v7 = *(_BYTE *)(a1 + 61);
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v7 >= v6 && v6 > 0xF9u )
      goto LABEL_16;
  }
  else if ( v7 >= v6 || v6 > 0xF9u || *(_BYTE *)(a1 + 8) && v7 == 2 )
  {
    goto LABEL_16;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v9 == sub_6ACC0 )
    return 0;
  v10 = v9(a1, a1 + 56);
  v11 = v8 || v10 < v6;
  v12 = v10 <= 0xF9u;
  v13 = v10 < v6 && v8;
  if ( !v12 )
    v13 = v11;
  if ( v13 )
    return 0;
LABEL_16:
  if ( *(_WORD *)(a1 + 40) != 14 )
    return 0;
  v14 = *(_BYTE *)(a1 + 137);
  if ( v14 )
    v5 = a1 + 96;
  else
    v14 = *(_BYTE *)(a1 + 97);
  if ( v14 != 1 )
    return 0;
  v15 = *(unsigned __int16 *)(v5 + 46);
  v16 = *(unsigned __int16 *)(v5 + 6);
  v17 = *(_QWORD *)(a1 + 888);
  v29 = 0;
  v27 = 0;
  v18 = v16 | (v15 << 16);
  v19 = *(_QWORD *)(a1 + 32);
  v30[0] = _mm_unpacklo_epi16(_mm_cvtsi32_si128(v18), (__m128i)0LL).m128i_u64[0];
  v28 = 0;
  v20 = sub_822F0(v17, &v27, v19, v30);
  if ( v20 == -1 || (unsigned __int8)(v29 - 10) > 1u )
  {
LABEL_27:
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree((__int64)v27);
    }
    return 0;
  }
  v21 = *v27;
  if ( (_QWORD)v28 != 1 )
  {
    v22 = v27 + 3;
    if ( 24LL * (_QWORD)v28 != 24 )
    {
      while ( *v22 == v21 )
      {
        v22 += 3;
        if ( v22 == &v27[3 * (_QWORD)v28] )
          goto LABEL_33;
      }
      goto LABEL_27;
    }
  }
LABEL_33:
  sub_82740(*(_QWORD *)(a1 + 888), a1 + 840, &v27);
  if ( (*(_BYTE *)(a1 + 50) & 4) != 0 || (v26 = getinf(3), v23 = 2, (v26 & 0x1006) == 0x1002) )
    v23 = 7;
  v24 = *((_DWORD *)v30 + 1 - v20);
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v24;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v23;
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree((__int64)v27);
  }
  v25 = *(_QWORD *)(a1 + 376);
  *(_DWORD *)v25 |= 0x200u;
  *(_QWORD *)(v25 + 56) = v21;
  return v1;
}
