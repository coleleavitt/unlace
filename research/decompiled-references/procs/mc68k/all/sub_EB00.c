__int64 __fastcall sub_EB00(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rdx
  int v14; // r13d
  char v15; // di
  __int64 v16; // rax
  __int64 v17; // rbx
  __int128 v18; // [rsp+0h] [rbp-198h] BYREF
  __int64 v19; // [rsp+10h] [rbp-188h]
  __int64 v20; // [rsp+18h] [rbp-180h]
  __int64 v21; // [rsp+20h] [rbp-178h]
  _BYTE v22[5]; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int8 v23; // [rsp+2Dh] [rbp-16Bh]
  unsigned __int16 v24; // [rsp+2Eh] [rbp-16Ah]
  __int64 v25; // [rsp+38h] [rbp-160h]
  __int64 v26; // [rsp+60h] [rbp-138h]
  _QWORD v27[6]; // [rsp+168h] [rbp-30h] BYREF

  v27[0] = __readfsqword(0x28u);
  v18 = -1;
  v19 = -1;
  v7 = v22;
  v20 = 0;
  v21 = 0;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 5;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *(v7 - 2) = 0;
  }
  while ( v27 != v7 );
  if ( (int)decode_insn(&v18, a2, v27, 0.0) <= 0 )
    return -1;
  if ( (_WORD)v20 == 11 || (_WORD)v20 == 41 )
  {
    v13 = *(_QWORD *)(((__int64 (__fastcall *)(char *, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))a3)(
                        "sr",
                        a4,
                        v8,
                        v9,
                        v10,
                        v11,
                        v18,
                        *((_QWORD *)&v18 + 1),
                        v19)
                    + 8);
    v14 = ((unsigned __int8)(v13 & 2) >> 1) & 1;
    v15 = (v13 & 8) != 0;
    switch ( HIDWORD(v20) )
    {
      case 1:
        goto LABEL_32;
      case 3:
        LOBYTE(v14) = (v13 & 5) == 0;
        goto LABEL_16;
      case 4:
        LOBYTE(v14) = (v13 & 5) != 0;
        goto LABEL_16;
      case 5:
        LOBYTE(v14) = (v13 & 1) == 0;
        goto LABEL_16;
      case 6:
        LOBYTE(v14) = v13 & 1;
        goto LABEL_16;
      case 7:
        LOBYTE(v14) = ((unsigned __int8)(v13 & 4) >> 2) ^ 1;
        goto LABEL_16;
      case 8:
        LOBYTE(v14) = (v13 & 4) != 0;
        goto LABEL_16;
      case 9:
        LOBYTE(v14) = ((unsigned __int8)(v13 & 2) >> 1) ^ 1;
        goto LABEL_16;
      case 0xA:
        goto LABEL_16;
      case 0xB:
        LOBYTE(v14) = ((unsigned __int8)(v13 & 8) >> 3) ^ 1;
        goto LABEL_16;
      case 0xC:
        LOBYTE(v14) = (v13 & 8) != 0;
        goto LABEL_16;
      case 0xD:
        LOBYTE(v14) = v15 ^ ((unsigned __int8)(v13 & 2) >> 1) ^ 1;
        goto LABEL_16;
      case 0xE:
        LOBYTE(v14) = ((unsigned __int8)(v13 & 8) >> 3) ^ ((unsigned __int8)(v13 & 2) >> 1);
LABEL_16:
        if ( (_WORD)v20 == 41 )
          goto LABEL_24;
        if ( (_BYTE)v14 )
          goto LABEL_18;
        return -1;
      case 0xF:
        if ( (((unsigned __int8)(v13 & 2) >> 1) ^ 1) == v15 || (v13 & 4) != 0 )
          goto LABEL_22;
        goto LABEL_32;
      case 0x10:
        if ( (v13 & 4) == 0 && ((v13 & 2) != 0 || (v13 & 8) == 0) && ((v13 & 8) != 0 || (v13 & 2) == 0) )
          goto LABEL_22;
LABEL_32:
        if ( (_WORD)v20 == 41 )
        {
          sub_E8D0(a1, v24, a3, a4);
          get_dtype_size(v23);
LABEL_26:
          result = v26;
        }
        else
        {
LABEL_18:
          result = v25;
        }
        break;
      default:
LABEL_22:
        if ( (_WORD)v20 == 41 )
        {
          LOBYTE(v14) = 0;
LABEL_24:
          v17 = sub_E8D0(a1, v24, a3, a4);
          if ( (v17 & ~(-1LL << (8 * (unsigned __int8)get_dtype_size(v23)))) != 0 || (_BYTE)v14 )
            goto LABEL_26;
        }
        return -1;
    }
  }
  else
  {
    if ( (_WORD)v20 != 170 )
    {
      if ( (unsigned __int16)v20 <= 0xAAu )
      {
        if ( (_WORD)v20 == 26 )
          return sub_E930(a1, (__int64)v22, a3, a4);
        if ( (unsigned __int16)v20 <= 0x1Au )
        {
          if ( (_WORD)v20 == 24 )
            return sub_E930(a1, (__int64)v22, a3, a4);
        }
        else if ( (unsigned __int16)(v20 - 116) <= 1u )
        {
          return sub_E930(a1, (__int64)v22, a3, a4);
        }
      }
      return -1;
    }
    v16 = ((__int64 (__fastcall *)(const char *, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))a3)(
            "a7",
            a4,
            v8,
            v9,
            v10,
            v11,
            v18,
            *((_QWORD *)&v18 + 1),
            v19);
    return (unsigned int)get_dword(*(_QWORD *)(v16 + 8));
  }
  return result;
}
