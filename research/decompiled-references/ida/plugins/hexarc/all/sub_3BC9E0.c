__int64 __fastcall sub_3BC9E0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 v11; // rdi
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  char *v15; // [rsp+0h] [rbp-10h]

  if ( *(_DWORD *)(a2 + 80) != 1 )
    return 0;
  v11 = *(_QWORD *)(a2 + 88);
  if ( *(int *)(v11 + 8) > 69 )
    return 0;
  v12 = sub_24DC40(v11);
  if ( *(_DWORD *)(v12 + 8) != 64 )
    return 0;
  v15 = *(char **)(v12 + 24);
  if ( !sub_3A62D0(nullptr, (__int64)v15, 1) )
    return 0;
  sub_3BC810(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), v15, a3, a4, a5, a6, v13, v14, a9);
  return 1;
}

