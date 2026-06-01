__int64 __fastcall sub_389D0(_QWORD *a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax
  char **v5; // rdx
  __int64 v6; // rax
  const char *v7; // rsi
  __int64 v8; // rax
  _UNKNOWN **v9; // rdx
  __int64 v10; // rax
  unsigned __int8 v11; // dl
  char v12; // cl
  __int64 v13; // rdx
  bool v14; // zf
  char *v15; // rcx
  char v16; // dl
  int v17; // eax
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rsi
  char *v21; // rcx
  __m128i v22; // [rsp+0h] [rbp-68h]
  __m128i v23; // [rsp+10h] [rbp-58h]
  _BYTE v24[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v2 = *(_BYTE *)(a2 + 33);
  v25 = __readfsqword(0x28u);
  switch ( v2 )
  {
    case 9:
      v5 = off_712A0;
      v6 = *(_QWORD *)(a2 + 8) & 0xFLL;
      goto LABEL_4;
    case 10:
      v6 = *(_QWORD *)(a2 + 8);
      if ( (unsigned int)v6 > 0x13 )
        goto LABEL_2;
      v6 = (unsigned int)v6;
      v5 = (char **)&off_71200;
LABEL_4:
      v7 = v5[v6];
LABEL_5:
      result = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      break;
    case 11:
      if ( *((_WORD *)a1 + 124) == 692 )
      {
        v8 = *(_QWORD *)(a2 + 8) & 7LL;
        v9 = &off_71100;
      }
      else
      {
        v8 = *(_QWORD *)(a2 + 8) & 0x1FLL;
        v9 = &off_71000;
      }
      return (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 56LL))(a1, v9[v8], 33);
    case 12:
      v10 = *(_QWORD *)(a2 + 8) & 3LL;
      v11 = *(_BYTE *)(a2 + 8) & 0x1F;
      v12 = v11 >> 4;
      v13 = (v11 >> 2) & 3;
      if ( (_DWORD)v10 == (_DWORD)v13 )
      {
        v14 = v12 == 0;
        v21 = "-s";
        if ( v14 )
          v21 = "s";
        v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
        v23 = v22;
      }
      else
      {
        v14 = v12 == 0;
        v15 = "s";
        if ( !v14 )
          v15 = "-s";
        v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"0", (__m128i)(unsigned __int64)"0");
        v23 = v22;
        v22.m128i_i64[v13] = (__int64)v15;
      }
      v22.m128i_i64[v10] = (__int64)"c";
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      v16 = *((_BYTE *)a1 + 256);
      v17 = 3;
      if ( v16 != 116 )
        v17 = 2 * (v16 != 112) + 2;
      v18 = v17;
      v19 = 0;
      do
      {
        if ( !v19 )
        {
          v19 = 1;
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v22.m128i_i64[0], 33);
        }
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
        v20 = v22.m128i_i64[v19++];
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v20, 33);
      }
      while ( v19 != v18 );
      goto LABEL_21;
    case 13:
      v7 = "wb";
      if ( !*(_QWORD *)(a2 + 8) )
        v7 = "wt";
      goto LABEL_5;
    case 20:
      qsnprintf(v24, 20, "%s%u", "$w", *(unsigned __int16 *)(a2 + 6));
      (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v24, 33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      goto LABEL_21;
    case 21:
      qsnprintf(v24, 20, "%s%u", "$w", *(unsigned __int16 *)(a2 + 6));
      (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v24, 33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(int *)(a2 + 8)),
        33);
LABEL_21:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
      break;
    default:
LABEL_2:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 4);
      break;
  }
  return result;
}
