__int64 __fastcall sub_198E60(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5, unsigned int a6, double a7)
{
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rsi
  __m128i v13; // xmm1
  double v14; // xmm0_8
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v20; // [rsp+8h] [rbp-90h]
  _QWORD *v21; // [rsp+10h] [rbp-88h]
  __int64 v22; // [rsp+18h] [rbp-80h]
  __int64 v23; // [rsp+20h] [rbp-78h]
  unsigned __int64 v25; // [rsp+30h] [rbp-68h]
  int v26; // [rsp+38h] [rbp-60h]
  unsigned __int8 v28[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v23 = a2;
  v26 = a4;
  v29 = __readfsqword(0x28u);
  if ( a5 > (int)a4 )
  {
    if ( (int)a4 < 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC97Eu, a7);
    }
    else
    {
      v8 = a6 * a4;
      if ( a2 + (int)(a6 * a4) >= 0 && a2 + (int)(a6 * a5) <= *(_QWORD *)(*(_QWORD *)(a1 + 64) + 136LL) )
      {
        v9 = (int)a4;
        v21 = nullptr;
        v10 = 4LL * (int)a4;
        v25 = 4 * ((int)a4 + (unsigned __int64)(unsigned int)(a5 - a4));
        do
        {
          v11 = j__qalloc_or_throw(80, a2, v9, a4);
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
          *(_QWORD *)(v11 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v11 + 40) = 0;
          *(_QWORD *)(v11 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v11 + 56) = 0;
          *(_QWORD *)(v11 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v11 + 72) = 0;
          sub_330970(v11, v12);
          *(_DWORD *)v11 = 4;
          v13 = _mm_cvtsi32_si128(*(_DWORD *)(*a3 + v10));
          *(_DWORD *)v28 = 1;
          *(_QWORD *)&v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6), v13).m128i_u64[0];
          *(double *)&v28[4] = v14;
          sub_125180((unsigned __int8 *)(v11 + 32), v28);
          v10 += 4;
          sub_11CDA0((__int64)v28);
          v15 = *(_QWORD *)(a1 + 64);
          *(_BYTE *)(v11 + 64) = 5;
          v16 = v8;
          v8 += a6;
          v22 = v15;
          v20 = v23 + v16;
          v17 = (_QWORD *)j__qalloc_or_throw(16, (__int64)v28, v15, v23);
          a2 = v11;
          *v17 = v22;
          v17[1] = v20;
          *(_QWORD *)(v11 + 72) = v17;
          *(_DWORD *)(v11 + 68) = a6;
          v21 = sub_A3160(a1, (_QWORD *)v11, (__int64)v21, v14);
        }
        while ( v10 != v25 );
        v18 = *(_DWORD *)(a1 + 24);
        BYTE1(v18) &= ~2u;
        LOBYTE(v18) = v18 | 0x80;
        *(_DWORD *)(a1 + 24) = v18;
        sub_A2520(a1, "added gva64 backups");
        return (unsigned int)(a5 - v26);
      }
      if ( !under_debugger )
        sub_383060(0xC97Au, a7);
    }
    BUG();
  }
  return (unsigned int)(a5 - v26);
}

