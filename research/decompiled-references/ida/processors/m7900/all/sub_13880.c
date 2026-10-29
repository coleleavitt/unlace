__int64 __fastcall sub_13880(_QWORD *a1, const __m128i *a2)
{
  __int8 v3; // al
  void (__fastcall *v4)(_QWORD *, const __m128i *, __int64); // rcx
  __int64 v5; // rsi
  __int16 v7; // ax
  __int8 v8; // al
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // rsi
  __int64 v13; // rax
  __int64 sreg; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // [rsp+0h] [rbp-48h] BYREF
  __m128i v20; // [rsp+10h] [rbp-38h]
  __int64 v21; // [rsp+20h] [rbp-28h]
  unsigned __int64 v22; // [rsp+28h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  switch ( a2->m128i_i8[1] )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * a2->m128i_u16[3]),
        33);
      return 1;
    case 2:
      v8 = a2[2].m128i_i8[1];
      if ( (unsigned __int8)(v8 - 111) > 1u )
      {
        switch ( a2[2].m128i_i8[1] )
        {
          case 0:
          case 1:
          case 2:
            v13 = a2[2].m128i_i64[0];
            v19 = _mm_loadu_si128(a2);
            v21 = v13;
            v20 = _mm_loadu_si128(a2 + 1);
            sreg = get_sreg();
            v20.m128i_i64[0] = sub_12B00((__int64)a1, v20.m128i_i64[0], sreg);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __m128i *, __int64))(*a1 + 120LL))(
                    a1,
                    &v19,
                    v20.m128i_i64[0] + 16LL * a1[28]) )
              (*(void (__fastcall **)(_QWORD *, __m128i *, __int64))(*a1 + 24LL))(a1, &v19, 137);
            return 1;
          case 3:
          case 5:
            goto LABEL_38;
          case 4:
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
            v17 = a2[2].m128i_i64[0];
            v19 = _mm_loadu_si128(a2);
            v21 = v17;
            v20 = _mm_loadu_si128(a2 + 1);
            v18 = get_sreg();
            v20.m128i_i64[0] = sub_12B00((__int64)a1, v20.m128i_i64[0], v18);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __m128i *, __int64))(*a1 + 120LL))(
                    a1,
                    &v19,
                    v20.m128i_i64[0] + 16LL * a1[28]) )
              (*(void (__fastcall **)(_QWORD *, __m128i *, __int64))(*a1 + 24LL))(a1, &v19, 137);
            goto LABEL_45;
          case 6:
          case 7:
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 76);
LABEL_38:
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
            v15 = a2[2].m128i_i64[0];
            v19 = _mm_loadu_si128(a2);
            v21 = v15;
            v20 = _mm_loadu_si128(a2 + 1);
            v16 = get_sreg();
            v20.m128i_i64[0] = sub_12B00((__int64)a1, v20.m128i_i64[0], v16);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __m128i *, __int64))(*a1 + 120LL))(
                    a1,
                    &v19,
                    v20.m128i_i64[0] + 16LL * a1[28]) )
              (*(void (__fastcall **)(_QWORD *, __m128i *, __int64))(*a1 + 24LL))(a1, &v19, 137);
            goto LABEL_10;
          default:
            return 1;
        }
      }
      if ( v8 == 112 )
        sub_12D20(a1);
      else
        sub_13280(a1);
      return 1;
    case 3:
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * a2->m128i_u16[3]),
        0);
      return 1;
    case 5:
      v9 = *((unsigned __int16 *)a1 + 124);
      if ( (_WORD)v9 == 57 )
        goto LABEL_57;
      if ( (unsigned __int16)v9 <= 0x39u )
      {
        if ( (v9 & 0xFFFD) == 0x2D )
        {
LABEL_50:
          (*(void (__fastcall **)(_QWORD *, const __m128i *, _QWORD))(*a1 + 24LL))(a1, a2, 0);
          return 1;
        }
LABEL_49:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
        goto LABEL_50;
      }
      if ( (_WORD)v9 == 100 )
      {
LABEL_26:
        sub_129C0((__int64)a1, a2->m128i_u64[1]);
        return 1;
      }
      LOWORD(v9) = v9 - 131;
      if ( (unsigned __int16)v9 > 0x3Cu )
        goto LABEL_49;
      v10 = 0x1000000028000405LL;
      if ( _bittest64(&v10, v9) )
        goto LABEL_26;
      if ( (_WORD)v9 != 36 )
        goto LABEL_49;
LABEL_57:
      sub_12A80((__int64)a1, a2->m128i_i64[1]);
      return 1;
    case 7:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 120LL))(
              a1,
              a2,
              a2[1].m128i_i64[0] + 16LL * a1[28]) )
        (*(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 24LL))(a1, a2, 129);
      return 1;
    case 8:
      if ( a2[2].m128i_i8[1] == 1 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      v3 = a2[2].m128i_i8[0];
      v4 = *(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 24LL);
      if ( v3 == 2 )
      {
        v4(a1, a2, 64);
      }
      else if ( v3 == 1 )
      {
        v4(a1, a2, 32);
      }
      else
      {
        v4(a1, a2, 0);
      }
      if ( a2[2].m128i_i8[1] == 1 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
        v5 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 48LL);
LABEL_9:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v5, 33);
LABEL_10:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      }
      return 1;
    case 9:
      switch ( a2[2].m128i_i8[1] )
      {
        case 0:
        case 1:
        case 2:
          v11 = *a1;
          v12 = &byte_19067;
          goto LABEL_31;
        case 3:
        case 4:
          v11 = *a1;
          v12 = byte_19078;
LABEL_31:
          (*(void (__fastcall **)(_QWORD *, char *, __int64))(v11 + 56))(a1, v12, 33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 120LL))(
                  a1,
                  a2,
                  a2[1].m128i_i64[0] + 16LL * a1[28]) )
            (*(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 24LL))(a1, a2, 193);
          return 1;
        case 5:
          goto LABEL_41;
        case 6:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 76);
LABEL_41:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 120LL))(
                  a1,
                  a2,
                  a2[1].m128i_i64[0] + 16LL * a1[28]) )
            (*(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 24LL))(a1, a2, 129);
          goto LABEL_10;
        case 7:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 120LL))(
                  a1,
                  a2,
                  a2[1].m128i_i64[0] + 16LL * a1[28]) )
            (*(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 24LL))(a1, a2, 129);
LABEL_45:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v5 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 24LL);
          goto LABEL_9;
        default:
          return 1;
      }
    case 0xA:
      v7 = *((_WORD *)a1 + 124);
      if ( v7 == 126 )
      {
        (*(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 24LL))(a1, a2, 32);
      }
      else if ( (unsigned __int16)(v7 - 146) > 1u )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
        (*(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 24LL))(a1, a2, 1);
      }
      else
      {
        sub_12940((__int64)a1, a2->m128i_i64[1]);
      }
      return 1;
    default:
      return 1;
  }
}

