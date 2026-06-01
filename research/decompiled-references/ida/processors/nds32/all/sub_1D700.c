unsigned __int64 __fastcall sub_1D700(double a1, double a2, __int64 a3, __int64 *a4, char a5, __int64 a6, __int64 a7)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  const char *v15; // rsi
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // r14
  unsigned __int64 v24; // r12
  __m128i si128; // xmm0
  __m128i *v26; // rbx
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-58h] BYREF
  __int128 v32; // [rsp+8h] [rbp-50h]
  int v33; // [rsp+18h] [rbp-40h]
  unsigned __int64 v34; // [rsp+28h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  if ( a5 == 115 )
  {
    v31 = 0;
    v33 = 0;
    v32 = 0;
    v10 = node2ea(a6);
    if ( (unsigned __int8)sub_18E70((__int64)&v31, a7, v10) )
    {
      v12 = a4[1];
      v13 = *a4;
      if ( a4[2] < (unsigned __int64)(v12 + 1) )
      {
        v19 = qvector_reserve(a4, v13, v12 + 1, 24);
        *a4 = v19;
        v12 = a4[1];
        v13 = v19;
      }
      v14 = v13 + 24 * v12;
      v15 = "flags:%02X";
      *(_QWORD *)v14 = 0;
      *(_OWORD *)(v14 + 8) = 0;
      v16 = v33;
      ++a4[1];
      sub_DC30((__int64 *)v14, (__int64)"flags:%02X", v16);
      v18 = v31;
      if ( (_QWORD)v32 )
      {
        v17 = a4[1];
        v20 = *a4;
        if ( a4[2] < (unsigned __int64)(v17 + 1) )
        {
          v30 = qvector_reserve(a4, v20, v17 + 1, 24);
          *a4 = v30;
          v17 = a4[1];
          v20 = v30;
        }
        v21 = v20 + 24 * v17;
        *(_OWORD *)(v21 + 8) = 0;
        *(_QWORD *)v21 = 0;
        ++a4[1];
        v22 = *(_QWORD *)(v21 + 8);
        if ( v22 )
        {
          v23 = v22 + 23;
          v24 = v22 + 24;
          --v22;
        }
        else
        {
          v24 = 25;
          v23 = 24;
        }
        v15 = *(const char **)v21;
        if ( *(_QWORD *)(v21 + 16) < v24 )
        {
          v29 = qvector_reserve(v21, v15, v24, 1);
          *(_QWORD *)v21 = v29;
          v15 = (const char *)v29;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_21470);
        *(_QWORD *)(v21 + 8) = v24;
        v15[v23] = 0;
        v26 = (__m128i *)(*(_QWORD *)v21 + v22);
        *v26 = si128;
        v27 = v32;
        v26[1].m128i_i64[0] = 0x3A296765723A6874LL;
        v28 = v31;
        v18 = v31 + 32 * v27;
        if ( v31 != v18 )
        {
          do
          {
            v15 = " %a:%zd:%a:%s";
            sub_11CF0(
              (__int64 *)v21,
              (__int64)" %a:%zd:%a:%s",
              *(double *)si128.m128i_i64,
              *(_QWORD *)v28,
              a2,
              *(const char **)(v28 + 8));
            v28 += 32;
          }
          while ( v18 != v28 );
          v18 = v31;
        }
      }
      if ( v18 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v18, v15, v17);
      }
    }
    else if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31, a7, v11);
    }
  }
  return v34 - __readfsqword(0x28u);
}

