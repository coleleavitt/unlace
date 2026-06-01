__int64 __fastcall sub_2329E0(__int64 a1, signed __int64 a2, int a3)
{
  int v4; // r13d
  __int64 v5; // r14
  unsigned __int64 v6; // rbp
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __m128 v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v14; // [rsp+10h] [rbp-48h] BYREF
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 128) <= a2 )
    return 0;
  v4 = a3;
  if ( sub_226FD0(a1, a2, a3) )
  {
    v4 = *(_DWORD *)(a1 + 144) - a2;
    v5 = v4;
  }
  else
  {
    v5 = v4;
    v11 = *(_QWORD *)(a1 + 128);
    if ( v4 + a2 > v11 )
    {
      v4 = v11 - a2;
      v5 = (int)v11 - (int)a2;
    }
  }
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (a2 + *(_QWORD *)(a1 + 1440));
  v13 = 0u;
  v15 = 0;
  v14 = nullptr;
  if ( v6 + v5 - 1 >= v6 )
  {
    v14 = (__int64 *)qvector_reserve((__int64)&v14, 0, 1, 16);
    v12 = &v14[2 * v15];
    *v12 = v6;
    v12[1] = v5;
    *(_QWORD *)&v15 = v15 + 1;
  }
  v7 = sub_64280((__int64 *)(a1 + 832), (__int64 *)&v13, 0.0);
  if ( (unsigned __int8)sub_316CB0((__int64 *)(a1 + 848), &v14, v8, v9) )
  {
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree((__int64)v14);
    }
    qfree(v13.m128_i64[0]);
  }
  else
  {
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree((__int64)v14);
    }
    qfree(v13.m128_i64[0]);
    if ( !v7 )
      return 0;
  }
  v10 = *(__int64 **)(a1 + 816);
  *(_DWORD *)a1 |= 0x8000000u;
  v14 = v10;
  v13 = _mm_loadh_ps((const double *)&v14);
  if ( (unsigned __int8)sub_227740((__int64)&v13, a2, v4, *(double *)v13.m128_u64) )
    sub_2304B0((__int64)&v13, 0xFFFFFFFFFFFFFFFFLL, 0);
  return 1;
}

