__int64 __fastcall sub_17D1E0(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rax

  v5 = a1[8];
  v6 = a1[7];
  if ( a1[9] < (unsigned __int64)(v5 + 1) )
  {
    v11 = sub_1987B0(a1 + 7, v6, v5 + 1, 56);
    v5 = a1[8];
    a1[7] = v11;
    v6 = v11;
  }
  result = v6 + 56 * v5;
  *(_QWORD *)result = 0;
  *(_OWORD *)(result + 8) = 0;
  v8 = *a1;
  ++a1[8];
  *(_QWORD *)(result + 24) = v8;
  *(_QWORD *)(result + 32) = a1[1];
  LODWORD(v8) = *((_DWORD *)a1 + 20);
  *(_QWORD *)(result + 40) = a2;
  *(_DWORD *)(result + 48) = v8;
  if ( a3 )
  {
    v9 = *a3;
    v10 = _mm_loadu_si128((const __m128i *)(a3 + 1));
    *a3 = *(_QWORD *)result;
    a3[1] = *(_QWORD *)(result + 8);
    a3[2] = *(_QWORD *)(result + 16);
    *(_QWORD *)result = v9;
    *(__m128i *)(result + 8) = v10;
  }
  return result;
}
