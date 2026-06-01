__int64 __fastcall sub_C650(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // esi

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) )
  {
    if ( !(unsigned __int8)sub_A280(a1)
      && *(_BYTE *)(*(_QWORD *)(a1 + 864) + 41LL)
      && (result = sub_C590(a1), (_BYTE)result) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(*(_QWORD *)(a1 + 864) + 64LL);
      v2 = *(_QWORD *)(a1 + 376);
      v3 = *(unsigned __int16 *)(a1 + 102);
      *(_BYTE *)(v2 + 68) = *(_BYTE *)(a1 + 101);
      *(_DWORD *)(v2 + 64) = v3;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(10320);
    return sub_C700();
  }
  return result;
}

