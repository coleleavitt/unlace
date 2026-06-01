__int64 __fastcall sub_21270(__int64 a1, __int64 a2)
{
  __int64 not_tail; // rbp
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax

  not_tail = a2;
  result = get_dword(a2);
  if ( (result & 3) == 0 )
  {
    v5 = (unsigned int)result;
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 != -1 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
      v5 = *(_QWORD *)(v4 + 16) & (v5 + v6);
    }
    if ( (get_flags_ex(a2, 4, v4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(a2);
    return add_dref(not_tail, v5, 1);
  }
  return result;
}

