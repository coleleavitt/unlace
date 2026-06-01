__int64 __fastcall sub_3F9BB0(__int64 *a1, const __m128i *a2)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // r12
  __int16 v10; // bp
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax

  v3 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v7 = v5 + 1;
  if ( (unsigned __int64)a2 >= v3 && (unsigned __int64)a2 < v3 + 16 * v6 )
  {
    v9 = a2->m128i_i64[0];
    v10 = a2->m128i_i16[4];
    if ( v6 < v7 )
    {
      v13 = qvector_reserve();
      *a1 = v13;
      v3 = v13;
      v5 = a1[1];
    }
    result = 16 * v5;
    v11 = result + v3;
    *(_QWORD *)v11 = v9;
    *(_WORD *)(v11 + 8) = v10;
    ++a1[1];
  }
  else
  {
    if ( v6 < v7 )
    {
      v12 = qvector_reserve();
      *a1 = v12;
      v3 = v12;
      v5 = a1[1];
    }
    result = 16 * v5;
    *(__m128i *)(v3 + result) = _mm_loadu_si128(a2);
    ++a1[1];
  }
  return result;
}

