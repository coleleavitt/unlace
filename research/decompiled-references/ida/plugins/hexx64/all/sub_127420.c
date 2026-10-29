__int64 __fastcall sub_127420(__int64 a1, unsigned __int64 *a2, unsigned __int8 *a3, __int64 a4, double a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // eax
  _QWORD _0[9]; // [rsp+0h] [rbp+0h] BYREF

  _0[3] = __readfsqword(0x28u);
  sub_123A40((__int64)_0, a3, (__int64)a3, a4);
  v5 = sub_1272B0((__int64)_0, a2, *(_DWORD *)(a1 + 4), 0, a5);
  if ( (_BYTE)v5 )
  {
    LOBYTE(v7) = sub_1255D0((unsigned __int8 *)a1, (__int64)a2, (__int64)_0, 0, a5);
    v5 = v7;
  }
  sub_11CDA0((__int64)_0);
  return v5;
}

