__int64 __fastcall sub_4C840(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // r13
  __int64 v7; // rsi
  signed __int64 v8; // rbx
  __int64 v9; // r14
  signed __int64 v10; // rbx
  __int64 v11; // rbp
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  signed __int64 v14; // r12
  __int64 v15; // rsi
  char *v16; // rcx
  char *v17; // r8
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v22; // [rsp+0h] [rbp-78h]
  __int64 v23; // [rsp+8h] [rbp-70h]
  char *v24; // [rsp+10h] [rbp-68h]
  __int64 *v25; // [rsp+18h] [rbp-60h]
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 *v27; // [rsp+28h] [rbp-50h]

  v3 = 32 * a3;
  *(_QWORD *)(a1 + 16) = 0;
  v27 = &a2[4 * a3];
  v25 = a2;
  *(_OWORD *)a1 = 0;
  if ( (unsigned __int64)(32 * a3) > 0x7FFFFFFFFFFFFFE0LL )
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  if ( v3 )
  {
    v4 = operator new(32 * a3);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 16) = v4 + v3;
    if ( v27 == a2 )
    {
      v23 = v4;
    }
    else
    {
      v23 = v4;
      do
      {
        v5 = *v25;
        *(_QWORD *)(v23 + 24) = 0;
        *(_OWORD *)(v23 + 8) = 0;
        *(_QWORD *)v23 = v5;
        v6 = (char *)v25[1];
        v24 = (char *)v25[2];
        v7 = v24 - v6;
        v8 = v24 - v6;
        if ( v24 == v6 )
        {
          v26 = 0;
        }
        else
        {
          if ( (unsigned __int64)v7 > 0x7FFFFFFFFFFFFFE0LL )
          {
            if ( v7 < 0 )
              sub_1A9B7();
            std::__throw_bad_alloc();
          }
          v26 = operator new(v24 - v6);
          v6 = (char *)v25[1];
          v24 = (char *)v25[2];
        }
        v9 = v26;
        *(_QWORD *)(v23 + 24) = v26 + v8;
        *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
        if ( v6 == v24 )
        {
          v9 = v26;
        }
        else
        {
          do
          {
            *(_QWORD *)v9 = *(_QWORD *)v6;
            v10 = *((_QWORD *)v6 + 2) - *((_QWORD *)v6 + 1);
            *(_QWORD *)(v9 + 24) = 0;
            *(_OWORD *)(v9 + 8) = 0;
            if ( v10 )
            {
              if ( (unsigned __int64)v10 > 0x7FFFFFFFFFFFFFE0LL )
              {
                if ( v10 < 0 )
                  sub_1A9B7();
                std::__throw_bad_alloc();
              }
              v22 = operator new(v10);
            }
            else
            {
              v22 = 0;
            }
            v11 = v22;
            *(_QWORD *)(v9 + 24) = v22 + v10;
            *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
            v12 = *((_QWORD **)v6 + 2);
            v13 = *((_QWORD **)v6 + 1);
            if ( v12 == v13 )
            {
              v11 = v22;
            }
            else
            {
              do
              {
                *(_QWORD *)v11 = *v13;
                v14 = v13[2] - v13[1];
                *(_QWORD *)(v11 + 24) = 0;
                *(_OWORD *)(v11 + 8) = 0;
                if ( v14 )
                {
                  if ( (unsigned __int64)v14 > 0x7FFFFFFFFFFFFFF8LL )
                  {
                    if ( v14 < 0 )
                      sub_1A9B7();
                    std::__throw_bad_alloc();
                  }
                  v15 = operator new(v14);
                }
                else
                {
                  v15 = 0;
                }
                *(_QWORD *)(v11 + 24) = v15 + v14;
                *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(
                                          (__m128i)(unsigned __int64)v15,
                                          (__m128i)(unsigned __int64)v15);
                v16 = (char *)v13[2];
                v17 = (char *)v13[1];
                if ( v16 != v17 )
                {
                  v18 = (char *)v13[1];
                  v19 = v15;
                  do
                  {
                    v20 = *(_QWORD *)v18;
                    v18 += 12;
                    v19 += 12;
                    *(_QWORD *)(v19 - 12) = v20;
                    *(_DWORD *)(v19 - 4) = *((_DWORD *)v18 - 1);
                  }
                  while ( v16 != v18 );
                  v15 += 4
                       * (3
                        * ((0x2AAAAAAAAAAAAAABLL * ((unsigned __int64)(v16 - 12 - v17) >> 2)) & 0x3FFFFFFFFFFFFFFFLL)
                        + 3);
                }
                v13 += 4;
                *(_QWORD *)(v11 + 16) = v15;
                v11 += 32;
              }
              while ( v12 != v13 );
            }
            *(_QWORD *)(v9 + 16) = v11;
            v6 += 32;
            v9 += 32;
          }
          while ( v24 != v6 );
        }
        v25 += 4;
        *(_QWORD *)(v23 + 16) = v9;
        v23 += 32;
      }
      while ( v27 != v25 );
    }
  }
  else
  {
    v23 = 0;
  }
  *(_QWORD *)(a1 + 8) = v23;
  return a1;
}

