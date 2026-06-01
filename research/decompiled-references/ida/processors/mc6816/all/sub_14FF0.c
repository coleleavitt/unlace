__int64 __fastcall sub_14FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // [rsp+0h] [rbp-58h]
  __int64 (__fastcall **v8)(); // [rsp+8h] [rbp-50h] BYREF
  _BYTE v9[40]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( *(_BYTE *)(a1 + 224) )
    sub_14F40((__int64)"interr: ana: ana()", a2, a3, a4, a5, a6, v7);
  v8 = &off_1E060;
  sub_190E0(v9);
  *(_WORD *)(a2 + 24) = 0;
  sub_19310(&v8, a2, v9);
  if ( *(_WORD *)(a2 + 24) )
    return *(unsigned __int16 *)(a2 + 26);
  else
    return 0;
}

