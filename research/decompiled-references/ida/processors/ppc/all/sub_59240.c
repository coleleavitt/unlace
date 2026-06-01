bool __fastcall sub_59240(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = getseg(a2);
  return v2 && *(_BYTE *)(v2 + 184) == 3;
}

