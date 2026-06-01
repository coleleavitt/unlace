__int64 __fastcall sub_8FD90(__int64 a1)
{
  __int64 result; // rax
  __int64 (**v2)(); // [rsp+0h] [rbp-28h] BYREF
  unsigned __int8 v3; // [rsp+8h] [rbp-20h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a1 + 176) == 2 )
  {
    v3 = 0;
    v2 = off_C8D90;
    sub_8E7C0(a1, &v2);
    return v3;
  }
  return result;
}

