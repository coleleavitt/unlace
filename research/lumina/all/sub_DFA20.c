__int64 __fastcall sub_DFA20(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 *v5; // rax
  size_t v6; // rdx

  if ( !*(_BYTE *)(a1 + 103) )
  {
    if ( *(_QWORD *)(a1 + 480) <= (unsigned __int64)a2 && *(_QWORD *)(a1 + 488) > (unsigned __int64)a2 )
    {
      v5 = sub_DBF10(a1, a3);
      v3 = (__int64)v5;
      if ( v5 )
      {
        v6 = 128;
        if ( (unsigned __int64)a2 < *(_QWORD *)(a1 + 472) )
          v6 = *(unsigned __int16 *)(a1 + 414);
        memcpy(v5, a2, v6);
        if ( a2 )
          sub_C9250(a1, a2);
        return v3;
      }
    }
    else
    {
      v3 = sub_D2640((__int64)a2, a3);
      if ( v3 )
        return v3;
      if ( !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
      {
        sub_DBE60(a1);
        return v3;
      }
    }
  }
  return 0;
}
