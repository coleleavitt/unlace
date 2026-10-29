unsigned __int64 __fastcall sub_3D4B40(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r13
  _QWORD **v7; // rbx
  __int64 v8; // r12
  _QWORD *v9; // r14
  _DWORD *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  size_t v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rsi
  void *v19; // rax
  const void *v20; // rsi
  _QWORD *v21; // rax
  size_t v22; // r10
  __int64 v23; // rsi
  __int64 v24; // rax
  size_t *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rax
  size_t *v28; // r11
  size_t v29; // r10
  __int64 v30; // rsi
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __m128i v38; // [rsp+0h] [rbp-A8h] BYREF
  size_t n; // [rsp+10h] [rbp-98h]
  size_t *v40; // [rsp+18h] [rbp-90h]
  size_t *v41; // [rsp+20h] [rbp-88h]
  __int64 v42; // [rsp+28h] [rbp-80h]
  __m128i v43; // [rsp+30h] [rbp-78h] BYREF
  __int64 v44; // [rsp+40h] [rbp-68h]
  size_t *v45; // [rsp+48h] [rbp-60h]
  __int128 v46; // [rsp+50h] [rbp-58h]
  __int64 v47; // [rsp+60h] [rbp-48h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    if ( (unsigned int)(*(_DWORD *)(v3 + 60) - 1) <= 1 )
    {
      v4 = *(_QWORD *)(a1 + 88);
      if ( v4 )
      {
        v38.m128i_i64[1] = *(_QWORD *)(v4 + 56);
        if ( v38.m128i_i64[1] != -1 )
        {
          v5 = *(_QWORD *)(a3 + 8);
          v42 = v5 + 24LL * *(_QWORD *)(a3 + 16);
          if ( v5 != v42 )
          {
            while ( 1 )
            {
              v7 = *(_QWORD ***)v5;
              v8 = *(_QWORD *)v5 + 8LL * *(_QWORD *)(v5 + 8);
              if ( v8 != *(_QWORD *)v5 )
                break;
LABEL_23:
              v5 += 24;
              if ( v42 == v5 )
                return v48 - __readfsqword(0x28u);
            }
            while ( 1 )
            {
              v9 = *v7;
              v10 = (_DWORD *)**v7;
              v11 = (int)v10[5];
              if ( *(_DWORD *)(v3 + 72) == v10[4]
                && (v11 & 0x80000000) == 0LL
                && *(_DWORD *)(*(_QWORD *)(v3 + 64) + 64LL) > (int)v11 )
              {
                v12 = (int)v10[6];
                if ( v11 < *(_QWORD *)(v3 + 120) && (v12 & 0x80000000) == 0LL )
                {
                  v13 = (_QWORD *)(*(_QWORD *)(v3 + 112) + 24 * v11);
                  if ( v12 < v13[1] )
                  {
                    v14 = *(_QWORD *)(*v13 + 8 * v12);
                    if ( v14 )
                    {
                      if ( v38.m128i_i64[1] == *(_QWORD *)(v14 + 24) )
                      {
                        v32 = (_QWORD *)operator new(0x18u);
                        v33 = *a2;
                        *v32 = v9;
                        v34 = (__int64)v32;
                        v32[2] = -1;
                        v32[1] = 0x5200000000LL;
                        v35 = a2[1];
                        if ( a2[2] < (unsigned __int64)(v35 + 1) )
                        {
                          v38.m128i_i64[0] = v34;
                          v37 = qvector_reserve();
                          v34 = v38.m128i_i64[0];
                          *a2 = v37;
                          v33 = v37;
                          v35 = a2[1];
                        }
                        *(_QWORD *)(v33 + 8 * v35) = v34;
                        ++a2[1];
                        goto LABEL_22;
                      }
                      v15 = v9[2];
                      v38.m128i_i64[0] = 0;
                      if ( v15 )
                      {
                        n = v15;
                        v19 = (void *)qalloc_or_throw();
                        v20 = (const void *)v9[1];
                        v38.m128i_i64[0] = (__int64)v19;
                        memcpy(v19, v20, n);
                      }
                      v45 = nullptr;
                      v46 = 0;
                      v16 = _mm_loadl_epi64(&v38);
                      v44 = v38.m128i_i64[1];
                      v47 = v3;
                      v17 = v9[2];
                      v43 = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)v9);
                      sub_1AEC60(
                        v9[1],
                        v9[1] + v17,
                        (unsigned __int8 (__fastcall *)(__int64, __int64, _BYTE *, __int64))sub_3D0AD0,
                        (__int64)&v43);
                      if ( (_QWORD)v46 )
                      {
                        v21 = (_QWORD *)operator new(0x18u);
                        *v21 = v9;
                        v22 = (size_t)v21;
                        v23 = *a2;
                        v21[1] = 0x5300000000LL;
                        v21[2] = -1;
                        v24 = a2[1];
                        if ( a2[2] < (unsigned __int64)(v24 + 1) )
                        {
                          n = v22;
                          v36 = qvector_reserve();
                          *a2 = v36;
                          v23 = v36;
                          v22 = n;
                          v24 = a2[1];
                        }
                        *(_QWORD *)(v23 + 8 * v24) = v22;
                        v25 = v45;
                        v26 = a2[1] + 1;
                        v27 = v46;
                        a2[1] = v26;
                        v28 = &v25[v27];
                        if ( v28 != v25 )
                        {
                          do
                          {
                            v29 = *v25;
                            v30 = *a2;
                            if ( a2[2] < (unsigned __int64)(v26 + 1) )
                            {
                              v41 = v25;
                              v40 = v28;
                              n = v29;
                              v31 = qvector_reserve();
                              v26 = a2[1];
                              v25 = v41;
                              *a2 = v31;
                              v30 = v31;
                              v28 = v40;
                              v29 = n;
                            }
                            *(_QWORD *)(v30 + 8 * v26) = v29;
                            ++v25;
                            v26 = a2[1] + 1;
                            a2[1] = v26;
                          }
                          while ( v28 != v25 );
                          v25 = v45;
                        }
                        if ( v25 )
                        {
                          *(_QWORD *)&v46 = 0;
                          qfree();
                        }
                        if ( !v38.m128i_i64[0] )
                          goto LABEL_22;
                      }
                      else
                      {
                        if ( v45 )
                          qfree();
                        if ( !v38.m128i_i64[0] )
                          goto LABEL_22;
                      }
                      qfree();
                    }
                  }
                }
              }
LABEL_22:
              if ( (_QWORD **)v8 == ++v7 )
                goto LABEL_23;
            }
          }
        }
      }
    }
  }
  return v48 - __readfsqword(0x28u);
}

