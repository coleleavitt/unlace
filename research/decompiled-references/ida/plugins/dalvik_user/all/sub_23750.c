__int64 __fastcall sub_23750(int a1)
{
  const char *v1; // rsi
  unsigned int v2; // ebx
  const char *v4; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4 = nullptr;
  v5 = 0;
  sub_13B20((__int64 *)&v4);
  v1 = nptr;
  if ( (_QWORD)v5 )
    v1 = v4;
  v2 = sub_21290(a1, v1);
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v2;
}

