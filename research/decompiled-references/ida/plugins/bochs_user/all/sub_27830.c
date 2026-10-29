__int64 __fastcall sub_27830(__int64 a1, char a2)
{
  char v2; // al
  int v3; // edx
  __int64 v5; // [rsp+Ch] [rbp-1Ch] BYREF
  int v6; // [rsp+14h] [rbp-14h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v6 = 0;
  v5 = 2623;
  if ( a2 )
  {
    v2 = 112;
    v3 = 15;
  }
  else
  {
    v2 = 115;
    v3 = 14;
  }
  LOBYTE(v5) = v2;
  return sub_266F0(a1, (__int64)&v5, v3);
}

