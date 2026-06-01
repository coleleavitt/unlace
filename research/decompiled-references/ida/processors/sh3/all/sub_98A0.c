__int64 __fastcall sub_98A0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 insn; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _WORD v11[180]; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int64 v12; // [rsp+168h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  if ( !a2 )
    return has_insn_feature(*(unsigned __int16 *)(a1 + 24), 0x8000, 0, a4, a5, a6);
  qmemcpy(v11, (const void *)a1, sizeof(v11));
  insn = decode_prev_insn(v11, *(_QWORD *)(a1 + 16));
  result = 0;
  if ( insn != -1 )
    return has_insn_feature(v11[12], 0x8000, insn, v8, v9, v10);
  return result;
}

