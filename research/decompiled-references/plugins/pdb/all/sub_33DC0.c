__int64 __fastcall sub_33DC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+8h] [rbp-50h]
  __int64 v8; // [rsp+10h] [rbp-48h]
  int v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v8 = a1;
  v3 = *(_QWORD *)(a1 + 320);
  v6 = off_A9EC0;
  v9 = 0;
  v7 = a2;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ***)()))(*(_QWORD *)v3 + 16LL))(
         v3,
         a2,
         12,
         &v6);
  if ( !v4 )
  {
    v7 = a2;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 (__fastcall ***)()))(**(_QWORD **)(a1 + 320) + 16LL))(
           *(_QWORD *)(a1 + 320),
           a2,
           11,
           &v6);
    if ( !v4 )
    {
      v7 = a2;
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 (__fastcall ***)()))(**(_QWORD **)(a1 + 320)
                                                                                           + 16LL))(
             *(_QWORD *)(a1 + 320),
             a2,
             17,
             &v6);
    }
  }
  sub_244A0();
  return v4;
}
