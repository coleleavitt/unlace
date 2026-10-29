unsigned __int64 __fastcall sub_15670(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-30h]
  unsigned int v11; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v9 = &off_44D60;
  v10 = a2;
  v11 = a3;
  if ( !(unsigned int)sub_B3D0((__int64 (__fastcall ***)(_QWORD, __int64))&v9) )
  {
    if ( (_BYTE)a3 == 127 )
    {
      v6 = a1[161];
      v7 = a1[160];
      if ( a1[162] < (unsigned __int64)(v6 + 1) )
      {
        v8 = qvector_reserve();
        a1[160] = v8;
        v7 = v8;
        v6 = a1[161];
      }
      *(_DWORD *)(v7 + 4 * v6) = a2;
      ++a1[161];
    }
    else if ( __OFSUB__((a3 & 0x7F) + 1, 1) || (a3 & 0x7F) == 0 )
    {
      sub_B0B0((__int64)"  %d: failed to store pending status %x, killing unknown thread\n", a2, a3);
      ptrace(PTRACE_KILL, a2, 0, 0);
    }
  }
  return v12 - __readfsqword(0x28u);
}

