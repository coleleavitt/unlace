__int64 __fastcall sub_576A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r15
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 dword; // rax
  __int64 v8; // rcx
  int v10; // edx
  unsigned __int64 v11[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v11[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(getseg() + 8);
  v11[0] = v3;
  if ( v3 - a2 <= 0xF )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( (unsigned __int8)netnode_charval() )
    {
LABEL_15:
      if ( !v4 )
        return 0;
      v11[0] = 0;
      sub_519A0(a2, 12LL * v4, v11);
      sub_533F0(a1);
      goto LABEL_24;
    }
    v5 = sub_51C60(a1, v2, 0, 1u, 0);
    v6 = v5;
    if ( v5 == -1 )
      return 0;
    if ( !v5 )
      break;
    if ( (unsigned __int8)get_fixups() )
      return 0;
    dword = get_dword();
    if ( (_DWORD)dword != 1029 )
    {
      if ( (unsigned int)dword > 0x405 )
      {
        v10 = dword;
        BYTE1(v10) = BYTE1(dword) & 0xEF;
        if ( v10 != 16399 && (_DWORD)dword != 8199 )
          return 0;
      }
      else
      {
        if ( (unsigned int)(dword - 4) > 0x30 )
          return 0;
        v8 = 0x10000000100030LL;
        if ( !_bittest64(&v8, dword) )
          return 0;
      }
    }
    if ( !(unsigned __int8)sub_55F90(a1, v6, 1, 0) )
      return 0;
    ++v4;
    v2 += 12LL;
    netnode_supset();
    if ( v4 == 64 )
    {
      v11[0] = 0;
      sub_519A0(a2, 768, v11);
      sub_533F0(a1);
      goto LABEL_24;
    }
    if ( v3 - v2 <= 3 )
      return 0;
    if ( (get_flags_ex() & 0x1000) != 0 )
      goto LABEL_15;
  }
  if ( !v4 )
    return 0;
  v11[0] = 0;
  sub_519A0(a2, 12LL * v4, v11);
  sub_533F0(a1);
  sub_519A0(v2, 4, v11);
  v2 += 4LL;
  create_data();
  if ( (get_flags_ex() & 0x800) == 0 )
    set_cmt();
LABEL_24:
  if ( v2 < v11[0] )
    auto_mark_range();
  return 1;
}
