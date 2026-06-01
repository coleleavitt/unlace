__int64 __fastcall sub_101AB0(__int64 a1, int a2, int a3)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, __int64 *); // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  char v7; // [rsp+8h] [rbp-20h]
  int v8; // [rsp+Ch] [rbp-1Ch]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64 *))(a1 + 16);
  v9 = __readfsqword(0x28u);
  v4 = **v3;
  v6 = a2;
  v8 = a3;
  v7 = 1;
  return v4(v3, &v6);
}

