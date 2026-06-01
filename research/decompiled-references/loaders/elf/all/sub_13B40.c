__int64 __fastcall sub_13B40(int a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, double a6, double a7)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r13
  int dword; // eax
  int v11; // r15d
  int v12; // r14d
  int v13; // eax
  __int64 v14; // rbx
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // eax
  int v20; // r9d
  unsigned int v21; // ebx
  unsigned __int16 v23; // bx
  __int16 word; // ax
  __int16 v25; // r14
  unsigned __int16 v26; // bx
  unsigned __int16 v27; // bx
  unsigned __int16 v28; // bx
  int v29; // [rsp+Ch] [rbp-3Ch]

  v7 = *(_QWORD *)(a2 + 4);
  v8 = *a2;
  v9 = *(_QWORD *)(a2 + 20);
  if ( (_DWORD)v8 == 1 )
  {
    word = get_word(v7);
    if ( (int)v9 + 0x8000 > (unsigned int)&algn_17FF8[7] )
    {
      v25 = word;
      sub_BFC0((__int64)"Possible fixup overflow at %a (target %a)", a6, a7);
      v14 = (unsigned __int16)(v25 + v9);
      v15 = 1;
    }
    else
    {
      v15 = 1;
      v14 = (unsigned __int16)(v9 + word);
    }
  }
  else
  {
    if ( (_DWORD)v8 != 4 )
    {
      dword = get_dword(v7, a2, a3, a4, a5);
      v11 = dword;
      switch ( v8 )
      {
        case 0LL:
          return 0;
        case 2LL:
          v20 = 4;
          v21 = v9 + dword;
          goto LABEL_6;
        case 3LL:
          if ( (unsigned int)(v9 + 0x800000) > 0x17FFFFF )
            sub_BFC0((__int64)"Possible fixup overflow at %a (target %a)", a6, a7);
          v20 = 4;
          v21 = v11 & 0xFF000000 | (v9 + v11) & 0xFFFFFF;
          goto LABEL_6;
        case 5LL:
          v26 = dword + (((int)v9 - (int)v7) >> 2);
          LOWORD(dword) = 0;
          v21 = dword | v26;
          auto_mark_range(v7, v7 + 1, 20);
          v20 = 1;
          goto LABEL_6;
        case 6LL:
          v21 = dword & 0xFF000000 | (dword + (((int)v9 - (int)v7) >> 2)) & 0xFFFFFF;
          auto_mark_range(v7, v7 + 1, 20);
          v20 = 4;
          goto LABEL_6;
        case 7LL:
          v27 = dword + WORD1(v9);
          LOWORD(dword) = 0;
          v21 = dword | v27;
          goto LABEL_21;
        case 8LL:
          v28 = dword + WORD1(v9);
          LOWORD(dword) = 0;
          v21 = v28 | dword;
LABEL_21:
          auto_mark_range(v7, v7 + 1, 20);
          v20 = 7;
          goto LABEL_6;
        case 9LL:
        case 10LL:
          v23 = dword + v9;
          LOWORD(dword) = 0;
          v21 = dword | v23;
          auto_mark_range(v7, v7 + 1, 20);
          v20 = 9;
          goto LABEL_6;
        default:
          return 2;
      }
    }
    v12 = (unsigned __int16)get_word(v7);
    v13 = v12;
    LOBYTE(v13) = 0;
    v14 = v13 | (unsigned int)(unsigned __int8)(v12 + (((int)v9 - (int)v7) >> 2));
    auto_mark_range(v7, v7 + 1, 20);
    v15 = 13;
  }
  v29 = v15;
  put_word(v7, v14);
  v19 = get_dword(v7, v14, v16, v17, v18);
  v20 = v29;
  v21 = v19;
LABEL_6:
  sub_42050(a1, v7, v9, v21, 0, v20, 0, 0, 0);
  return 0;
}
