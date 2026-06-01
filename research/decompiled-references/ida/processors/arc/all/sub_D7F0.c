unsigned __int64 __fastcall sub_D7F0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int8 a5, int a6)
{
  __int64 flags; // rax
  int v11; // eax
  char refinfo; // dl
  __int64 v14; // rax
  __int64 v15; // [rsp+10h] [rbp-68h] BYREF
  __int64 v16; // [rsp+18h] [rbp-60h]
  __int64 v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+28h] [rbp-50h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  flags = get_flags_ex(a2, 0);
  if ( !(unsigned __int8)is_off(flags, a3) )
    goto LABEL_2;
  if ( !sub_BB20() )
  {
    refinfo = get_refinfo(&v15, a2, a3);
    v14 = -1;
    if ( refinfo )
      v14 = v16;
    if ( a4 != v14 )
    {
LABEL_2:
      if ( a6 == 2 )
      {
        v11 = *(_BYTE *)(a1 + 5280) | 0xC0;
      }
      else
      {
        v11 = 130;
        if ( a6 == 4 )
          v11 = *(_BYTE *)(a1 + 5284) | 0xC0;
      }
      v16 = a4;
      v15 = -1;
      v18 = v11 | (a5 << 8);
      v17 = 0;
      op_offset_ex(a2, a3, &v15);
    }
  }
  return v19 - __readfsqword(0x28u);
}

