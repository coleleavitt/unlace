unsigned __int64 __fastcall sub_183A40(__int64 a1, __int64 a2, char a3)
{
  __int16 i; // ax
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+8h] [rbp-50h]
  __int64 v8; // [rsp+10h] [rbp-48h] BYREF
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  sub_183860(a1, a2, a3);
  for ( i = *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL); i == 124; i = *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) )
  {
    v8 = 1;
    v9 = 0;
    sub_183860(a1, (__int64)&v8, 1);
    *(_QWORD *)(a2 + 8) |= v9;
  }
  if ( i == 9766 )
  {
    do
    {
      v6 = 1;
      v7 = 0;
      sub_183860(a1, (__int64)&v6, 1);
      for ( ; *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) == 124; v7 |= v9 )
      {
        v8 = 1;
        v9 = 0;
        sub_183860(a1, (__int64)&v8, 1);
      }
      v4 = *(_QWORD *)(a2 + 8);
      if ( v4 )
        v4 = v7 != 0;
      *(_QWORD *)(a2 + 8) = v4;
      *(_BYTE *)a2 = 0;
    }
    while ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) == 9766 );
  }
  return v10 - __readfsqword(0x28u);
}
