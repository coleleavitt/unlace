__int64 __fastcall sub_392C0(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v2 = *(_BYTE *)(a1 + 142);
  if ( !v2 || v2 == 5 )
    return 0;
  if ( v2 != 4 )
  {
    v9[0] = 0x7E682FEB67DBEF5FLL;
    sub_856E0(v9, a1 + 64);
    sub_856E0(v9, *(_QWORD *)(a1 + 88) + 72LL);
    if ( *(_QWORD *)(a1 + 152) )
    {
      v4 = 0;
      do
      {
        v5 = 8 * v4;
        v6 = *(unsigned int *)(*(_QWORD *)(a1 + 144) + 8 * v4++);
        v7 = sub_85680(v9, v6);
        sub_85680(v7, *(unsigned int *)(*(_QWORD *)(a1 + 144) + v5 + 4));
      }
      while ( v4 < *(_QWORD *)(a1 + 152) );
    }
    sub_349E0(a1, v9);
    if ( *(_QWORD *)(a1 + 64) )
    {
      if ( !(unsigned __int8)sub_38360(a1) )
        return 0;
      sub_34840(a1, 4u);
    }
  }
  copy_tinfo_t(a2, a1 + 8);
  return 1;
}

