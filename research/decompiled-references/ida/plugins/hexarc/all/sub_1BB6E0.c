__int64 __fastcall sub_1BB6E0(__int64 a1, _DWORD *a2, int a3, int a4)
{
  unsigned __int64 v6; // rbp
  int v7; // ebx
  unsigned __int64 *range; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  _QWORD v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a3 + a4;
  v15[3] = __readfsqword(0x28u);
  v7 = a4;
  range = (unsigned __int64 *)rangeset_t_find_range();
  if ( range )
  {
    if ( v6 < *range )
    {
      if ( !under_debugger )
        sub_37B760(51801);
      BUG();
    }
    v7 = range[1] - a3;
  }
  v13 = *(__int64 **)(a1 + 8);
  if ( *a2 == 3 )
  {
    sub_5D900(v13, a2[2], v7);
  }
  else
  {
    v15[0] = *(_QWORD *)(a1 + 56) + *((_QWORD *)a2 + 1);
    v15[1] = v7;
    sub_30F830(v13 + 2, v15, v9, v10, v11, v12);
  }
  return 0;
}

