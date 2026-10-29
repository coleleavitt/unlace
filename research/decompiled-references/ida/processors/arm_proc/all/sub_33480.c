unsigned __int64 __fastcall sub_33480(__int64 a1, unsigned __int64 a2, __int64 *a3, char a4)
{
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 i; // r13
  int v12; // eax
  int v14; // [rsp+14h] [rbp-74h]
  __int64 v15; // [rsp+20h] [rbp-68h]
  char v16; // [rsp+38h] [rbp-50h]
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]

  v5 = *a3;
  v6 = a3[1] - v5;
  v17 = __readfsqword(0x28u);
  if ( !a4 )
  {
    ea2node();
    ea2node();
    netnode_altshift();
    netnode_altshift();
    netnode_altshift();
    netnode_altshift();
    netnode_supshift();
    netnode_charshift();
    netnode_supshift();
    netnode_supshift();
    netnode_supshift();
    netnode_altadjust();
    v5 = *a3;
  }
  sub_1DFE0((_QWORD *)a1, a2, v5, v6);
  v8 = *(_QWORD *)(a1 + 504);
  if ( v8 == -1 )
  {
    v15 = 0;
    if ( get_segm_name() > 0 && stristr() && *(_QWORD *)(a1 + 504) != -1 )
      goto LABEL_13;
  }
  else
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*a3 - a2 + v8);
    if ( v9 >= *a3 && v9 < a3[1] )
LABEL_13:
      sub_43C00(a1);
  }
  if ( !a4 )
  {
    for ( i = 0; i != -1; i = next_that() )
    {
      get_flags_ex();
      if ( !(unsigned __int8)is_off() || i < *a3 || i >= v6 + *a3 )
        continue;
      if ( (unsigned __int8)is_off() )
      {
        v14 = 1;
LABEL_17:
        if ( !(unsigned __int8)get_fixup() )
        {
          if ( (unsigned __int8)get_refinfo() )
          {
            v12 = v16 & 0x4F;
            if ( v12 == (*(_DWORD *)(a1 + 688) | 0x40) || v12 == (*(_DWORD *)(a1 + 696) | 0x40) )
            {
              v15 += *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*a3 - a2);
              set_refinfo_ex();
            }
          }
        }
        if ( v14 == 2 )
          continue;
      }
      if ( (unsigned __int8)is_off() )
      {
        v14 = 2;
        goto LABEL_17;
      }
    }
  }
  return v17 - __readfsqword(0x28u);
}

