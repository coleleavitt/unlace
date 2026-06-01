__int64 __fastcall sub_364A40(_QWORD *a1, int *a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // r14
  int tinfo_size; // ebx
  unsigned __int64 v8; // [rsp+8h] [rbp-60h]
  int v9[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( a1[1] )
  {
    v3 = 0;
    v8 = a3;
    v4 = 0;
    while ( 1 )
    {
      v5 = 80 * v4 + *a1;
      tinfo_size = get_tinfo_size();
      sub_1C1930((__int64)v9, v5, tinfo_size, 0);
      if ( (unsigned __int8)sub_1C0460(a2, v8, v9, tinfo_size) )
        break;
      cleanup_argloc();
      v4 = (int)++v3;
      if ( (unsigned __int64)(int)v3 >= a1[1] )
        return (unsigned int)-1;
    }
    cleanup_argloc();
  }
  else
  {
    return (unsigned int)-1;
  }
  return v3;
}

