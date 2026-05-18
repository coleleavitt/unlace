void __fastcall sub_DCC50(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi

  if ( *(_BYTE *)(*(_QWORD *)a1 + 103LL) )
  {
    if ( (_DWORD)a4 != -11 )
      sub_D0130(*(_QWORD *)a1, (unsigned int)a4, a3, a4, a5, a6);
  }
  else
  {
    if ( a2 < 0 )
      a2 = *(_DWORD *)(a1 + 144) - 1;
    v6 = *(_QWORD *)(a1 + 136) + 24LL * a2;
    if ( (int)a4 >= 0 || *(_BYTE *)(v6 + 1) )
    {
      sub_DCB90((__int64 *)a1, v6, (const char *)a3, a4, a5, a6);
    }
    else if ( (_DWORD)a4 == -3 )
    {
      *(_DWORD *)(v6 + 16) = a3;
      *(_BYTE *)(v6 + 1) = -3;
    }
    else if ( a3 )
    {
      *(_QWORD *)(v6 + 16) = a3;
      *(_BYTE *)(v6 + 1) = a4;
      if ( (_DWORD)a4 == -11 )
        ++*(_DWORD *)(a3 + 24);
    }
  }
}
