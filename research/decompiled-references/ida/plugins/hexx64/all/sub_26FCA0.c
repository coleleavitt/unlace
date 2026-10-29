__int64 __fastcall sub_26FCA0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r12
  unsigned __int64 v7; // r12
  int tinfo_property; // r14d
  int tinfo_size; // eax
  __int64 v11; // rsi

  v3 = *(unsigned __int8 *)(a1 + 136);
  v4 = a2;
  v5 = *(_DWORD *)(a2 + 8);
  if ( (_BYTE)v3 )
  {
    if ( v5 != 37 )
      goto LABEL_7;
    v6 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v6 + 8) != 61 )
    {
      v6 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v6 + 8) != 61 )
        goto LABEL_22;
    }
    if ( *(_QWORD *)(a1 + 72) != sub_255A30(*(__int64 **)(v6 + 24)) )
    {
      v5 = *(_DWORD *)(v6 + 8);
      v4 = v6;
LABEL_7:
      if ( v5 == 61 )
      {
        v7 = sub_255A30(*(__int64 **)(v4 + 24));
        tinfo_property = get_tinfo_property();
        tinfo_size = get_tinfo_size();
        sub_240A20(
          v4,
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
          *(_QWORD *)(a1 + 64),
          v7 / *(_QWORD *)(a1 + 72),
          tinfo_size,
          tinfo_property,
          a3);
        return v3;
      }
LABEL_22:
      sub_269F00(a3);
    }
    v11 = *(_QWORD *)(a2 + 24);
    if ( v11 == v6 )
      v11 = *(_QWORD *)(v4 + 32);
    sub_255850((__int64 *)v4, v11, a3);
    if ( v6 )
    {
      sub_255630(v6, a3);
      clear_tinfo_t();
      j__qfree(v6);
    }
    return v3;
  }
  if ( v5 == 37 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) == 61 )
    {
      v4 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      v4 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v4 + 8) != 61 )
        return v3;
    }
    if ( v4 )
      goto LABEL_16;
    return v3;
  }
  if ( !a2 || v5 != 61 )
    return v3;
LABEL_16:
  LOBYTE(v3) = (unsigned __int64)sub_255A30(*(__int64 **)(v4 + 24)) % *(_QWORD *)(a1 + 72) == 0;
  return v3;
}

