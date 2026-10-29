__int64 __fastcall sub_14E100(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // eax
  char *s1; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  s1 = nullptr;
  v5 = 0;
  v1 = sub_1D2AB0((__int64 *)&s1, a1, 0);
  if ( (_BYTE)v1 )
  {
    LOBYTE(v3) = sub_1D3240(s1);
    v1 = v3;
  }
  if ( s1 )
  {
    *(_QWORD *)&v5 = 0;
    qfree((__int64)s1);
  }
  return v1;
}

