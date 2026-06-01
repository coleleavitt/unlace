__int64 __fastcall sub_10500(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int8 v3; // bp
  __int64 next_byte; // rdx
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int8 v8; // al
  __int64 v9; // r15
  __int64 v10; // rsi
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  __int64 v14; // r13
  unsigned __int8 v15; // al
  _QWORD *v16; // rdx
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx
  _QWORD *v21; // rdx
  _QWORD *v22; // rdx
  _QWORD *v23; // rdx
  _QWORD *v24; // rdx
  _QWORD *v25; // rdx
  _QWORD *v26; // rdx
  unsigned __int8 v27; // [rsp+Fh] [rbp-39h]
  unsigned __int8 v28; // [rsp+Fh] [rbp-39h]

  v3 = ((__int64 (*)(void))insn_get_next_byte)();
  next_byte = (unsigned __int8)insn_get_next_byte(a1);
  if ( v3 >> 6 == 3 )
  {
    v27 = next_byte;
    v5 = (unsigned __int64)(unsigned __int8)insn_get_next_byte(a1) << 24;
    v6 = (unsigned __int64)(unsigned __int8)insn_get_next_byte(a1) << 16;
    v7 = (unsigned __int8)insn_get_next_byte(a1);
    v8 = insn_get_next_byte(a1);
    next_byte = v27;
    v9 = v7 << 8;
    v10 = v8;
  }
  else if ( v3 >> 6 )
  {
    v28 = next_byte;
    v9 = 0;
    v14 = (unsigned __int8)insn_get_next_byte(a1);
    v15 = insn_get_next_byte(a1);
    v5 = v14 << 24;
    next_byte = v28;
    v10 = 0;
    v6 = (unsigned __int64)v15 << 16;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v6 = 0;
    v5 = 0;
  }
  v11 = word_15140[v3];
  v12 = v6 | v5 | v9 | v10 | ((unsigned __int64)(unsigned __int8)next_byte << 32) | ((unsigned __int64)v3 << 40);
  *a2 = v12;
  if ( !(_WORD)v11 && v3 <= 0xEDu )
  {
    if ( v3 <= 0xA4u )
    {
      switch ( v3 )
      {
        case 7u:
          return word_1A820[(unsigned __int8)next_byte >> 4];
        case 0x47u:
          return word_1A840[(unsigned __int8)next_byte >> 4];
        case 1u:
          return word_15340[next_byte];
      }
    }
    else
    {
      switch ( v3 )
      {
        case 0xA5:
          v11 = word_198C0[next_byte & 0xF];
          break;
        case 0xA7:
          v19 = &unk_1CA80;
          v11 = 603;
          do
          {
            if ( (v12 & v19[1]) == *v19 )
              break;
            v11 = *((unsigned __int16 *)v19 + 20);
            v19 += 3;
          }
          while ( (_WORD)v11 );
          break;
        case 0xB2:
          v20 = &unk_19E00;
          v11 = 465;
          do
          {
            if ( (v12 & v20[1]) == *v20 )
              break;
            v11 = *((unsigned __int16 *)v20 + 20);
            v20 += 3;
          }
          while ( (_WORD)v11 );
          break;
        case 0xB3:
          v24 = &unk_1F2C0;
          v11 = 974;
          do
          {
            if ( (v12 & v24[1]) == *v24 )
              break;
            v11 = *((unsigned __int16 *)v24 + 20);
            v24 += 3;
          }
          while ( (_WORD)v11 );
          break;
        case 0xB9:
          v25 = &unk_1CD80;
          v11 = 1133;
          do
          {
            if ( (v12 & v25[1]) == *v25 )
              break;
            v11 = *((unsigned __int16 *)v25 + 20);
            v25 += 3;
          }
          while ( (_WORD)v11 );
          break;
        case 0xC0:
          v26 = &unk_19B20;
          v11 = 618;
          do
          {
            if ( (v12 & v26[1]) == *v26 )
              break;
            v11 = *((unsigned __int16 *)v26 + 20);
            v26 += 3;
          }
          while ( (_WORD)v11 );
          break;
        case 0xC2:
          v11 = word_1F2A0[next_byte & 0xF];
          break;
        case 0xC4:
          v11 = word_15540[next_byte & 0xF];
          break;
        case 0xC6:
          v11 = word_19B00[next_byte & 0xF];
          break;
        case 0xC8:
          v11 = word_198E0[next_byte & 0xF];
          break;
        case 0xCC:
          v11 = word_1A860[next_byte & 0xF];
          break;
        case 0xE3:
          v21 = &unk_1E6A0;
          v11 = 107;
          do
          {
            if ( (v12 & v21[1]) == *v21 )
              break;
            v11 = *((unsigned __int16 *)v21 + 20);
            v21 += 3;
          }
          while ( (_WORD)v11 );
          break;
        case 0xE5:
          v11 = word_19900[next_byte];
          break;
        case 0xE6:
          v22 = &unk_15560;
          v11 = 2066;
          do
          {
            if ( (v12 & v22[1]) == *v22 )
              break;
            v11 = *((unsigned __int16 *)v22 + 20);
            v22 += 3;
          }
          while ( (_WORD)v11 );
          break;
        case 0xE7:
          v23 = &unk_15B00;
          v11 = 1941;
          do
          {
            if ( (v12 & v23[1]) == *v23 )
              break;
            v11 = *((unsigned __int16 *)v23 + 20);
            v23 += 3;
          }
          while ( (_WORD)v11 );
          break;
        case 0xEB:
          v17 = &unk_1A880;
          v11 = 1460;
          do
          {
            if ( (v12 & v17[1]) == *v17 )
              break;
            v11 = *((unsigned __int16 *)v17 + 20);
            v17 += 3;
          }
          while ( (_WORD)v11 );
          break;
        case 0xEC:
          v18 = &unk_1B7C0;
          v11 = 229;
          do
          {
            if ( (v12 & v18[1]) == *v18 )
              break;
            v11 = *((unsigned __int16 *)v18 + 20);
            v18 += 3;
          }
          while ( (_WORD)v11 );
          break;
        case 0xED:
          v16 = &unk_205C0;
          v11 = 3;
          do
          {
            if ( (v12 & v16[1]) == *v16 )
              break;
            v11 = *((unsigned __int16 *)v16 + 20);
            v16 += 3;
          }
          while ( (_WORD)v11 );
          break;
        default:
          return v11;
      }
    }
  }
  return v11;
}

