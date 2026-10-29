__int64 __fastcall sub_8D0E0(__int64 *a1, __int64 a2)
{
  _BYTE v3[4]; // [rsp+0h] [rbp-38h] BYREF
  _DWORD v4[5]; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( sub_7F2E0((__int64)v3, a2)
    && !v3[2]
    && !v3[1]
    && v3[0] == 22
    && (sub_8CBF0(a2, v4, 1u, (__int64)"Number of ASN1 string bytes", -1, -1),
        sub_85760(a1, v4[0]),
        qlread(a2, *a1, (a1[1] == 0) + a1[1] - 1) == (a1[1] == 0) + a1[1] - 1) )
  {
    return v4[1];
  }
  else
  {
    return -1;
  }
}

