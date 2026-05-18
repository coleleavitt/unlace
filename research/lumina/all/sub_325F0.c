__int64 __fastcall sub_325F0(__int64 a1, char **a2)
{
  char v3[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v4; // [rsp+408h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  sub_199140(a1, a2);
  sub_199360(v3, 0x400u, "%Y-%m-%d_%H-%M-%S");
  sub_299F0(a2);
  return 1;
}
