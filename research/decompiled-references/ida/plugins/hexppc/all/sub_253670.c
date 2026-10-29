_QWORD *__fastcall sub_253670(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-70h]
  _QWORD *v4; // [rsp+8h] [rbp-70h]
  __int64 (__fastcall **v5)(); // [rsp+10h] [rbp-68h] BYREF
  int v6; // [rsp+18h] [rbp-60h]
  __int64 v7; // [rsp+20h] [rbp-58h]
  __int128 v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+38h] [rbp-40h]
  __int128 v10; // [rsp+40h] [rbp-38h]
  _QWORD *v11; // [rsp+50h] [rbp-28h]
  unsigned __int64 v12; // [rsp+58h] [rbp-20h]

  result = a2;
  v12 = __readfsqword(0x28u);
  if ( *a2 == -1 )
  {
    v11 = a2;
    v6 = 2;
    v7 = 0;
    v9 = 0;
    v5 = (__int64 (__fastcall **)())&off_4CCE78;
    v8 = 0;
    v10 = 0;
    sub_251E00((__int64 *)&v5, a1 + 16, 0);
    result = v11;
    v5 = off_4C8E58;
    if ( v9 )
    {
      v3 = v11;
      *(_QWORD *)&v10 = 0;
      qfree();
      result = v3;
    }
    if ( v7 )
    {
      v4 = result;
      *(_QWORD *)&v8 = 0;
      qfree();
      return v4;
    }
  }
  return result;
}

