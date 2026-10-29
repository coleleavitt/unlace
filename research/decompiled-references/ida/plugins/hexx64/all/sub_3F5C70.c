__int64 __fastcall sub_3F5C70(__int64 a1, __int64 a2, __int64 a3, __m128i a4)
{
  unsigned int v5; // ebp
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r13
  char v15; // al
  unsigned int *v16[11]; // [rsp+10h] [rbp-58h] BYREF

  v16[3] = (unsigned int *)__readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 4 )
    return 0;
  if ( *(_DWORD *)(a3 + 68) != 16 )
    return 0;
  if ( *(_BYTE *)(a3 + 32) != 4 )
    return 0;
  if ( !(unsigned __int8)sub_120560(*(_QWORD *)(a3 + 40), "_mm_xor_pd") )
    return 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 72LL);
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 24) + 80LL) != 6 || !(unsigned __int8)equal_bytes() )
    return 0;
  if ( *(_BYTE *)(a3 + 32) != 4 )
  {
LABEL_10:
    v11 = *(unsigned __int8 **)(v8 + 24);
    goto LABEL_11;
  }
  v15 = sub_1205A0(*(_BYTE **)(a3 + 40), *(_QWORD *)(a1 + 16), 0);
  v11 = *(unsigned __int8 **)(v8 + 24);
  if ( v15 )
  {
    if ( (unsigned __int8)sub_155AA0(a2, (_BYTE *)a3, *(_QWORD *)(v8 + 24), 0, *(double *)a4.m128i_i64) )
      goto LABEL_10;
    return 0;
  }
LABEL_11:
  sub_123A40((__int64)v16, v11, v9, v10);
  if ( (unsigned __int8)sub_12AB50(v16, *(unsigned __int64 **)(a1 + 16), 8, 0, a4)
    && (v5 = sub_12AB50((unsigned int **)(a3 + 64), *(unsigned __int64 **)(a1 + 16), 8, 1, a4), (_BYTE)v5) )
  {
    sub_12AB50(v16, *(unsigned __int64 **)(a1 + 16), SHIDWORD(v16[0]), 2, a4);
    *(_DWORD *)(a3 + 4) |= 0x10u;
    *(_DWORD *)a3 = 68;
    sub_11CA10((char *)(a3 + 32), (char *)v16);
    v14 = j__qalloc_or_throw(80, (__int64)v16, v12, v13);
    *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 56) = 0;
    *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 72) = 0;
    *(_OWORD *)(v14 + 8) = 0;
    sub_1253A0(v14, a3);
    sub_12CD10((__int16 *)(v14 + 32), *(unsigned __int64 **)(a1 + 16), 1, (__m128i)0LL);
    sub_12CD10((__int16 *)(v14 + 64), *(unsigned __int64 **)(a1 + 16), 1, (__m128i)0LL);
    sub_A3160(a2, (_QWORD *)v14, a3, 0.0);
    *(_DWORD *)(a3 + 4) |= 0x10000u;
    *(_DWORD *)(v14 + 4) |= 0x10000u;
  }
  else
  {
    v5 = 0;
  }
  sub_11CDA0((__int64)v16);
  return v5;
}

