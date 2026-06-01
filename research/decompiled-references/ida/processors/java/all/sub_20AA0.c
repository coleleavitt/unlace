__int64 __fastcall sub_20AA0(__int64 a1)
{
  unsigned int v1; // ebp
  int v3; // eax
  _WORD *v4; // rdx

  if ( (unsigned __int8)sub_1FDC0(a1) && (v1 = sub_20960(a1), (_BYTE)v1) )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 16);
      if ( !v3 )
        break;
      v4 = *(_WORD **)(a1 + 8);
      if ( *v4 != 58 )
        break;
      *(_DWORD *)(a1 + 16) = v3 - 1;
      *(_QWORD *)(a1 + 8) = v4 + 1;
      if ( !(unsigned __int8)sub_200B0(a1, 2) || !(unsigned __int8)sub_204B0(a1) )
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return v1;
}

