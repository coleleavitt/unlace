__int64 __fastcall sub_4C3C0(__int64 a1, const char *a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  v6 = 0;
  v4 = sub_68640(a3, &v6, a2);
  if ( (_BYTE)v4 )
    v4 = sub_6C330(a1, &v6, sub_4C3C0, a3);
  else
    sub_140F0((__int64)"missing remote include file %s\n", a2);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v4;
}

