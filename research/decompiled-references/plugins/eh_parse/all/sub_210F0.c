__int64 __fastcall sub_210F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v6; // rax
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 v8; // [rsp+8h] [rbp-40h]
  __int128 v9; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v2 = *a1;
  v10 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v2 + 24))(a1, 0, a2);
  if ( v3 == -1 )
    return 0;
  v4 = 1;
  if ( a2 == v3 )
  {
    v7 = off_2EAE0;
    v6 = *a1;
    v8 = 0;
    v9 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int128 *, __int64 (__fastcall ***)(), _QWORD))(v6 + 32))(
           a1,
           a2,
           &v9,
           &v7,
           0) )
    {
      return v8 ^ 1u;
    }
    return 0;
  }
  return v4;
}
