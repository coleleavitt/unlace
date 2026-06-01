__int64 __fastcall sub_3F1F0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6, char a7)
{
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-18h] BYREF

  v8 = *(_QWORD *)(a1 + 8);
  v11[1] = __readfsqword(0x28u);
  v10 = 0;
  v11[0] = 0;
  if ( a4 )
  {
    if ( a7 )
    {
      v11[0] = *a4;
      result = sub_3EF80(v8, a3, a5, nullptr, a6, (__int64)&v10, (__int64)v11, nullptr);
LABEL_4:
      *a4 = v10;
      return result;
    }
  }
  else if ( a7 )
  {
    return sub_3EF80(v8, a3, a5, nullptr, a6, (__int64)&v10, (__int64)v11, nullptr);
  }
  result = sub_3EF80(v8, a3, a5, nullptr, a6, (__int64)&v10, 0, nullptr);
  if ( a4 )
    goto LABEL_4;
  return result;
}

