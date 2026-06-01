unsigned __int64 __fastcall sub_81710(__int64 a1)
{
  unsigned __int64 result; // rax
  void *v2; // rdx
  void *v3; // rcx
  __int64 v4; // rsi

  result = *(_QWORD *)(a1 + 8);
  v2 = *(void **)a1;
  if ( result > 1 )
  {
    v3 = qword_D08F0;
    v4 = *(&n + 1);
    qword_D08F0 = *(void **)a1;
    *(__m128 *)&n = _mm_loadh_ps((const double *)(a1 + 16));
    v2 = v3;
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 16) = v4;
  }
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    return qfree(v2);
  }
  return result;
}

