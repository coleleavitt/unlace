__int64 __fastcall sub_7670(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  unsigned __int64 *v4; // r14
  __int64 max_strlit_length; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r12
  unsigned __int64 that; // rax
  unsigned __int64 v9; // rdx
  bool v10; // cf
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 head; // r12
  int flags; // eax
  unsigned __int64 v15; // rax

  if ( *(_BYTE *)(a1 + 557) )
    return 0;
  v3 = getseg();
  v4 = (unsigned __int64 *)v3;
  if ( v3 )
  {
    if ( *(_QWORD *)(a1 + 368) >= a2 || a2 >= *(_QWORD *)(v3 + 8) )
      return 0;
  }
  else
  {
    v12 = getseg();
    v4 = (unsigned __int64 *)v12;
    if ( !v12 || (*(_BYTE *)(v12 + 42) & 3) != 0 )
      return 0;
  }
  max_strlit_length = get_max_strlit_length();
  v6 = max_strlit_length;
  if ( !max_strlit_length )
    return 0;
  v7 = a2 + max_strlit_length;
  that = next_that();
  v9 = that - a2;
  v10 = that < v7;
  v11 = *(_QWORD *)(a1 + 384);
  if ( v10 )
    v6 = v9;
  if ( !v11 )
  {
    head = *(_QWORD *)(a1 + 368);
    if ( head == -1 )
      head = *v4;
    if ( head >= a2 )
      goto LABEL_12;
    do
    {
      flags = get_flags_ex();
      if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
      {
        v15 = get_item_end() - head;
        if ( *(_QWORD *)(a1 + 384) < v15 )
        {
          *(_QWORD *)(a1 + 384) = v15;
          *(_QWORD *)(a1 + 376) = head;
        }
      }
      head = next_head();
    }
    while ( head < a2 );
    v11 = *(_QWORD *)(a1 + 384);
  }
  if ( v6 < v11 && *(_QWORD *)(a1 + 376) < a2 )
    return 0;
LABEL_12:
  result = create_strlit();
  if ( !(_BYTE)result )
    return 0;
  if ( *(_QWORD *)(a1 + 384) < v6 )
    *(_QWORD *)(a1 + 376) = a2;
  return result;
}
