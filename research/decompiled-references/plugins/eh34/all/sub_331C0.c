__int64 __fastcall sub_331C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  int v5; // r13d
  int i; // r12d
  int v7; // r14d
  int v8; // r12d
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // r8d
  const char *v15; // rcx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v20; // rax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rsi
  const char *v24; // rcx
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rsi
  const char *v28; // rcx
  __int64 v29; // rax
  __m128i v30; // xmm0
  int v31; // [rsp+0h] [rbp-A0h]
  __int64 v33; // [rsp+10h] [rbp-90h]
  char v34; // [rsp+18h] [rbp-88h]
  __int64 v35; // [rsp+18h] [rbp-88h]
  int v36; // [rsp+18h] [rbp-88h]
  __int64 v37; // [rsp+28h] [rbp-78h]
  __int64 v38; // [rsp+30h] [rbp-70h] BYREF
  __int64 v39; // [rsp+38h] [rbp-68h]
  __int64 v40; // [rsp+50h] [rbp-50h] BYREF
  __m128i v41; // [rsp+58h] [rbp-48h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-38h]

  v4 = *(_DWORD *)(a2 + 212);
  v42 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a2 + 208);
  v31 = v4 - v5;
  if ( v4 - v5 <= 0 )
  {
LABEL_24:
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    for ( i = 0; ; i = v7 )
    {
      v7 = i + 1;
      v37 = sub_28D80(a2, i + 1);
      v34 = BYTE4(v37);
      if ( BYTE4(v37) )
      {
        v8 = v37;
      }
      else
      {
        v20 = *a3 + 8LL * (v5 + i);
        v8 = *(_DWORD *)v20;
        v34 = *(_BYTE *)(v20 + 4);
      }
      v9 = sub_32240((__int64 *)(a2 + 560), v7);
      v10 = v9;
      if ( v9 == -1 )
      {
        sub_28EA0((__int64)&v38, a2, v7);
        v23 = *(_QWORD *)(a2 + 176);
        v24 = s1;
        if ( v39 )
          LODWORD(v24) = v38;
        sub_64B50(
          (unsigned int)&v40,
          v23,
          (unsigned int)"validate_initial_state_ranges(%s): no range",
          (_DWORD)v24,
          v21,
          v22);
        v25 = v40;
        v26 = _mm_loadu_si128(&v41);
        *(_BYTE *)(a1 + 24) = 1;
        v18 = v38;
        *(_QWORD *)a1 = v25;
        *(__m128i *)(a1 + 8) = v26;
        if ( v18 )
          goto LABEL_15;
        return a1;
      }
      v11 = *(_QWORD *)(a2 + 560) + ((__int64)v9 << 6);
      if ( v34 != *(_BYTE *)(v11 + 12) )
        break;
      if ( v34 && v8 != *(_DWORD *)(v11 + 8) )
      {
        v35 = v11;
        sub_28EA0((__int64)&v38, a2, v7);
        v12 = *(_QWORD *)(a2 + 176);
        v13 = v35;
        goto LABEL_10;
      }
      if ( BYTE4(v37) != (*(_BYTE *)(v11 + 16) & 1) )
      {
        v36 = v10;
        sub_28EA0((__int64)&v38, a2, v7);
        v27 = *(_QWORD *)(a2 + 176);
        v28 = s1;
        if ( v39 )
          LODWORD(v28) = v38;
        sub_64B50(
          (unsigned int)&v40,
          v27,
          (unsigned int)"validate_initial_state_ranges(%s): is_fixed_state %d range[%d].is_fixed() %d",
          (_DWORD)v28,
          BYTE4(v37),
          v36);
        v29 = v40;
        v30 = _mm_loadu_si128(&v41);
        *(_BYTE *)(a1 + 24) = 1;
        v18 = v38;
        *(_QWORD *)a1 = v29;
        *(__m128i *)(a1 + 8) = v30;
        if ( v18 )
          goto LABEL_15;
        return a1;
      }
      if ( v31 == v7 )
        goto LABEL_24;
      v5 = *(_DWORD *)(a2 + 208);
    }
    v33 = v11;
    sub_28EA0((__int64)&v38, a2, v7);
    v12 = *(_QWORD *)(a2 + 176);
    if ( !v34 )
      v8 = -5;
    v13 = v33;
LABEL_10:
    v14 = -5;
    if ( *(_BYTE *)(v13 + 12) )
      v14 = *(_DWORD *)(v13 + 8);
    v15 = s1;
    if ( v39 )
      LODWORD(v15) = v38;
    sub_64B50(
      (unsigned int)&v40,
      v12,
      (unsigned int)"validate_initial_state_ranges(%s): range state %d != actual state %d",
      (_DWORD)v15,
      v14,
      v8);
    v16 = v40;
    v17 = _mm_loadu_si128(&v41);
    *(_BYTE *)(a1 + 24) = 1;
    v18 = v38;
    *(_QWORD *)a1 = v16;
    *(__m128i *)(a1 + 8) = v17;
    if ( v18 )
    {
LABEL_15:
      v39 = 0;
      qfree(v18);
    }
  }
  return a1;
}
