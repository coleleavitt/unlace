__int64 __fastcall sub_232010(double *a1, __int64 a2)
{
  bool v2; // zf
  int v3; // ebp
  unsigned __int64 v4; // r12
  __m128 v6; // [rsp+0h] [rbp-38h] BYREF
  double v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *(_DWORD *)a2 == 1;
  *(_QWORD *)&v7[1] = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a2 + 88);
  if ( v2 )
    v4 = *(_QWORD *)(a2 + 8);
  else
    v4 = -1;
  v7[0] = *a1;
  v6 = _mm_loadh_ps(v7);
  sub_227740((__int64)&v6, v4, v3, *(double *)v6.m128_u64);
  return sub_2304B0((__int64)&v6, v4, v3);
}

