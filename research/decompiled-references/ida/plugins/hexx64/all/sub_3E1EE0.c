unsigned __int64 __fastcall sub_3E1EE0(__int64 a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6, __m128 a7)
{
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v16; // rax
  double v17; // xmm0_8
  const char *v18; // r15
  __int64 v19; // rsi
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm0
  unsigned __int64 v23; // rbp
  __int64 i; // rax
  __int64 v25; // rdx
  signed int v26; // r11d
  __int64 v27; // rsi
  __int64 v30; // [rsp+0h] [rbp-F8h]
  unsigned __int8 (__fastcall *v31)(__int64, unsigned __int64, __int64, const char *, _BYTE *, double, double, double, double); // [rsp+0h] [rbp-F8h]
  __int64 v32; // [rsp+8h] [rbp-F0h]
  __int64 v33; // [rsp+8h] [rbp-F0h]
  __int64 v34; // [rsp+10h] [rbp-E8h]
  __int64 v35; // [rsp+18h] [rbp-E0h] BYREF
  __m128i v36; // [rsp+20h] [rbp-D8h] BYREF
  int v37; // [rsp+30h] [rbp-C8h]
  _BYTE v38[24]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v39[32]; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v41[2]; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v42[2]; // [rsp+98h] [rbp-60h] BYREF
  int v43; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( *(int *)(a2 + 32) > 72
    || *(_QWORD *)(a2 + 48) == -1
    || (v8 = *(_QWORD *)(a1 + 64)) == 0
    || (unsigned int)(*(_DWORD *)(v8 + 60) - 1) > 1
    || (v9 = *(_QWORD *)(v8 + 64)) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCEEDu, a4);
LABEL_31:
    BUG();
  }
  v10 = sub_3D2B60(*(_QWORD *)(a1 + 64), *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24));
  if ( !v10 )
  {
    if ( !under_debugger )
      sub_383060(0xCEEEu, a4);
    goto LABEL_31;
  }
  v12 = *(_QWORD *)a1;
  v36.m128i_i32[0] = 0;
  ((void (__fastcall *)(__int64, __int64, _QWORD, char *, __m128i *, __int64, __int64, __m128i *))callui)(
    56,
    v12,
    0,
    (char *)&v35 + 4,
    &v36,
    v11,
    a3,
    &v36);
  v17 = callui(70, *(_QWORD *)a1, 0, v13, v14, v15, v30, v32, v34, v35);
  v18 = v16;
  if ( v16 )
  {
    v17 = 0.0;
    memset(v38, 0, sizeof(v38));
    v18 = nullptr;
    if ( (unsigned __int8)sub_3D44C0((unsigned __int64)v38, v16, SHIDWORD(v35)) )
    {
      v19 = *(_QWORD *)v38 + 8LL * *(_QWORD *)&v38[8];
      if ( *(_QWORD *)v38 != v19 )
      {
        v20 = *(_QWORD **)v38;
        do
        {
          if ( (*(_DWORD *)v20 & 7) == 1 )
          {
            v21 = *v20 >> 3;
            if ( v21 < *(_QWORD *)(v8 + 144) )
            {
              v18 = *(const char **)(*(_QWORD *)(v8 + 136) + 24 * v21);
              goto LABEL_15;
            }
          }
          ++v20;
        }
        while ( (_QWORD *)v19 != v20 );
        v18 = nullptr;
      }
    }
LABEL_15:
    if ( *(_QWORD *)v38 )
    {
      *(_QWORD *)&v38[8] = 0;
      qfree(*(__int64 *)v38);
    }
  }
  *(_OWORD *)v38 = 0xFFFFFFFFFFFFFFFFLL;
  v40[0] = 0xFFFFFFFF00000000LL;
  v41[0] = 0xFFFFFFFF00000000LL;
  v42[0] = 0xFFFFFFFF00000000LL;
  *(_DWORD *)&v38[16] = -1;
  v40[1] = 0;
  v41[1] = 0;
  v42[1] = 0;
  sub_330970((__int64)v39, -1);
  v43 = 0;
  sub_3D1350(v33, a1, a2, v17);
  v22 = _mm_load_si128(&v36);
  *(_DWORD *)&v38[16] = v37;
  *(__m128i *)v38 = v22;
  if ( v31(a1, v9, v10, v18, v38, *(double *)v22.m128i_i64, a5, *(double *)a6.m128_u64, *(double *)a7.m128_u64) )
  {
    sub_2B85E0(**(_QWORD **)(a1 + 48), v9);
    v23 = *(_QWORD *)(v9 + 40);
    for ( i = sub_3D4440(*(_QWORD *)(a1 + 48), v23); i != v25; *(_DWORD *)(v27 + 60) = 4 )
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)i;
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)i + 60LL) - 1) <= 1 && *(_DWORD *)(v27 + 56) >= v26 )
          break;
        i += 8;
        if ( i == v25 )
          goto LABEL_24;
      }
      i += 8;
    }
LABEL_24:
    sub_3E1D40(a1, v23, v26, 1, nullptr, *(double *)v22.m128i_i64, a5, a6, a7);
  }
  sub_11CDA0((__int64)v42);
  sub_11CDA0((__int64)v41);
  sub_11CDA0((__int64)v40);
  return v44 - __readfsqword(0x28u);
}

