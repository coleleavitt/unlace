__int64 __fastcall sub_3EA860(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  const char *v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v4 = nullptr;
  v5 = 0;
  v2 = sub_1D2AB0((__int64 *)&v4, a2, 0);
  if ( (_BYTE)v2 && sub_333280(v4, 0.0) )
    copy_tinfo_t();
  else
    v2 = 0;
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree((__int64)v4);
  }
  return v2;
}

