__int64 __fastcall sub_E5B60(__int64 **a1, __m128i *a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx
  int v6; // edx
  int v7; // esi
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // r12
  __int64 v13; // r13
  __int64 *v14; // rax
  __m128i *v15; // rbp
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int128 v19; // [rsp+0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+10h] [rbp-48h] BYREF
  int v21; // [rsp+18h] [rbp-40h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v2 = a2[5].m128i_i64[0];
  v22 = __readfsqword(0x28u);
  result = 0;
  if ( v2 )
  {
    v4 = a2[4].m128i_i64[1];
    if ( v4 )
    {
      if ( a2 )
      {
        if ( a2->m128i_i8[0] == -121 || a2->m128i_i8[0] == -118 )
        {
          while ( *(_BYTE *)v2 == 0x87 || *(_BYTE *)v2 == 0x8A )
          {
            v2 = *(_QWORD *)(v2 + 80);
            if ( !v2 )
              return 0;
          }
        }
        result = 0;
        if ( !*(_WORD *)(v4 + 28) )
        {
          v6 = *(_DWORD *)v4;
          v7 = *(_DWORD *)v4 - 1;
          if ( v7 >= 0 )
          {
            v8 = v4 + 8;
            if ( (*(_BYTE *)(*(_QWORD *)(v8 + 24LL * v7) + 5LL) & 1) != 0 )
            {
LABEL_18:
              v12 = *a1;
              v13 = **a1;
              v14 = sub_DC1C0(v13, 0x80u);
              v15 = (__m128i *)v14;
              if ( v14
                && (v19 = 0,
                    (v16 = sub_E5910((__int64)v12, nullptr, 0, nullptr, (__int64)&v19, (__int64)v14, nullptr)) != nullptr) )
              {
                *v15 = _mm_loadu_si128(a2);
                v20 = 0;
                v21 = 0;
                v15[1] = _mm_loadu_si128(a2 + 1);
                v15[2] = _mm_loadu_si128(a2 + 2);
                v15[3] = _mm_loadu_si128(a2 + 3);
                v15[4] = _mm_loadu_si128(a2 + 4);
                v15[5] = _mm_loadu_si128(a2 + 5);
                v15[6] = _mm_loadu_si128(a2 + 6);
                v15[7] = _mm_loadu_si128(a2 + 7);
                a2[2].m128i_i64[1] = (__int64)v16;
                v17 = sub_DEC00(v13, 180, (__int64)&v20, 0);
                v18 = sub_DEBF0(v12, (__int64)v17);
                a2->m128i_i8[0] = -118;
                a2[2].m128i_i64[0] = (__int64)v18;
                a2[3].m128i_i64[0] = 0;
                v15[3].m128i_i64[1] = 0;
                v15[4].m128i_i64[0] = 0;
                v15[4].m128i_i64[1] = 0;
                LODWORD(v18) = a2->m128i_i32[1];
                a2[5].m128i_i64[0] = 0;
                a2[5].m128i_i64[1] = 0;
                a2[6].m128i_i64[1] = 0;
                a2[7].m128i_i64[1] = 0;
                BYTE1(v18) &= ~1u;
                a2->m128i_i32[1] = (unsigned int)v18 | 0x10000;
                *(_QWORD *)(v15[5].m128i_i64[0] + 88) = v15;
                v15[6].m128i_i64[0] = 0;
                return 0;
              }
              else
              {
                return 2;
              }
            }
            else
            {
              v9 = (__int64 *)(v8 + 24LL * (v6 - 2));
              v10 = &v9[-3 * (unsigned int)v7];
              while ( v9 != v10 )
              {
                v11 = *v9;
                v9 -= 3;
                if ( (*(_BYTE *)(v11 + 5) & 1) != 0 )
                  goto LABEL_18;
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}
