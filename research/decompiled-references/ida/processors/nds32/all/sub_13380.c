_BOOL8 __fastcall sub_13380(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  _QWORD *func; // rax
  __int64 v7; // rax

  if ( (unsigned __int8)(*(_BYTE *)(a3 + 1) - 3) > 1u )
    return 0;
  v5 = *(_WORD *)(a3 + 6);
  if ( v5 == 28 || v5 == 31 )
    return 1;
  func = (_QWORD *)get_func(*(_QWORD *)(a2 + 16));
  if ( !func )
    return 0;
  v7 = netnode_altval(*(_QWORD *)(a1 + 120), *func, 65);
  return v7 != -1 && (int)v7 >= 0 && *(unsigned __int16 *)(a3 + 6) == (_DWORD)v7;
}

