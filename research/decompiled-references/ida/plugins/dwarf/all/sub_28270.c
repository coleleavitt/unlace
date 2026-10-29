unsigned __int64 __fastcall sub_28270(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5; // eax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = a3;
  v10[1] = __readfsqword(0x28u);
  if ( !a3 )
    v3 = *(_QWORD *)(a1 + 144);
  if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)(v3 + 88) + 64LL))(a2, v10, &v9) )
    return v10[0] | ((unsigned __int64)(*(_WORD *)(a1 + 140) == 17) << 63);
  if ( (debug & 0x400000) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 88) + 464LL))(v9);
    sub_88B80((unsigned int)"Error DIE in CU%u retrieving offset : %s\n", *(_DWORD *)(a1 + 160), v5, v6, v7, v8);
  }
  return 0x8000000000000000LL;
}

