__int64 __fastcall sub_16A80(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax

  if ( get_strlit_contents() > 0 && (v4 = netnode_hashval_long()) != 0 )
  {
    *a2 = v4;
    return 1;
  }
  else
  {
    return 0;
  }
}
