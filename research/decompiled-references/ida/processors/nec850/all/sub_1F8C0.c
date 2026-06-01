__int64 __fastcall sub_1F8C0(__int64 a1, _QWORD *a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // rdx

  v4 = a3;
  if ( a4 )
  {
    result = 0;
    if ( a3 <= 1 )
      return result;
    v4 = a3 - 2;
LABEL_4:
    if ( (get_flags_ex(v4, 4) & 0xF00000) != 0 )
    {
      if ( !a2 )
        return 1;
    }
    else
    {
      create_data(v4, 0x10000000, 2, -1);
      if ( !a2 )
        return 1;
    }
    *a2 = (unsigned __int16)get_word(v4);
    return 1;
  }
  v6 = 4294967294LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 )
    v6 = -3;
  result = 0;
  if ( v6 >= v4 )
    goto LABEL_4;
  return result;
}

