__int64 __fastcall sub_D4A60(char *a1, char *a2, __int64 a3)
{
  char *v4; // rax
  __int64 v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a2 )
    {
      v4 = sub_D4950(a1, a2);
      if ( v4 )
      {
        if ( !(unsigned int)sub_D4600((__int64)v4, v6) )
          return v6[0];
      }
    }
  }
  return a3;
}
