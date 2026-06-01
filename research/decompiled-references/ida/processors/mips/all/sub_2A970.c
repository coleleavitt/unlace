__int64 __fastcall sub_2A970(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 flags; // rax
  unsigned int refinfo; // r13d
  __int64 v9; // rdi
  _QWORD v10[3]; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 16);
  v12 = __readfsqword(0x28u);
  flags = get_flags_ex(v4, 0);
  if ( (unsigned __int8)is_off(flags, a3)
    && *(_WORD *)(a2 + 26) == 8
    && (refinfo = get_refinfo(v10, *(_QWORD *)(a2 + 16), a3), (_BYTE)refinfo)
    && ((v11 & 0x4F) == 6 || (v11 & 0x4F) == (*(_DWORD *)(a1 + 608) | 0x40)) )
  {
    v9 = *(_QWORD *)(a2 + 16);
    v11 = 2;
    v10[0] = -1;
    v10[2] = 0;
    op_offset_ex(v9, a3, v10);
  }
  else
  {
    return 0;
  }
  return refinfo;
}

