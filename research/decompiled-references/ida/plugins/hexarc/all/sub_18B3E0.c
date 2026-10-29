__int64 __fastcall sub_18B3E0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rbp
  unsigned __int8 *v12; // r13
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // eax
  __m128i v17; // xmm0
  __int64 v18; // rax
  char v19; // si
  __int64 v20; // r8
  __int64 v21; // rbp
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int8 v24[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = a2[1];
  v25 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v4 + 1504);
  if ( a4 == -1 )
  {
    v8 = a2[2];
    if ( v8 == v5
      && ((v19 = *(_BYTE *)(v8 + 64), v19 == 1)
        ? (v20 = *(int *)(v8 + 72))
        : v19 == 5
        ? (v20 = *(_QWORD *)(*(_QWORD *)(v8 + 72) + 8LL))
        : (v19 = 0, v20 = -1),
          *(_BYTE *)(a3 + 8) == v19 && *(_QWORD *)a3 == v20) )
    {
      v21 = *a2;
      sub_116EE0(v5);
      v22 = *(_DWORD *)(v21 + 24);
      BYTE1(v22) &= ~2u;
      LOBYTE(v22) = v22 | 0x80;
      *(_DWORD *)(v21 + 24) = v22;
    }
    else
    {
      if ( *(_BYTE *)(v5 + 32) == 10 )
      {
        v23 = *(_QWORD *)(v5 + 40);
        if ( *(_BYTE *)v23 == 6 && *(_QWORD *)(v4 + 1352) == *(_QWORD *)(v23 + 8) )
        {
          sub_116350((char *)(v5 + 32), (char *)(v5 + 48));
          v8 = a2[2];
        }
      }
      if ( !(unsigned __int8)sub_116090((int *)v8, v7, 0) )
      {
        v9 = j__qalloc_or_throw();
        v10 = a2[1];
        v11 = (_QWORD *)v9;
        *(_OWORD *)(v9 + 8) = 0;
        v12 = (unsigned __int8 *)(v9 + 32);
        v13 = v9 + 64;
        *(_QWORD *)(v9 + 40) = 0;
        *(_QWORD *)(v9 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v9 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v9 + 56) = 0;
        *(_QWORD *)(v9 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v9 + 72) = 0;
        sub_11ECE0(v9, v10);
        *(_DWORD *)v11 = 13;
        sub_11EAC0(v13, v12);
        v14 = a2[2];
        if ( !v14 )
          v14 = a2[1];
        v11[3] = *(_QWORD *)(v14 + 24);
        sub_9CAA0(*a2, v11, a2[2]);
      }
      sub_1166E0(a2[1] + 48);
      *(_DWORD *)a2[1] = 4;
    }
  }
  else
  {
    *(_DWORD *)v5 = 4;
    v17 = _mm_cvtsi32_si128(*(_DWORD *)(v7 + 84));
    v18 = a2[1];
    *(_DWORD *)v24 = 1;
    *(_QWORD *)&v24[4] = _mm_unpacklo_epi32(v17, _mm_cvtsi32_si128(a4)).m128i_u64[0];
    sub_11EAC0(v18 + 32, v24);
    sub_1166E0((__int64)v24);
    sub_1166E0(a2[1] + 48);
  }
  v15 = *(_DWORD *)(*a2 + 24);
  BYTE1(v15) &= ~2u;
  LOBYTE(v15) = v15 | 0x80;
  *(_DWORD *)(*a2 + 24) = v15;
  return 1;
}

