signed __int64 __fastcall sub_AE70(__int64 a1)
{
  signed __int64 result; // rax

  setinf_flag();
  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_9B00((__int64 *)(a1 + 128), 0);
  return result;
}

