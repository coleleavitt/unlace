__int64 __fastcall sub_3B2DE0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v13; // rsi
  const char *v14; // rbp
  __int64 v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int v18; // [rsp+Ch] [rbp-3Ch]
  const char *v19; // [rsp+10h] [rbp-38h] BYREF
  __int128 v20; // [rsp+18h] [rbp-30h]
  unsigned __int64 v21; // [rsp+28h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a10 + 80) != 1 )
    return 0;
  v11 = *(_QWORD *)(a10 + 88);
  if ( *(int *)(v11 + 8) <= 69 )
  {
    v13 = *(_QWORD *)(a10 + 32);
    v19 = nullptr;
    v20 = 0;
    if ( (unsigned __int8)sub_20A6F0((__int64 *)&v19, v13, v11) )
    {
      v14 = v19;
      v15 = sub_385E20(a10 + 80);
      LOBYTE(result) = sub_38FDF0(a10, v15, v14, 1u, (__m128)0LL, a2, a3, a4, v16, v17, a7, a8);
    }
    else
    {
      LOBYTE(result) = sub_20A510(*(_QWORD *)(a10 + 32), *(_QWORD *)(a10 + 88));
    }
    result = (unsigned __int8)result;
    if ( v19 )
    {
      v18 = (unsigned __int8)result;
      *(_QWORD *)&v20 = 0;
      qfree();
      return v18;
    }
  }
  return result;
}

