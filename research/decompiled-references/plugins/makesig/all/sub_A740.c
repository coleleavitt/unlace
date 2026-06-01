__int64 __fastcall sub_A740(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  v2 = sub_9BA0(a1, a2, (__int64)&v4);
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4);
  }
  return v2;
}
