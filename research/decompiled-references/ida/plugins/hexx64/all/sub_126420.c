unsigned __int64 __fastcall sub_126420(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ecx
  __int64 v13; // r12
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __m128i v22; // xmm2
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r14
  char v28; // al
  char v29; // dl
  char v30; // al
  __int16 v31; // dx
  __int16 v32; // ax
  int v33; // edx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int8 v37[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  sub_11CDA0(a1);
  switch ( *(_DWORD *)a3 )
  {
    case 1:
      v13 = *(_QWORD *)(a3 + 8);
      *(_BYTE *)a1 = 5;
      v14 = (_QWORD *)j__qalloc_or_throw(16, a2, v7, v8);
      *v14 = a2;
      v14[1] = v13;
      *(_QWORD *)(a1 + 8) = v14;
      goto LABEL_5;
    case 2:
      if ( !under_debugger )
        sub_383060(0xC7CDu, a5);
      goto LABEL_16;
    case 3:
      v15 = *(_DWORD *)(a3 + 8);
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = v15;
      goto LABEL_5;
    case 4:
      sub_1252A0(a1, (unsigned __int16)*(_DWORD *)(a3 + 8), HIWORD(*(_DWORD *)(a3 + 8)), a4 >> 1);
      goto LABEL_5;
    case 5:
      v16 = *(_QWORD *)(a3 + 8);
      v17 = j__qalloc_or_throw(80, a2, v7, v8);
      *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v17 + 40) = 0;
      *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v17 + 56) = 0;
      *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v17 + 72) = 0;
      sub_330970(v17, -1);
      v18 = *(_QWORD *)(a2 + 1504);
      *(_QWORD *)v37 = 1;
      *(_QWORD *)&v37[4] = _mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(*(_DWORD *)(v18 + 80)),
                             _mm_cvtsi32_si128(*(_DWORD *)(v18 + 52))).m128i_u64[0];
      sub_11CDA0(v17 + 32);
      sub_123A40(v17 + 32, v37, v19, v20);
      sub_11CDA0((__int64)v37);
      v21 = _mm_cvtsi32_si128(*(_DWORD *)(v18 + 84));
      v22 = _mm_cvtsi32_si128(*(_DWORD *)(v16 + 8));
      *(_DWORD *)v37 = 1;
      *(_QWORD *)&v37[4] = _mm_unpacklo_epi32(v21, v22).m128i_u64[0];
      sub_11CDA0(v17 + 48);
      sub_123A40(v17 + 48, v37, v23, v24);
      sub_11CDA0((__int64)v37);
      if ( *(_QWORD *)v16 )
      {
        v27 = j__qalloc_or_throw(80, (__int64)v37, v25, v26);
        *(_QWORD *)(v27 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v27 + 40) = 0;
        *(_QWORD *)(v27 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v27 + 56) = 0;
        *(_QWORD *)(v27 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v27 + 72) = 0;
        sub_330970(v27, -1);
        v28 = *(_BYTE *)(v27 + 32);
        *(_DWORD *)v27 = 12;
        *(_BYTE *)(v27 + 32) = *(_BYTE *)(v17 + 48);
        v29 = *(_BYTE *)(v17 + 49);
        *(_BYTE *)(v17 + 48) = v28;
        v30 = *(_BYTE *)(v27 + 33);
        *(_BYTE *)(v27 + 33) = v29;
        v31 = *(_WORD *)(v17 + 50);
        *(_BYTE *)(v17 + 49) = v30;
        v32 = *(_WORD *)(v27 + 34);
        *(_WORD *)(v27 + 34) = v31;
        v33 = *(_DWORD *)(v17 + 52);
        *(_WORD *)(v17 + 50) = v32;
        v34 = *(_DWORD *)(v27 + 36);
        *(_DWORD *)(v27 + 36) = v33;
        v35 = *(_QWORD *)(v17 + 56);
        *(_DWORD *)(v17 + 52) = v34;
        v36 = *(_QWORD *)(v27 + 40);
        *(_QWORD *)(v27 + 40) = v35;
        *(_QWORD *)(v17 + 56) = v36;
        sub_120A10(v27 + 48, (unsigned __int64 *)v18, *(_QWORD *)v16, *(_DWORD *)(v18 + 84), -1, 0);
        *(_BYTE *)(v17 + 48) = 4;
        *(_QWORD *)(v17 + 56) = v27;
        *(_DWORD *)(v17 + 52) = *(_DWORD *)(v18 + 84);
      }
      *(_DWORD *)v17 = 2;
      *(_BYTE *)a1 = 4;
      *(_QWORD *)(a1 + 8) = v17;
      goto LABEL_5;
    case 6:
      v9 = *(_QWORD *)(a2 + 1504);
      v10 = *(_QWORD *)(a3 + 8);
      *(_BYTE *)a1 = 6;
      v11 = 8 * *(_DWORD *)(v9 + 84);
      if ( (unsigned __int64)v11 <= 0x3F )
        v10 &= ~(-1LL << v11);
      *(_QWORD *)(a1 + 8) = v10;
LABEL_5:
      *(_DWORD *)(a1 + 4) = a4;
      return v38 - __readfsqword(0x28u);
    default:
      if ( !under_debugger )
        sub_383060(0xC7B8u, a5);
LABEL_16:
      BUG();
  }
}

