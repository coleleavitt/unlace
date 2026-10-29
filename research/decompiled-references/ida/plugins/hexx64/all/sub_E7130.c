__int64 __fastcall sub_E7130(__int64 a1, __int64 *a2, __int64 a3, char a4, double a5)
{
  char v5; // al
  __int64 v7; // rax
  char v8; // al
  __int64 not_tail; // rbx

  *a2 = -1;
  if ( a4 )
    goto LABEL_6;
  v5 = *(_BYTE *)(a3 + 48);
  if ( v5 )
  {
    if ( v5 == 6 )
    {
      *a2 = *(_QWORD *)(a3 + 56);
      return 1;
    }
LABEL_6:
    if ( !sub_1D2A70(a1, *(_QWORD *)(a3 + 24)) )
    {
      v7 = sub_E0600();
      *a2 = v7;
      if ( v7 == -1 )
        *a2 = get_first_fcref_from();
    }
    return 1;
  }
  v8 = *(_BYTE *)(a3 + 32);
  if ( v8 != 5 )
  {
    if ( v8 != 6 )
    {
      if ( !under_debugger )
        sub_383060(0xC3A3u, a5);
      BUG();
    }
    not_tail = *(_QWORD *)(a3 + 40);
    if ( (get_flags_ex() & 0x600) == 0x200 )
      not_tail = prev_not_tail();
    *a2 = not_tail;
    return 1;
  }
  return 0;
}

