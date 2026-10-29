__int64 __fastcall sub_189DE0(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int8 *v11; // r14
  char *v12; // rdi
  unsigned __int8 *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rsi
  unsigned __int8 *v18; // r15
  unsigned int v19; // r14d
  int v21; // eax
  signed int v22; // r12d
  unsigned int v23; // eax
  __m128i v24; // xmm0
  __int64 v25; // [rsp+20h] [rbp-C0h]
  _BYTE *v27; // [rsp+48h] [rbp-98h] BYREF
  unsigned __int8 *v28; // [rsp+50h] [rbp-90h] BYREF
  __int64 v29; // [rsp+58h] [rbp-88h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-80h] BYREF
  __int64 v31; // [rsp+68h] [rbp-78h]
  _QWORD v32[2]; // [rsp+70h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+80h] [rbp-60h] BYREF
  unsigned __int8 v34[24]; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+A8h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v9 = sub_11C8E0(a4, &v27, 14);
  if ( !v9 )
    return 0;
  v10 = v9;
  v11 = (unsigned __int8 *)sub_183840(v27);
  if ( !v11 )
    return 0;
  v12 = (char *)sub_11C8A0(v10, &v28);
  if ( !v12 )
    return 0;
  if ( !(unsigned __int8)sub_11FD80(v12, (__int64 *)v34, 0) )
    return 0;
  if ( *(_QWORD *)v34 != 4 )
    return 0;
  v13 = v28;
  v29 = a3;
  v25 = sub_129440(a2, (__int64)v28, (__int64)&v29, 0, *(double *)a5.m128i_i64, a6);
  if ( !v25 )
    return 0;
  v31 = 0;
  v30 = 0xFFFFFFFF00000000LL;
  v32[0] = 0xFFFFFFFF00000000LL;
  v33[0] = 0xFFFFFFFF00000000LL;
  v32[1] = 0;
  v33[1] = 0;
  if ( *(_DWORD *)v25 == 23 )
  {
    if ( !(unsigned __int8)sub_11FD80((char *)(v25 + 48), (__int64 *)v34, 0)
      || *(_QWORD *)v34 != 2
      || *(_DWORD *)(v25 + 36) < *((_DWORD *)v28 + 1) )
    {
      goto LABEL_12;
    }
    v18 = (unsigned __int8 *)(v25 + 32);
  }
  else
  {
    HIDWORD(v30) = *((_DWORD *)v28 + 1);
    v16 = j__qalloc_or_throw(80, (__int64)v13, v14, v15);
    v17 = *(_QWORD *)(v25 + 24);
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 56) = 0;
    *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 72) = 0;
    sub_330970(v16, v17);
    *(_DWORD *)v16 = 14;
    sub_120A10(v16 + 32, a1, 4, SHIDWORD(v30), *(_QWORD *)(v25 + 24), 0);
    sub_125180((unsigned __int8 *)(v16 + 48), v28);
    LOBYTE(v30) = 4;
    v31 = v16;
    v18 = (unsigned __int8 *)&v30;
  }
  sub_125180((unsigned __int8 *)v32, v18);
  sub_12B320((__int64)v32, a1, *(_QWORD *)(a4 + 24), 1, a5);
  sub_125180((unsigned __int8 *)v33, v11);
  sub_12B320((__int64)v33, a1, *(_QWORD *)(a4 + 24), 1, a5);
  v19 = sub_12EA80((__int64)a1, (const __m128i *)a2, a3, (__int64)v33, v29, (__int64)v32, a5, a6, 1);
  if ( (_BYTE)v19 )
  {
    if ( v29 == a3 )
    {
      sub_125180((unsigned __int8 *)v33, v18);
LABEL_22:
      sub_11CA10((char *)(a4 + 32), (char *)v33);
      sub_11CDA0(a4 + 48);
      v21 = 4;
      if ( *(_DWORD *)(a4 + 68) != *(_DWORD *)(a4 + 36) )
        v21 = 10;
      *(_DWORD *)a4 = v21;
      goto LABEL_13;
    }
    if ( *(_DWORD *)v25 == 23 )
    {
      v22 = *(_DWORD *)(v25 + 36);
      v23 = sub_138140(*(_QWORD **)(a2 + 64), v22, 1, *(double *)a5.m128i_i64);
      if ( v23 != -1 )
      {
        v24 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v23));
        *(_DWORD *)v34 = 1;
        *(_QWORD *)&v34[4] = v24.m128i_i64[0];
        sub_125180((unsigned __int8 *)v33, v34);
        sub_11CDA0((__int64)v34);
        sub_A3240(a2, *(_QWORD *)(v29 + 16), 4, (unsigned __int8 *)(v25 + 32), nullptr, (unsigned __int8 *)v33, v24);
        goto LABEL_22;
      }
    }
  }
LABEL_12:
  v19 = 0;
LABEL_13:
  sub_11CDA0((__int64)v33);
  sub_11CDA0((__int64)v32);
  sub_11CDA0((__int64)&v30);
  return v19;
}

