__int64 __fastcall sub_14F5C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4, double a5)
{
  unsigned int v7; // eax
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  _QWORD v11[13]; // [rsp+0h] [rbp-68h] BYREF

  v11[7] = __readfsqword(0x28u);
  LOBYTE(v7) = sub_125B60((unsigned __int8 *)(a3 + 32), a3 + 48, 0, a5);
  if ( (_BYTE)v7 )
  {
    v8 = v7;
    if ( a2 || (memset(&v11[1], 0, 32), v11[0] = &off_4DDD00, v11[5] = a1, !(unsigned int)sub_11F760((_BYTE *)a3, v11)) )
    {
      v9 = 0;
      if ( *(_DWORD *)a3 <= 0x34u )
        v9 = (0x1532A600000000uLL >> *(_DWORD *)a3) & 1;
      *a4 = v9;
      *(_DWORD *)(a3 + 4) &= ~0x10u;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 0;
  }
  return v8;
}

