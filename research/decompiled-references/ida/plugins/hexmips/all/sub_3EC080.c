unsigned __int64 __fastcall sub_3EC080(__int64 a1, int a2, int a3, signed int a4, double a5)
{
  unsigned __int16 v6; // ax
  unsigned int v8; // r14d
  __int64 v9; // rsi
  int v10; // ecx
  __int64 v11; // rax
  __m128i v12; // xmm0
  unsigned int *v13; // rax
  __m128i v14; // xmm1
  unsigned int *v15; // r12
  __int64 v16; // r15
  unsigned int *v17; // rax
  unsigned int v18; // edx
  int v19; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // edi
  __int64 v25; // [rsp+0h] [rbp-80h]
  unsigned __int64 v28; // [rsp+10h] [rbp-70h] BYREF
  __int64 v29; // [rsp+18h] [rbp-68h]
  unsigned __int8 v30[16]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v31[24]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-38h]

  v6 = *(_WORD *)(a1 + 48);
  v32 = __readfsqword(0x28u);
  if ( v6 > 0xDEu )
  {
    if ( (unsigned __int16)(v6 - 1690) <= 1u )
    {
      LOBYTE(v10) = v6 != 1690;
      if ( a4 == -1 )
      {
        v21 = *(_QWORD *)(a1 + 832);
        v29 = 0;
        v8 = 4;
        a4 = *(_DWORD *)(v21 + 452);
        v28 = 0xFFFFFFFF00000007LL;
        goto LABEL_21;
      }
      if ( !under_debugger )
        sub_37E160(0xCE44u, a5);
      goto LABEL_34;
    }
    goto LABEL_27;
  }
  v8 = 67;
  if ( v6 > 0xDAu )
    goto LABEL_3;
  if ( (unsigned __int16)(v6 - 215) > 3u )
  {
LABEL_27:
    if ( !under_debugger )
      sub_37E160(0xCC58u, a5);
    goto LABEL_34;
  }
  v8 = 4;
LABEL_3:
  v9 = 1LL << ((unsigned __int8)v6 + 41);
  if ( (v9 & 0x55) == 0 )
  {
    if ( (v9 & 0xAA) != 0 )
    {
      v10 = 1;
      goto LABEL_6;
    }
    if ( !under_debugger )
      sub_37E160(0xCCC4u, a5);
LABEL_34:
    BUG();
  }
  v10 = 0;
LABEL_6:
  v29 = 0;
  v28 = 0xFFFFFFFF00000007LL;
  if ( v6 > 0xDAu )
  {
    if ( (unsigned __int16)(v6 - 221) <= 1u )
      goto LABEL_8;
  }
  else if ( v6 > 0xD8u )
  {
LABEL_8:
    v11 = *(_QWORD *)(a1 + 832);
    *(_QWORD *)v30 = 1;
    v12 = _mm_cvtsi32_si128(*(_DWORD *)(v11 + 80));
    v13 = *(unsigned int **)(v11 + 696);
    *(_QWORD *)&v30[4] = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(a4)).m128i_u64[0];
    v14 = _mm_cvtsi32_si128(*v13);
    *(_DWORD *)v31 = 1;
    *(_QWORD *)&v31[4] = _mm_unpacklo_epi32(v12, v14).m128i_u64[0];
    v15 = sub_3EB6F0((_QWORD *)a1, 44 - v10, v30, v31, (unsigned __int8 *)&v28);
    sub_118BA0((__int64)v31);
    sub_118BA0((__int64)v30);
    goto LABEL_9;
  }
LABEL_21:
  if ( (_BYTE)v10 )
  {
    v22 = *(_QWORD *)(a1 + 832);
    v23 = *(_QWORD *)(v22 + 760);
    if ( !v23 )
      sub_3E5460(a5);
    v24 = *(_DWORD *)(*(_QWORD *)(v22 + 752) + 4 * v23 - 4);
    *(_QWORD *)(v22 + 760) = v23 - 1;
    sub_3EAB70(a1, 6u, 1, a4, 0x3BEA45E214ADDC55LL, v24, 0);
    *(_DWORD *)&v31[8] = v24;
    *(_QWORD *)v31 = 0x100000001LL;
    v15 = sub_3EB6F0((_QWORD *)a1, 42, v31, nullptr, (unsigned __int8 *)&v28);
    sub_3E8540(*(_QWORD *)(a1 + 832), v24);
    sub_118BA0((__int64)v31);
  }
  else
  {
    *(_DWORD *)&v31[8] = a4;
    *(_QWORD *)v31 = 0x100000001LL;
    v15 = sub_3EB6F0((_QWORD *)a1, 42, v31, nullptr, (unsigned __int8 *)&v28);
    sub_118BA0((__int64)v31);
  }
LABEL_9:
  if ( v15 )
  {
    v25 = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    v16 = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    v17 = v15 + 16;
    if ( *v15 == 55 )
      v17 = v15 + 8;
    v18 = *(_DWORD *)(v16 + 72);
    *(_BYTE *)v17 = 7;
    v17[2] = v18;
    v19 = *(unsigned __int16 *)(a1 + 890);
    *(_QWORD *)(a1 + 16) = v25;
    sub_3EAB70(a1, v8, v19, a3, 0x3BEA45E214ADDC55LL, a2, 0);
    *(_QWORD *)(a1 + 16) = v16;
  }
  else
  {
    sub_3EAB70(a1, v8, *(unsigned __int16 *)(a1 + 890), a3, 0x3BEA45E214ADDC55LL, a2, 0);
  }
  sub_118BA0((__int64)&v28);
  return v32 - __readfsqword(0x28u);
}

