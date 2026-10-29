__int64 __fastcall sub_27E1F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-8h] BYREF
  int vars0; // [rsp+8h] [rbp+0h]
  __int64 vars8; // [rsp+10h] [rbp+8h]
  __int128 vars10; // [rsp+18h] [rbp+10h]
  __int64 vars20; // [rsp+28h] [rbp+20h]
  __int128 vars28; // [rsp+30h] [rbp+28h]
  __int64 vars38; // [rsp+40h] [rbp+38h]
  unsigned __int64 vars40; // [rsp+48h] [rbp+40h]

  vars40 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = 0;
  vars20 = 0;
  v4 = (__int64 (__fastcall **)())&off_4AD3B8;
  vars10 = 0;
  vars28 = 0;
  vars38 = a2;
  v2 = 1;
  if ( !(unsigned int)sub_24E700((__int64 *)&v4, a1, 0) )
  {
    v2 = 0;
    if ( a2 )
      LOBYTE(v2) = *(_QWORD *)(a2 + 8) != 0;
  }
  v4 = off_4A8538;
  if ( vars20 )
  {
    *(_QWORD *)&vars28 = 0;
    qfree();
  }
  if ( vars8 )
  {
    *(_QWORD *)&vars10 = 0;
    qfree();
  }
  return v2;
}

