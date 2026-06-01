__int64 __fastcall sub_21380(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  _BYTE v15[144]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v16; // [rsp+90h] [rbp-68h]
  unsigned __int64 v17; // [rsp+D8h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v4 = a1 + 1216;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_QWORD *)(a1 + 1224);
  if ( v6 )
  {
    v7 = v4;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v6 + 16);
        v9 = *(_QWORD *)(v6 + 24);
        if ( v5 > *(_DWORD *)(v6 + 32) )
          break;
        v7 = v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v8 )
          goto LABEL_7;
      }
      v6 = *(_QWORD *)(v6 + 24);
    }
    while ( v9 );
LABEL_7:
    if ( v4 != v7 && v5 >= *(_DWORD *)(v7 + 32) )
    {
      v11 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
      if ( v11 == 7 )
      {
        if ( *(_BYTE *)(a2 + 16) )
          goto LABEL_24;
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFF8) != 0 )
        {
          if ( (unsigned int)(v11 - 8) <= 1 )
            goto LABEL_17;
LABEL_24:
          *(_DWORD *)(v7 + 52) = 0;
          v12 = *(_DWORD *)(v7 + 60);
          if ( v12 != 2 )
          {
LABEL_18:
            if ( v12 == 3 )
              sub_16C00(a1, *(_DWORD *)(a2 + 4));
            if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
              goto LABEL_21;
LABEL_26:
            if ( !*(_BYTE *)(v7 + 56) && *(_DWORD *)(a2 + 24) == 5 && *(_BYTE *)(a2 + 16) )
            {
              v13 = *(_DWORD *)(a2 + 4);
              if ( ptrace(PTRACE_GETREGS, v13, 0, v15) )
              {
                sub_B0B0((__int64)"clear_tbit: error reading registers for thread %d\n", v13);
              }
              else
              {
                v14 = v16;
                if ( (v16 & 0x100) != 0 )
                {
                  BYTE1(v14) = BYTE1(v16) & 0xFE;
                  v16 = v14;
                  if ( ptrace(PTRACE_SETREGS, v13, 0, v15) )
                    sub_B0B0((__int64)"clear_tbit: error writting registers for thread %d\n", v13);
                }
              }
            }
            goto LABEL_21;
          }
LABEL_25:
          *(_QWORD *)(v7 + 44) = 0;
          sub_1F6B0(a1, *(_DWORD *)(v7 + 40), 0);
          if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
            goto LABEL_21;
          goto LABEL_26;
        }
        if ( (unsigned int)(v11 - 3) > 1 )
          goto LABEL_24;
      }
LABEL_17:
      v12 = *(_DWORD *)(v7 + 60);
      if ( v12 != 2 )
        goto LABEL_18;
      goto LABEL_25;
    }
  }
  if ( v5 && (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 4 && !*(_BYTE *)(a1 + 1349) )
  {
    sub_14490(a1, (__int64)"could not find thread %d!\n", v5);
    return 0xFFFFFFFFLL;
  }
LABEL_21:
  *(_BYTE *)(a1 + 1414) = 0;
  if ( !(unsigned __int8)sub_210C0(a1, 0) )
    return 0xFFFFFFFFLL;
  return 1;
}

