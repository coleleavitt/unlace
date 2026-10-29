__int64 __fastcall sub_39DE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 flags; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx

  result = get_auto_state();
  if ( (_DWORD)result == 40 )
  {
    v3 = *(_QWORD *)(a1 + 912);
    if ( v3 != -1 )
    {
      v8 = *(_DWORD *)(a1 + 920);
      flags = get_flags_ex(v3, 0);
      result = is_defarg(flags, v8);
      if ( !(_BYTE)result )
      {
        v10 = *(_DWORD *)(a1 + 936);
        if ( v10 == 3 )
        {
          v11 = 132;
        }
        else if ( v10 > 3 )
        {
          if ( v10 != 4 )
            goto LABEL_23;
          v11 = *(_BYTE *)(*(_QWORD *)(a1 + 888) + 540LL) | 0x80u;
        }
        else if ( v10 == 1 )
        {
          v11 = 129;
        }
        else
        {
          if ( v10 != 2 )
            goto LABEL_23;
          v11 = 1;
        }
        result = op_offset(
                   *(_QWORD *)(a1 + 912),
                   *(unsigned int *)(a1 + 920),
                   v11,
                   *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL),
                   *(_QWORD *)(a1 + 928),
                   0);
      }
    }
    v4 = *(_QWORD *)(a1 + 944);
    if ( v4 != -1 )
    {
      v5 = *(_DWORD *)(a1 + 952);
      v6 = get_flags_ex(v4, 0);
      result = is_defarg(v6, v5);
      if ( !(_BYTE)result )
      {
        v7 = *(unsigned int *)(a1 + 936);
        if ( (_DWORD)v7 == 3 )
        {
          v7 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 888) + 540LL);
          return op_offset(
                   *(_QWORD *)(a1 + 944),
                   *(unsigned int *)(a1 + 952),
                   v7,
                   *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL),
                   0,
                   0);
        }
        if ( (_DWORD)v7 == 4 )
          return op_offset(
                   *(_QWORD *)(a1 + 944),
                   *(unsigned int *)(a1 + 952),
                   v7,
                   *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL),
                   0,
                   0);
        if ( under_debugger )
LABEL_25:
          BUG();
        interr(10468);
LABEL_23:
        if ( !under_debugger )
          interr(10467);
        goto LABEL_25;
      }
    }
  }
  return result;
}

