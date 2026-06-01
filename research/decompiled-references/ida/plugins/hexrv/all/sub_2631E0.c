__int64 __fastcall sub_2631E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v6; // eax
  __int64 (__fastcall **vars0)(int, int, int, int, int, int, __int64); // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  __int128 vars10; // [rsp+10h] [rbp+10h]
  int vars20; // [rsp+20h] [rbp+20h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  char vars30; // [rsp+30h] [rbp+30h]
  __int64 vars38; // [rsp+38h] [rbp+38h]
  __int64 vars40; // [rsp+40h] [rbp+40h]
  unsigned __int64 vars48; // [rsp+48h] [rbp+48h]

  vars48 = __readfsqword(0x28u);
  vars28 = a4;
  vars38 = a3;
  vars8 = 0;
  vars20 = 0;
  vars30 = 0;
  vars0 = &off_4B2998;
  vars40 = 0;
  vars10 = 0;
  v6 = sub_262C10(a1, a2, 0, (__int64)&vars0, 0, 0);
  if ( a5 )
    *a5 = v6;
  vars0 = (__int64 (__fastcall **)(int, int, int, int, int, int, __int64))&off_4B6058;
  if ( vars8 )
  {
    *(_QWORD *)&vars10 = 0;
    qfree();
  }
  return 0;
}

