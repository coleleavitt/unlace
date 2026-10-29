unsigned __int64 __fastcall sub_1DC40(__int64 a1, _BYTE *a2, unsigned int *a3)
{
  int v4; // eax
  int v5; // ecx
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( a2 )
    *a2 = 0;
  v4 = a3[1];
  v5 = v4 >> 16;
  if ( (_BYTE)v4 == 127 && v5 )
  {
    if ( (v4 & 0xFF00) == 0x500 && v5 == 3 )
    {
      v7 = *a3;
      ptrace(PTRACE_GETEVENTMSG, v7, 0, &v10);
      v8 = dword_46588;
      v9 = v10;
      if ( dword_46588 == -1 )
      {
        sub_13820(16897, v7);
        v8 = dword_46588;
      }
      if ( v8 )
        ptrace(PTRACE_SETOPTIONS, v9, 0, 8);
      sub_1D860(a1, v10, -1, 1);
      if ( !a2 )
        return v11 - __readfsqword(0x28u);
    }
    else if ( v5 != 128 || !a2 )
    {
      return v11 - __readfsqword(0x28u);
    }
    *a2 = 1;
  }
  return v11 - __readfsqword(0x28u);
}

