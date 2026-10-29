__int64 __fastcall sub_A520(_QWORD *a1, _WORD *a2, unsigned int *a3, int a4)
{
  __int64 v5; // rbx
  int v6; // r12d

  if ( *a3 <= 1 )
    return 0;
  v5 = (__int64)(a2 + 1);
  *a3 -= 2;
  v6 = (unsigned __int16)*a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = a4;
      if ( *a3 <= 1 )
        break;
      *a3 -= 2;
      v5 = sub_9B90(a1, (unsigned __int8 *)(v5 + 2), a3, a4, *(_WORD *)v5);
      if ( !v5 )
        break;
      if ( (unsigned __int8)sub_FBC0(a1, 0) )
      {
        *a3 = -1;
        return 0;
      }
      if ( !--v6 )
        return v5;
    }
    return 0;
  }
  return v5;
}

