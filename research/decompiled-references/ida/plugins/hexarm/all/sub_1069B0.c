unsigned __int64 __fastcall sub_1069B0(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // r14d
  _UNKNOWN **v8; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+8h] [rbp-50h]
  __int128 v10; // [rsp+10h] [rbp-48h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    return v11 - __readfsqword(0x28u);
  v10 = 0;
  v9 = 0;
  v8 = &off_4D7B30;
  v7 = sub_106770((__int64)&v8, a2, a3, a4);
  v8 = &off_4E7DA8;
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  if ( v7 )
    return sub_106920(a1, a2, a3, a4);
  else
    return v11 - __readfsqword(0x28u);
}

