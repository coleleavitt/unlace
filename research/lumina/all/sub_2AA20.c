__int64 *__fastcall sub_2AA20(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // r13
  unsigned __int64 v4; // r14
  __int64 v6; // rax

  v1 = (int)sub_19D6B0(nullptr);
  if ( (_DWORD)v1 )
  {
    v2 = *a1;
    v3 = (a1[1] == 0) + a1[1] - 1;
    v4 = (a1[1] == 0) + a1[1] + (int)v1;
    if ( a1[2] < v4 )
    {
      v6 = sub_1987B0(a1, v2, (a1[1] == 0) + a1[1] + v1, 1);
      *a1 = v6;
      v2 = v6;
    }
    a1[1] = v4;
    sub_19D6B0((char *)(v2 + v3));
  }
  return a1;
}
