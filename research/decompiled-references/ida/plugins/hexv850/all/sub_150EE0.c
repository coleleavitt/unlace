__int64 __fastcall sub_150EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r12
  signed int v9; // r15d
  char *v10; // rax
  __int64 v11; // rsi
  char *v12; // rbp
  _QWORD *v13; // rax
  unsigned int v15; // [rsp+Ch] [rbp-4Ch]
  char *v16; // [rsp+10h] [rbp-48h]

  v7 = a2;
  if ( *(_BYTE *)a3 == 4
    && (unsigned __int8)sub_11B9E0(*(_BYTE **)(a3 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0, a4, a5, a6)
    && !sub_11CD70((_BYTE *)a2, a3) )
  {
    return 0;
  }
  v9 = *(_DWORD *)(a3 + 4);
  v15 = sub_133580(*(_QWORD **)(a1 + 64), v9, 1);
  if ( v15 == -1 )
    return 0;
  v10 = (char *)j__qalloc_or_throw();
  v11 = *(_QWORD *)(a2 + 24);
  v12 = v10;
  v16 = v10 + 32;
  *((_QWORD *)v10 + 4) = 0xFFFFFFFF00000000LL;
  *((_QWORD *)v10 + 5) = 0;
  *((_QWORD *)v10 + 6) = 0xFFFFFFFF00000000LL;
  *((_QWORD *)v10 + 7) = 0;
  *((_QWORD *)v10 + 8) = 0xFFFFFFFF00000000LL;
  *((_QWORD *)v10 + 9) = 0;
  sub_32ADE0(v10, v11);
  *(_DWORD *)v12 = 4;
  sub_117E50((char *)a3, v16);
  *(_BYTE *)a3 = 1;
  *(_QWORD *)(a3 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(v15)).m128i_u64[0];
  sub_1205C0((__int64)(v12 + 64), (unsigned __int8 *)a3);
  if ( sub_119D00((unsigned int *)v7) && a3 == v7 + 64 )
    sub_117E50(v16, v12 + 64);
  else
    v7 = *(_QWORD *)(v7 + 16);
  v13 = sub_9E5A0(a1, v12, v7);
  if ( a4 )
  {
    *(_DWORD *)a4 = 2;
    *(_QWORD *)(a4 + 24) = v13;
    *(_QWORD *)(a4 + 8) = a3;
    *(_QWORD *)(a4 + 16) = a1;
  }
  return 1;
}

