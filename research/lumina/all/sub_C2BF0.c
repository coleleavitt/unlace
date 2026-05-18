__int64 __fastcall sub_C2BF0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // ebp

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2[4] )
  {
    xmmword_241500();
    v3 = v2[4];
    if ( *v2 < a2 )
    {
      v4 = 11;
    }
    else
    {
      *v2 = a2;
      v4 = 0;
    }
    if ( v3 )
      xmmword_241510();
  }
  else
  {
    v4 = 11;
    if ( a2 <= *v2 )
    {
      *v2 = a2;
      return 0;
    }
  }
  return v4;
}
