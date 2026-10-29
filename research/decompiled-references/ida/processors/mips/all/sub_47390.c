__int64 __fastcall sub_47390(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 not_tail; // rax
  __int64 v7; // rbp
  int flags; // eax
  int v10; // r13d
  unsigned __int16 v11; // ax
  char v12; // r15
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned __int16 v16; // ax
  char v17; // r15
  unsigned int v18; // r14d
  unsigned __int16 v19; // ax
  char v20; // r14
  unsigned int v21; // r13d
  unsigned __int8 v22; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v23 = __readfsqword(0x28u);
  v4 = a2;
  if ( *(_DWORD *)(v3 + 260) == 2 )
    return a2;
  if ( a3 && a3 != 21 )
  {
    not_tail = next_not_tail(a2);
    v7 = not_tail;
    if ( not_tail != -1 && (~((unsigned __int16)get_flags_ex(not_tail, 4) >> 8) & 6) == 0 )
    {
      v19 = sub_1F000(v3, &v22, a2, nullptr);
      v20 = v22;
      v21 = v19;
      if ( (unsigned __int8)sub_1E660(v3, v19, v22) || sub_1E5E0(v3, v21, v20) )
      {
        if ( !sub_1E730(v3, v21, v22) )
          return a2;
        return v7;
      }
    }
    return a2;
  }
  flags = get_flags_ex(a2, 4);
  v10 = flags;
  if ( !a3 && (~BYTE1(flags) & 6) == 0 && (flags & 0x10000000) != 0 )
  {
    v11 = sub_1F000(v3, &v22, a2, nullptr);
    v12 = v22;
    v13 = v11;
    if ( (unsigned __int8)sub_1E660(v3, v11, v22) || sub_1E5E0(v3, v13, v12) )
    {
      next_not_tail(a2);
      return a2;
    }
  }
  if ( (v10 & 0x10000) == 0 )
    return a2;
  v14 = prev_not_tail(a2);
  v15 = v14;
  if ( v14 == -1 )
    return a2;
  if ( (~((unsigned __int16)get_flags_ex(v14, 4) >> 8) & 6) != 0 )
    return a2;
  v16 = sub_1F000(v3, &v22, v15, nullptr);
  v17 = v22;
  v18 = v16;
  if ( !(unsigned __int8)sub_1E660(v3, v16, v22) && !sub_1E5E0(v3, v18, v17) )
    return a2;
  if ( a3 )
  {
    if ( sub_1E730(v3, v18, v22) )
      return v15;
    else
      return v15;
  }
  return v4;
}

