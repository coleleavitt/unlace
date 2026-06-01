__int64 __fastcall sub_147470(_DWORD *a1)
{
  __int64 v2; // rbp
  __m128i v3; // xmm0
  __int64 v4; // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( (unsigned int)(*a1 - 12) > 1 )
    return 0;
  v2 = sub_1161E0((__int64)a1, v5);
  if ( !v2 || *(_BYTE *)v5[0] != 4 || **(_DWORD **)(v5[0] + 8LL) != 7 )
    return 0;
  v3 = (__m128i)(unsigned __int64)sub_323690(
                                    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 2LL * (*a1 != 12) - 1,
                                    *(unsigned int *)(v2 + 4),
                                    0);
  v4 = v5[0];
  *(__m128i *)(*(_QWORD *)(v2 + 8) + 16LL) = _mm_unpacklo_epi64(v3, v3);
  **(_DWORD **)(v4 + 8) = 5;
  return 1;
}

