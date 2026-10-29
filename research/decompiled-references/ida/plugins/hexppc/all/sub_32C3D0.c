char __fastcall sub_32C3D0(_DWORD *a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  int v4; // r13d
  unsigned int v5; // r14d
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // r14d
  unsigned __int64 v9; // r12

  v3 = a3;
  v4 = a3;
  if ( (unsigned int)(*a1 - 3) <= 1 )
  {
    v5 = a1[2];
    if ( *a1 == 4 )
    {
      v3 = a3 >> 1;
      v5 = (unsigned __int16)v5;
    }
    v4 = v3;
    if ( (unsigned __int8)sub_61020(a2 + 13, v5, v3) )
    {
      if ( !(unsigned __int8)sub_60FD0(a2 + 13, v5, v3) )
        return 0;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a2 + 184LL))(a2, v5);
      v7 = a1[2];
      v8 = v6;
      if ( *a1 == 4 )
        v7 = (unsigned __int16)v7;
      v9 = (int)(v6 - v7) + v3;
      v4 = v9;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 88LL))(a2, v6, (unsigned int)v9)
        && (*(int (__fastcall **)(_QWORD *, _QWORD))(*a2 + 32LL))(a2, v8) < v9 )
      {
        return 0;
      }
    }
  }
  return sub_1C0A10((__int64)a1, v4);
}

