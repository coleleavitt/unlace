unsigned __int64 __fastcall sub_7F920(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v2 = pack_dd();
  sub_7F1A0(a1, (__int64)&v7, v2 - (_QWORD)&v7);
  v3 = *a2;
  v4 = *a2 + 4 * a2[1];
  if ( v4 != *a2 )
  {
    do
    {
      v3 += 4;
      v5 = pack_dd();
      sub_7F1A0(a1, (__int64)&v7, v5 - (_QWORD)&v7);
    }
    while ( v4 != v3 );
  }
  return v8 - __readfsqword(0x28u);
}

