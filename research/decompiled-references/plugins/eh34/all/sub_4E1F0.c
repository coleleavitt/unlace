__int64 __fastcall sub_4E1F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  const char *v3; // rdx
  __int64 v5; // rax
  __m128i si128; // xmm0
  __m128i *v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r12
  _BYTE *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 == 2 )
  {
    v11 = qvector_reserve(a1, 0, 13, 1);
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = 13;
    *(_BYTE *)(v11 + 12) = 0;
    qmemcpy(*(void **)a1, "helper_call[", 12);
    sub_4DE20((__int64 *)a1, *(int **)(a2 + 16), 0, 0.0);
    goto LABEL_9;
  }
  if ( v2 > 2 )
  {
    if ( v2 != 3 )
      return a1;
    v5 = qvector_reserve(a1, 0, 25, 1);
    *(_QWORD *)a1 = v5;
    si128 = _mm_load_si128((const __m128i *)&xmmword_78750);
    *(_QWORD *)(a1 + 8) = 25;
    *(_BYTE *)(v5 + 24) = 0;
    v7 = *(__m128i **)a1;
    *v7 = si128;
    v7[1].m128i_i64[0] = 0x5B6C6C61635F7265LL;
    sub_4DE20(
      (__int64 *)a1,
      **(int ***)(a2 + 16),
      *(_BYTE *)(*(_QWORD *)(a2 + 16) + 8LL) & 1,
      *(double *)si128.m128i_i64);
LABEL_9:
    v8 = *(_QWORD *)(a1 + 8);
    v9 = 2;
    if ( v8 )
      v9 = v8-- + 1;
    v10 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) < v9 )
    {
      v13 = qvector_reserve(a1, v10, v9, 1);
      *(_QWORD *)a1 = v13;
      v10 = (_BYTE *)v13;
    }
    *(_QWORD *)(a1 + 8) = v9;
    v10[v8] = 93;
    *(_BYTE *)(*(_QWORD *)a1 + v8 + 1) = 0;
    return a1;
  }
  if ( v2 )
  {
    v3 = "jump";
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 32LL) )
      v3 = "call";
    sub_FB10((__int64 *)a1, (__int64)"known_external_handler_call[%s]", v3);
    return a1;
  }
  else
  {
    v12 = qvector_reserve(a1, 0, 5, 1);
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = 5;
    *(_BYTE *)(v12 + 4) = 0;
    **(_DWORD **)a1 = 1869901671;
    return a1;
  }
}
