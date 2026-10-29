bool __fastcall sub_15D90(__int64 a1, _QWORD *a2, __int64 *a3)
{
  bool result; // al
  int v5; // eax
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rax

  if ( a3 && *a3 )
  {
    a3[1] = 0;
    qfree();
    *a3 = 0;
    a3[2] = 0;
  }
  if ( *a2 )
  {
    result = 1;
    if ( a1 )
    {
      free_idcv();
      v5 = pyvar_to_idcvar(a2, a1, 0);
      if ( v5 <= 0 && a3 )
      {
        v6 = *a3;
        if ( (unsigned __int64)a3[2] <= 0x17 )
        {
          v8 = qvector_reserve();
          *a3 = v8;
          v6 = v8;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_1D970);
        a3[1] = 24;
        *(__m128i *)v6 = si128;
        *(_QWORD *)(v6 + 15) = 0x65756C6176206E72LL;
        *(_BYTE *)(*a3 + 23) = 0;
        return 0;
      }
      else
      {
        return v5 > 0;
      }
    }
  }
  else
  {
    sub_E310(a3, 1u);
    return 0;
  }
  return result;
}

