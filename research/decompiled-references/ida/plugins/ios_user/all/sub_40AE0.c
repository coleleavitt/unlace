__int64 __fastcall sub_40AE0(_QWORD *a1, int a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  sub_65BB0((_DWORD)a1, (unsigned int)"GDB: dbg_set_resume_mode(tid=%d, resmod=%d)\n", a2, a3, a5, a6);
  if ( a3 != 1 )
    return 0xFFFFFFFFLL;
  v7 = a1[173];
  if ( a2 == -3 )
  {
    result = 0xFFFFFFFFLL;
    if ( !v7 )
      return result;
    v10 = a1[172];
  }
  else
  {
    v8 = a1[172];
    v9 = v8 + 112 * v7;
    if ( v8 == v9 )
      return 0xFFFFFFFFLL;
    while ( 1 )
    {
      v10 = v8;
      if ( a2 == *(_DWORD *)(v8 + 24) )
        break;
      v8 += 112;
      if ( v9 == v8 )
        return 0xFFFFFFFFLL;
    }
  }
  if ( !v10 )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(v10 + 33) = 1;
  return -*(unsigned __int8 *)(a1[108] + 250LL) ^ 1u;
}

