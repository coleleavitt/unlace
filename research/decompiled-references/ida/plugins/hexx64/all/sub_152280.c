unsigned int *__fastcall sub_152280(unsigned int *a1, _QWORD *a2)
{
  unsigned int v2; // eax

  v2 = *a1;
  if ( *a1 != 54 )
  {
    if ( v2 > 0x36 )
    {
      if ( v2 != 57 )
        goto LABEL_5;
LABEL_9:
      if ( a2 )
        *a2 = a1 + 8;
      return a1 + 12;
    }
    if ( v2 != 1 )
    {
      if ( v2 != 2 )
      {
LABEL_5:
        if ( a2 )
          *a2 = 0;
        return nullptr;
      }
      goto LABEL_9;
    }
  }
  if ( a2 )
    *a2 = a1 + 12;
  return a1 + 16;
}

