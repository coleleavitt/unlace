__int64 __fastcall sub_3BEAD0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _BYTE *a4, char a5)
{
  unsigned int v7; // ebx
  __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  __int128 v10; // [rsp+8h] [rbp-60h]
  __int64 v11; // [rsp+18h] [rbp-50h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v9 = 0;
  v11 = 0;
  v10 = 0;
  v7 = sub_3BE080((__int64)&v9, a4, a5);
  if ( (_BYTE)v7 && ((unsigned __int64)v10 <= 1 || (unsigned __int8)sub_3BDF00(a1, (__int64)&v9, a3, a5)) )
    sub_3BE6A0(a1, a2, a3, (__int64)&v9);
  else
    v7 = 0;
  clear_tinfo_t();
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v7;
}

