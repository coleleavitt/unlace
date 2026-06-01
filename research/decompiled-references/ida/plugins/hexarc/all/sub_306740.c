bool __fastcall sub_306740(__int64 a1, __int64 a2)
{
  bool result; // al
  _DWORD *v3; // rcx
  __int64 v4; // r12
  __int64 v5; // rbp

  result = 0;
  if ( *(_DWORD *)(a1 + 4) > (int)a2 )
  {
    if ( *(_BYTE *)a1 == 2 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v5 = sub_323690(v4, a2, 1);
      return v5 == sub_323690(v4, *(unsigned int *)(a1 + 4), 1);
    }
    else if ( *(_BYTE *)a1 == 4 )
    {
      v3 = *(_DWORD **)(a1 + 8);
      if ( *v3 == 8 )
      {
        return v3[9] <= (int)a2;
      }
      else if ( *v3 == 9 )
      {
        return v3[9] < (int)a2;
      }
    }
  }
  return result;
}

