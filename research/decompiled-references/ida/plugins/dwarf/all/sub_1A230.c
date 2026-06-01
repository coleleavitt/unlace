unsigned __int64 __fastcall sub_1A230(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  v3 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
    callui(23, a2);
  return v3 - __readfsqword(0x28u);
}

