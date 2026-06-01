__int64 __fastcall sub_3A740(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD v7[519]; // [rsp+0h] [rbp-1038h] BYREF

  v7[513] = __readfsqword(0x28u);
  if ( !a1 )
    return 0xFFFFFFFFLL;
  qmakepath();
  result = sub_3A5D0(v7, a2, a3, a4);
  if ( (_DWORD)result == -1 )
  {
    result = sub_3A5D0(a1, a2, a3, a4);
    if ( (_DWORD)result == -1 )
    {
      qmakepath();
      return sub_3A5D0(v7, a2, a3, a4);
    }
  }
  return result;
}

