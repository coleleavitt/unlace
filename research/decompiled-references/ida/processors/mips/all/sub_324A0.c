__int64 __fastcall sub_324A0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned int *v3; // rdx
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned int jtable_size; // r12d
  __int64 v8; // r13
  int v9; // r15d
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // r15d
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+10h] [rbp-58h]
  int v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 48LL) = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL);
  **(_DWORD **)(a1 + 376) |= 0x10000u;
  v2 = *(_QWORD *)(a1 + 920);
  if ( v2 != -1
    && (*(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = v2 + 16LL * *(_QWORD *)(a1 + 16),
        (unsigned __int8)is_loaded(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL)))
    && (v3 = *(unsigned int **)(a1 + 376),
        v4 = *v3 & 0xFFFFF7FD,
        BYTE1(v4) |= 8u,
        *v3 = v4,
        v5 = *(_QWORD *)(a1 + 912),
        v5 != -1)
    && (*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v5 + 16LL * *(_QWORD *)(a1 + 16),
        (unsigned __int8)is_loaded(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL)))
    && (**(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4,
        jtable_size = find_jtable_size(*(_QWORD *)(a1 + 376)),
        (_BYTE)jtable_size) )
  {
    v8 = *(_QWORD *)(a1 + 392);
    v9 = *(_DWORD *)(a1 + 928);
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL);
    v11 = get_flags_ex(v8, 4) & 0xF000000;
    if ( v9 == -1 )
    {
      if ( v11 == 83886080
        && (unsigned __int8)get_refinfo(&v16, v8, 1)
        && (v19 & 0x4F) == 2
        && (v19 & 0x80u) != 0
        && v16 == -1
        && v10 == v17
        && !v18 )
      {
        clr_op_type(v8, 1);
      }
    }
    else if ( !v11 )
    {
      op_offset(v8, 1, (unsigned __int8)v9, v10, 0, 0);
    }
    v12 = *(_QWORD *)(a1 + 416);
    v13 = *(_DWORD *)(a1 + 932);
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL);
    v15 = get_flags_ex(v12, 4) & 0xF000000;
    if ( v13 == -1 )
    {
      if ( v15 == 83886080
        && (unsigned __int8)get_refinfo(&v16, v12, 1)
        && (v19 & 0x4F) == 2
        && (v19 & 0x80u) != 0
        && v16 == -1
        && v14 == v17
        && !v18 )
      {
        clr_op_type(v12, 1);
      }
    }
    else if ( !v15 )
    {
      op_offset(v12, 1, (unsigned __int8)v13, v14, 0, 0);
    }
    netnode_supdel(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 152LL), *(_QWORD *)(a1 + 384), 321);
    **(_DWORD **)(a1 + 376) |= 1u;
    mark_switch_insns_jpt(a1, a2, 0);
  }
  else
  {
    return 0;
  }
  return jtable_size;
}

