__int64 __fastcall sub_3E590(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // edx
  _QWORD *v5; // r11
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v7[1] = __readfsqword(0x28u);
  v4 = sub_3E500(v3, a3, v7);
  result = 0;
  if ( !v4 )
  {
    if ( v5 )
      *v5 = v7[0];
    return 1;
  }
  return result;
}

