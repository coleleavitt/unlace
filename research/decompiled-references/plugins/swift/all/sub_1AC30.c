__int64 __fastcall sub_1AC30(__int64 a1, __int64 *a2, unsigned __int64 a3, __m128i a4, double a5, double a6, __m128 a7)
{
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v10; // r12
  int v11; // r13d
  char byte; // al
  char v13; // r14
  __int64 v15; // r10
  unsigned __int64 v16; // rdx
  __int64 v17; // r11
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v22; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+28h] [rbp-40h]

  v7 = a3;
  v8 = -1;
  v10 = getseg(a3);
  v11 = *(_DWORD *)(a1 + 240) & 4;
  if ( v7 >= *(_QWORD *)(v10 + 8) )
  {
LABEL_21:
    sub_CB10((__int64)"bad mangled strlit at %a (not zero-terminated)\n", *(double *)a4.m128i_i64);
    return 0;
  }
  while ( 1 )
  {
    byte = get_byte(v7);
    v13 = byte;
    if ( v11 )
      break;
    if ( !byte )
      return 1;
    if ( byte == -1 )
      goto LABEL_20;
    if ( (unsigned __int8)(byte - 1) <= 1u )
    {
LABEL_35:
      if ( !(unsigned __int8)sub_1A720(a1, a2, v13, v7 + 1, a4, a5, a6, a7) )
        return 0;
      v7 += 4LL;
      goto LABEL_20;
    }
    if ( (unsigned __int8)(byte - 1) <= 0x1Eu )
      goto LABEL_9;
    if ( v8 == -1 )
      v8 = v7;
LABEL_17:
    v15 = a2[1];
    if ( v15 )
    {
      v16 = v15 + 1;
      v17 = a2[1];
      v18 = *a2;
      --v15;
      if ( a2[2] < v16 )
        goto LABEL_23;
    }
    else
    {
      v18 = *a2;
      v17 = 1;
      v16 = 2;
      if ( (unsigned __int64)a2[2] < 2 )
      {
LABEL_23:
        v24 = v15;
        v23 = v17;
        v22 = v16;
        v19 = qvector_reserve(a2, v18, v16, 1);
        v15 = v24;
        v17 = v23;
        *a2 = v19;
        v16 = v22;
        v18 = v19;
      }
    }
    a2[1] = v16;
    *(_BYTE *)(v18 + v15) = v13;
    *(_BYTE *)(*a2 + v17) = 0;
LABEL_20:
    if ( ++v7 >= *(_QWORD *)(v10 + 8) )
      goto LABEL_21;
  }
  while ( 1 )
  {
    if ( !v13 )
    {
      v20 = v7 + 1 - v8;
      if ( v8 == -1 )
      {
        v8 = v7;
        v20 = 1;
      }
      if ( !(unsigned __int8)create_strlit(v8, v20, 0) || a3 == v8 )
        return 1;
LABEL_29:
      if ( (~((unsigned __int16)get_flags_ex(v8, 4) >> 8) & 0xC0) == 0 )
        set_name(v8, "", 256);
      if ( !v13 )
        return 1;
      if ( v13 != -1 )
      {
        if ( (unsigned __int8)(v13 - 1) > 1u )
          goto LABEL_9;
        goto LABEL_34;
      }
      v8 = -1;
      goto LABEL_20;
    }
    if ( v8 == -1 )
      break;
    if ( (unsigned __int8)(v13 - 1) <= 0x1Eu )
    {
      if ( !(unsigned __int8)create_strlit(v8, v7 - v8, 0) || a3 == v8 )
      {
        if ( (unsigned __int8)(v13 - 1) > 1u )
          goto LABEL_9;
        goto LABEL_34;
      }
      goto LABEL_29;
    }
    if ( v13 != -1 )
      goto LABEL_17;
    if ( (unsigned __int8)create_strlit(v8, v7 - v8, 0) && a3 != v8 )
      goto LABEL_29;
LABEL_40:
    if ( ++v7 >= *(_QWORD *)(v10 + 8) )
      goto LABEL_21;
    v8 = -1;
    v13 = get_byte(v7);
  }
  if ( v13 == -1 )
    goto LABEL_40;
  if ( (unsigned __int8)(v13 - 1) <= 1u )
  {
LABEL_34:
    v8 = -1;
    goto LABEL_35;
  }
  if ( (unsigned __int8)(v13 - 1) > 0x1Eu )
  {
    v8 = v7;
    goto LABEL_17;
  }
LABEL_9:
  sub_CB10((__int64)"unsupported symbolic reference in the mangled strlit at %a\n", *(double *)a4.m128i_i64);
  return 0;
}
