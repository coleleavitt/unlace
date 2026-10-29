__int64 __fastcall sub_2BF520(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  char v7; // al
  unsigned int v8; // edx
  int v10; // eax
  unsigned __int64 v11; // r14
  int *v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int64 v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rsi
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __int64 v30; // [rsp+0h] [rbp-68h]
  __int64 v31; // [rsp+8h] [rbp-60h]
  unsigned int v32; // [rsp+14h] [rbp-54h]
  __int64 v33; // [rsp+18h] [rbp-50h]
  __int64 v35; // [rsp+28h] [rbp-40h]

  v7 = is_cvt64();
  v8 = 0;
  if ( *(_QWORD *)(a3 + 8) - *(_QWORD *)a3 >= (unsigned __int64)(v7 == 0 ? 4 : 0) + 5 )
  {
    v10 = unpack_dd();
    if ( !v10 )
    {
      if ( !under_debugger )
        sub_37CFE0(51188);
      BUG();
    }
    v11 = 0;
    sub_E5FF0(a2, v10);
    if ( a2[1] )
    {
      do
      {
        while ( 1 )
        {
          v12 = (int *)(*a2 + 80 * v11);
          sub_2ADA20((__int64)v12, (const void **)a3, *(_QWORD *)(a3 + 8));
          v13 = unpack_dd();
          v14 = 0;
          v32 = v13;
          if ( a4 )
          {
            v15 = a4[1];
            v16 = a4[2];
            if ( v16 < v15 + 1 )
            {
              v17 = qvector_reserve();
              v18 = a4[2];
              v19 = a4[1];
              a4[2] = v16;
              v33 = v17;
              v20 = *a4;
              v35 = v18;
              v21 = v19 - 1;
              if ( v21 >= 0 )
              {
                v22 = v17;
                v23 = 0;
                do
                {
                  v24 = *(_QWORD *)v20;
                  v25 = _mm_loadu_si128((const __m128i *)(v20 + 8));
                  *(_QWORD *)v20 = 0;
                  *(_OWORD *)(v20 + 8) = v23;
                  *(_QWORD *)v22 = v24;
                  *(__m128i *)(v22 + 8) = v25;
                  v26 = *(_QWORD *)(v20 + 24);
                  v27 = _mm_loadu_si128((const __m128i *)(v20 + 32));
                  *(_QWORD *)(v20 + 24) = 0;
                  *(_QWORD *)(v22 + 24) = v26;
                  *(__m128i *)(v22 + 32) = v27;
                  v28 = *(_QWORD *)v20;
                  *(_QWORD *)(v20 + 40) = 0;
                  if ( v28 )
                  {
                    *(_QWORD *)(v20 + 8) = 0;
                    v31 = v21;
                    v30 = v22;
                    qfree();
                    v21 = v31;
                    v22 = v30;
                    v23 = 0;
                  }
                  v20 += 48;
                  v22 += 48;
                }
                while ( v21-- != 0 );
              }
              qfree();
              *a4 = v33;
              a4[2] = v35;
              v15 = a4[1];
            }
            else
            {
              v33 = *a4;
            }
            v14 = 48 * v15 + v33;
            *(_QWORD *)v14 = 0;
            *(_QWORD *)(v14 + 24) = 0;
            *(_OWORD *)(v14 + 8) = 0;
            *(_OWORD *)(v14 + 32) = 0;
            ++a4[1];
          }
          if ( !(unsigned __int8)sub_2B1B70((const void **)a3, *(_QWORD *)(a3 + 8), (__int64)(v12 + 16), v14) )
            break;
          if ( ++v11 >= a2[1] )
            return 1;
        }
        ++v11;
        sub_2B25F0(a1, (__int64)(v12 + 16), v12, v32);
      }
      while ( v11 < a2[1] );
    }
    return 1;
  }
  return v8;
}

