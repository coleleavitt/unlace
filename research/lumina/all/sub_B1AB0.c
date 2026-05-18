unsigned __int64 __fastcall sub_B1AB0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  size_t v4; // rax
  __int64 i; // r14
  __int64 v6; // rdi
  _BYTE v8[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v9[0] = __readfsqword(0x28u);
  v4 = sub_196CD0(v8, v9) - (_QWORD)v8;
  if ( v4 )
    sub_9E3C0(a2, v8, v4);
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v6 = 3 * i;
      sub_B19C0(*(_QWORD *)(a1 + 16) + 32 * v6, a2);
    }
  }
  return v9[0] - __readfsqword(0x28u);
}
