unsigned __int64 __fastcall sub_3B6EF0(__int64 a1, __int64 a2, __int64 (__fastcall **a3)(__int64, __int64))
{
  __int64 v3; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  const __m128i *v8; // r12
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __int64 (__fastcall *v13)(__int64, __int64); // r8
  __m128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 j; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 k; // rdx
  __int64 *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 m; // rax
  __int64 *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 n; // rdx
  __int64 *v37; // rax
  __int64 v38; // rcx
  __m128i v39; // xmm0
  __int64 v40; // rax
  __m128i v41; // xmm0
  __int64 v43; // [rsp+8h] [rbp-C0h]
  __int64 v44; // [rsp+10h] [rbp-B8h]
  __int64 v45; // [rsp+10h] [rbp-B8h]
  __int64 v46; // [rsp+18h] [rbp-B0h]
  __int64 v47; // [rsp+18h] [rbp-B0h]
  __int64 *v48; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v49; // [rsp+28h] [rbp-A0h] BYREF
  __m128i i; // [rsp+38h] [rbp-90h] BYREF
  __int64 v51; // [rsp+48h] [rbp-80h]
  __int64 v52; // [rsp+50h] [rbp-78h] BYREF
  __m128i v53; // [rsp+58h] [rbp-70h]
  __m128 v54; // [rsp+68h] [rbp-60h]
  __int64 v55; // [rsp+78h] [rbp-50h]
  unsigned __int64 v56; // [rsp+88h] [rbp-40h]

  v3 = a2 - a1;
  v56 = __readfsqword(0x28u);
  if ( v3 > 48 )
  {
    v43 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 4);
    v6 = (v43 - 2) / 2;
    v7 = 16 * (v6 + ((v43 - 2 + ((unsigned __int64)(v43 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL));
    v8 = (const __m128i *)(a1 + v7 + 8);
    v9 = *(_QWORD *)(a1 + v7);
    v48 = (__int64 *)v9;
    if ( !v9 )
      goto LABEL_43;
LABEL_3:
    v10 = *(_DWORD *)(v9 + 104);
    v52 = v9;
    *(_DWORD *)(v9 + 104) = v10 + 1;
    v11 = v8[2].m128i_i64[0];
    v49 = _mm_loadu_si128(v8);
    v12 = _mm_loadu_si128(v8 + 1);
    v51 = v11;
    *(_DWORD *)(v9 + 104) = v10 + 2;
    for ( i = v12; ; i = v41 )
    {
      v13 = *a3;
      v53 = _mm_loadu_si128(&v49);
      v14 = (__m128)_mm_loadu_si128(&i);
      v55 = v51;
      v54 = v14;
      sub_3B6810(a1, v6, v43, &v52, v13, v14);
      if ( v9 )
      {
        v15 = *(_DWORD *)(v9 + 104) - 1;
        *(_DWORD *)(v9 + 104) = v15;
        if ( v15 )
        {
          if ( !v6 )
            goto LABEL_45;
        }
        else
        {
          sub_258970((__int64 *)v9);
          v16 = *(_QWORD *)(v9 + 184);
          if ( v16 )
          {
            v17 = *(_QWORD *)(v9 + 192);
            if ( v17 )
            {
              for ( j = 0; j != v17; ++j )
              {
                v19 = (__int64 *)(v16 + 24 * j);
                v20 = *v19;
                if ( *v19 )
                {
                  v19[1] = 0;
                  v44 = j;
                  qfree(v20);
                  j = v44;
                  v16 = *(_QWORD *)(v9 + 184);
                }
              }
            }
            *(_QWORD *)(v9 + 192) = 0;
            qfree(v16);
          }
          v21 = *(_QWORD *)(v9 + 160);
          if ( v21 )
          {
            *(_QWORD *)(v9 + 168) = 0;
            qfree(v21);
          }
          v22 = *(_QWORD *)(v9 + 128);
          if ( v22 )
          {
            v23 = *(_QWORD *)(v9 + 136);
            if ( v23 )
            {
              for ( k = 0; k != v23; ++k )
              {
                v25 = (__int64 *)(v22 + 32 * k);
                v26 = *v25;
                if ( *v25 )
                {
                  v25[1] = 0;
                  v46 = k;
                  qfree(v26);
                  k = v46;
                  v22 = *(_QWORD *)(v9 + 128);
                }
              }
            }
            *(_QWORD *)(v9 + 136) = 0;
            qfree(v22);
          }
          sub_255050(v9 + 16, *(double *)v14.m128_u64);
          j__qfree(v9);
          if ( !v6 )
          {
LABEL_45:
            sub_140140(&v48);
            return v56 - __readfsqword(0x28u);
          }
          v15 = *(_DWORD *)(v9 + 104);
        }
        v27 = v15 - 1;
        *(_DWORD *)(v9 + 104) = v27;
        if ( !v27 )
        {
          sub_258970((__int64 *)v9);
          v28 = *(_QWORD *)(v9 + 184);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v9 + 192);
            if ( v29 )
            {
              for ( m = 0; m != v29; ++m )
              {
                v31 = (__int64 *)(v28 + 24 * m);
                v32 = *v31;
                if ( *v31 )
                {
                  v31[1] = 0;
                  v47 = m;
                  qfree(v32);
                  m = v47;
                  v28 = *(_QWORD *)(v9 + 184);
                }
              }
            }
            *(_QWORD *)(v9 + 192) = 0;
            qfree(v28);
          }
          v33 = *(_QWORD *)(v9 + 160);
          if ( v33 )
          {
            *(_QWORD *)(v9 + 168) = 0;
            qfree(v33);
          }
          v34 = *(_QWORD *)(v9 + 128);
          if ( v34 )
          {
            v35 = *(_QWORD *)(v9 + 136);
            if ( v35 )
            {
              for ( n = 0; n != v35; ++n )
              {
                v37 = (__int64 *)(v34 + 32 * n);
                v38 = *v37;
                if ( *v37 )
                {
                  v37[1] = 0;
                  v45 = n;
                  qfree(v38);
                  n = v45;
                  v34 = *(_QWORD *)(v9 + 128);
                }
              }
            }
            *(_QWORD *)(v9 + 136) = 0;
            qfree(v34);
          }
          sub_255050(v9 + 16, *(double *)v14.m128_u64);
          j__qfree(v9);
        }
      }
      else if ( !v6 )
      {
        goto LABEL_45;
      }
      v9 = v8[-4].m128i_i64[1];
      v8 -= 3;
      --v6;
      v48 = (__int64 *)v9;
      if ( v9 )
        goto LABEL_3;
LABEL_43:
      v39 = _mm_loadu_si128(v8);
      v40 = v8[2].m128i_i64[0];
      v52 = 0;
      v49 = v39;
      v41 = _mm_loadu_si128(v8 + 1);
      v51 = v40;
    }
  }
  return v56 - __readfsqword(0x28u);
}

