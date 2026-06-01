__int64 __fastcall sub_4B2E0(_QWORD *a1, int a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax

  sub_70460((_DWORD)a1, (unsigned int)"GDB: dbg_set_resume_mode(tid=%d, resmod=%d)\n", a2, a3, a5);
  if ( a3 != 1 )
    return 0xFFFFFFFFLL;
  v6 = a1[173];
  if ( a2 == -3 )
  {
    result = 0xFFFFFFFFLL;
    if ( !v6 )
      return result;
    v9 = a1[172];
  }
  else
  {
    v7 = a1[172];
    v8 = v7 + 112 * v6;
    if ( v7 == v8 )
      return 0xFFFFFFFFLL;
    while ( 1 )
    {
      v9 = v7;
      if ( a2 == *(_DWORD *)(v7 + 24) )
        break;
      v7 += 112;
      if ( v8 == v7 )
        return 0xFFFFFFFFLL;
    }
  }
  if ( !v9 )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(v9 + 33) = 1;
  return -*(unsigned __int8 *)(a1[108] + 250LL) ^ 1u;
}

