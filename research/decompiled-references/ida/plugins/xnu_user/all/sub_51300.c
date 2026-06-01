unsigned __int64 __fastcall sub_51300(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 result; // rax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  v2 = *(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120);
  if ( v2 == 20 )
  {
    v4 = *(_DWORD *)(get_ph() + 16);
    v5 = v4 + 14;
    v6 = v4 + 7;
    if ( v6 >= 0 )
      v5 = v6;
    result = *(_QWORD *)(a2 + 8) / (unsigned __int64)(unsigned int)(v5 >> 3);
    *(_QWORD *)(a2 + 8) = result;
  }
  else
  {
    result = (unsigned int)(v2 - 12);
    if ( (unsigned int)result <= 1 )
      *(_QWORD *)(a2 + 8) &= ~1uLL;
  }
  return result;
}

