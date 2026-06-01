__int64 __fastcall sub_344F0(__int64 a1)
{
  __int64 v1; // rdi
  __int128 v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 8);
  v4 = __readfsqword(0x28u);
  sub_34460(v1);
  if ( (getinf(57) & 0xF) == 0 )
  {
    v3 = 0;
    LOBYTE(v3) = 1;
    set_compiler(&v3, 2, 0);
  }
  return 0;
}

