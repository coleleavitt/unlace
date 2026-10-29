__int64 __fastcall sub_172D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v8; // rdi
  unsigned int v9; // ebp
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int64 v15; // r13
  unsigned int v16; // r8d
  __int64 v17; // rdi
  __int64 (*v18)(); // rax
  unsigned int dword; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rax
  __m128i v27; // [rsp+0h] [rbp-58h] BYREF
  __int128 v28; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-30h]

  v3 = 0;
  v4 = a2 + 4;
  v6 = *(_QWORD *)(a1 + 8);
  v29 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_17230(v6, a2 + 4, 1u) )
  {
    dword = get_dword(v4);
    v3 = dword;
    if ( dword > 1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v8 + 124) & 2) == 0 )
        goto LABEL_4;
      goto LABEL_17;
    }
  }
  if ( !(unsigned __int8)get_fixups(0, v4, 4) )
    return 0;
  v8 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v8 + 124) & 2) != 0 )
LABEL_17:
    v3 += *(_QWORD *)(a1 + 24);
LABEL_4:
  v9 = sub_17230(v8, v3 - 1, 1u);
  if ( !(_BYTE)v9 )
    return 0;
  v27.m128i_i64[0] = a3;
  v27.m128i_i64[1] = v3;
  if ( v3 == -1 )
    return 0;
  if ( a3 >= v3 )
    return 0;
  v10 = *(_DWORD *)(a1 + 72);
  v11 = *(_QWORD *)(a1 + 8);
  v28 = 0;
  v12 = sub_21970(*(_QWORD *)(v11 + 624), a2, &v28, (v10 & 1) == 0);
  if ( v12 == -1 )
    return 0;
  if ( v27.m128i_i64[0] != (_QWORD)v28 )
    set_abits(v27.m128i_i64[0], 0x20000000);
  if ( *(_DWORD *)(a1 + 48) != 3 )
  {
    if ( !under_debugger )
      interr(30504);
    BUG();
  }
  v13 = v27.m128i_i64[1];
  *(__m128i *)(a1 + 56) = _mm_load_si128(&v27);
  v14 = is_align_insn(v13);
  v15 = v14;
  if ( v14 )
  {
    v21 = getseg(v27.m128i_i64[0]);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 8);
      v23 = v27.m128i_i64[1];
      if ( v27.m128i_i64[1] < v22 )
      {
        v24 = v22 - v27.m128i_i64[1];
        if ( v15 > v24 )
          v15 = v24;
        v25 = v24 - v15;
        if ( v25 )
        {
          while ( 1 )
          {
            v26 = (int)is_align_insn(v15 + v23);
            if ( !(_DWORD)v26 )
              break;
            if ( v25 <= (int)v26 )
              v26 = v25;
            v15 += v26;
            v25 -= v26;
            if ( !v25 )
              break;
            v23 = v27.m128i_i64[1];
          }
        }
        v16 = *(_DWORD *)(a1 + 72);
        if ( (v16 & 1) != 0 )
          goto LABEL_13;
        create_align(v27.m128i_i64[1], v15, 0);
      }
    }
  }
  v16 = *(_DWORD *)(a1 + 72);
LABEL_13:
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 624LL);
  v18 = *(__int64 (**)())(*(_QWORD *)v17 + 32LL);
  if ( v18 != sub_15DB0 )
    ((void (__fastcall *)(__int64, __int64, __m128i *, __int64, _QWORD))v18)(v17, v12, &v27, a1, (v16 >> 1) & 1);
  return v9;
}

