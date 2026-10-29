__int64 __fastcall sub_363B0(__int64 a1, char *a2, _QWORD *a3, __int64 a4, __int64 *a5)
{
  __int64 *v8; // rbx
  __int64 v9; // rax
  int v10; // r15d
  const char *(__fastcall *v11)(__int64); // rdx
  const char *v12; // r14
  const char *(__fastcall *v13)(__int64); // rax
  const char *v14; // rsi
  __int64 (__fastcall *v15)(__int64); // rax
  char *v16; // r14
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __m128i si128; // xmm0
  __int64 v21; // rax

  v8 = *(__int64 **)(a1 + 8);
  if ( (debug & 0x40000) != 0 )
  {
    v9 = *v8;
    v10 = *a2;
    v11 = *(const char *(__fastcall **)(__int64))(*v8 + 32);
    if ( v11 == sub_303E0 )
    {
      v12 = nptr;
      if ( v8[7] )
        v12 = (const char *)v8[6];
    }
    else
    {
      v12 = v11(*(_QWORD *)(a1 + 8));
      v9 = *v8;
    }
    v13 = *(const char *(__fastcall **)(__int64))(v9 + 16);
    if ( v13 == sub_35BE0 )
    {
      if ( (unsigned __int64)v8[2] > 1 || (sub_13B20(v8 + 1), v8[2]) )
        v14 = (const char *)v8[1];
      else
        v14 = nptr;
    }
    else
    {
      v14 = v13((__int64)v8);
    }
    sub_111A0((__int64)"DEXSIP: write_value arr %s`%s idcv.vtype=%d\n", v14, v12, v10);
  }
  v15 = *(__int64 (__fastcall **)(__int64))(*v8 + 24);
  if ( v15 == sub_303D0 )
    v16 = (char *)(v8 + 4);
  else
    v16 = (char *)v15((__int64)v8);
  if ( !(unsigned __int8)sub_32CA0(v16, a2, a3, a5) )
    return 0;
  v18 = sub_135E0(v16, a2);
  result = sub_1D280((_QWORD *)(v18 + 1040), v8[9], *((_DWORD *)v8 + 20), (__int64)v16);
  if ( (_BYTE)result != 1 && a5 )
  {
    v19 = *a5;
    if ( (unsigned __int64)a5[2] <= 0x1E )
    {
      v21 = qvector_reserve();
      *a5 = v21;
      v19 = v21;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_6A540);
    a5[1] = 31;
    *(__m128i *)v19 = si128;
    *(__m128i *)(v19 + 14) = _mm_load_si128((const __m128i *)&xmmword_6A550);
    *(_BYTE *)(*a5 + 30) = 0;
    return 0;
  }
  return result;
}

