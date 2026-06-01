__int64 __fastcall sub_4A00(_QWORD *a1, __m128i *a2, char a3)
{
  unsigned __int8 v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  int v21; // [rsp+0h] [rbp-28h] BYREF
  int v22; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  sub_4100(a1, &v21);
  v6 = v21;
  a2->m128i_i8[0] = v21;
  if ( v6 > 0x3Au )
  {
    if ( v6 == 0xE5 )
    {
      v7 = a1[3];
      if ( a1[4] < (unsigned __int64)(v7 + 16) )
LABEL_30:
        sub_3890((__int64)"couldn't read template type @0x%llx", v7);
      a2[1] = _mm_loadu_si128((const __m128i *)(a1[1] + v7));
      v8 = a1[3];
      v9 = v8 + 16;
      goto LABEL_6;
    }
LABEL_27:
    sub_3890((__int64)"unexpected opcode in init expression @ 0x%llx", a1[3]);
  }
  if ( v6 <= 0x1Bu )
  {
    if ( v6 == 10 )
      return 1;
    goto LABEL_27;
  }
  switch ( v6 )
  {
    case 0x1Cu:
      v15 = a1[1];
      v16 = v15 + a1[3];
      v17 = a1[4] + v15;
      if ( v16 >= v17 || (v14 = sub_E440(v16, v17, &a2[1])) == 0 )
        sub_3890((__int64)"failed to read init expression: global get index");
      goto LABEL_18;
    case 0x37u:
      v18 = a1[1];
      v19 = v18 + a1[3];
      v20 = a1[4] + v18;
      if ( v19 >= v20 || (v14 = sub_E4B0(v19, v20, &a2[1])) == 0 )
        sub_3890((__int64)"failed to read init expression: 32 bit int");
      goto LABEL_18;
    case 0x38u:
      v11 = a1[1];
      v12 = v11 + a1[3];
      v13 = a1[4] + v11;
      if ( v12 >= v13 || (v14 = sub_E540(v12, v13, &a2[1])) == 0 )
        sub_3890((__int64)"failed to read init expression: 64 bit int");
LABEL_18:
      v8 = a1[3];
      v9 = v8 + v14;
      break;
    case 0x39u:
      v7 = a1[3];
      if ( a1[4] < (unsigned __int64)(v7 + 4) )
        goto LABEL_30;
      a2[1].m128i_i32[0] = *(_DWORD *)(a1[1] + v7);
      v8 = a1[3];
      v9 = v8 + 4;
      break;
    case 0x3Au:
      v7 = a1[3];
      if ( a1[4] < (unsigned __int64)(v7 + 8) )
        goto LABEL_30;
      a2[1].m128i_i64[0] = *(_QWORD *)(a1[1] + v7);
      v8 = a1[3];
      v9 = v8 + 8;
      break;
    default:
      goto LABEL_27;
  }
LABEL_6:
  a1[5] = v8;
  a1[3] = v9;
  if ( a3 && a2->m128i_i8[0] != 55 && a2->m128i_i8[0] != 28 )
    sub_3890((__int64)"expected i32 init expression");
  sub_4100(a1, &v22);
  if ( v22 != 10 )
    sub_3890((__int64)"expected END opcode after init expression");
  return 1;
}
