__int64 __fastcall sub_26460(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // [rsp+18h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 32) && rangeset_t_find_range(a1 + 24) )
  {
    LODWORD(v3) = sub_1DEC0(*(__int64 **)(a1 + 8), a2);
    BYTE4(v3) = 1;
    return v3;
  }
  else
  {
    BYTE4(v3) = 0;
    return v3;
  }
}

