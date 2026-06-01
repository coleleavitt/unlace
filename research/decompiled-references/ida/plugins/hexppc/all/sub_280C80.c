__int64 __fastcall sub_280C80(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 result; // rax
  char tinfo_property; // al
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 tinfo_size; // rax
  __int64 v15; // rdx
  _QWORD v16[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a1[2];
  v5 = a1[8];
  v16[1] = __readfsqword(0x28u);
  v7 = a1[3];
  v8 = *(_QWORD *)(v5 + 8);
  v9 = *(_QWORD *)(v4 + 8 * v7 - 8);
  if ( *(_DWORD *)(v9 + 8) == 16 && *(_QWORD *)(v9 + 24) != a3 )
  {
    if ( !(unsigned __int8)sub_2809E0(a2, v8, *(_QWORD *)(v4 + 8 * v7 - 16), v9)
      || (tinfo_property = get_tinfo_property(), (tinfo_property & 0xE) == 0)
      && (tinfo_property & 0x30) != 0
      && ((v12 = *(_QWORD *)(v9 + 32), v13 = *(_QWORD *)(v9 + 40), *(_DWORD *)(v12 + 8) != 61)
       || sub_251DB0(*(__int64 **)(v12 + 24)))
      && (*(_DWORD *)(v13 + 8) != 61 || sub_251DB0(*(__int64 **)(v13 + 24))) )
    {
      copy_tinfo_t();
    }
  }
  else
  {
    result = sub_2809E0(a2, v8, *(_QWORD *)(v4 + 8 * v7 - 8), a3);
    if ( !(_BYTE)result )
      return result;
    if ( *(_DWORD *)(a3 + 8) == 51 && (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_size = get_tinfo_size();
      v15 = *(int *)(a3 + 40);
      if ( v15 != tinfo_size )
      {
        sub_328100(v16, *(_QWORD *)(*(_QWORD *)(a1[8] + 8LL) + 1504LL), v15, 2);
        copy_tinfo_t();
        clear_tinfo_t();
      }
    }
  }
  return 1;
}

