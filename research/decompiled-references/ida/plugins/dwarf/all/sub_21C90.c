__int64 __fastcall sub_21C90(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__m128i *, __int64, __int64, __int64),
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r9
  _QWORD v8[519]; // [rsp+0h] [rbp-1038h] BYREF

  v8[513] = __readfsqword(0x28u);
  if ( !a1 )
    return 0xFFFFFFFFLL;
  qmakepath(v8, 4096, a1, "System", "Library", "Kernels");
  result = sub_21B20((__int64)v8, a2, a3, a4);
  if ( (_DWORD)result == -1 )
  {
    result = sub_21B20(a1, a2, a3, a4);
    if ( (_DWORD)result == -1 )
    {
      qmakepath(v8, 4096, a1, "DEBUG_Kernel", 0, v7);
      return sub_21B20((__int64)v8, a2, a3, a4);
    }
  }
  return result;
}

