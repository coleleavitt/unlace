__int64 __fastcall sub_4FDF0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v8[0] = 0;
  result = sub_4F9E0(a1, v8, a3);
  if ( (_DWORD)result == 1 )
  {
    if ( v8[0]
      && a4 >= v8[0] - 2592000LL
      && a4 >= v8[0] - 1296000LL
      && a4 >= v8[0]
      && a4 >= v8[0] + 1296000LL
      && a4 >= v8[0] + 2592000LL )
    {
      if ( (word_2439A4 & 0x200) != 0 )
      {
        v7 = *(int *)(a3 + 8);
        if ( (int)v7 >= 7 )
          v7 = 0;
        sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Borrowed license %s is beyond grace\n", off_23E8C0[v7]);
      }
      return 2;
    }
    else if ( a2 )
    {
      *a2 = v8[0];
    }
  }
  return result;
}
