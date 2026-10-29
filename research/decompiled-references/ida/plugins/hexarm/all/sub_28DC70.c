__int64 __fastcall sub_28DC70(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v6; // rax
  int v7; // edx

  v2 = sub_29D040(*(_QWORD *)(a2 + 24) + 48LL);
  if ( !(_BYTE)v2 )
    return 0;
  v3 = v2;
  v4 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(v4 + 8) != 61 )
    return 0;
  v6 = sub_255DF0(*(__int64 **)(v4 + 24));
  v7 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)(v7 - 21) <= 1 )
  {
    if ( v6 != 1 )
    {
      if ( v7 == 22 && !v6 )
        goto LABEL_9;
      return 0;
    }
LABEL_19:
    if ( *(_QWORD *)(a2 + 32) )
    {
      sub_2559F0(*(_QWORD *)(a2 + 32));
      clear_tinfo_t();
      j__qfree();
    }
    sub_255C10((__int64 *)a2, *(_QWORD *)(a2 + 24));
    goto LABEL_12;
  }
  if ( v7 != 23 )
  {
    if ( v7 == 20 )
      goto LABEL_8;
    return 0;
  }
  if ( !v6 )
    goto LABEL_19;
LABEL_8:
  if ( v6 != 1 )
    return 0;
LABEL_9:
  if ( *(_QWORD *)(a2 + 32) )
  {
    sub_2559F0(*(_QWORD *)(a2 + 32));
    clear_tinfo_t();
    j__qfree();
  }
  *(_DWORD *)(a2 + 8) = 49;
LABEL_12:
  sub_244580(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  if ( (unsigned __int8)sub_283EC0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return v3;
}

