__int64 __fastcall sub_2B70(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+8h] [rbp-430h] BYREF
  _BYTE v5[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v6; // [rsp+418h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  qlseek(a1, a2, 0);
  v4 = 0;
  lread(a1, &v4, 1);
  v2 = v4;
  result = 0;
  if ( v4 )
  {
    if ( v4 > 0x400 )
    {
      v4 = 1024;
      v2 = 1024;
    }
    lread(a1, v5, v2);
    v5[v4] = 0;
    return qstrdup(v5);
  }
  return result;
}
