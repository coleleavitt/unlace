__int64 __fastcall sub_31C40(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  char v7; // dl
  __int64 result; // rax
  __int64 v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = 0x6C000000000000LL;
  v9[3] = __readfsqword(0x28u);
  if ( a2 == 4 )
    goto LABEL_7;
  if ( a2 == 8 )
  {
    v4 = 0x76001B00000000LL;
LABEL_7:
    v9[1] = v4;
    v9[0] = a3;
    return (unsigned int)sub_26A90(a1 + 1208, (__int64)v9) == 0;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(a1 + 2768) + 72LL))(
         *(_QWORD *)(a1 + 2768),
         35,
         a3,
         v9);
  result = 0;
  if ( v7 )
    return sub_258E0(a1 + 1208, v9[0], a3, a2, a4);
  return result;
}

