__int64 __fastcall sub_3DFA0(__int64 a1, _QWORD *a2, __int64 a3, bool *a4)
{
  int v7; // eax
  int v8; // edx
  unsigned __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __m128i v14; // xmm0
  int v15; // eax
  _QWORD *v16; // rdx
  __int64 *v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __m128i *v21; // rdx
  const __m128i *v22; // rax
  __int64 *v23; // [rsp+0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+8h] [rbp-50h]
  unsigned __int8 v25; // [rsp+18h] [rbp-40h]
  _QWORD v26[7]; // [rsp+20h] [rbp-38h] BYREF

  v7 = *(unsigned __int16 *)(a3 + 6);
  v8 = *(unsigned __int16 *)(a3 + 46);
  v26[1] = __readfsqword(0x28u);
  v24 = 0;
  v10 = (unsigned __int64)&v23;
  v23 = nullptr;
  v11 = v8 | (v7 << 16);
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 888);
  v25 = 0;
  v14.m128i_i64[0] = _mm_unpacklo_epi16(_mm_cvtsi32_si128(v11), (__m128i)0LL).m128i_u64[0];
  v26[0] = v14.m128i_i64[0];
  v15 = sub_5BB80(v13, &v23, v12, v26);
  v17 = v23;
  if ( v15 == -1 )
    goto LABEL_9;
  v10 = v25;
  v16 = (_QWORD *)((unsigned int)v25 - 10);
  if ( (unsigned __int8)(v25 - 10) > 1u )
  {
LABEL_8:
    *(_BYTE *)(a1 + 792) = 1;
LABEL_9:
    v19 = 0;
    goto LABEL_10;
  }
  v18 = *v23;
  if ( (_QWORD)v24 != 1 )
  {
    v16 = v23 + 3;
    v10 = (unsigned __int64)&v23[3 * v24];
    if ( 24LL * (_QWORD)v24 != 24 )
    {
      while ( v18 == *v16 )
      {
        v16 += 3;
        if ( v16 == (_QWORD *)v10 )
          goto LABEL_13;
      }
      goto LABEL_8;
    }
  }
LABEL_13:
  *a2 = v18;
  v21 = *(__m128i **)(a1 + 864);
  v10 = a1 + 840;
  v22 = (const __m128i *)(a3 + 40LL * v15);
  *v21 = _mm_loadu_si128(v22);
  v14 = _mm_loadu_si128(v22 + 1);
  v21[1] = v14;
  v21[2].m128i_i32[0] = v22[2].m128i_i32[0];
  sub_5BFC0(*(_QWORD *)(a1 + 888), a1 + 840, &v23, *(_QWORD *)(a1 + 32));
  v17 = v23;
  if ( a4 )
    *a4 = (*((_BYTE *)v23 + 18) & 0x10) != 0;
  v19 = 1;
LABEL_10:
  if ( v17 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v17, v10, v16, *(double *)v14.m128i_i64);
  }
  return v19;
}

