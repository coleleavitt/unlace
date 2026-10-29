__int64 __fastcall sub_2DD30(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned int v8; // ebp

  v4 = a3;
  v5 = open_linput();
  if ( v5 )
  {
    v6 = v5;
    sub_B330(a1, v4);
    v7 = a2;
    v8 = sub_2D340(v6, a2);
    sub_B340(v6, v7);
    close_linput();
  }
  else
  {
    return (unsigned int)-1;
  }
  return v8;
}

