__int64 __fastcall sub_1AB90(__int64 a1, __int64 a2)
{
  void (__fastcall *hexdsp)(__int64, __int64 (__fastcall ***)(), __int64, _QWORD); // rax
  unsigned int v3; // ebx
  __int64 (__fastcall **vars0)(); // [rsp+0h] [rbp+0h] BYREF
  int vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h]
  __int128 vars18; // [rsp+18h] [rbp+18h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  __int128 vars30; // [rsp+30h] [rbp+30h]
  __int64 vars40; // [rsp+40h] [rbp+40h]
  unsigned int vars48; // [rsp+48h] [rbp+48h]
  unsigned __int64 vars58; // [rsp+58h] [rbp+58h]

  vars58 = __readfsqword(0x28u);
  vars40 = a1;
  vars8 = 2;
  vars10 = 0;
  vars28 = 0;
  vars0 = (__int64 (__fastcall **)())&off_8BE10;
  vars48 = 0;
  vars18 = 0;
  vars30 = 0;
  hexdsp = (void (__fastcall *)(__int64, __int64 (__fastcall ***)(), __int64, _QWORD))get_hexdsp(a1, a2);
  hexdsp(455, &vars0, a1 + 16, 0);
  v3 = vars48;
  vars0 = off_8BD90;
  if ( vars28 )
  {
    *(_QWORD *)&vars30 = 0;
    qfree(vars28);
  }
  if ( vars10 )
  {
    *(_QWORD *)&vars18 = 0;
    qfree(vars10);
  }
  return v3;
}

