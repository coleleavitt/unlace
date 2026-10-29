__int64 __fastcall sub_3A0730(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v7; // rax
  unsigned __int64 v9; // rax
  size_t v10; // rbp
  void *v11; // r12
  __int64 *v12; // rbx
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // r11
  __int64 v19; // rsi
  __int64 v20; // rax
  __m128i *v21; // rax
  __int64 v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+10h] [rbp-78h]
  __int64 v24; // [rsp+18h] [rbp-70h]
  __int64 v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+40h] [rbp-48h]

  v7 = (_BYTE *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                  1105,
                  *(unsigned int *)(a2 + 40),
                  &callui,
                  a4,
                  a5,
                  a6);
  if ( v7 )
  {
    if ( *v7 == 36 && (unsigned int)qsscanf() == 1 )
    {
      v9 = a1[5];
      if ( v29 >= v9 && v29 < a1[6] + v9 )
      {
        v10 = *(_QWORD *)(a2 + 16);
        v11 = nullptr;
        v12 = (__int64 *)a1[4];
        v22 = *(_QWORD *)a2;
        if ( v10 )
        {
          v11 = (void *)qalloc_or_throw();
          memcpy(v11, *(const void **)(a2 + 8), v10);
        }
        v13 = *(_QWORD *)(a2 + 32);
        v14 = *(_QWORD *)(a2 + 40);
        v15 = *(_QWORD *)(a2 + 48);
        v16 = *(_QWORD *)(a2 + 56);
        v17 = *(_QWORD *)(a2 + 64);
        v23 = *(_QWORD *)(a2 + 72);
        v18 = *(_QWORD *)(a2 + 88);
        v19 = *v12;
        v24 = *(_QWORD *)(a2 + 80);
        v20 = v12[1];
        if ( v12[2] < (unsigned __int64)(v20 + 1) )
        {
          v28 = *(_QWORD *)(a2 + 48);
          v27 = *(_QWORD *)(a2 + 40);
          v26 = *(_QWORD *)(a2 + 32);
          v25 = *(_QWORD *)(a2 + 88);
          v19 = qvector_reserve();
          v15 = v28;
          v14 = v27;
          *v12 = v19;
          v13 = v26;
          v20 = v12[1];
          v18 = v25;
        }
        v21 = (__m128i *)(v19 + 96 * v20);
        v21->m128i_i64[0] = v22;
        v21->m128i_i64[1] = (__int64)v11;
        v21[4].m128i_i64[1] = v23;
        v21[2].m128i_i64[0] = v13;
        v21[2].m128i_i64[1] = v14;
        v21[3].m128i_i64[0] = v15;
        v21[3].m128i_i64[1] = v16;
        v21[4].m128i_i64[0] = v17;
        v21[5].m128i_i64[0] = v24;
        v21[5].m128i_i64[1] = v18;
        v21[1] = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
        ++v12[1];
      }
    }
  }
  return 0;
}

