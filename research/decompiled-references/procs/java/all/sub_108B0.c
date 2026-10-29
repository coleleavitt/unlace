__int64 __fastcall sub_108B0(_QWORD *a1, __int16 a2)
{
  const char *v2; // rbp
  __int64 module_data; // rax
  unsigned int v4; // ebp
  bool v5; // dl
  __int64 result; // rax
  __int64 v7; // rax
  _QWORD v8[11]; // [rsp+0h] [rbp-58h] BYREF

  v2 = "begin";
  v8[5] = __readfsqword(0x28u);
  if ( a2 )
    v2 = "end";
  module_data = get_module_data((unsigned int)dword_2D4F4);
  v4 = qsnprintf(v8, 32, "met%03u_%s", *(unsigned __int16 *)(module_data + 33147), v2);
  v5 = sub_FD50(a1, (int)v4);
  result = 1;
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 26);
    v7 = get_module_data((unsigned int)dword_2D4F4);
    *(_QWORD *)(v7 + 176) += v4;
    (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(*a1 + 56LL))(a1, v8, 0);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 26);
    return 0;
  }
  return result;
}
