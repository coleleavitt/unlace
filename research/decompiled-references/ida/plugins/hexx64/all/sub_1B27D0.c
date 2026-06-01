unsigned __int64 __fastcall sub_1B27D0(unsigned __int64 a1, __int64 *a2, unsigned int a3)
{
  __m128 v5; // xmm0
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-60h]
  __m128 v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+20h] [rbp-48h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  v5 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
  v13 = v5;
  sub_1AE7F0(a2, (__int64)&v13, a1 + 24, (const char **)(a1 + 32));
  v6 = a2[1];
  if ( !v6 )
  {
    v9 = *a2;
    v8 = 1;
    v7 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_3;
LABEL_5:
    v12 = v8;
    v11 = qvector_reserve((__int64)a2, v9, v7, 1);
    v8 = v12;
    *a2 = v11;
    v9 = v11;
    goto LABEL_3;
  }
  v7 = v6 + 1;
  v8 = a2[1];
  v9 = *a2;
  --v6;
  if ( a2[2] < v7 )
    goto LABEL_5;
LABEL_3:
  a2[1] = v7;
  *(_BYTE *)(v9 + v6) = 32;
  *(_BYTE *)(*a2 + v8) = 0;
  sub_1B0D60(a1, (char *)a2, (__int64)&v13, a3, *(double *)v5.m128_u64);
  return v15 - __readfsqword(0x28u);
}

