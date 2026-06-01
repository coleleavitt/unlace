__int64 __fastcall sub_2F440(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 (__fastcall *a4)(const char *, __int64),
        __int64 a5,
        __int64 a6)
{
  char *v9; // rax
  int v10; // r14d
  __int64 v11; // rax
  __int64 result; // rax
  __int64 not_tail; // rbx
  int v14; // eax
  __int64 v15; // rdx
  signed int v16; // eax
  __int64 v17; // rcx
  bool v18; // al
  int v19; // edx
  __int64 v20; // r8
  __int64 (__fastcall *v21)(const char *, __int64); // rcx
  __int64 v22; // rax
  bool v23; // al
  __int64 v24; // r14
  __int64 v25; // rdx
  bool v26; // al
  __int128 v27; // [rsp+0h] [rbp-198h] BYREF
  __int64 v28; // [rsp+10h] [rbp-188h]
  __int64 v29; // [rsp+18h] [rbp-180h]
  __int64 v30; // [rsp+20h] [rbp-178h]
  char v31; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int16 v32; // [rsp+2Eh] [rbp-16Ah]
  __int64 v33; // [rsp+38h] [rbp-160h]
  unsigned __int16 v34; // [rsp+56h] [rbp-142h]
  __int64 v35; // [rsp+60h] [rbp-138h]
  __int64 v36; // [rsp+88h] [rbp-110h]
  _QWORD v37[6]; // [rsp+168h] [rbp-30h] BYREF

  v37[0] = __readfsqword(0x28u);
  v9 = &v31;
  v27 = -1;
  v28 = -1;
  v29 = 0;
  v30 = 0;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 40;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *((_QWORD *)v9 - 2) = 0;
  }
  while ( v9 != (char *)v37 );
  if ( !(unsigned int)decode_insn(&v27, a2, v37, 0, 0, a6, 0.0) )
    return -1;
  if ( sub_1F290(a1, a2) )
  {
    not_tail = a2 - 1;
    if ( (get_flags_ex(a2 - 1, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(not_tail);
    return sub_2F440(a1, not_tail, a3, a4, a5);
  }
  if ( (unsigned __int16)(v29 - 82) <= 0xFu )
  {
    v10 = (unsigned __int16)v29 - 82;
    v11 = a4("FCSR", a5);
    if ( (((int)((*(_QWORD *)(v11 + 8) >> 23) & 1 | (*(_QWORD *)(v11 + 8) >> 24) & 0xE) >> (v10 & 3)) & 1) != v10 > 7 )
      return a2 + WORD1(v29) + 4;
    goto LABEL_13;
  }
  if ( (unsigned __int16)(v29 - 198) <= 3u
    || (unsigned __int16)(v29 - 98) <= 0xBu
    || (unsigned __int16)(v29 - 830) <= 3u )
  {
    v16 = sub_2F3D0(a1, a2, v32, (__int64 (__fastcall *)(_BYTE *, __int64))a4, a5);
    if ( (((_WORD)v29 - 831) & 0xFFFD) == 0 )
    {
      v17 = 2;
      if ( (_WORD)v29 != 831 )
        goto LABEL_20;
      goto LABEL_36;
    }
    if ( (unsigned __int16)v29 <= 0xC7u )
    {
      if ( (unsigned __int16)v29 <= 0xC5u )
      {
        if ( (unsigned __int16)v29 <= 0x69u )
        {
          if ( (unsigned __int16)v29 > 0x67u )
          {
            v17 = 4;
            v18 = v16 <= 0;
LABEL_31:
            if ( v18 )
              goto LABEL_32;
            return v17 + a2 + WORD1(v29);
          }
          if ( (unsigned __int16)v29 <= 0x65u )
          {
            if ( (unsigned __int16)v29 > 0x61u )
            {
              v17 = 4;
              goto LABEL_21;
            }
            goto LABEL_88;
          }
          v17 = 4;
          LOBYTE(v16) = v16 > 0;
LABEL_28:
          if ( (_BYTE)v16 )
            goto LABEL_32;
          return v17 + a2 + WORD1(v29);
        }
        if ( (unsigned __int16)(v29 - 106) <= 3u )
        {
          v17 = 4;
LABEL_36:
          v16 = (unsigned int)v16 >> 31;
          goto LABEL_28;
        }
LABEL_88:
        if ( !under_debugger )
          interr(240);
        goto LABEL_90;
      }
      v23 = v16 != 0;
      goto LABEL_50;
    }
    if ( (unsigned __int16)v29 <= 0x33Fu )
    {
      if ( (unsigned __int16)v29 <= 0xC9u )
      {
        v23 = v16 == 0;
LABEL_50:
        if ( !v23 )
          return a2 + WORD1(v29) + 4;
        goto LABEL_32;
      }
      if ( (_WORD)v29 != 830 )
        goto LABEL_88;
      if ( !v16 )
        return a2 + WORD1(v29);
    }
    else
    {
      if ( (_WORD)v29 != 832 )
      {
        v17 = 4;
LABEL_20:
        if ( (_WORD)v29 == 833 )
        {
LABEL_21:
          v18 = v16 >= 0;
          goto LABEL_31;
        }
        goto LABEL_88;
      }
      if ( v16 )
        return a2 + WORD1(v29);
    }
LABEL_32:
    result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v15 = v35 + 16 * v27;
    if ( v15 == result )
      return result;
    goto LABEL_14;
  }
  if ( (unsigned __int16)(v29 - 110) <= 3u )
  {
    v24 = sub_2F3D0(a1, a2, v32, (__int64 (__fastcall *)(_BYTE *, __int64))a4, a5);
    v25 = sub_2F3D0(a1, a2, v34, (__int64 (__fastcall *)(_BYTE *, __int64))a4, a5);
    if ( (unsigned __int16)v29 > 0x6Fu )
    {
      if ( (unsigned __int16)(v29 - 112) <= 1u )
      {
        v26 = v24 != v25;
LABEL_62:
        if ( !v26 )
          return a2 + WORD1(v29) + 4;
        result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v15 = v36 + 16 * v27;
        if ( v15 == result )
          return result;
        goto LABEL_14;
      }
    }
    else if ( (unsigned __int16)v29 > 0x6Du )
    {
      v26 = v24 == v25;
      goto LABEL_62;
    }
    if ( !under_debugger )
      interr(241);
LABEL_90:
    BUG();
  }
  if ( (unsigned __int16)(v29 - 439) <= 1u )
  {
    v14 = sub_2F3D0(a1, a2, 24, (__int64 (__fastcall *)(_BYTE *, __int64))a4, a5);
    if ( (v14 != 0) != ((_WORD)v29 == 440) )
      return -1;
    goto LABEL_13;
  }
  if ( (_WORD)v29 == 546 )
    goto LABEL_46;
  if ( (unsigned __int16)v29 <= 0x222u )
  {
    if ( (unsigned __int16)v29 <= 0x76u )
    {
      if ( (unsigned __int16)v29 > 0x74u || (_WORD)v29 == 115 )
        goto LABEL_13;
      if ( (_WORD)v29 != 116 )
      {
        if ( (_WORD)v29 != 114 )
          return -1;
        goto LABEL_46;
      }
      goto LABEL_81;
    }
    if ( (_WORD)v29 != 517 )
    {
      if ( (unsigned __int16)v29 > 0x205u )
      {
        if ( (_WORD)v29 != 518 )
          return -1;
        goto LABEL_81;
      }
      if ( (unsigned __int16)(v29 - 202) > 1u )
        return -1;
      goto LABEL_13;
    }
LABEL_46:
    v19 = v34;
    v20 = a5;
    v21 = a4;
    goto LABEL_47;
  }
  if ( (_WORD)v29 == 834 )
  {
    v20 = a5;
    v21 = a4;
    v19 = 31;
    goto LABEL_47;
  }
  if ( (unsigned __int16)v29 > 0x342u )
  {
    if ( (unsigned __int16)(v29 - 835) > 1u )
      return -1;
    goto LABEL_46;
  }
  if ( (_WORD)v29 == 547 )
  {
LABEL_81:
    v19 = v32;
    v20 = a5;
    v21 = a4;
LABEL_47:
    v22 = sub_2F3D0(a1, a2, v19, (__int64 (__fastcall *)(_BYTE *, __int64))v21, v20);
    v15 = v22 + 16 * v27;
    result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v15 == result )
      return result;
    goto LABEL_14;
  }
  if ( (_WORD)v29 != 821 )
    return -1;
LABEL_13:
  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v15 = v33 + 16 * v27;
  if ( v15 == result )
    return result;
LABEL_14:
  result &= v15;
  if ( v15 == -1 )
    return -1;
  return result;
}
