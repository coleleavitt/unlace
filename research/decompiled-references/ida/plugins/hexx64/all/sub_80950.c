unsigned __int64 __fastcall sub_80950(__int64 a1, __int64 *a2, double a3)
{
  __int64 *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 *i; // [rsp+8h] [rbp-50h]
  _BYTE v10[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 144) != *(_QWORD *)(a1 + 80) )
  {
    if ( !under_debugger )
      sub_383060(0xCBE1u, a3);
    BUG();
  }
  sub_7F8E0(a2);
  v3 = *(__int64 **)(a1 + 72);
  for ( i = &v3[3 * *(_QWORD *)(a1 + 80)]; i != v3; v3 += 3 )
  {
    v4 = pack_dd();
    sub_7F760(a2, (__int64)v10, v4 - (_QWORD)v10);
    v5 = *v3 + 4 * v3[1];
    if ( v5 != *v3 )
    {
      v6 = *v3;
      do
      {
        v6 += 4;
        v7 = pack_dd();
        sub_7F760(a2, (__int64)v10, v7 - (_QWORD)v10);
      }
      while ( v5 != v6 );
    }
  }
  return v11 - __readfsqword(0x28u);
}

