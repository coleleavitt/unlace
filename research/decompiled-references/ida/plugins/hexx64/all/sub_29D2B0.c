_BOOL8 __fastcall sub_29D2B0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  _BOOL8 result; // rax
  __int64 v7; // rax
  __int64 **v8; // rdi
  bool v9; // al
  __int64 v10; // rax
  __int64 v11; // rdi
  char tinfo_property; // [rsp+8h] [rbp-60h]
  bool v13; // [rsp+8h] [rbp-60h]
  bool v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v16[9]; // [rsp+20h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0xF) != 0xA || (get_tinfo_property() & 0xF) != 0xA )
    return 0;
  v16[0] = get_tinfo_property();
  tinfo_property = get_tinfo_property();
  clear_tinfo_t();
  result = 1;
  if ( (tinfo_property & 0x3F) != 1 )
  {
    v15 = get_tinfo_property();
    if ( (get_tinfo_property() & 0x2F) == 0xD )
    {
      if ( a3
        && *(_DWORD *)a3 == 2
        && (v7 = *(_QWORD *)(a3 + 8), *(_DWORD *)v7 == 3)
        && (v8 = *(__int64 ***)(v7 + 8)) != nullptr )
      {
        if ( !a2 )
        {
          if ( !under_debugger )
            sub_383060(0xCCFCu, a4);
          BUG();
        }
        v9 = (int)sub_29BCC0(v8, a2, (int)&v15, -1, a4) >= 0;
      }
      else
      {
        v16[0] = 0;
        v10 = get_tinfo_property();
        v11 = *(_QWORD *)(a1 + 112);
        v16[0] = v10;
        v13 = sub_29B010(v11, (unsigned int)&v15, 0, (int)v16);
        clear_tinfo_t();
        v9 = v13;
      }
    }
    else
    {
      v9 = 0;
    }
    v14 = v9;
    clear_tinfo_t();
    return v14;
  }
  return result;
}

