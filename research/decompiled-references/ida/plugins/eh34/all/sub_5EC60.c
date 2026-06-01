__int64 __fastcall sub_5EC60(__int64 a1, _QWORD *a2, double a3, double a4, double a5, double a6)
{
  unsigned __int64 v6; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  __m128i v11; // xmm0
  _QWORD *v13; // rdi
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64); // rdx
  __int64 (__fastcall *v16)(__int64); // rax
  _QWORD *v17; // rdi
  __int32 v18; // r12d
  _QWORD *v19; // rdi
  __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int64 v30; // rdx
  __m128i v31; // xmm0
  unsigned __int64 v32; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-80h]
  char v34; // [rsp+40h] [rbp-78h]
  __m128i v35; // [rsp+50h] [rbp-68h] BYREF
  __m128i v36; // [rsp+60h] [rbp-58h] BYREF
  __m128i v37; // [rsp+70h] [rbp-48h] BYREF
  __int64 v38; // [rsp+80h] [rbp-38h]
  unsigned __int64 v39; // [rsp+88h] [rbp-30h]

  v6 = a2[1];
  v39 = __readfsqword(0x28u);
  if ( v6 >= 0xFFFFFFFFFFFFFFF0LL )
  {
    sub_19A90((__int64)&v35, (__int64)"[%a,%a): bad range", a3, a4);
    v10 = v35.m128i_i64[0];
    v11 = _mm_loadu_si128((const __m128i *)&v35.m128i_u64[1]);
    goto LABEL_6;
  }
  sub_74B30(&v32, *a2 + 16LL, v6);
  if ( !v34 )
  {
    sub_19A90((__int64)&v35, (__int64)"[%a,%a): no associated segment", a3, a4);
    v10 = v35.m128i_i64[0];
    v11 = _mm_loadu_si128((const __m128i *)&v35.m128i_u64[1]);
    goto LABEL_6;
  }
  if ( v6 + 15 < v33 && v6 + 15 >= v32 )
  {
    v13 = (_QWORD *)*a2;
    v14 = a2[1];
    v38 = 0;
    v35 = 0;
    v15 = sub_15A20;
    v36 = 0;
    v37 = 0;
    v16 = *(__int64 (__fastcall **)(__int64))(*v13 + 16LL);
    if ( v16 == sub_15A20 )
    {
      v17 = (_QWORD *)v13[1];
      v15 = *(__int64 (__fastcall **)(__int64))(*v17 + 16LL);
      if ( v15 != v16 )
        goto LABEL_16;
      v13 = (_QWORD *)v17[1];
      v16 = *(__int64 (__fastcall **)(__int64))(*v13 + 16LL);
      if ( v16 == v15 )
      {
        v17 = (_QWORD *)v13[1];
        v15 = *(__int64 (__fastcall **)(__int64))(*v17 + 16LL);
        if ( v15 == v16 )
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 (__fastcall *)(__int64), __int64, unsigned __int64))(*(_QWORD *)v17[1] + 16LL))(
                  v17[1],
                  v14,
                  v15,
                  v9,
                  v32);
LABEL_13:
          v19 = (_QWORD *)*a2;
          a2[1] += 4LL;
          v20 = sub_73540(v19);
          v21 = (_QWORD *)*a2;
          v22 = a2[1] + 4LL;
          v32 = v20;
          a2[1] = v22;
          v35.m128i_i64[1] = v20;
          v33 = v23;
          v36.m128i_i64[0] = v23;
          v24 = sub_73540(v21);
          v25 = (_QWORD *)*a2;
          a2[1] += 4LL;
          v36.m128i_i64[1] = v24;
          v37.m128i_i64[0] = v26;
          v27 = sub_73540(v25);
          v35.m128i_i32[0] = v18;
          v28 = _mm_load_si128(&v35);
          a2[1] += 4LL;
          *(__m128i *)a1 = v28;
          v29 = _mm_load_si128(&v36);
          v37.m128i_i64[1] = v27;
          v38 = v30;
          *(__m128i *)(a1 + 16) = v29;
          v31 = _mm_load_si128(&v37);
          *(_QWORD *)(a1 + 48) = v30;
          *(_BYTE *)(a1 + 56) = 0;
          *(__m128i *)(a1 + 32) = v31;
          return a1;
        }
LABEL_16:
        v18 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(__int64), __int64, unsigned __int64))v15)(
                v17,
                v14,
                v15,
                v9,
                v32);
        goto LABEL_13;
      }
    }
    v18 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(__int64), __int64, unsigned __int64))v16)(
            v13,
            v14,
            v15,
            v9,
            v32);
    goto LABEL_13;
  }
  sub_19A90((__int64)&v35, (__int64)"[%a,%a): does not fit in segment [%a,%a)", a3, a4, a5, a6);
  v10 = v35.m128i_i64[0];
  v11 = _mm_loadu_si128((const __m128i *)&v35.m128i_u64[1]);
LABEL_6:
  *(_QWORD *)a1 = v10;
  *(_BYTE *)(a1 + 56) = 1;
  *(__m128i *)(a1 + 8) = v11;
  return a1;
}

