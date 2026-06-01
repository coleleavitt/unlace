__int64 __fastcall sub_2986B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 **v7; // rdi
  bool v8; // al
  __int64 v9; // rax
  __int64 v10; // rdi
  char tinfo_property; // [rsp+8h] [rbp-60h]
  bool v12; // [rsp+8h] [rbp-60h]
  bool v13; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+20h] [rbp-48h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0xF) != 0xA || (get_tinfo_property() & 0xF) != 0xA )
    return 0;
  v15[0] = get_tinfo_property();
  tinfo_property = get_tinfo_property();
  clear_tinfo_t();
  result = 1;
  if ( (tinfo_property & 0x3F) != 1 )
  {
    v14 = get_tinfo_property();
    if ( (get_tinfo_property() & 0x2F) == 0xD )
    {
      if ( a3
        && *(_DWORD *)a3 == 2
        && (v6 = *(_QWORD *)(a3 + 8), *(_DWORD *)v6 == 3)
        && (v7 = *(__int64 ***)(v6 + 8)) != nullptr )
      {
        if ( !a2 )
        {
          if ( !under_debugger )
            sub_37DDE0(52476);
          BUG();
        }
        v8 = (int)sub_2970C0(v7, a2, (int)&v14, -1) >= 0;
      }
      else
      {
        v15[0] = 0;
        v9 = get_tinfo_property();
        v10 = *(_QWORD *)(a1 + 112);
        v15[0] = v9;
        v12 = sub_296410(v10, (unsigned int)&v14, 0, (int)v15);
        clear_tinfo_t();
        v8 = v12;
      }
    }
    else
    {
      v8 = 0;
    }
    v13 = v8;
    clear_tinfo_t();
    return v13;
  }
  return result;
}

