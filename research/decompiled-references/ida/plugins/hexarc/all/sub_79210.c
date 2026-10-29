unsigned __int64 __fastcall sub_79210(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v2 = pack_dd();
  sub_79160(a1, (__int64)&v8, v2 - (_QWORD)&v8);
  v3 = *a2;
  v4 = *a2 + 8 * a2[1];
  if ( v4 != *a2 )
  {
    do
    {
      v3 += 8;
      v5 = pack_dd();
      sub_79160(a1, (__int64)&v8, v5 - (_QWORD)&v8);
      v6 = pack_dd();
      sub_79160(a1, (__int64)&v8, v6 - (_QWORD)&v8);
    }
    while ( v4 != v3 );
  }
  return v9 - __readfsqword(0x28u);
}

