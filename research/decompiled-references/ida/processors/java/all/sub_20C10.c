__int64 __fastcall sub_20C10(__int64 a1)
{
  unsigned int v1; // ebp
  int v3; // r12d

  if ( (!*(_DWORD *)(a1 + 16) || **(_WORD **)(a1 + 8) != 60 || (unsigned __int8)sub_20B10(a1))
    && (unsigned __int8)sub_200B0(a1, 0)
    && (v1 = sub_202E0(a1, 3), (_BYTE)v1) )
  {
    if ( *(_DWORD *)(a1 + 16) )
    {
      v3 = 0;
      while ( **(_WORD **)(a1 + 8) == 76 )
      {
        if ( v3 )
        {
          if ( !(unsigned __int8)sub_1F8E0(a1, (__int64)", ", 2) )
            return 0;
        }
        else if ( !(unsigned __int8)sub_200B0(a1, 2) )
        {
          return 0;
        }
        if ( !(unsigned __int8)sub_202E0(a1, 3) )
          return 0;
        ++v3;
        if ( !*(_DWORD *)(a1 + 16) )
          return v1;
      }
    }
  }
  else
  {
    return 0;
  }
  return v1;
}

