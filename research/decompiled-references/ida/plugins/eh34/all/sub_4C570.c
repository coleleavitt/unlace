__int64 __fastcall sub_4C570(_QWORD *a1, __int64 a2)
{
  int v2; // edx
  __m128i v3; // xmm0
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-28h]

  *a1 = 0xFFFFFFFFLL;
  a1[3] = 0xFFFFFFFFLL;
  a1[5] = 0xFFFFFFFFLL;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 2;
  a1[6] = 2;
  sub_4C070((__int64)a1);
  v2 = *(_DWORD *)(a2 + 32);
  LODWORD(v7) = -1;
  v3 = _mm_loadl_epi64((const __m128i *)(a2 + 4));
  *(_DWORD *)(a2 + 32) = 2;
  *((_DWORD *)a1 + 8) = v2;
  v4 = *(_QWORD *)(a2 + 24);
  result = (unsigned int)_mm_cvtsi128_si32(v3);
  *(_DWORD *)(a2 + 8) = 0;
  a1[3] = v4;
  LODWORD(v4) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)((char *)a1 + 4) = v3.m128i_i64[0];
  *((_DWORD *)a1 + 12) = v4;
  v6 = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 48) = 2;
  a1[5] = v6;
  *(_QWORD *)(a2 + 24) = v7;
  *(_QWORD *)(a2 + 40) = v7;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  if ( (_DWORD)result == 2 || (_DWORD)result == 3 || (_DWORD)result == 1 )
  {
    result = *(_QWORD *)(a2 + 16);
    a1[2] = result;
    *(_DWORD *)(a2 + 4) = 0;
    *(_QWORD *)(a2 + 16) = 0;
  }
  return result;
}

