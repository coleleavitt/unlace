__int64 __fastcall sub_22BA0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, double a7)
{
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int16 v11; // r15
  unsigned __int8 byte; // al
  unsigned __int8 v13; // r9
  char v14; // r8
  char v15; // r10
  int v16; // r14d
  __int64 v17; // rcx
  int v18; // r8d
  unsigned __int16 v19; // ax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  int dword; // eax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  unsigned __int16 word; // ax
  __int64 v33; // rdx
  char v34; // [rsp+Dh] [rbp-3Bh]
  char v35; // [rsp+Eh] [rbp-3Ah]
  unsigned __int8 v36; // [rsp+Fh] [rbp-39h]

  v7 = *(_QWORD *)(a2 + 4);
  v8 = *(_QWORD *)(a2 + 20);
  v9 = (unsigned __int8)*(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0xF8) == 0 )
  {
    if ( (unsigned int)v9 > 5 )
    {
      v11 = 13;
      byte = get_byte(*(_QWORD *)(a2 + 4));
      v13 = 0;
      v14 = 1;
      v15 = 0;
      v16 = byte;
      goto LABEL_7;
    }
    if ( (unsigned int)(v9 - 1) <= 3 )
    {
      get_word(*(_QWORD *)(a2 + 4));
      return 0;
    }
    goto LABEL_19;
  }
  if ( (unsigned int)(v9 - 10) > 5 )
  {
LABEL_19:
    v11 = 4;
    dword = get_dword(*(_QWORD *)(a2 + 4), a2, a3, a4, a5);
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = dword;
    goto LABEL_7;
  }
  word = get_word(*(_QWORD *)(a2 + 4));
  v33 = 43032;
  v13 = _bittest64(&v33, v9);
  if ( v13 )
  {
    v15 = v13;
    v14 = 0;
    v11 = 1;
    v16 = (unsigned __int16)__ROL2__(word, 8);
  }
  else
  {
    v16 = word;
    v14 = 0;
    v15 = 1;
    v11 = 1;
  }
LABEL_7:
  switch ( v9 )
  {
    case 0uLL:
    case 1uLL:
    case 2uLL:
    case 3uLL:
    case 4uLL:
      return 0;
    case 6uLL:
    case 0x12uLL:
      v26 = v16;
      v16 = 0;
      v17 = v8 + v26;
      if ( v14 )
        goto LABEL_21;
      goto LABEL_12;
    case 7uLL:
      v17 = v8 - 1 - v7;
      goto LABEL_11;
    case 0xAuLL:
    case 0xBuLL:
    case 0xEuLL:
    case 0xFuLL:
      if ( (int)v8 + 0x8000 > (unsigned int)&algn_17FF8[7] )
      {
        v36 = v13;
        v35 = v14;
        v34 = v15;
        sub_BFC0((__int64)"Possible fixup overflow at %a (target %a)", a6, a7);
        v13 = v36;
        v14 = v35;
        v15 = v34;
      }
      v17 = (unsigned __int16)(v16 + v8);
LABEL_11:
      if ( v14 )
      {
LABEL_21:
        v27 = (unsigned int)v17;
        put_byte(v7, (unsigned int)v17);
        v31 = get_dword(v7, v27, v28, v29, v30);
        v18 = 0;
        LODWORD(v17) = v31;
      }
      else
      {
LABEL_12:
        v18 = v16;
        if ( v15 )
        {
          v19 = __ROL2__(v17, 8);
          if ( v13 )
            v17 = v19;
          v20 = v17;
          put_word(v7, v17);
          v24 = get_dword(v7, v20, v21, v22, v23);
          v18 = 0;
          LODWORD(v17) = v24;
        }
      }
      sub_42050(a1, v7, v8, v17, v18, v11, 0, 0, 0);
      result = 0;
      break;
    default:
      result = 2;
      break;
  }
  return result;
}
