unsigned __int64 __fastcall sub_3B590(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  char prev_sreg_range; // al
  char v9; // dl
  __int64 v10; // [rsp+10h] [rbp-68h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( (getinf(44) & 0x200) == 0 )
    return v12 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 16);
  if ( !(unsigned __int8)get_sreg_range() )
    return v12 - __readfsqword(0x28u);
  v4 = (unsigned __int64 *)getseg();
  v5 = v4;
  if ( !v4 )
    return v12 - __readfsqword(0x28u);
  v6 = *v4;
  if ( *((_BYTE *)v5 + 184) != 2 )
  {
    if ( v3 != v6 )
      goto LABEL_14;
    if ( !v10 )
      return v12 - __readfsqword(0x28u);
  }
  if ( v3 != v6 )
  {
LABEL_14:
    if ( v3 )
      return v12 - __readfsqword(0x28u);
  }
  if ( *v5 >= v3 )
  {
    if ( *((_BYTE *)v5 + 43) == 2 )
      goto LABEL_11;
    goto LABEL_18;
  }
  prev_sreg_range = get_prev_sreg_range();
  v9 = *((_BYTE *)v5 + 43);
  if ( !prev_sreg_range )
  {
    if ( v9 == 2 )
      goto LABEL_11;
LABEL_18:
    if ( (getinf(3) & 0x1006) != 0x1002 )
    {
      if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        v7 = 16;
      else
        v7 = 32;
      goto LABEL_12;
    }
LABEL_11:
    v7 = 64;
LABEL_12:
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
      sub_39B30(a2, 0xFFFF, (__int64)&unk_86DB4, v7);
    else
      sub_39B30(a2, 0xFFFF, (__int64)&unk_86DC1, v7);
    return v12 - __readfsqword(0x28u);
  }
  if ( v9 == 2 || (getinf(3) & 0x1006) == 0x1002 )
  {
    v7 = 64;
  }
  else if ( (unsigned __int64)(v10 - 1) > 0xFFFFFFFFFFFFFFFDLL )
  {
    v7 = 32;
  }
  else
  {
    v7 = 16;
  }
  if ( v11 != v10 )
    goto LABEL_12;
  return v12 - __readfsqword(0x28u);
}
