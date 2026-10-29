void __fastcall sub_15D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int32 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 *v12; // r11
  __int64 v13; // r14
  __m128i v14; // xmm0
  int v15; // eax
  char v16; // bl
  int v17; // edx
  char v18; // al
  __m128i v19; // xmm3
  __m128i v20; // xmm4
  __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // r14
  __m128i v24; // xmm2
  __int64 v25; // rdi
  __int64 v26; // r14
  __m128i v27; // xmm1
  __m128i v28; // xmm5
  __int64 v29; // rdi
  __m128i v30; // xmm6
  __m128i v31; // [rsp+0h] [rbp-78h] BYREF
  __m128i v32; // [rsp+10h] [rbp-68h] BYREF
  __m128i v33; // [rsp+20h] [rbp-58h] BYREF
  __int64 v34; // [rsp+30h] [rbp-48h]
  __int64 v35; // [rsp+38h] [rbp-40h]

  v35 = a3;
  v31.m128i_i32[0] = a6;
  if ( a4 )
  {
    v8 = a4;
    v9 = a5;
    if ( a5 )
    {
      if ( a4 + a5 == 2 )
      {
LABEL_9:
        v14 = _mm_loadl_epi64((const __m128i *)(a1 + 48));
        v15 = *(_DWORD *)(a2 + 48);
        v16 = *(_BYTE *)(a1 + 56);
        v17 = _mm_cvtsi128_si32(v14);
        if ( v15 == v17 )
        {
          v18 = *(_BYTE *)(a2 + 56);
          if ( v18 == v16 )
          {
            if ( *(_DWORD *)(a2 + 52) >= _mm_cvtsi128_si32(_mm_shuffle_epi32(v14, 229)) )
              return;
          }
          else if ( !v18 )
          {
            return;
          }
        }
        else if ( v15 != v31.m128i_i32[0] && (v17 == v31.m128i_i32[0] || v15 >= v17) )
        {
          return;
        }
        v19 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        v20 = _mm_loadu_si128((const __m128i *)(a1 + 32));
        *(_OWORD *)(a1 + 8) = 0;
        v21 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 24) = 0;
        *(_OWORD *)(a1 + 32) = 0;
        v23 = *(_QWORD *)a2;
        v24 = _mm_loadu_si128((const __m128i *)(a2 + 8));
        *(_QWORD *)a2 = 0;
        *(_OWORD *)(a2 + 8) = 0;
        v25 = *(_QWORD *)a1;
        v32 = v19;
        v31 = v20;
        if ( v25 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          v33 = v24;
          v34 = v14.m128i_i64[0];
          qfree();
          v24 = _mm_load_si128(&v33);
        }
        *(__m128i *)(a1 + 8) = v24;
        *(_QWORD *)a1 = v23;
        v26 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(a2 + 24) = 0;
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 32));
        *(_OWORD *)(a2 + 32) = 0;
        if ( *(_QWORD *)(a1 + 24) )
        {
          *(_QWORD *)(a1 + 32) = 0;
          v33 = v27;
          v34 = v14.m128i_i64[0];
          qfree();
          v27 = _mm_load_si128(&v33);
          v14.m128i_i64[0] = v34;
        }
        *(_QWORD *)(a1 + 24) = v26;
        *(__m128i *)(a1 + 32) = v27;
        *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
        *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
        *(_BYTE *)(a1 + 56) = *(_BYTE *)(a2 + 56);
        if ( *(_QWORD *)a2 )
        {
          *(_QWORD *)(a2 + 8) = 0;
          v34 = v14.m128i_i64[0];
          qfree();
          v14.m128i_i64[0] = v34;
        }
        v28 = _mm_load_si128(&v32);
        v29 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)a2 = v21;
        *(__m128i *)(a2 + 8) = v28;
        if ( v29 )
        {
          *(_QWORD *)(a2 + 32) = 0;
          v32.m128i_i64[0] = v14.m128i_i64[0];
          qfree();
          v14.m128i_i64[0] = v32.m128i_i64[0];
        }
        v30 = _mm_load_si128(&v31);
        *(_QWORD *)(a2 + 24) = v22;
        *(_BYTE *)(a2 + 56) = v16;
        *(__m128i *)(a2 + 32) = v30;
        *(_QWORD *)(a2 + 48) = v14.m128i_i64[0];
      }
      else
      {
        while ( 1 )
        {
          if ( v8 <= v9 )
          {
            v13 = v9 / 2;
            v32.m128i_i64[0] = a2 + ((v9 / 2) << 6);
            v12 = (__int64 *)sub_12C60(a1, a2, v32.m128i_i64[0], v31.m128i_i32[0]);
            v10 = ((__int64)v12 - a1) >> 6;
          }
          else
          {
            v10 = v8 / 2;
            v11 = sub_12CE0(a2, v35, a1 + ((v8 / 2) << 6), v31.m128i_i32[0]);
            v12 = (__int64 *)(a1 + ((v8 / 2) << 6));
            v32.m128i_i64[0] = v11;
            v13 = (v11 - a2) >> 6;
          }
          v34 = (__int64)v12;
          v9 -= v13;
          v33.m128i_i64[0] = sub_15790(v12, a2, v32.m128i_i64[0]);
          sub_15D70(a1, v34, v33.m128i_i64[0], v10, v13, v31.m128i_u32[0]);
          v8 -= v10;
          if ( !v8 || !v9 )
            break;
          a1 = v33.m128i_i64[0];
          a2 = v32.m128i_i64[0];
          if ( v8 + v9 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}

