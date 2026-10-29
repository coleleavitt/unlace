__int64 __fastcall sub_186DE0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = (unsigned int)sub_186DC0(a1, a2);
  return v2 + (sub_186DC0(a1, a2 + 4) << 32);
}
