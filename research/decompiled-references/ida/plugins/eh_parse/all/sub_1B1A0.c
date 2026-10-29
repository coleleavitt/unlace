__int64 __fastcall sub_1B1A0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)getinf(5) - 10 > 1 || *(_DWORD *)(v1 + 4) )
    return 0;
  else
    return getinf_flag(3, 4);
}

