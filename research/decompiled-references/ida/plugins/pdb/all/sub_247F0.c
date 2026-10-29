__int64 __fastcall sub_247F0(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v5; // eax
  __int64 *v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-28h]

  if ( a2 == 94 )
  {
    v5 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v6 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v6 + 1;
    }
    else
    {
      v6 = (__int64 *)(*((_QWORD *)a3 + 2) + v5);
      *a3 = v5 + 8;
    }
    sub_82220(*v6);
    return 0;
  }
  if ( a2 != 96 )
    return 0;
  netnode_check();
  if ( !(_BYTE)byte_B3728 )
  {
    if ( __cxa_guard_acquire(&byte_B3728) )
    {
      qword_B36A0 = v7;
      qword_B36B8 = v7;
      qword_B36D0 = v7;
      qword_B36E8 = v7;
      __cxa_guard_release(&byte_B3728);
    }
  }
  return (int)cvt64_node_supval_for_event();
}

