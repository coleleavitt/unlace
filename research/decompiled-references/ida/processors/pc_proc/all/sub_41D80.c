void __fastcall sub_41D80(_QWORD *a1, int a2, int a3, char a4, __m128d a5, __m128d a6)
{
  __m128d v8; // xmm3
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax

  v8 = _mm_unpacklo_pd(a5, a6);
  if ( a5.m128d_f64[0] == 0.0 && a4 && a6.m128d_f64[0] == 0.0 && a2 != a3 )
  {
    sub_41C80(a1, a2, a3);
  }
  else
  {
    v10 = a1[8];
    v11 = a1[7];
    v12 = v10 + 1;
    if ( a1[9] < (unsigned __int64)(v10 + 1) )
    {
      v14 = qvector_reserve();
      v10 = a1[8];
      a1[7] = v14;
      v11 = v14;
      v12 = v10 + 1;
    }
    a1[8] = v12;
    v13 = v11 + 24 * v10;
    *(_DWORD *)v13 = a2;
    *(_DWORD *)(v13 + 4) = a3;
    *(__m128d *)(v13 + 8) = v8;
  }
}

