_QWORD *__fastcall sub_1D770(_QWORD *a1, const __m128i *a2, const __m128i *a3, double a4, __m128 a5, __m128 a6)
{
  __m128 v6; // xmm0
  volatile signed __int32 *v7; // xmm1_8
  __m128 v8; // xmm0
  volatile signed __int32 *v9; // xmm2_8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  signed __int32 v13; // eax
  volatile signed __int32 *v14; // rdx
  signed __int32 v15; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // [rsp+0h] [rbp-58h] BYREF
  __m128i v20; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v6 = (__m128)_mm_loadu_si128(a3);
  v21 = __readfsqword(0x28u);
  v7 = (volatile signed __int32 *)_mm_movehl_ps(a5, v6).m128_u64[0];
  v20 = (__m128i)v6;
  if ( v7 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v7 + 2, 1u);
    else
      ++*((_DWORD *)v7 + 2);
  }
  v8 = (__m128)_mm_loadu_si128(a2);
  v9 = (volatile signed __int32 *)_mm_movehl_ps(a6, v8).m128_u64[0];
  v19 = (__m128i)v8;
  if ( v9 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v9 + 2, 1u);
    else
      ++*((_DWORD *)v9 + 2);
    sub_1CEE0(a1, 19, &v19, &v20);
    if ( *((_QWORD *)v9 + 1) == 0x100000001LL )
    {
      v18 = *(_QWORD *)v9;
      *((_QWORD *)v9 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(v18 + 16))(
        v9,
        19,
        0x100000001LL,
        v10,
        v11,
        v12,
        v19.m128i_i64[0],
        v19.m128i_i64[1],
        v20.m128i_i64[0],
        v20.m128i_i64[1]);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 24LL))(v9);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v13 = _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF);
      }
      else
      {
        v13 = *((_DWORD *)v9 + 2);
        *((_DWORD *)v9 + 2) = v13 - 1;
      }
      if ( v13 == 1 )
        sub_1C3E0(v9);
    }
  }
  else
  {
    sub_1CEE0(a1, 19, &v19, &v20);
  }
  if ( v7 )
  {
    v14 = v7 + 2;
    if ( *((_QWORD *)v7 + 1) == 0x100000001LL )
    {
      v17 = *(_QWORD *)v7;
      *((_QWORD *)v7 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v17 + 16))(v7, 19, v14);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 24LL))(v7);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v15 = _InterlockedExchangeAdd(v14, 0xFFFFFFFF);
      }
      else
      {
        v15 = *((_DWORD *)v7 + 2);
        *((_DWORD *)v7 + 2) = v15 - 1;
      }
      if ( v15 == 1 )
        sub_1C3E0(v7);
    }
  }
  return a1;
}

