unsigned __int64 __fastcall sub_3EB460(__int64 *a1, _DWORD *a2)
{
  __int64 v3[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v4[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( *a2 != 61 )
  {
    sub_121360((__int64)v3, a1[23], (__int64)a2, 1);
    sub_5DD00(a1 + 3, v3);
    sub_30F930(a1 + 5, v4);
    if ( v4[0] )
    {
      v4[1] = nullptr;
      qfree();
    }
    qfree();
  }
  return v5 - __readfsqword(0x28u);
}

