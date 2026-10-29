__int64 __fastcall sub_8C60(_QWORD *a1, const __m128i *a2)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // kr08_8
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v7; // rax
  __int16 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // bl
  char *v15; // rsi
  void (__fastcall *v16)(_QWORD *, char *, __int64); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i v25; // [rsp+0h] [rbp-458h] BYREF
  __m128i v26; // [rsp+10h] [rbp-448h]
  __int64 v27; // [rsp+20h] [rbp-438h]
  char v28; // [rsp+30h] [rbp-428h] BYREF
  char v29; // [rsp+31h] [rbp-427h] BYREF
  unsigned __int64 v30; // [rsp+438h] [rbp-20h]

  v30 = __readfsqword(0x28u);
  v3 = v2;
  v4 = a1;
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
      v7 = sub_7C10((__int64)(a1 + 28), (__int64)a2);
      if ( v7 == -1 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
        (*(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 24LL))(a1, a2, 160);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
      }
      else
      {
        sub_8B20((__int64)a1, v7, (__int64)a2, 1);
      }
      return 1;
    case 3:
      v8 = a2->m128i_i16[3];
      if ( (unsigned __int16)v8 > 0x19u )
      {
        (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "<bad indirect>", 18);
        return 1;
      }
      v9 = a2[2].m128i_i64[0];
      v25 = _mm_loadu_si128(a2);
      v27 = v9;
      v26 = _mm_loadu_si128(a2 + 1);
      if ( v8 == 24 )
      {
        if ( !(unsigned __int8)is_off()
          && !(unsigned __int8)is_stkvar()
          && !(unsigned __int8)is_enum()
          && !(unsigned __int8)is_stroff() )
        {
          sub_8780();
          (*(void (__fastcall **)(_QWORD *, char *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*a1 + 88LL))(
            a1,
            &v28,
            v21,
            v22,
            v23,
            v24,
            v25.m128i_i64[0],
            v25.m128i_i64[1],
            v26.m128i_i64[0],
            v26.m128i_i64[1],
            v27);
          return 1;
        }
        v25.m128i_i16[3] = 0;
        sub_8780();
        v14 = 0;
        (*(void (__fastcall **)(_QWORD *, char *, __int64, __int64, __int64, __int64, __int64, __int64, _QWORD, __int64, __int64))(*a1 + 88LL))(
          a1,
          &v28,
          v17,
          v18,
          v19,
          v20,
          v25.m128i_i64[0],
          v25.m128i_i64[1],
          0,
          v26.m128i_i64[1],
          v27);
      }
      else
      {
        sub_8780();
        (*(void (__fastcall **)(_QWORD *, char *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*a1 + 88LL))(
          a1,
          &v28,
          v10,
          v11,
          v12,
          v13,
          v25.m128i_i64[0],
          v25.m128i_i64[1],
          v26.m128i_i64[0],
          v26.m128i_i64[1],
          v27);
        if ( (unsigned __int16)v8 > 7u )
          return 1;
        v14 = (unsigned __int16)v8 > 5u;
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      (*(void (__fastcall **)(_QWORD *, __m128i *, __int64))(*a1 + 24LL))(a1, &v25, 192);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      if ( v14 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 37);
      return 1;
    case 5:
      if ( *((_WORD *)a1 + 124) != 85 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      if ( (*((_BYTE *)a1 + 252) & 0x40) != 0 )
      {
        v25.m128i_i16[0] = a2->m128i_i64[1];
        print_fpval();
        v15 = &v28;
        v16 = *(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL);
        if ( v28 == 32 )
LABEL_25:
          v15 = &v29;
        v16(v4, v15, 12);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, const __m128i *, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      }
      return 1;
    case 7:
      v5 = sub_7C00(a1 + 28, (__int64)a2);
      sub_8B20((__int64)a1, v5, (__int64)a2, 0);
      return 1;
    default:
      v4 = v3;
      if ( under_debugger )
        BUG();
      v16 = (void (__fastcall *)(_QWORD *, char *, __int64))interr();
      goto LABEL_25;
  }
}

