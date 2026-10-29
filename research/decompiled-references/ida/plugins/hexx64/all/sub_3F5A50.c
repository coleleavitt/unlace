__int64 __fastcall sub_3F5A50(__int64 a1, __int64 a2, __int64 a3, __m128i a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned int *v14[11]; // [rsp+10h] [rbp-58h] BYREF

  v14[3] = (unsigned int *)__readfsqword(0x28u);
  if ( *(_DWORD *)a3 == 4
    && *(_DWORD *)(a3 + 68) == 16
    && *(_BYTE *)(a3 + 32) == 4
    && (unsigned __int8)sub_120560(*(_QWORD *)(a3 + 40), "_mm_cvtps_pd")
    && (v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 72LL) + 24LL), *(_BYTE *)v7 == 4)
    && (unsigned __int8)sub_120560(*(_QWORD *)(v7 + 8), "_mm_unpacklo_ps")
    && (v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
        sub_125B60(*(unsigned __int8 **)(v8 + 24), *(_QWORD *)(v8 + 24) + 80LL, 0, *(double *)a4.m128i_i64)) )
  {
    sub_123A40((__int64)v14, *(unsigned __int8 **)(v8 + 24), v9, v10);
    if ( (unsigned __int8)sub_12AB50(v14, *(unsigned __int64 **)(a1 + 16), 4, 1, a4)
      && (v5 = sub_12AB50((unsigned int **)(a3 + 64), *(unsigned __int64 **)(a1 + 16), 8, 1, a4), (_BYTE)v5) )
    {
      *(_DWORD *)(a3 + 4) |= 0x10u;
      *(_DWORD *)a3 = 67;
      sub_11CA10((char *)(a3 + 32), (char *)v14);
      v13 = j__qalloc_or_throw(80, (__int64)v14, v11, v12);
      *(_QWORD *)(v13 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v13 + 56) = 0;
      *(_QWORD *)(v13 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v13 + 72) = 0;
      *(_OWORD *)(v13 + 8) = 0;
      sub_1253A0(v13, a3);
      sub_125180((unsigned __int8 *)(v13 + 32), (unsigned __int8 *)(v13 + 64));
      sub_12CD10((__int16 *)(v13 + 64), *(unsigned __int64 **)(a1 + 16), 1, (__m128i)0LL);
      sub_A3160(a2, (_QWORD *)v13, a3, 0.0);
    }
    else
    {
      v5 = 0;
    }
    sub_11CDA0((__int64)v14);
  }
  else
  {
    return 0;
  }
  return v5;
}

