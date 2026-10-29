unsigned __int64 __fastcall sub_6980(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v2 = *a2;
  v6 = __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  if ( (unsigned __int8)sub_5CF0(&v4, v2) )
    sub_4DB0(a1, 0xFFFF, (__int64)byte_A6A9, v4, v4);
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v6 - __readfsqword(0x28u);
}

