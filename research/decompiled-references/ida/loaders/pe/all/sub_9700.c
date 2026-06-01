__int64 __fastcall sub_9700(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  bool v5; // zf
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  int v9; // eax
  unsigned __int64 v10; // rbp
  __int64 dword; // r15
  __int64 (*v13)(); // rax
  _QWORD v14[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = 0;
  v5 = *(_BYTE *)(a1 + 8) == 0;
  v14[3] = __readfsqword(0x28u);
  v6 = a4;
  if ( v5 )
  {
    v4 = qword_349D8;
    v6 = qword_349D8 + a4;
  }
  v7 = 0x80000000LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 16LL) & v6;
  v9 = 4;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 88) + 24LL) == 523 )
  {
    v7 = 0x8000000000000000LL;
    v9 = 8;
  }
  *(_DWORD *)(a1 + 12) = v9;
  if ( (unsigned __int8)is_loaded() && (v8 < *(_QWORD *)(a1 + 72) || v8 >= *(_QWORD *)(a1 + 80)) )
  {
    sub_7EF0((__int64)v14, a2);
    sub_9640();
    while ( (unsigned __int8)is_loaded() )
    {
      if ( *(_DWORD *)(a1 + 12) == 4 )
        dword = (unsigned int)get_dword();
      else
        dword = get_qword();
      v13 = sub_6EB0;
      if ( *(_WORD *)(*(_QWORD *)(a1 + 88) + 24LL) == 523 )
        v13 = sub_6ED0;
      ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD))v13)(v8, *(int *)(a1 + 12), 0);
      if ( !dword )
        break;
      if ( *(_BYTE *)(a1 + 8) )
      {
        get_default_reftype();
        op_offset();
      }
      else if ( (dword & v7) == 0 )
      {
        sub_7230(v8, v4, *(unsigned int *)(a1 + 12), 0);
      }
      v8 += *(int *)(a1 + 12);
    }
    if ( v14[0] )
    {
      v14[1] = 0;
      qfree();
    }
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 16LL)
      & (v4 + *(unsigned int *)(*(_QWORD *)(a1 + 88) + 128LL) + 20LL * *(int *)(a1 + 104));
  if ( (unsigned __int8)is_loaded() && (v10 < *(_QWORD *)(a1 + 72) || v10 >= *(_QWORD *)(a1 + 80)) )
    sub_8E90(*(_QWORD *)(a1 + 96), v10, a1 + 16, (__int64)a2, v4, *(_DWORD *)(a1 + 12));
  ++*(_DWORD *)(a1 + 104);
  return 0;
}
