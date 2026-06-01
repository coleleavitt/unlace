__int64 __fastcall sub_73FB0(__int64 a1, _QWORD *a2, unsigned __int64 a3, double a4, double a5, double a6, double a7)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 (__fastcall *v13)(__int64); // rax
  _QWORD *v14; // rdi
  __int64 (__fastcall *v15)(__int64); // rdx
  _QWORD *v16; // rdi
  __int64 (__fastcall *v17)(__int64); // rax
  unsigned int v18; // eax
  __int64 v19; // rax
  _QWORD v20[2]; // [rsp+0h] [rbp-68h] BYREF
  char v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  __m128i v23; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a3 >= 0xFFFFFFFFFFFFFFFCLL )
  {
    sub_19A90((__int64)&v22, (__int64)"[%a,%a): bad range", a4, a5);
    v10 = v22;
    v11 = _mm_loadu_si128(&v23);
    goto LABEL_6;
  }
  sub_74B30(v20, a2 + 2, a3);
  if ( !v21 )
  {
    sub_19A90((__int64)&v22, (__int64)"[%a,%a): no associated segment", a4, a5);
    v10 = v22;
    v11 = _mm_loadu_si128(&v23);
    goto LABEL_6;
  }
  if ( a3 + 3 < v20[1] && a3 + 3 >= v20[0] )
  {
    v13 = *(__int64 (__fastcall **)(__int64))(*a2 + 16LL);
    if ( v13 == sub_15A20 )
    {
      v14 = (_QWORD *)a2[1];
      v15 = *(__int64 (__fastcall **)(__int64))(*v14 + 16LL);
      if ( v15 != v13 )
        goto LABEL_14;
      v16 = (_QWORD *)v14[1];
      v17 = *(__int64 (__fastcall **)(__int64))(*v16 + 16LL);
      if ( v17 != v15 )
      {
        v18 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))v17)(
                v16,
                a3,
                v15,
                v9,
                v20[0]);
        goto LABEL_13;
      }
      v14 = (_QWORD *)v16[1];
      v15 = *(__int64 (__fastcall **)(__int64))(*v14 + 16LL);
      if ( v15 == v17 )
        v18 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))(*(_QWORD *)v14[1] + 16LL))(
                v14[1],
                a3,
                v15,
                v9,
                v20[0]);
      else
LABEL_14:
        v18 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))v15)(
                v14,
                a3,
                v15,
                v9,
                v20[0]);
    }
    else
    {
      v18 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))v13)(
              a2,
              a3,
              sub_15A20,
              v9,
              v20[0]);
    }
LABEL_13:
    v19 = a2[8] + v18;
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)a1 = v19;
    return a1;
  }
  sub_19A90((__int64)&v22, (__int64)"[%a,%a): does not fit in segment [%a,%a)", a4, a5, a6, a7);
  v10 = v22;
  v11 = _mm_loadu_si128(&v23);
LABEL_6:
  *(_QWORD *)a1 = v10;
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v11;
  return a1;
}
