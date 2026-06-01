__int64 __fastcall sub_17590(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // ebp

  v8 = open_linput();
  if ( !v8 )
    return 0;
  v9 = v8;
  v10 = sub_172F0(a1, v8, a5);
  if ( (_BYTE)v10 )
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, v9, a3, a4);
  close_linput();
  return v10;
}

