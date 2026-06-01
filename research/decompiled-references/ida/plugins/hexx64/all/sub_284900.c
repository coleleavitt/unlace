__int64 __fastcall sub_284900(_QWORD *a1, int a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 result; // rax
  char tinfo_property; // al
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 tinfo_size; // rax
  __int64 v16; // rdx
  __int64 v17[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = a1[2];
  v6 = a1[8];
  v17[1] = __readfsqword(0x28u);
  v8 = a1[3];
  v9 = *(_QWORD *)(v6 + 8);
  v10 = *(_QWORD *)(v5 + 8 * v8 - 8);
  if ( *(_DWORD *)(v10 + 8) == 16 && *(_QWORD *)(v10 + 24) != a3 )
  {
    if ( !(unsigned __int8)sub_284660(a2, v9, *(_QWORD *)(v5 + 8 * v8 - 16), v10, a4)
      || (tinfo_property = get_tinfo_property(), (tinfo_property & 0xE) == 0)
      && (tinfo_property & 0x30) != 0
      && ((v13 = *(_QWORD *)(v10 + 32), v14 = *(_QWORD *)(v10 + 40), *(_DWORD *)(v13 + 8) != 61)
       || sub_255A30(*(__int64 **)(v13 + 24)))
      && (*(_DWORD *)(v14 + 8) != 61 || sub_255A30(*(__int64 **)(v14 + 24))) )
    {
      copy_tinfo_t();
    }
  }
  else
  {
    result = sub_284660(a2, v9, *(_QWORD *)(v5 + 8 * v8 - 8), a3, a4);
    if ( !(_BYTE)result )
      return result;
    if ( *(_DWORD *)(a3 + 8) == 51 && (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_size = get_tinfo_size();
      v16 = *(int *)(a3 + 40);
      if ( v16 != tinfo_size )
      {
        sub_32C430(v17, *(_QWORD *)(*(_QWORD *)(a1[8] + 8LL) + 1504LL), v16, 2);
        copy_tinfo_t();
        clear_tinfo_t();
      }
    }
  }
  return 1;
}

