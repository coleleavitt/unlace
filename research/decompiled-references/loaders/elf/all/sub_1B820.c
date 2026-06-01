__int64 __fastcall sub_1B820(__int64 a1, const __m128i *a2, __int64 a3, __int64 *a4)
{
  const char *v4; // r12
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rbp
  int v23; // eax
  __int64 v24; // [rsp-10h] [rbp-A8h]
  __int16 v25; // [rsp+Eh] [rbp-8Ah]
  _OWORD v26[3]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v27; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+48h] [rbp-50h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a3 + 8) )
    return 1;
  v4 = *(const char **)a3;
  if ( !strcmp(*(const char **)a3, ".toc") && a2[3].m128i_i64[0] <= 3uLL )
  {
    v18 = *(_QWORD *)(a1 + 16);
    v19 = *(_QWORD *)(a1 + 8);
    v26[0] = _mm_loadu_si128(a2);
    v26[1] = _mm_loadu_si128(a2 + 1);
    v26[2] = _mm_loadu_si128(a2 + 2);
    v28 = _mm_loadu_si128(a2 + 3).m128i_i64[1];
    v27 = 4;
    *a4 = sub_41B70(v19, v18, v26, v9, v10, v11);
    if ( *(_DWORD *)(a1 + 376) )
      return 1;
    v12 = *(_QWORD *)(a1 + 16);
    v25 = *(_WORD *)(v12 + 520);
    if ( !*(_QWORD *)(a3 + 8) )
      return 1;
    v4 = *(const char **)a3;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 376) )
      return 1;
    v12 = *(_QWORD *)(a1 + 16);
    v25 = *(_WORD *)(v12 + 520);
  }
  if ( !strcmp(v4, ".got") || !strcmp(v4, ".toc") || !strcmp(v4, ".tocbss") )
  {
    if ( v25 != 1 )
    {
LABEL_10:
      v16 = *(_QWORD *)(a1 + 396) + sub_41B70(*(_QWORD *)(a1 + 8), v12, a2, v13, v14, v15);
      *(_DWORD *)(a1 + 376) = 2;
      *(_QWORD *)(a1 + 388) = v16;
      return 1;
    }
  }
  else
  {
    v23 = strcmp(v4, ".plt");
    if ( v25 != 1 )
    {
      if ( v23 )
        return 1;
      goto LABEL_10;
    }
    if ( v23 && strcmp(v4, ".data") && strcmp(v4, ".bss") && strcmp(v4, ".sdata") && strcmp(v4, ".sbss") )
      return 1;
  }
  v20 = *(_QWORD *)(a1 + 8);
  v21 = (__int64 *)sub_41120(v20, v12, 7, (unsigned int)".tocstart", 0, 5, 1);
  *(_QWORD *)(a1 + 396) = 0;
  v22 = *v21;
  *(_QWORD *)(a1 + 388) = *v21;
  if ( *(_DWORD *)(get_ph(v20, v12, v24) + 4) == 15 )
  {
    sub_101F0(0xBB9u, v22, 0);
    *(_DWORD *)(a1 + 376) = 1;
    return 1;
  }
  sub_1AAC0();
  return sub_1BAD0();
}
