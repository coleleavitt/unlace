__int64 __fastcall sub_821C0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 80) )
  {
    *(_DWORD *)(a3 + 16) = 0;
    *(_OWORD *)a3 = 0;
    return 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 72);
    *(__m128i *)a3 = _mm_loadu_si128((const __m128i *)(v3 + 20LL * a2));
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(v3 + 20LL * a2 + 16);
    return 1;
  }
}

