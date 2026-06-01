__int64 *__fastcall sub_30CF0(__int64 *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __m128 v10; // xmm0

  v3 = sub_135E0(a1, a2);
  v4 = sub_2C930((_QWORD *)(v3 + 1040), *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 32));
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 144);
    v7 = v4 + 144;
    if ( 120LL * *(_QWORD *)(v4 + 152) )
    {
      do
      {
        v8 = v6;
        v6 += 120;
        *(_BYTE *)(v6 - 32) = sub_2F580(v3, v8, *(_QWORD *)(a2 + 24));
      }
      while ( v6 != *(_QWORD *)(v5 + 144) + 120LL * *(_QWORD *)(v5 + 152) );
    }
    v9 = operator new(0x30u);
    *(_DWORD *)(v9 + 8) = 1;
    v5 = v9;
    *(_QWORD *)v9 = &off_7D770;
    v10 = _mm_loadh_ps((const double *)(a2 + 32));
    *(_QWORD *)(v9 + 32) = v7;
    *(_DWORD *)(v9 + 40) = -1;
    *(__m128 *)(v9 + 16) = v10;
  }
  *a1 = v5;
  return a1;
}

