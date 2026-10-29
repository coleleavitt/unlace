__int64 sub_4B40()
{
  __int64 extlang; // rax
  int v1; // ecx
  unsigned int v2; // edx

  if ( get_file_ext() )
  {
    extlang = find_extlang();
    if ( extlang )
    {
      if ( *(_QWORD *)(extlang + 112) )
      {
        if ( !*(_QWORD *)(extlang + 88) )
        {
          v2 = 0;
          v1 = *(_DWORD *)(extlang + 12) - 1;
          goto LABEL_11;
        }
        if ( *(_QWORD *)(extlang + 56) && *(_QWORD *)(extlang + 104) )
        {
          if ( qword_8198 )
            --*(_DWORD *)(qword_8198 + 12);
          qword_8198 = extlang;
          v1 = *(_DWORD *)(extlang + 12);
          v2 = 1;
          goto LABEL_11;
        }
      }
      v2 = 0;
      v1 = *(_DWORD *)(extlang + 12) - 1;
LABEL_11:
      *(_DWORD *)(extlang + 12) = v1;
      return v2;
    }
  }
  return 0;
}

