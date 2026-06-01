char __fastcall sub_2F580(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+18h] [rbp-20h]
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  result = sub_2F010((_QWORD *)(a1 + 1040), (__int64)&v4, a3);
  if ( result )
  {
    result = 0;
    if ( v5 >= *(_QWORD *)a2 )
      return v5 < *(_QWORD *)a2 + *(int *)(a2 + 80);
  }
  return result;
}

