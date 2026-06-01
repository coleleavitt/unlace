__int64 __fastcall sub_332D0(__int64 a1, const char *a2, _QWORD *a3, __int64 a4, __int64 *a5)
{
  char *v7; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rax
  int v10; // r14d
  const char *(__fastcall *v11)(__int64); // rdx
  __int64 v12; // rdx
  const char *v13; // r15
  __int64 result; // rax
  __int64 (__fastcall *v15)(__int64); // rax
  char *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rsi
  __m128i si128; // xmm0
  __int64 v22; // rax

  v7 = (char *)a2;
  v8 = *(__int64 **)(a1 + 8);
  if ( (debug & 0x40000) != 0 )
  {
    v9 = *v8;
    v10 = *a2;
    v11 = *(const char *(__fastcall **)(__int64))(*v8 + 32);
    if ( v11 == sub_30380 )
    {
      v12 = v8[6];
      v13 = nptr;
      if ( *(_QWORD *)(v12 + 40) )
        v13 = *(const char **)(v12 + 32);
    }
    else
    {
      v13 = v11(*(_QWORD *)(a1 + 8));
      v9 = *v8;
    }
    a2 = (const char *)(*(__int64 (__fastcall **)(__int64 *))(v9 + 16))(v8);
    sub_111A0((__int64)"DEXSIP: write_value var %s`%s idcv.vtype=%d\n", a2, v13, v10);
  }
  if ( !*(_BYTE *)(v8[6] + 88) || !(unsigned __int8)sub_33190((__int64)v8, (__int64)a2) )
    return 0;
  v15 = *(__int64 (__fastcall **)(__int64))(*v8 + 24);
  v16 = (char *)(v15 == sub_30370 ? v8[6] + 96 : v15((__int64)v8));
  if ( !(unsigned __int8)sub_32CA0(v16, v7, a3, a5) )
    return 0;
  v17 = sub_135E0(v16, v7);
  result = sub_280A0(v17, v8[4], v8[5], v8[6], v18, v19);
  if ( (_BYTE)result != 1 && a5 )
  {
    v20 = *a5;
    if ( (unsigned __int64)a5[2] <= 0x1E )
    {
      v22 = qvector_reserve();
      *a5 = v22;
      v20 = v22;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_6A540);
    a5[1] = 31;
    *(__m128i *)v20 = si128;
    *(__m128i *)(v20 + 14) = _mm_load_si128((const __m128i *)&xmmword_6A550);
    *(_BYTE *)(*a5 + 30) = 0;
    return 0;
  }
  return result;
}

