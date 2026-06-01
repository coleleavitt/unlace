unsigned __int64 __fastcall sub_F630(__int64 a1, int *a2)
{
  int v2; // eax
  __int64 v3; // rdx

  v2 = *(unsigned __int8 *)a2;
  v3 = (unsigned int)(v2 - 5);
  if ( (unsigned __int8)(v2 - 5) > 1u && (v2 & 0xF7) != 1 )
  {
    if ( under_debugger )
      BUG();
    a1 = 30672;
    interr(30672);
  }
  return sub_F280(a1 + 8, a2, v3);
}

