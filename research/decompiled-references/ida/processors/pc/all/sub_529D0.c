unsigned __int64 __fastcall sub_529D0(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  char v8; // [rsp+17h] [rbp-21h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v7 = a2;
  v9 = __readfsqword(0x28u);
  if ( a5 )
  {
    v7 = a2 - 4;
    sub_519A0(a2 - 4, a3 + 4, 0);
    sub_51CE0(a1, &v7, 0);
  }
  else
  {
    sub_519A0(a2, a3, 0);
  }
  v8 = a4;
  netnode_supset();
  show_auto();
  return v9 - __readfsqword(0x28u);
}
