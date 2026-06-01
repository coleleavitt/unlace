__int64 __fastcall sub_369CC0(_QWORD *a1, int *a2, int a3, double a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r14
  signed int tinfo_size; // ebx
  unsigned __int64 v9; // [rsp+8h] [rbp-60h]
  int v10[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( a1[1] )
  {
    v4 = 0;
    v9 = a3;
    v5 = 0;
    while ( 1 )
    {
      v6 = 80 * v5 + *a1;
      tinfo_size = get_tinfo_size();
      sub_1C5FB0((__int64)v10, v6, tinfo_size, 0, a4);
      if ( (unsigned __int8)sub_1C4AE0(a2, v9, v10, tinfo_size, a4) )
        break;
      cleanup_argloc();
      v5 = (int)++v4;
      if ( (unsigned __int64)(int)v4 >= a1[1] )
        return (unsigned int)-1;
    }
    cleanup_argloc();
  }
  else
  {
    return (unsigned int)-1;
  }
  return v4;
}

