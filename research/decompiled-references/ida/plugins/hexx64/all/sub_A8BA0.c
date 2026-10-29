__int64 __fastcall sub_A8BA0(__int64 a1, char *a2, int a3, double a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r12d
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v8[5]; // [rsp+10h] [rbp-28h] BYREF

  v4 = a3;
  v8[1] = __readfsqword(0x28u);
  v7 = 0;
  if ( (unsigned __int8)sub_A8840(a1, a2, &v7, v8, 0, a4) )
  {
    v5 = 0;
    if ( !v8[0] )
      LOBYTE(v5) = v4 == get_tinfo_size();
  }
  else
  {
    v5 = 1;
  }
  clear_tinfo_t();
  return v5;
}

