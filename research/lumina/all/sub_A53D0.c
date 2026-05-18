unsigned __int64 __fastcall sub_A53D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  __int64 i; // r15
  size_t v5; // rax
  _BYTE v7[5]; // [rsp+3h] [rbp-45h] BYREF
  _QWORD v8[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v8[0] = __readfsqword(0x28u);
  v3 = sub_196CD0(v7, v8) - (_QWORD)v7;
  if ( v3 )
    sub_9E3C0(a2, v7, v3);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v5 = sub_196CD0(v7, v8) - (_QWORD)v7;
      if ( v5 )
        sub_9E3C0(a2, v7, v5);
    }
  }
  return v8[0] - __readfsqword(0x28u);
}
