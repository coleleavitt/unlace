bool __fastcall sub_5B9B0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  _QWORD *v6; // r12
  bool result; // al
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  __m128i v19; // xmm0
  __int64 v20; // r14
  char v21; // al
  __int64 v22; // rdi
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // [rsp-10h] [rbp-80h]
  __int64 v27; // [rsp+8h] [rbp-68h]
  __m128i v28; // [rsp+10h] [rbp-60h] BYREF
  __int64 v29; // [rsp+20h] [rbp-50h] BYREF
  __m128i v30; // [rsp+28h] [rbp-48h] BYREF
  char v31; // [rsp+38h] [rbp-38h]
  unsigned __int64 v32; // [rsp+48h] [rbp-28h]

  v32 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 336);
  if ( !v6 )
    return 0;
  result = a4 == 280 || a4 <= 0x1F;
  if ( !result )
  {
    if ( a4 != 281 )
      return result;
    goto LABEL_4;
  }
  if ( a4 == 1 )
    return 0;
LABEL_4:
  v11 = 0x10000;
  v12 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) - 1);
  if ( (unsigned int)v12 <= 7 )
  {
    v11 = dword_7ADC0[v12];
    if ( (_DWORD)v11 != 0x10000 )
      v11 = (unsigned int)v11 | a4;
  }
  v31 = 0;
  v13 = -1;
  v30 = 0;
  v14 = v6[1];
  v29 = 0;
  v15 = *(__int64 (__fastcall **)(__int64, __int64))(*v6 + 16LL);
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 16LL) & a3;
  if ( v15 != sub_591A0 )
  {
    v27 = a6;
    v28.m128i_i32[0] = v11;
    v24 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v15)(v6, v16, 0, -1);
    a6 = v27;
    v11 = v28.m128i_u32[0];
    v16 = v24;
    v13 = v25;
  }
  reg_finder_find(v6, &v29, v16, v13, v11, a5, a6);
  v17 = v29;
  v18 = *a2;
  v19 = _mm_loadu_si128(&v30);
  v20 = v29;
  v29 = 0;
  v30 = 0;
  if ( v18 )
  {
    a2[1] = 0;
    v28 = v19;
    qfree(v18, (const char *)&v29, v26);
    v21 = v31;
    v22 = v29;
    *a2 = v20;
    v23 = _mm_load_si128(&v28);
    *((_BYTE *)a2 + 24) = v21;
    *(__m128i *)(a2 + 1) = v23;
    if ( v22 )
    {
      v30.m128i_i64[0] = 0;
      qfree(v22, (const char *)&v29);
      v21 = *((_BYTE *)a2 + 24);
    }
  }
  else
  {
    *a2 = v17;
    v21 = v31;
    *(__m128i *)(a2 + 1) = v19;
    *((_BYTE *)a2 + 24) = v21;
  }
  return (unsigned __int8)(v21 - 10) <= 1u;
}
