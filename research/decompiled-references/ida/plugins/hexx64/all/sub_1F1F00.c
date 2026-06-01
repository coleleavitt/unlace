__int64 __fastcall sub_1F1F00(_QWORD *a1, double a2, __m128 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 result; // rax

  v4 = a1[7];
  v5 = v4 + 96LL * a1[8];
  while ( v5 != v4 )
  {
    v6 = v4;
    v4 += 96;
    sub_1F19E0(v6, *(_QWORD *)(*a1 + 64LL), a2, a3);
  }
  result = *(_QWORD *)(*a1 + 48LL);
  a1[1] = result;
  return result;
}

