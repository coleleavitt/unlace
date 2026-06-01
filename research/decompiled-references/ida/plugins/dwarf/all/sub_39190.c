__int64 __fastcall sub_39190(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 *v6; // rax
  unsigned __int8 v7; // si
  __int64 v9; // rax
  _QWORD v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  v2 = *(_BYTE *)(a1 + 142);
  if ( v2 && v2 != 5 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 != a1 && *(_QWORD *)(a1 + 64) == *(_QWORD *)(v3 + 64) || ((v2 - 2) & 0xFD) == 0 )
      goto LABEL_12;
    if ( v2 == 1 )
    {
      v10[0] = 0xC7DDC813C3728202LL;
      v9 = sub_856E0(v10, a1 + 64);
      v6 = (__int64 *)sub_85650(v9, *(unsigned __int16 *)(a1 + 140));
    }
    else
    {
      v10[0] = 0xA74C2C19D15BCD06LL;
      v5 = sub_856E0(v10, a1 + 64);
      v6 = (__int64 *)sub_856E0(v5, *(_QWORD *)(a1 + 88) + 72LL);
    }
    sub_349E0(a1, v6);
    if ( (unsigned __int8)sub_38360(a1) )
    {
      v7 = 4;
      if ( *(_BYTE *)(a1 + 142) == 1 )
        v7 = 2;
      sub_34840(a1, v7);
LABEL_12:
      copy_tinfo_t(a2, a1 + 8);
      return 1;
    }
  }
  return 0;
}

