__int64 __fastcall sub_56DB0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdx
  __int64 result; // rax

  if ( (*(_QWORD *)(a3 + 224) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(a3 + 224) == -1 )
  {
    if ( under_debugger )
      BUG();
    a1 = 30478;
    interr(30478);
  }
  v3 = sub_561C0(*(__int64 ***)(a1 + 16), (__int64 *)(a3 + 224), nullptr);
  result = 1;
  if ( v3 )
  {
    if ( *((_DWORD *)v3 + 68) != 3 )
    {
      sub_56CA0(*(_QWORD *)(a1 + 16), a2, (__int64)v3, *(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 40), *(_QWORD *)(a1 + 32));
      return 0;
    }
  }
  return result;
}

