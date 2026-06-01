__int64 __fastcall sub_3EC280(__int64 a1, char a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+50h] [rbp-50h]
  char v7; // [rsp+58h] [rbp-48h]

  if ( a3 == 4096 )
  {
    v4 = *(_QWORD *)(a1 + 832);
    if ( *(_DWORD *)(v4 + 80) == 8 )
    {
      if ( a2 != 7 )
        return 0;
    }
    else if ( a2 != 2 )
    {
      return 0;
    }
    if ( *(_DWORD *)(v4 + 384) == a4
      && (unsigned __int8)get_refinfo()
      && (v7 & 0x40) == 0
      && !v6
      && (unsigned __int8)calc_reference_data()
      && getseg() )
    {
      get_segm_name();
    }
  }
  return 0;
}

