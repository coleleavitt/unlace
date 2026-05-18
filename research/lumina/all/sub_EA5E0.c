__int64 __fastcall sub_EA5E0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int v7; // ebp

  if ( a1
    && ((v2 = *(_BYTE *)(a1 + 113), v2 == 118 || v2 == -70) || v2 == 109 || (unsigned int)sub_EA5B0())
    && *(_DWORD *)(a1 + 80) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      xmmword_241500(v4);
      v6 = *(_QWORD *)(a1 + 24);
      v7 = *(_DWORD *)(a1 + 84);
      if ( v6 )
        xmmword_241510(v6, a2, v5);
    }
    else
    {
      return *(unsigned int *)(a1 + 84);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v7;
}
