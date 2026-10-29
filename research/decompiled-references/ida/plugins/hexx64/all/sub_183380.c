__int64 __fastcall sub_183380(unsigned int *a1, int *a2, unsigned int a3, double a4)
{
  int v4; // eax
  int *v5; // rbx
  signed int v6; // ecx
  __int64 result; // rax

  v4 = *a2;
  if ( (unsigned int)(*a2 - 1) <= 1 )
  {
    if ( v4 == 1 )
    {
      v5 = a2 + 8;
      if ( *a1 >= a3 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else if ( v4 != 4 )
  {
    if ( !under_debugger )
      sub_383060(0xCA8Bu, a4);
    BUG();
  }
  v5 = a2 + 16;
  if ( *a1 >= a3 )
    goto LABEL_4;
LABEL_9:
  a3 = round_down_power2();
LABEL_4:
  v6 = v5[1];
  result = 0;
  if ( v6 >= (int)a3 )
  {
    *a1 -= v6;
    return 1;
  }
  return result;
}

