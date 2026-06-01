__int64 __fastcall sub_1D4D0(
        _QWORD *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        double a8)
{
  const char *v8; // r12
  int v10; // ebp
  __int64 v11; // rdi
  __int64 result; // rax
  unsigned __int16 v13; // ax
  __int64 word; // r13
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int16 v17; // ax
  __int64 v18; // rdx

  v8 = a2;
  if ( *((_BYTE *)a1 + 48) )
  {
    a2 = "Relocation out of range";
    append_cmt(v8, "Relocation out of range", 0);
  }
  v10 = *((_DWORD *)a1 + 11);
  if ( *((__int16 *)a1 + 25) < 0 )
    v10 |= 4u;
  v11 = *a1;
  if ( !*((_BYTE *)a1 + 53) || *(_WORD *)(*(_QWORD *)(v11 + 16) + 520LL) != 2 )
  {
    result = sub_42050(v11, (_DWORD)v8, a1[1], a1[4], a1[2], *((unsigned __int16 *)a1 + 20), a1[3], v10, 0);
    goto LABEL_8;
  }
  v13 = *((_WORD *)a1 + 20);
  if ( v13 == *(_WORD *)(v11 + 348) )
  {
LABEL_16:
    word = (unsigned __int16)get_word(v8);
    goto LABEL_17;
  }
  if ( v13 != 12 )
  {
    if ( v13 > 0xCu || v13 != 7 && (v13 & 0xFFF7) != 1 )
    {
      word = (unsigned int)get_dword(v8, a2, a3, a4, a5);
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  word = get_qword(v8);
LABEL_17:
  sub_42050(*a1, (_DWORD)v8, a1[1], a1[4], a1[2], *((unsigned __int16 *)a1 + 20), a1[3], v10, 0);
  v17 = *((_WORD *)a1 + 20);
  if ( v17 == *(_WORD *)(*a1 + 348LL) )
  {
LABEL_23:
    result = get_word(v8);
    v18 = (unsigned __int16)result;
    goto LABEL_24;
  }
  if ( v17 != 12 )
  {
    if ( v17 > 0xCu || v17 != 7 && (v17 & 0xFFF7) != 1 )
    {
      result = get_dword(v8, v8, *a1, v15, v16);
      v18 = (unsigned int)result;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  result = get_qword(v8);
  v18 = result;
LABEL_24:
  if ( v18 != word )
    result = sub_BFC0((__int64)"AUTOHIDE SESSION\n%a: in relocation our value (%a) != linker's one (%a)", a6, a7, a8);
LABEL_8:
  if ( *((_BYTE *)a1 + 49) )
    return auto_mark_range(v8, v8 + 1, 20);
  return result;
}
