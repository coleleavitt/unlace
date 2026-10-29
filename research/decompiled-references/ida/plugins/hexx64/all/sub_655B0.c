__int64 __fastcall sub_655B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // dl
  __m128 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  result = 1;
  v13 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a2 + 24);
  if ( (v7 & 0x40000) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 512);
    if ( *(_QWORD *)(a1 + 512) != v8 )
    {
      v9 = v7 & 0x600;
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 1472LL) + 40LL * (int)v8;
      v12 = _mm_loadh_ps((const double *)(v10 + 16));
      if ( (_DWORD)v9 != 512 )
        sub_A7590(a2, 0, v9, v10, a5, a6);
      v11 = sub_317E70((_QWORD *)(a2 + 216), (__m128i *)&v12, 0);
      result = 0;
      if ( !v11 )
        return (unsigned int)sub_317E70((_QWORD *)(a2 + 136), (__m128i *)&v12, 0) ^ 1;
    }
  }
  return result;
}

