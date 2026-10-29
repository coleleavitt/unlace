unsigned __int64 __fastcall sub_F7F40(__int64 a1)
{
  __int64 v2[5]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 128) != *(_DWORD *)(a1 + 116) && *(_QWORD *)(a1 + 784) )
  {
    memset(&v2[1], 0, 32);
    v2[0] = (__int64)&off_4DCF10;
    sub_11F9E0(a1, v2);
    sub_66FA0(a1, 1);
  }
  return v3 - __readfsqword(0x28u);
}

