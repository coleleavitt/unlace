__int64 *__fastcall sub_DEF60(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  _QWORD v3[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v4; // [rsp+24h] [rbp-34h]
  int v5; // [rsp+28h] [rbp-30h]
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v5 = 0;
  v4 = 1;
  v3[1] = sub_CE7B0;
  v3[2] = sub_C43E0;
  result = nullptr;
  if ( a2 )
  {
    sub_CDCD0((__int64)v3, a2);
    if ( v4 )
    {
      return (__int64 *)a2;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 292) > 1u )
        sub_CE220(a1, a2);
      sub_D7720(*(_QWORD *)a1, a2);
      return sub_DEC00(*(_QWORD *)a1, 121, 0, 0);
    }
  }
  return result;
}
