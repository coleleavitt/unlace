__int64 __fastcall sub_341C0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-28h]

  v2 = sub_340B0(a1, a2);
  if ( v2 != -1 && qlseek() == v2 && qlread() == 8 )
    return v4;
  else
    return -1;
}

