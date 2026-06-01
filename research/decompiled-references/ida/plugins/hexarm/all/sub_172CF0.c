__int64 __fastcall sub_172CF0(__int64 a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  int v4; // eax

  if ( sub_1255D0(
         *(unsigned __int8 **)(a1 + 40),
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL),
         *(unsigned int **)(a1 + 32),
         0) )
  {
    v2 = *(_DWORD **)(a1 + 32);
    v3 = *(_QWORD *)(a1 + 40);
    v4 = v2[17];
    if ( *(_DWORD *)(v3 + 68) >= v4 )
    {
      if ( *(_DWORD *)(v3 + 68) == v4 )
      {
        *v2 = 4;
        v3 = *(_QWORD *)(a1 + 40);
        v2 = *(_DWORD **)(a1 + 32);
      }
      else if ( (unsigned int)(*v2 - 10) > 1 )
      {
        if ( !under_debugger )
          sub_3835A0(51675);
        BUG();
      }
      sub_124BC0((__int64)(v2 + 8), (unsigned __int8 *)(v3 + 64));
      sub_11C7E0(*(_QWORD *)(a1 + 32) + 48LL);
      ++*(_DWORD *)(a1 + 48);
    }
  }
  return 0;
}

