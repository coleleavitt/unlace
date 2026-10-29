__int64 __fastcall sub_14800(__int64 *a1, __int64 a2)
{
  _BYTE v3[4]; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v4[5]; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( sub_11DB0((__int64)v3)
    && !v3[2]
    && !v3[1]
    && v3[0] == 22
    && (sub_14720(a2, v4, 1u, "Number of ASN1 string bytes", -1, -1),
        sub_144F0(a1, v4[0]),
        qlread() == (a1[1] == 0) + a1[1] - 1) )
  {
    return v4[1];
  }
  else
  {
    return -1;
  }
}

