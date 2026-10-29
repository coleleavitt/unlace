__int64 __fastcall sub_1E8220(_DWORD *a1, _QWORD *a2, unsigned int a3, unsigned int a4, char a5)
{
  unsigned int v8; // eax
  unsigned int v9; // r12d
  _BYTE v11[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  sub_1E7770(v11, a1, a2, a3, a5);
  if ( v11[0] || (a5 & 2) == 0 )
  {
    LOBYTE(v8) = sub_1E7FC0((__int64)a1, (__int64)a2, v11, a4, a5);
    v9 = v8;
    if ( (_BYTE)v8 )
    {
      sub_1E81B0((__int64)a1);
      a1[22] = a3;
      goto LABEL_6;
    }
    if ( (a5 & 2) == 0 )
      sub_1E5820();
  }
  v9 = 0;
LABEL_6:
  clear_tinfo_t();
  return v9;
}

