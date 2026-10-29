bool __fastcall sub_20110(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r12
  unsigned int v4; // esi
  _BYTE v6[128]; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v7[3]; // [rsp+80h] [rbp-88h] BYREF
  __off64_t v8; // [rsp+98h] [rbp-70h]
  unsigned __int64 v9; // [rsp+D8h] [rbp-30h]

  v2 = a2;
  v9 = __readfsqword(0x28u);
  ptrace(PTRACE_GETREGS, a2, 0, v6);
  v3 = *(int *)(a1 + 276);
  if ( (_DWORD)v3 != (unsigned int)sub_1F860(a1, a2, v8, v7, *(_DWORD *)(a1 + 276), 0) )
  {
    v4 = *(_DWORD *)(a1 + 1340);
    if ( v4 == v2 || (_DWORD)v3 != (unsigned int)sub_1F860(a1, v4, v8, v7, v3, 0) )
      return 0;
  }
  v8 += v3;
  return ptrace(PTRACE_SETREGS, v2, 0, v6) == 0;
}

