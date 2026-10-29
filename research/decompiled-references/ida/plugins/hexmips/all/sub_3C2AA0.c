__int64 sub_3C2AA0(__int64 a1, __int64 a2, __int64 a3, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  return (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, __va_list_tag *))(**(_QWORD **)(a1 + 40) + 152LL))(
           *(_QWORD *)(a1 + 40),
           a2,
           a3,
           va);
}

