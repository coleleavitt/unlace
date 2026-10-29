__int64 __fastcall sub_F35D0(__int64 a1)
{
  __int64 v1; // r14
  int v2; // ebx

  if ( !*(_BYTE *)(a1 + 320) )
    return 0;
  v1 = *(_QWORD *)(a1 + 464);
  v2 = 0;
  if ( (int)v1 > 0 )
  {
    while ( *(_DWORD *)sub_13D280((_QWORD *)a1, v2) != 1 )
    {
      if ( (_DWORD)v1 == ++v2 )
        return 0;
    }
  }
  if ( (_DWORD)v1 == v2 )
    return 0;
  else
    return sub_3767A0(a1);
}

