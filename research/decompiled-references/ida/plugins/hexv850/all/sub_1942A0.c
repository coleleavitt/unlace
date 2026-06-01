__int64 __fastcall sub_1942A0(__int64 a1, __int64 a2, _QWORD *a3, int a4, int a5, unsigned int a6)
{
  int v7; // r14d
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rsi
  __m128i v11; // xmm1
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v17; // [rsp+8h] [rbp-90h]
  _QWORD *v18; // [rsp+10h] [rbp-88h]
  __int64 v19; // [rsp+18h] [rbp-80h]
  unsigned __int64 v22; // [rsp+30h] [rbp-68h]
  unsigned __int8 v25[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a5 > a4 )
  {
    if ( a4 < 0 )
    {
      if ( !under_debugger )
        sub_37CFE0(51582);
    }
    else
    {
      v7 = a6 * a4;
      if ( a2 + (int)(a6 * a4) >= 0 && a2 + (int)(a6 * a5) <= *(_QWORD *)(*(_QWORD *)(a1 + 64) + 136LL) )
      {
        v18 = nullptr;
        v8 = 4LL * a4;
        v22 = 4 * (a4 + (unsigned __int64)(unsigned int)(a5 - a4));
        do
        {
          v9 = j__qalloc_or_throw();
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
          *(_QWORD *)(v9 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v9 + 40) = 0;
          *(_QWORD *)(v9 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v9 + 56) = 0;
          *(_QWORD *)(v9 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v9 + 72) = 0;
          sub_32ADE0(v9, v10);
          *(_DWORD *)v9 = 4;
          v11 = _mm_cvtsi32_si128(*(_DWORD *)(*a3 + v8));
          *(_DWORD *)v25 = 1;
          *(_QWORD *)&v25[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6), v11).m128i_u64[0];
          sub_1205C0(v9 + 32, v25);
          v8 += 4;
          sub_1181E0((__int64)v25);
          v12 = *(_QWORD *)(a1 + 64);
          *(_BYTE *)(v9 + 64) = 5;
          v13 = v7;
          v7 += a6;
          v19 = v12;
          v17 = a2 + v13;
          v14 = (_QWORD *)j__qalloc_or_throw();
          *v14 = v19;
          v14[1] = v17;
          *(_QWORD *)(v9 + 72) = v14;
          *(_DWORD *)(v9 + 68) = a6;
          v18 = sub_9E5A0(a1, (_QWORD *)v9, (__int64)v18);
        }
        while ( v8 != v22 );
        v15 = *(_DWORD *)(a1 + 24);
        BYTE1(v15) &= ~2u;
        LOBYTE(v15) = v15 | 0x80;
        *(_DWORD *)(a1 + 24) = v15;
        sub_9D960(a1, (__int64)"added gva64 backups");
        return (unsigned int)(a5 - a4);
      }
      if ( !under_debugger )
        sub_37CFE0(51578);
    }
    BUG();
  }
  return (unsigned int)(a5 - a4);
}

