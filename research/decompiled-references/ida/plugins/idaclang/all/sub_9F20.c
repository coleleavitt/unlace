__int64 __fastcall sub_9F20(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8)
{
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d

  v8 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 8);
  if ( v8 )
    return v8(a2, a3);
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_9F50(0, a2, v10, v11, v12, v13, a7, a8);
}

