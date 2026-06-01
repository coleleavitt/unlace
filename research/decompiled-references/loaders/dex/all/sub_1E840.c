bool __fastcall sub_1E840(__int64 *a1, __int64 a2)
{
  int v3; // edx
  bool result; // al
  unsigned __int64 v5; // rbp
  __m128i *v6; // r14
  __int64 v7; // r12
  __m128i *v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i *v11; // rbp
  __int64 *v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  int i; // edx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // r12
  __int64 *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-68h] BYREF
  __int128 v29; // [rsp+8h] [rbp-60h]
  __int128 v30; // [rsp+18h] [rbp-50h]
  __int128 v31; // [rsp+28h] [rbp-40h]
  unsigned __int64 v32; // [rsp+38h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  v3 = process_zip_linput(a2, sub_1DA60, a1);
  result = 0;
  if ( !v3 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      v6 = (__m128i *)*a1;
      v7 = 56 * v5;
      v8 = (__m128i *)(*a1 + 56 * v5);
      if ( (__m128i *)*a1 == v8 )
        return v5 != 0;
      v9 = 0x6DB6DB6DB6DB6DB7LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        sub_1DFB0(*a1, *a1 + 56 * v5, 2LL * (int)v10);
        if ( v7 > 896 )
        {
          v11 = v6 + 56;
          sub_1D8D0(v6, v6 + 56);
          do
          {
            v12 = (__int64 *)v11;
            v11 = (__m128i *)((char *)v11 + 56);
            sub_1D7C0(v12);
          }
          while ( v8 != v11 );
LABEL_9:
          v5 = a1[1];
          v13 = *a1;
          if ( 56 * v5 )
          {
            v14 = *a1;
            for ( i = 1; *(_DWORD *)(v14 + 52) == i; ++i )
            {
              v14 += 56;
              if ( v14 == *a1 + 56 * v5 )
                return v5 != 0;
            }
            v16 = (unsigned int)(i - 1);
            if ( v16 != v5 )
            {
              v28 = 0;
              v30 = 0;
              v31 = 0;
              v29 = 0;
              if ( v16 < v5 )
              {
                v22 = (unsigned int)(i - 1);
                v23 = 56 * v16;
                while ( 1 )
                {
                  v24 = (__int64 *)(v23 + v13);
                  v25 = *v24;
                  if ( *v24 )
                  {
                    v24[1] = 0;
                    qfree(v25);
                  }
                  ++v22;
                  v23 += 56;
                  if ( v22 >= v5 )
                    break;
                  v13 = *a1;
                }
              }
              else
              {
                v17 = a1[2];
                if ( (unsigned __int64)&v28 < v13 || (unsigned __int64)&v28 >= v13 + 56 * v17 )
                {
                  if ( v17 < v16 )
                  {
                    v26 = qvector_reserve(a1, v13, (unsigned int)(i - 1), 56);
                    v5 = a1[1];
                    *a1 = v26;
                  }
                  if ( v5 < v16 )
                  {
                    v20 = 56 * v5;
                    do
                    {
                      ++v5;
                      v21 = v20 + *a1;
                      v20 += 56;
                      *(_QWORD *)v21 = 0;
                      *(_QWORD *)(v21 + 24) = 0;
                      *(_QWORD *)(v21 + 48) = 0;
                      *(_OWORD *)(v21 + 8) = 0;
                      *(_OWORD *)(v21 + 32) = 0;
                    }
                    while ( v16 != v5 );
                  }
                }
                else
                {
                  if ( v17 < v16 )
                  {
                    v27 = qvector_reserve(a1, v13, (unsigned int)(i - 1), 56);
                    v5 = a1[1];
                    *a1 = v27;
                  }
                  if ( v5 < v16 )
                  {
                    v18 = 56 * v5;
                    do
                    {
                      ++v5;
                      v19 = v18 + *a1;
                      v18 += 56;
                      *(_QWORD *)v19 = 0;
                      *(_QWORD *)(v19 + 24) = 0;
                      *(_QWORD *)(v19 + 48) = 0;
                      *(_OWORD *)(v19 + 8) = 0;
                      *(_OWORD *)(v19 + 32) = 0;
                    }
                    while ( v16 != v5 );
                  }
                }
              }
              a1[1] = v16;
              v5 = v16;
            }
          }
          return v5 != 0;
        }
      }
      else
      {
        sub_1DFB0(*a1, *a1 + 56 * v5, -2);
      }
      sub_1D8D0(v6, v8);
      goto LABEL_9;
    }
  }
  return result;
}
