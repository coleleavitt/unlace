unsigned __int64 __fastcall sub_701A0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebp
  int v9; // r14d
  unsigned int v10; // eax
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  __m128i v15; // xmm1
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // xmm0_8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  int i; // [rsp+4h] [rbp-54h]
  unsigned __int64 v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v5 = *a3;
  v26 = __readfsqword(0x28u);
  if ( v5 )
  {
    a3[1] = 0;
    qfree(v5);
    *a3 = 0;
    a3[2] = 0;
  }
  v7 = 0;
  for ( i = 0; (unsigned __int64)i < a2[1]; v7 = i )
  {
    v8 = *(_DWORD *)(*a2 + 4 * v7);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, v8) - 1;
    if ( v9 >= 0 )
    {
      do
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, v8, (unsigned int)v9);
        v11 = (_DWORD *)*a2;
        v12 = *a2 + 4LL * a2[1];
        if ( *a2 == v12 )
          goto LABEL_13;
        while ( v10 != *v11 )
        {
          if ( (_DWORD *)v12 == ++v11 )
            goto LABEL_13;
        }
        if ( v11 == (_DWORD *)v12 )
        {
LABEL_13:
          v15 = _mm_cvtsi32_si128(v10);
          v16 = a3[1];
          v17 = *a3;
          v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), v15).m128i_u64[0];
          v19 = a3[2];
          v25 = v18;
          v20 = v16 + 1;
          if ( (unsigned __int64)&v25 < v17 || (unsigned __int64)&v25 >= v17 + 8 * v19 )
          {
            if ( v19 < v20 )
            {
              v21 = qvector_reserve((__int64)a3, v17, v16 + 1, 8);
              *a3 = v21;
              v17 = v21;
              v16 = a3[1];
            }
            *(_QWORD *)(v17 + 8 * v16) = v25;
          }
          else
          {
            if ( v19 < v20 )
            {
              v24 = v18;
              v22 = qvector_reserve((__int64)a3, v17, v16 + 1, 8);
              v18 = v24;
              *a3 = v22;
              v17 = v22;
              v16 = a3[1];
            }
            *(_QWORD *)(v17 + 8 * v16) = v18;
          }
          ++a3[1];
        }
      }
      while ( v9-- != 0 );
    }
    ++i;
  }
  return v26 - __readfsqword(0x28u);
}

