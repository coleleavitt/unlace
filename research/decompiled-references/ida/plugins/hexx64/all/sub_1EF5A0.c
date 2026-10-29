__int64 __fastcall sub_1EF5A0(_DWORD *a1, _QWORD *a2, int a3, unsigned int a4, char a5, double a6)
{
  unsigned int v9; // eax
  unsigned int v10; // r12d
  __int64 v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  sub_1EEAF0(v12, a1, a2, a3, a5, a6);
  if ( LOBYTE(v12[0]) || (a5 & 2) == 0 )
  {
    LOBYTE(v9) = sub_1EF340((__int64)a1, (__int64)a2, v12, a4, a5, a6);
    v10 = v9;
    if ( (_BYTE)v9 )
    {
      sub_1EF530((__int64)a1);
      a1[22] = a3;
      goto LABEL_6;
    }
    if ( (a5 & 2) == 0 )
      sub_1ECBA0(a6);
  }
  v10 = 0;
LABEL_6:
  clear_tinfo_t();
  return v10;
}

