__int64 __fastcall sub_3F4960(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int16 v13; // dx
  __int64 v14; // rax
  __int64 v16; // rcx
  bool v18; // zf
  int v19; // edx
  int v20; // esi
  __int64 v21; // rdx
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // r15
  int v33; // r14d
  __int64 v34; // rsi
  __int64 v35; // [rsp+18h] [rbp-40h]

  v13 = *(_WORD *)(a1 + 890);
  if ( ((v13 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCA9u, *(double *)a5.m128_u64);
LABEL_26:
    BUG();
  }
  if ( *(_BYTE *)(a1 + 145) != 5 || *(_BYTE *)(a1 + 185) != 5 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCA8u, *(double *)a5.m128_u64);
    goto LABEL_26;
  }
  v14 = *(_QWORD *)(a1 + 152);
  v16 = *(_QWORD *)(a1 + 192);
  if ( (int)v14 < 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD80u, *(double *)a5.m128_u64);
    goto LABEL_26;
  }
  if ( (int)v16 <= 0 )
    goto LABEL_9;
  v18 = v13 == 4;
  v19 = 32;
  if ( !v18 )
    v19 = 64;
  if ( (int)v16 + (int)v14 <= v19 )
  {
    v30 = *(_QWORD *)(a1 + 832);
    v31 = *(_QWORD *)(v30 + 760);
    if ( !v31 )
      sub_3E5460(*(double *)a5.m128_u64);
    v32 = -1;
    v33 = *(_DWORD *)(*(_QWORD *)(v30 + 752) + 4 * v31 - 4);
    *(_QWORD *)(v30 + 760) = v31 - 1;
    if ( (unsigned __int64)(int)v16 <= 0x3F )
      v32 = (1LL << v16) - 1;
    v34 = ~(v32 << v14);
    if ( (unsigned __int64)(int)v14 >= 0x40 )
      v34 = -1;
    sub_3EC710(a1, v34, 3, v33, *(unsigned __int16 *)(a1 + 890));
    v35 = a2;
    sub_3EAB70(a1, 0x14u, *(unsigned __int16 *)(a1 + 890), v35, v33, v35, 0);
    sub_3EC710(a1, v32, 3, v33, *(unsigned __int16 *)(a1 + 890));
    sub_3EAB70(a1, 0x14u, *(unsigned __int16 *)(a1 + 890), a3, v33, v33, 0);
    sub_3EAB70(a1, 0x16u, *(unsigned __int16 *)(a1 + 890), v33, a4, v33, 0);
    sub_3EAB70(a1, 0x13u, *(unsigned __int16 *)(a1 + 890), v35, v33, v35, 0);
    sub_3E8540(*(_QWORD *)(a1 + 832), v33);
    return 1;
  }
  else
  {
LABEL_9:
    v20 = 0;
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
    v22 = *(unsigned __int16 *)(a1 + 48);
    v23 = *(_DWORD *)(v21 + 104);
    if ( v23 <= v22 && v22 < *(_DWORD *)(v21 + 108) )
      v20 = *(_DWORD *)(*(_QWORD *)(v21 + 112) + 16LL * (v22 - v23) + 8);
    sub_3F46C0((_QWORD *)a1, v20, a2, a3, a4, 0);
    sub_32C190(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 40), 0x31u, v24, v25, v26, a5, a6, a7, a8, v27, v28, a11, a12);
    return 0;
  }
}

