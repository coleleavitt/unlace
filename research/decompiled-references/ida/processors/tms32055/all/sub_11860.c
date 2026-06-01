__int64 __fastcall sub_11860(__int64 a1, const __m128i *a2)
{
  unsigned __int8 byte; // al
  int v5; // ecx
  int v6; // r13d
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r14
  unsigned __int8 v11; // al
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int8 *v15; // rcx
  char v16; // si
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  __int8 *v23; // rdx
  __int8 v24; // cl
  __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v31; // [rsp+18h] [rbp-F0h]
  const __m128i *v32; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v33[32]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+C8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 260) = -1;
  v32 = a2;
  v34 = 0;
  memset(v33, 0, sizeof(v33));
  byte = get_byte();
  v5 = v34;
  v33[(int)v34] = byte;
  LODWORD(v34) = v5 + 1;
  v6 = v33[SHIDWORD(v34)];
  ++HIDWORD(v34);
  v7 = netnode_altval();
  if ( !v7 )
  {
    LODWORD(v9) = 0;
    sub_115A0(a1, a2, (__int64)&qword_1CBC0, 0, (__int64)&v32, 8);
    if ( a2[1].m128i_i16[5] && a2[1].m128i_i16[4] )
    {
      netnode_supdel();
    }
    else if ( (v6 & 0xF8) == 0x88 )
    {
      v25 = a2[1].m128i_i64[0];
      v30 = 0;
      v31 = 0;
      if ( (unsigned __int8)sub_10090(v25, &v30, nullptr) )
      {
        v26 = (int)v31;
        if ( (unsigned __int64)(int)v31 > 0x20 )
          v26 = 32;
        if ( (_DWORD)v31 )
        {
          v27 = v30;
          v28 = 0;
          do
          {
            v33[v28] = *(unsigned __int8 *)(v27 + v28);
            ++v28;
          }
          while ( v28 < v26 );
        }
        v34 = (unsigned int)v26;
        sub_115A0(a1, a2, (__int64)&qword_1CBC0, 0, (__int64)&v32, 8);
        if ( !a2[1].m128i_i16[4] || a2[1].m128i_u16[5] != (_QWORD)v31 )
        {
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            qfree();
          }
          goto LABEL_9;
        }
        sub_117B0((__int64)a2);
        netnode_supset();
        LODWORD(v9) = a2[1].m128i_u16[5];
      }
      if ( !v30 )
        return (unsigned int)v9;
      goto LABEL_5;
    }
LABEL_9:
    sub_117B0((__int64)a2);
    if ( (unsigned __int8)v6 <= 0x5Fu && (v6 & 1) != 0 )
      a2[1].m128i_i8[12] |= 1u;
    v11 = get_byte();
    if ( v11 > 0x9Au )
    {
      if ( (unsigned __int8)(v11 + 100) <= 1u )
      {
        ++a2[1].m128i_i16[5];
        a2[1].m128i_i8[12] |= 2 * (v11 != 0x9C) + 2;
      }
    }
    else if ( v11 > 0x98u )
    {
      v21 = a2[1].m128i_u8[13];
      if ( (_BYTE)v21 )
      {
        v22 = 40LL * (v21 - 1);
        v23 = &a2->m128i_i8[v22];
        v24 = a2[2].m128i_i8[v22 + 9];
        if ( v24 == 1 )
        {
          v23[75] |= 0x10u;
          ++a2[1].m128i_i16[5];
        }
        else if ( v24 == 2 )
        {
          v23[41] = 11;
          a2[3].m128i_i32[(unsigned __int64)v22 / 4] = 9043968;
          v23[73] = 6;
          *((_QWORD *)v23 + 7) >>= 1;
          ++a2[1].m128i_i16[5];
        }
      }
    }
    else if ( v11 == 0x98 )
    {
      v12 = a2[1].m128i_u8[13];
      if ( (_BYTE)v12 )
      {
        v13 = v12 - 1;
        v14 = 10 * v13;
        v15 = &a2->m128i_i8[40 * v13];
        v16 = v15[41];
        if ( v16 == 2 )
        {
          if ( *((_WORD *)v15 + 24) == 137 && *((_WORD *)v15 + 25) == 136 && v15[73] == 1 )
          {
            v29 = 10 * v13;
            a2[3].m128i_i32[v29] = 0;
            a2[4].m128i_i8[v29 * 4 + 9] = 4;
            ++a2[1].m128i_i16[5];
          }
        }
        else if ( v16 == 1 && *((_WORD *)v15 + 23) == 67 && v15[73] == 9 )
        {
          v17 = *((_QWORD *)v15 + 6);
          v15[41] = 2;
          *((_QWORD *)v15 + 7) = v17;
          a2[3].m128i_i32[v14] = 0;
          v15[73] = 4;
          ++a2[1].m128i_i16[5];
        }
      }
    }
    if ( a2[1].m128i_i16[4] )
      LODWORD(v9) = a2[1].m128i_u16[5];
    return (unsigned int)v9;
  }
  v8 = a2[1].m128i_i64[0];
  v31 = 0;
  v30 = 0;
  if ( !(unsigned __int8)sub_10090(v8 - v7, nullptr, &v30) )
    goto LABEL_3;
  v18 = (int)v31;
  if ( (unsigned __int64)(int)v31 > 0x20 )
    v18 = 32;
  if ( (_DWORD)v31 )
  {
    v19 = v30;
    v20 = 0;
    do
    {
      v33[v20] = *(unsigned __int8 *)(v19 + v20);
      ++v20;
    }
    while ( v20 < v18 );
  }
  v34 = (unsigned int)v18;
  sub_115A0(a1, a2, (__int64)&qword_1CBC0, 0, (__int64)&v32, 8);
  if ( a2[1].m128i_i16[4] && (v9 = a2[1].m128i_u16[5], v9 == (_QWORD)v31) )
  {
    sub_117B0((__int64)a2);
    a2[1].m128i_i8[12] |= 1u;
  }
  else
  {
LABEL_3:
    LODWORD(v9) = 0;
  }
  if ( v30 )
  {
LABEL_5:
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  return (unsigned int)v9;
}

