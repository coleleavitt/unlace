__int64 __fastcall sub_26410(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // [rsp+18h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 32) && rangeset_t_find_range(a1 + 24) )
    return sub_1DF80(*(__int64 **)(a1 + 8), a2);
  BYTE4(v3) = 0;
  return v3;
}

