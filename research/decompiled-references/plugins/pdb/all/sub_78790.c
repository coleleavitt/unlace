__int64 __fastcall sub_78790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v7; // rsi
  __m128i si128; // xmm0
  __int64 v9; // r12
  const char *errdesc; // rax
  const char *v12; // rbx
  size_t v13; // rax
  size_t v14; // r13
  __int64 v15; // rax
  void *v16; // rdi
  size_t v17; // r14
  __int64 v18; // rax

  v5 = a4 * a3;
  if ( !(a4 * a3) )
    return 0;
  if ( (unsigned __int8)callui(27) )
  {
    if ( a5 )
    {
      v7 = *a5;
      if ( (unsigned __int64)a5[2] <= 0x15 )
      {
        v15 = qvector_reserve(a5, v7, 22, 1);
        *a5 = v15;
        v7 = v15;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_942F0);
      a5[1] = 22;
      *(__m128i *)v7 = si128;
      *(_QWORD *)(v7 + 13) = 0x7265737520656874LL;
      *(_BYTE *)(*a5 + 21) = 0;
    }
    return 0;
  }
  v9 = qfwrite(*(_QWORD *)(a1 + 8), a2, v5);
  if ( v9 != v5 && a5 )
  {
    errdesc = (const char *)get_errdesc("PDB", 0xFFFFFFFFLL);
    v12 = errdesc;
    if ( errdesc && (v13 = strlen(errdesc), (v14 = v13) != 0) )
    {
      v16 = (void *)*a5;
      v17 = v13 + 1;
      if ( a5[2] < v13 + 1 )
      {
        v18 = qvector_reserve(a5, *a5, v13 + 1, 1);
        *a5 = v18;
        v16 = (void *)v18;
      }
      a5[1] = v17;
      memmove(v16, v12, v14);
      *(_BYTE *)(*a5 + v14) = 0;
    }
    else
    {
      a5[1] = 0;
    }
  }
  return v9;
}
