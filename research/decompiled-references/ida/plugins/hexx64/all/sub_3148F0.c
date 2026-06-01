__int64 __fastcall sub_3148F0(__m128i *a1, int *a2, double a3, __m128 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rbp
  int v7; // r12d
  __m128i v8; // xmm0
  __int32 v9; // eax
  __m128i *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 *v18; // rcx
  char v19; // [rsp+4h] [rbp-F4h]
  __m128i *v20; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v21; // [rsp+18h] [rbp-E0h]
  __m128i v22; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v23; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v24; // [rsp+40h] [rbp-B8h] BYREF
  _DWORD v25[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+60h] [rbp-98h]
  _DWORD v28[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 *v29; // [rsp+78h] [rbp-80h] BYREF
  __int128 v30; // [rsp+80h] [rbp-78h]
  __m128i v31; // [rsp+90h] [rbp-68h]
  __m128i v32; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v33; // [rsp+B8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( (a1->m128i_i32[0] & 0xF) == 2 )
  {
    v4 = 0;
    if ( (*a2 & 0xF) == 2 )
    {
      v6 = a1[1].m128i_i64[0];
      v7 = a2[1];
      v8.m128i_i64[0] = 0;
      v9 = a1->m128i_i32[1];
      v10 = (__m128i *)a1->m128i_i64[1];
      v23.m128i_i32[0] = 2;
      v25[1] = v7;
      v23.m128i_i32[1] = v9;
      v23.m128i_i64[1] = 0;
      v25[0] = 2;
      v26 = 0;
      v20 = &v10[v6];
      v19 = 8 * v7;
      v24 = 0;
      v27 = 0;
      if ( v10 == v20 )
      {
LABEL_23:
        sub_312B80((__int64)&v23, 0.0);
      }
      else
      {
        do
        {
          v11 = v10->m128i_i64[0];
          v12 = v10->m128i_i64[1];
          v21 = (unsigned __int64)v10->m128i_i64[0] >> v19;
          if ( v21 != (unsigned __int64)(v10->m128i_i64[0] + v12 - 1) >> v19 )
            goto LABEL_22;
          if ( v7 != 8 )
          {
            v13 = (1LL << v19) - 1;
            v11 &= v13;
            v12 = (v13 & (v10->m128i_i64[0] + v12 - 1)) + 1 - v11;
          }
          v22.m128i_i64[0] = v11;
          v22.m128i_i64[1] = v12;
          if ( (unsigned __int8)sub_317E70(&v26, &v22, 0) )
          {
LABEL_22:
            v4 = 0;
            goto LABEL_15;
          }
          sub_3170B0(&v26, &v22, 0.0, a4);
          v8.m128i_i64[0] = 0;
          v28[1] = v7;
          v28[0] = 2;
          v29 = nullptr;
          v30 = 0;
          sub_3170B0((__int64 *)&v29, &v22, 0.0, a4);
          if ( (unsigned __int8)sub_3147B0((__int64)v28, a2, 0.0) )
          {
            if ( v28[0] )
            {
              v16 = v21 << v19;
              v17 = v29;
              v18 = &v29[2 * v30];
              if ( v18 != v29 )
              {
                if ( ((16 * (_BYTE)v30) & 0x10) == 0 || (v17 = v29 + 2, *v29 += v16, v18 != v17) )
                {
                  do
                  {
                    *v17 += v16;
                    v17[2] += v16;
                    v17 += 4;
                  }
                  while ( v18 != v17 );
                }
              }
              sub_316CB0(&v23.m128i_i64[1], &v29, v16, (__int64)v18);
            }
          }
          else
          {
            sub_3170B0(&v23.m128i_i64[1], v10, 0.0, a4);
          }
          ++v10;
          sub_312B80((__int64)v28, 0.0);
        }
        while ( v20 != v10 );
        if ( !v24.m128i_i64[0] )
          goto LABEL_23;
      }
      v14 = _mm_loadu_si128(a1);
      v4 = 1;
      v8 = _mm_loadu_si128(a1 + 1);
      *a1 = _mm_load_si128(&v23);
      v15 = _mm_load_si128(&v24);
      v31 = v14;
      v32 = v8;
      a1[1] = v15;
      v23 = v14;
      v24 = v8;
LABEL_15:
      sub_312B80((__int64)v25, *(double *)v8.m128i_i64);
      sub_312B80((__int64)&v23, *(double *)v8.m128i_i64);
    }
  }
  else
  {
    return 0;
  }
  return v4;
}

