bool __fastcall sub_3CB100(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v3; // rcx

  result = 0;
  if ( *(int *)(a2 + 56) > 7 )
  {
    v3 = *(_QWORD *)(a2 + 64);
    if ( v3 )
    {
      if ( (unsigned int)(*(_DWORD *)(v3 + 60) - 1) <= 1 )
        return *(_QWORD *)(v3 + 64) != 0;
    }
  }
  return result;
}

