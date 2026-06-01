unsigned __int64 __fastcall sub_3AF5F0(__int64 a1, __int64 a2, __int64 (__fastcall **a3)(__int64, __int64))
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
  __int64 v14; // rsi
  __m128i v15; // xmm0
  int v16; // eax
  __int64 v17; // rdi
  __int64 j; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdi
  __int64 k; // rdx
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 m; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 n; // rdx
  _QWORD *v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v36; // [rsp+8h] [rbp-C0h]
  __int64 v37; // [rsp+10h] [rbp-B8h]
  __int64 v38; // [rsp+10h] [rbp-B8h]
  __int64 v39; // [rsp+18h] [rbp-B0h]
  __int64 v40; // [rsp+18h] [rbp-B0h]
  __int64 v41; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v42; // [rsp+28h] [rbp-A0h] BYREF
  __m128i i; // [rsp+38h] [rbp-90h] BYREF
  __int64 v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-78h] BYREF
  __m128i v46; // [rsp+58h] [rbp-70h]
  __m128i v47; // [rsp+68h] [rbp-60h]
  __int64 v48; // [rsp+78h] [rbp-50h]
  unsigned __int64 v49; // [rsp+88h] [rbp-40h]

  v3 = a2 - a1;
  v49 = __readfsqword(0x28u);
  if ( v3 > 48 )
  {
    v36 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 4);
    v6 = (v36 - 2) / 2;
    v7 = 16 * (v6 + ((v36 - 2 + ((unsigned __int64)(v36 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL));
    v8 = (const __m128i *)(a1 + v7 + 8);
    v9 = *(_QWORD *)(a1 + v7);
    v41 = v9;
    if ( !v9 )
      goto LABEL_43;
LABEL_3:
    v10 = *(_DWORD *)(v9 + 104);
    v45 = v9;
    *(_DWORD *)(v9 + 104) = v10 + 1;
    v11 = v8[2].m128i_i64[0];
    v42 = _mm_loadu_si128(v8);
    v12 = _mm_loadu_si128(v8 + 1);
    v44 = v11;
    *(_DWORD *)(v9 + 104) = v10 + 2;
    for ( i = v12; ; i = v34 )
    {
      v13 = *a3;
      v14 = v6;
      v46 = _mm_loadu_si128(&v42);
      v15 = _mm_loadu_si128(&i);
      v48 = v44;
      v47 = v15;
      sub_3AEF10(a1, v6, v36, &v45, v13);
      if ( v9 )
      {
        v16 = *(_DWORD *)(v9 + 104) - 1;
        *(_DWORD *)(v9 + 104) = v16;
        if ( v16 )
        {
          if ( !v6 )
            goto LABEL_45;
        }
        else
        {
          sub_2515F0((__int64 *)v9);
          v17 = *(_QWORD *)(v9 + 184);
          if ( v17 )
          {
            v14 = *(_QWORD *)(v9 + 192);
            if ( v14 )
            {
              for ( j = 0; j != v14; ++j )
              {
                v19 = (_QWORD *)(v17 + 24 * j);
                if ( *v19 )
                {
                  v19[1] = 0;
                  v37 = j;
                  qfree();
                  j = v37;
                  v17 = *(_QWORD *)(v9 + 184);
                }
              }
            }
            *(_QWORD *)(v9 + 192) = 0;
            qfree();
          }
          if ( *(_QWORD *)(v9 + 160) )
          {
            *(_QWORD *)(v9 + 168) = 0;
            qfree();
          }
          v20 = *(_QWORD *)(v9 + 128);
          if ( v20 )
          {
            v14 = *(_QWORD *)(v9 + 136);
            if ( v14 )
            {
              for ( k = 0; k != v14; ++k )
              {
                v22 = (_QWORD *)(v20 + 32 * k);
                if ( *v22 )
                {
                  v22[1] = 0;
                  v39 = k;
                  qfree();
                  k = v39;
                  v20 = *(_QWORD *)(v9 + 128);
                }
              }
            }
            *(_QWORD *)(v9 + 136) = 0;
            qfree();
          }
          sub_24DCD0(v9 + 16);
          j__qfree();
          if ( !v6 )
          {
LABEL_45:
            sub_139A80(&v41, v14);
            return v49 - __readfsqword(0x28u);
          }
          v16 = *(_DWORD *)(v9 + 104);
        }
        v23 = v16 - 1;
        *(_DWORD *)(v9 + 104) = v23;
        if ( !v23 )
        {
          sub_2515F0((__int64 *)v9);
          v24 = *(_QWORD *)(v9 + 184);
          if ( v24 )
          {
            v25 = *(_QWORD *)(v9 + 192);
            if ( v25 )
            {
              for ( m = 0; m != v25; ++m )
              {
                v27 = (_QWORD *)(v24 + 24 * m);
                if ( *v27 )
                {
                  v27[1] = 0;
                  v40 = m;
                  qfree();
                  m = v40;
                  v24 = *(_QWORD *)(v9 + 184);
                }
              }
            }
            *(_QWORD *)(v9 + 192) = 0;
            qfree();
          }
          if ( *(_QWORD *)(v9 + 160) )
          {
            *(_QWORD *)(v9 + 168) = 0;
            qfree();
          }
          v28 = *(_QWORD *)(v9 + 128);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v9 + 136);
            if ( v29 )
            {
              for ( n = 0; n != v29; ++n )
              {
                v31 = (_QWORD *)(v28 + 32 * n);
                if ( *v31 )
                {
                  v31[1] = 0;
                  v38 = n;
                  qfree();
                  n = v38;
                  v28 = *(_QWORD *)(v9 + 128);
                }
              }
            }
            *(_QWORD *)(v9 + 136) = 0;
            qfree();
          }
          sub_24DCD0(v9 + 16);
          j__qfree();
        }
      }
      else if ( !v6 )
      {
        goto LABEL_45;
      }
      v9 = v8[-4].m128i_i64[1];
      v8 -= 3;
      --v6;
      v41 = v9;
      if ( v9 )
        goto LABEL_3;
LABEL_43:
      v32 = _mm_loadu_si128(v8);
      v33 = v8[2].m128i_i64[0];
      v45 = 0;
      v42 = v32;
      v34 = _mm_loadu_si128(v8 + 1);
      v44 = v33;
    }
  }
  return v49 - __readfsqword(0x28u);
}

