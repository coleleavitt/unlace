__int64 __fastcall sub_227B10(_QWORD *a1, int a2, int a3, unsigned int a4)
{
  int v6; // ebx
  int v7; // ebp
  __int64 result; // rax
  int v9; // eax

  if ( a1 && (unsigned __int8)*a1 )
  {
    get_tinfo_size();
    v6 = 0;
  }
  else
  {
    v6 = round_down_power2();
    if ( v6 > 1 )
    {
      while ( a2 % v6 )
      {
        v6 >>= 1;
        if ( v6 == 1 )
          goto LABEL_8;
      }
    }
  }
  if ( (v6 & (v6 - 1)) != 0 )
    sub_226E80();
LABEL_8:
  v7 = 2 * a3;
  if ( v6 <= 2 * a3 )
  {
    if ( a3 > v6 )
    {
      if ( a4 > 0x10 )
      {
LABEL_11:
        if ( a4 != 176 && a4 != 256 )
        {
LABEL_13:
          if ( !(unsigned __int8)getinf_flag() )
            goto LABEL_14;
        }
LABEL_23:
        a3 = v6;
        goto LABEL_14;
      }
LABEL_31:
      a4 = getinf();
      goto LABEL_11;
    }
    if ( a4 > 0x10 )
      goto LABEL_18;
    goto LABEL_40;
  }
  if ( a4 <= 0x10 )
  {
    v9 = getinf();
    if ( v9 == 176 || v9 == 256 )
    {
      if ( a3 > v7 )
      {
LABEL_30:
        v6 = 2 * a3;
        goto LABEL_31;
      }
LABEL_39:
      v6 = 2 * a3;
LABEL_40:
      a4 = getinf();
LABEL_18:
      if ( a4 == 176 || a4 == 256 )
        goto LABEL_14;
      goto LABEL_20;
    }
LABEL_27:
    if ( (unsigned __int8)getinf_flag() )
      goto LABEL_23;
    if ( a3 > v7 )
    {
      v6 = 2 * a3;
      if ( a4 > 0x10 )
        goto LABEL_13;
      goto LABEL_30;
    }
    v6 = 2 * a3;
    if ( a4 > 0x10 )
    {
LABEL_20:
      if ( (unsigned __int8)getinf_flag() )
        a3 = v6;
      goto LABEL_14;
    }
    goto LABEL_39;
  }
  if ( a4 != 256 && a4 != 176 )
    goto LABEL_27;
  if ( a3 > v7 )
    a3 *= 2;
LABEL_14:
  result = 1;
  if ( a3 > 0 )
    return (unsigned int)a3;
  return result;
}

