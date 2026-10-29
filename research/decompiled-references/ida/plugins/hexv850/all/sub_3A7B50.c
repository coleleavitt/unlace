__int64 __fastcall sub_3A7B50(__int64 *a1, __int64 a2, int a3)
{
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-58h]

  if ( !(unsigned __int8)xrefblk_t_first_to() )
    return 0;
  v4 = 0;
  do
  {
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
    {
      if ( a1 )
      {
        v5 = a1[1];
        v6 = *a1;
        if ( a1[2] < (unsigned __int64)(v5 + 1) )
        {
          v7 = qvector_reserve();
          *a1 = v7;
          v6 = v7;
          v5 = a1[1];
        }
        *(_QWORD *)(v6 + 8 * v5) = v9;
        ++a1[1];
      }
      if ( ++v4 >= a3 )
      {
        if ( a3 )
          break;
      }
    }
  }
  while ( (unsigned __int8)xrefblk_t_next_to() );
  return v4;
}

