__int64 __fastcall sub_FA00(__int64 a1, int a2, __int64 a3, __int64 a4, double a5, double a6)
{
  __int64 v10; // r15
  int flags; // eax
  __int64 v12; // rdi
  __int64 strid; // rax
  struct _Unwind_Exception *v14; // rbx
  __int64 v15; // [rsp+8h] [rbp-50h]
  _QWORD v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 240) & 4) == 0 )
    return 1;
  if ( !sub_F230(a1, a2) )
    return 0;
  v10 = *((_QWORD *)&xmmword_28820 + 3 * a2 + 2);
  if ( v10 == -1 )
  {
    v14 = (struct _Unwind_Exception *)sub_7880();
    clear_tinfo_t();
    _Unwind_Resume(v14);
  }
  if ( !a4 )
    a4 = *((_QWORD *)&xmmword_28820 + 3 * a2 + 2);
  flags = get_flags_ex(a3, 4);
  if ( (flags & 0x600) == 0x400 )
  {
    v12 = a3;
    if ( (flags & 0xF0000000) == 0x60000000 )
    {
      if ( a4 == get_item_end(a3) - a3 )
      {
        v16[0] = 0;
        strid = get_strid(a3);
        get_type_by_tid(v16, strid);
        if ( v10 == get_tinfo_size(0, v16[0], 0) )
        {
          clear_tinfo_t();
          return 1;
        }
        clear_tinfo_t();
      }
      v12 = a3;
    }
    if ( *(_QWORD *)(getseg(v12) + 8) >= (unsigned __int64)(a4 + a3) )
      goto LABEL_16;
LABEL_15:
    sub_CB10(
      (__int64)"could not create the %s structure(s) of size %u at %a\n",
      *((const char **)&xmmword_28820 + 3 * a2),
      a4,
      a5);
    return 0;
  }
  v15 = flags & 0x600;
  if ( *(_QWORD *)(getseg(a3) + 8) < (unsigned __int64)(a4 + a3) )
    goto LABEL_15;
  if ( v15 )
  {
LABEL_16:
    if ( a3 != -1 )
      goto LABEL_11;
    goto LABEL_17;
  }
  if ( next_head(a3 + 1, a4 + a3) != -1 )
  {
LABEL_11:
    sub_CB10(
      (__int64)"could not create the %s structure at %a, because there is already data at %a\n",
      *((const char **)&xmmword_28820 + 3 * a2),
      a5,
      a6);
    return 0;
  }
LABEL_17:
  if ( (unsigned __int8)create_data(a3, 1610612736, a4, *(_QWORD *)(16LL * a2 + a1 + 248)) )
    return 1;
  sub_CB10((__int64)"could not create the %s structure at %a\n", *((const char **)&xmmword_28820 + 3 * a2), a5);
  return 0;
}
