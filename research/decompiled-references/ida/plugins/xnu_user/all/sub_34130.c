__int64 __fastcall sub_34130(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // [rsp+4h] [rbp-24h]

  v2 = sub_340B0(a1, a2);
  if ( v2 != -1 && qlseek() == v2 && qlread() == 4 )
    return v4;
  else
    return -1;
}

