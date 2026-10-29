__int64 __fastcall sub_26470(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ebp

  v4 = open_linput(a2, 0);
  if ( v4 )
  {
    v5 = v4;
    if ( a3 == 11 )
    {
      v6 = sub_25960(a1, v4);
    }
    else
    {
      if ( a3 != 18 )
      {
        v7 = 0;
        goto LABEL_6;
      }
      v6 = sub_22E90(a1, v4);
    }
    v7 = v6;
LABEL_6:
    close_linput(v5);
    return v7;
  }
  return 0;
}

