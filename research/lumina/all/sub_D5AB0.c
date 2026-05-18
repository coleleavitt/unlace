__int64 __fastcall sub_D5AB0(__int64 a1, char *a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rdi
  __int64 result; // rax
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v7 = *(_QWORD *)a1;
  v9[3] = __readfsqword(0x28u);
  sub_C7F20(v7, a3, a4, a2, (__int64)v9);
  result = sub_C3840(a1, (__int64)v9, 0x18u, a5);
  if ( !(_DWORD)result )
    return sub_C3840(a1, (__int64)a2, *(_DWORD *)(a1 + 28), a5 + 24);
  return result;
}
