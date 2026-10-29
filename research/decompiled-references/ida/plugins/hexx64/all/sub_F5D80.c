__int64 __fastcall sub_F5D80(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  double v12; // xmm0_8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // [rsp+0h] [rbp-54h]

  if ( *(_BYTE *)a2 != 14 )
    return 0;
  if ( !(unsigned __int8)sub_157240(a1[2], *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) + 16LL) )
  {
    v4 = a1[2];
    v5 = *(int *)(a2 + 4);
    v6 = a1[3];
    v7 = *(_QWORD *)(a1[4] + 24LL);
    v8 = sub_138140(*(_QWORD **)(v4 + 64), v5, 1);
    v11 = v8;
    if ( v8 != -1 )
    {
      v17 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4LL);
      *(_QWORD *)&v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v8)).m128i_u64[0];
      v13 = j__qalloc_or_throw(80, v5, v9, v10);
      *(_QWORD *)(v13 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v13 + 56) = 0;
      *(_QWORD *)(v13 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v13 + 72) = 0;
      sub_330970(v13, v7);
      *(_DWORD *)v13 = 4;
      sub_11CA10((char *)(v13 + 32), *(char **)(a2 + 8));
      sub_11CDA0(v13 + 64);
      *(_BYTE *)(v13 + 64) = 1;
      *(double *)(v13 + 68) = v12;
      sub_A3160(v4, (_QWORD *)v13, *(_QWORD *)(v6 + 16), v12);
      v16 = j__qalloc_or_throw(80, v13, v14, v15);
      *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v16 + 40) = 0;
      *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v16 + 56) = 0;
      *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v16 + 72) = 0;
      sub_330970(v16, v7);
      *(_DWORD *)v16 = 4;
      sub_11CA10((char *)(v16 + 32), (char *)(*(_QWORD *)(a2 + 8) + 16LL));
      sub_11CDA0(v16 + 64);
      *(_QWORD *)(v16 + 68) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v11 + v17)).m128i_u64[0];
      *(_BYTE *)(v16 + 64) = 1;
      sub_A3160(v4, (_QWORD *)v16, *(_QWORD *)(v6 + 16), v12);
      sub_11CDA0(a2);
      *(_BYTE *)a2 = 1;
      *(_DWORD *)(a2 + 8) = v11;
      *(_DWORD *)(a2 + 4) = 2 * v17;
      *(_DWORD *)(v4 + 24) |= 0x80u;
    }
  }
  return 0;
}

