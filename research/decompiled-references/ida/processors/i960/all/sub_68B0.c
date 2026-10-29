__int64 __fastcall sub_68B0(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  _QWORD *v7; // rbx
  const __m128i *v8; // rbp
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  const __m128i *v12; // kr00_8
  _QWORD *v13; // kr08_8
  _QWORD *v14; // rbx
  const __m128i *v15; // rbp
  double v16; // xmm0_8
  double v17; // xmm0_8
  __int64 (__fastcall *v18)(_QWORD *, char); // rax
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+10h] [rbp-48h]
  __int64 v28; // [rsp+18h] [rbp-40h]
  __int64 v29; // [rsp+20h] [rbp-38h]
  unsigned __int64 v30; // [rsp+28h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v12 = v8;
  v13 = v7;
  v14 = (_QWORD *)a1;
  v15 = (const __m128i *)a2;
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      sub_67A0((_QWORD *)a1, *(unsigned __int16 *)(a2 + 6), a3);
      return 1;
    case 2:
    case 7:
      v21 = sub_6300((_QWORD *)(a1 + 224), *(_QWORD *)(a2 + 16));
      sub_67E0((_QWORD *)a1, a2, v21, 1);
      return 1;
    case 3:
      goto LABEL_4;
    case 4:
      if ( *(_QWORD *)(a2 + 16)
        || (unsigned __int8)is_off()
        || (unsigned __int8)is_stkvar()
        || (unsigned __int8)is_enum()
        || (unsigned __int8)is_stroff() )
      {
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 196);
      }
LABEL_4:
      if ( *(_BYTE *)(a2 + 6) != 0xFF )
      {
        v16 = (*(double (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
        sub_67A0((_QWORD *)a1, *(unsigned __int16 *)(a2 + 6), v16);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
      }
      if ( *(_BYTE *)(a2 + 32) == 0xFF )
        return 1;
      v17 = (*(double (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
      sub_67A0((_QWORD *)a1, *(char *)(a2 + 32), v17);
      if ( *(_BYTE *)(a2 + 33) != 1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 9);
        v18 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v18 == sub_6570 )
        {
          v9 = *(_QWORD *)(a1 + 32);
          if ( v9 )
          {
            v10 = v9 + 1;
            v11 = *(_QWORD *)(a1 + 32);
            --v9;
          }
          else
          {
            v11 = 1;
            v10 = 2;
          }
          v19 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v10 )
          {
LABEL_30:
            v22 = qvector_reserve();
            v14[3] = v22;
            v19 = v22;
          }
          v14[4] = v10;
          *(_BYTE *)(v19 + v9) = 42;
          *(_BYTE *)(v14[3] + v11) = 0;
        }
        else
        {
          v18((_QWORD *)a1, 42);
        }
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v14 + 104LL))(v14, v15[2].m128i_i8[1], 10);
        (*(void (__fastcall **)(_QWORD *, __int64))(*v14 + 72LL))(v14, 9);
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*v14 + 32LL))(v14, 93);
      return 1;
    case 5:
      if ( *(_WORD *)(a1 + 248) != 67
        || !(unsigned __int8)is_off() && (unsigned __int8)is_defarg()
        || (v23 = *(_QWORD *)(a2 + 8),
            v24 = v15[2].m128i_i64[0],
            v26 = _mm_loadu_si128(v15),
            v29 = v24,
            v28 = _mm_loadu_si128(v15 + 1).m128i_i64[1],
            v27 = v23,
            v25 = sub_6300((_QWORD *)(a1 + 224), v23),
            !(unsigned __int8)sub_67E0((_QWORD *)a1, (__int64)&v26, v25, 0)) )
      {
        (*(void (__fastcall **)(__int64, const __m128i *, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64))(*(_QWORD *)a1 + 24LL))(
          a1,
          v15,
          0,
          a5,
          a6,
          a7,
          v26.m128i_i64[0],
          v26.m128i_i64[1],
          v27,
          v28,
          v29,
          v30);
      }
      return 1;
    default:
      v14 = v13;
      v15 = v12;
      if ( under_debugger )
        BUG();
      interr();
      goto LABEL_30;
  }
}

