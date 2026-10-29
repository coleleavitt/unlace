__int64 __fastcall sub_16EC00(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  sub_165C20(a1, a2, a3);
  result = sub_18E5A0(a2, &unk_23C560, 6);
  if ( (a3 & 2) != 0 )
    return sub_18E5A0(a2, &unk_23C520, 1);
  return result;
}
