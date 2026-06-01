__int64 __fastcall sub_223290(_QWORD *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 v6; // rdi
  int v7; // ebx
  int v8; // ebp
  __int64 result; // rax
  int v10; // eax
  int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a1 && (unsigned __int8)*a1 )
  {
    v6 = (unsigned __int64)&v11;
    v11 = 0;
    get_tinfo_size();
    v7 = v11;
  }
  else
  {
    v6 = a2;
    v7 = round_down_power2();
    if ( v7 > 1 )
    {
      while ( (int)a2 % v7 )
      {
        v7 >>= 1;
        if ( v7 == 1 )
          goto LABEL_8;
      }
    }
  }
  if ( (v7 & (v7 - 1)) != 0 )
    sub_222600(v6);
LABEL_8:
  v8 = 2 * a3;
  if ( v7 <= 2 * a3 )
  {
    if ( a3 > v7 )
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
        a3 = v7;
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
    v10 = getinf();
    if ( v10 == 176 || v10 == 256 )
    {
      if ( a3 > v8 )
      {
LABEL_30:
        v7 = 2 * a3;
        goto LABEL_31;
      }
LABEL_39:
      v7 = 2 * a3;
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
    if ( a3 > v8 )
    {
      v7 = 2 * a3;
      if ( a4 > 0x10 )
        goto LABEL_13;
      goto LABEL_30;
    }
    v7 = 2 * a3;
    if ( a4 > 0x10 )
    {
LABEL_20:
      if ( (unsigned __int8)getinf_flag() )
        a3 = v7;
      goto LABEL_14;
    }
    goto LABEL_39;
  }
  if ( a4 != 256 && a4 != 176 )
    goto LABEL_27;
  if ( a3 > v8 )
    a3 *= 2;
LABEL_14:
  result = 1;
  if ( a3 > 0 )
    return (unsigned int)a3;
  return result;
}

