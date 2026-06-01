__int64 __fastcall sub_EAB0(_QWORD *a1)
{
  __int64 v1; // rbp
  char v2; // dl
  __int64 v3; // rax

  if ( !a1 )
    return 0;
  v1 = *a1;
  v2 = getinf_flag(10, 0x4000);
  v3 = a1[2];
  if ( v2 && (v3 & 1) != 0 )
  {
    a1[2] = v3 & 0xFFFFFFFFFFFFFBFELL;
    update_func(a1);
    reanalyze_noret_flag(*a1);
    return get_func(v1);
  }
  else
  {
    BYTE1(v3) &= ~4u;
    a1[2] = v3;
    update_func(a1);
    return get_func(v1);
  }
}
