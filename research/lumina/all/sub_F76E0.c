__int64 __fastcall sub_F76E0(const __m128i *a1, __m128i *a2, _DWORD *a3)
{
  __int64 *v4; // rbp
  bool v5; // zf
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // r14
  __m128i *v9; // rax
  __int64 v10; // r9
  __m128i *v11; // rdx
  int v12; // eax
  __int32 v13; // eax
  __int64 v14; // rcx
  double v15; // xmm1_8
  time_t timer; // [rsp+18h] [rbp-B0h] BYREF
  _OWORD v18[2]; // [rsp+20h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+40h] [rbp-88h]
  __m128i v20; // [rsp+50h] [rbp-78h] BYREF
  __m128i v21; // [rsp+60h] [rbp-68h]
  __m128i v22; // [rsp+70h] [rbp-58h]
  __int64 v23; // [rsp+80h] [rbp-48h]
  unsigned __int64 v24; // [rsp+88h] [rbp-40h]

  v4 = (__int64 *)a2;
  v24 = __readfsqword(0x28u);
  v5 = a1[2].m128i_i8[8] == 0;
  v23 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( v5 )
    sub_C88C0((__int64)a1);
  if ( (unsigned __int64)(a1->m128i_i64[0] - 210866760000000LL) <= 0x1F3FA27E800LL )
  {
    v6 = 0;
    timer = a1->m128i_i64[0] / 1000 - 210866760000LL;
    if ( (_BYTE)word_241484 )
      goto LABEL_5;
LABEL_19:
    v8 = 0;
    goto LABEL_7;
  }
  v18[0] = _mm_load_si128(a1);
  v18[1] = _mm_load_si128(a1 + 1);
  si128 = _mm_load_si128(a1 + 2);
  sub_C8C60((__int64)v18);
  si128.m128i_i8[8] = 0;
  v6 = SDWORD2(v18[0]) % 4 - DWORD2(v18[0]) + 2000;
  DWORD2(v18[0]) = SDWORD2(v18[0]) % 4 + 2000;
  sub_C88C0((__int64)v18);
  timer = *(_QWORD *)&v18[0] / 1000LL - 210866760000LL;
  if ( !(_BYTE)word_241484 )
    goto LABEL_19;
LABEL_5:
  v7 = xmmword_2414F0(2);
  v8 = v7;
  if ( v7 )
    xmmword_241500(v7);
LABEL_7:
  v9 = (__m128i *)localtime(&timer);
  v11 = (__m128i *)(unsigned int)dword_241618;
  if ( dword_241618 )
  {
    if ( qword_241620 )
    {
      a2 = &v20;
      v12 = qword_241620(&timer, &v20);
      v11 = &v20;
      if ( !v12 )
      {
        v9 = &v20;
LABEL_11:
        v20 = _mm_loadu_si128(v9);
        v21 = _mm_loadu_si128(v9 + 1);
        v22 = _mm_loadu_si128(v9 + 2);
        v23 = v9[3].m128i_i64[0];
        if ( v8 )
          xmmword_241510(v8, a2, v11);
        v13 = v21.m128i_i32[1];
        v14 = a1->m128i_i64[0];
        a1[2].m128i_i32[2] = 16842752;
        a1[2].m128i_i8[12] = 0;
        a1[2].m128i_i8[14] = 0;
        a1->m128i_i32[2] = v13 + 1900 - v6;
        v15 = (double)v20.m128i_i32[0];
        a1->m128i_i32[3] = v21.m128i_i32[0] + 1;
        a1[1].m128i_i32[0] = v20.m128i_i32[3];
        a1[1].m128i_i32[1] = v20.m128i_i32[2];
        a1[1].m128i_i32[2] = v20.m128i_i32[1];
        *(double *)a1[2].m128i_i64 = (double)(v14 % 1000) * 0.001 + v15;
        return 0;
      }
    }
  }
  else if ( v9 )
  {
    goto LABEL_11;
  }
  if ( v8 )
    xmmword_241510(v8, a2, v11);
  *a3 = 1;
  sub_F11D0(*v4, "local time unavailable", -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v10);
  return 1;
}
