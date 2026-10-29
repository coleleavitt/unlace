__int64 __fastcall sub_4CEA0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 first_dref_from; // rbx
  __int64 v5; // r13
  __int64 flags; // rax
  char v7; // dl
  __int64 segm_base; // r13
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // [rsp+8h] [rbp-60h]

  first_dref_from = get_first_dref_from();
  if ( first_dref_from != -1 )
  {
    if ( !getseg() )
      return -1;
    segm_base = get_segm_base();
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    goto LABEL_14;
  }
  if ( get_sreg() == -1 )
    return -1;
  v5 = sel2para();
  flags = get_flags_ex();
  v7 = *(_BYTE *)(a2 + 41);
  switch ( v7 )
  {
    case 4:
      v10 = *(_QWORD *)(a2 + 56);
      if ( !v10 )
        return -1;
      break;
    case 5:
      v10 = *(_QWORD *)(a2 + 48);
      if ( !v10 )
        return -1;
      break;
    case 2:
      first_dref_from = *(_QWORD *)(a2 + 56);
      if ( !first_dref_from )
        return -1;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) )
      {
        segm_base = 0;
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      }
      else
      {
        if ( *(_WORD *)(a2 + 66) == 0xFFFF )
          v14 = sel2para();
        else
          v14 = calc_dataseg();
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        segm_base = v9 & (16 * v14);
        first_dref_from += segm_base;
      }
      goto LABEL_14;
    default:
      return -1;
  }
  segm_base = 16 * v5;
  if ( (flags & 0xF00000) == 0x500000 )
  {
    if ( (unsigned __int8)get_refinfo() )
      first_dref_from = v15;
    first_dref_from += v10;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  }
  else
  {
    first_dref_from = v10 + segm_base;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  }
LABEL_14:
  v11 = v9 & first_dref_from;
  v13 = getseg();
  if ( v13 && (*(_BYTE *)(v13 + 44) & 0x40) == 0 )
  {
    *a3 = segm_base;
    return v11;
  }
  return -1;
}

