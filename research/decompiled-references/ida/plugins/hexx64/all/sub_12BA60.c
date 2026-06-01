__int64 __fastcall sub_12BA60(__int64 a1, unsigned int **a2, unsigned __int8 *a3, __m128i a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( a2 != (unsigned int **)a3 )
  {
    sub_11CDA0((__int64)a2);
    sub_123A40((__int64)a2, a3, v5, v6);
  }
  return sub_12AB50(a2, *(unsigned __int64 **)(a1 + 8), *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20), a4);
}

