unsigned __int64 __fastcall sub_27BE0(__int64 a1, const __m128i *a2)
{
  unsigned __int64 v5; // r12
  const __m128i *v6; // rdi
  unsigned __int64 v7; // r12
  _QWORD *v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  char *v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  const __m128i *v19; // r14
  __m128i *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rcx
  const __m128i *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  const __m128i *v27; // rdx
  __m128i v28; // xmm0
  __int64 v30; // [rsp+8h] [rbp-170h]
  __int64 v31; // [rsp+10h] [rbp-168h] BYREF
  __int128 v32; // [rsp+18h] [rbp-160h]
  _BYTE v33[264]; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int64 v34; // [rsp+138h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_97630(a2, 60) )
  {
    v5 = sub_97AE0(a2);
    if ( v5 != -1 )
    {
      sub_84A60(v33);
      if ( (unsigned __int8)sub_84C30(a2) || !(unsigned __int8)sub_9AB20(a2, v33) )
        v6 = a2;
      else
        v6 = (const __m128i *)v33;
      if ( !(unsigned __int8)sub_84C30(v6) )
        goto LABEL_7;
      v31 = 0;
      v32 = 0;
      sub_1B6C0((__int64)&v31, (__int64)a2);
      if ( (unsigned __int64)v32 <= 1 )
        goto LABEL_15;
      v7 = v5 >> 3;
      v8 = sub_27450(a1 + 16, (__int64)&v31);
      if ( v8 == (_QWORD *)(a1 + 24) )
        goto LABEL_19;
      v9 = v8[8];
      if ( !v9 )
        goto LABEL_19;
      v10 = v8[7];
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        v13 = v10 + 24 * v12;
        if ( v7 == *(_QWORD *)(v13 + 16) )
          break;
        v12 = ++v11;
        if ( v11 >= v9 )
          goto LABEL_19;
      }
      if ( v13 )
      {
LABEL_15:
        v14 = v31;
        if ( !v31 )
        {
LABEL_7:
          sub_1B750((__int64)v33);
          return v34 - __readfsqword(0x28u);
        }
      }
      else
      {
LABEL_19:
        v15 = (char *)sub_27970((_QWORD *)(a1 + 16), (__int64)&v31);
        v16 = *((_QWORD *)v15 + 1);
        v17 = *((_QWORD *)v15 + 2);
        v18 = v16 + 1;
        if ( v17 < v16 + 1 )
          goto LABEL_27;
        v19 = *(const __m128i **)v15;
        while ( 1 )
        {
          v20 = (__m128i *)((char *)v19 + 24 * v16);
          v20->m128i_i64[0] = 0;
          v20->m128i_i64[1] = 0;
          ++*((_QWORD *)v15 + 1);
          if ( (a2[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && a2[14].m128i_i64[0] != -1 )
            break;
          if ( under_debugger )
            BUG();
          v18 = interr(30478);
LABEL_27:
          v22 = qvector_reserve(v15, 0, v18, 24);
          v23 = *((_QWORD *)v15 + 1);
          v19 = (const __m128i *)v22;
          v24 = *(const __m128i **)v15;
          v25 = *((_QWORD *)v15 + 2);
          *((_QWORD *)v15 + 2) = v17;
          v26 = v23 - 1;
          if ( v26 >= 0 )
          {
            v27 = v19;
            do
            {
              v28 = _mm_loadu_si128(v24);
              v27 = (const __m128i *)((char *)v27 + 24);
              v24 = (const __m128i *)((char *)v24 + 24);
              *(__m128i *)((char *)v27 - 24) = v28;
              v27[-1].m128i_i64[1] = v24[-1].m128i_i64[1];
            }
            while ( v26-- != 0 );
            v24 = *(const __m128i **)v15;
          }
          v30 = v25;
          qfree(v24);
          v16 = *((_QWORD *)v15 + 1);
          *(_QWORD *)v15 = v19;
          *((_QWORD *)v15 + 2) = v30;
        }
        v21 = _mm_loadu_si128(a2 + 14);
        v20[1].m128i_i64[0] = v7;
        *v20 = v21;
        v14 = v31;
        if ( !v31 )
          goto LABEL_7;
      }
      *(_QWORD *)&v32 = 0;
      qfree(v14);
      goto LABEL_7;
    }
  }
  return v34 - __readfsqword(0x28u);
}

