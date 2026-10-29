__int64 __fastcall sub_31160(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx

  v4 = sub_30630(a1, a2, a3);
  if ( !v4 || !a3 || !(unsigned __int8)getinf_flag(3, 32) )
    return v4;
  *(_QWORD *)(a3 + 16) = 2LL * (v4 != 2) + 2;
  return v4;
}

