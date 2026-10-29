void __fastcall sub_C9250(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  if ( !a1 )
    goto LABEL_8;
  if ( *(_QWORD *)(a1 + 760) )
  {
    if ( *(_QWORD *)(a1 + 488) > (unsigned __int64)a2 )
    {
      v2 = 128;
      if ( *(_QWORD *)(a1 + 472) <= (unsigned __int64)a2 )
        goto LABEL_11;
      if ( *(_QWORD *)(a1 + 480) <= (unsigned __int64)a2 )
      {
        v2 = *(unsigned __int16 *)(a1 + 414);
        goto LABEL_11;
      }
    }
    v2 = (*((__int64 (__fastcall **)(_QWORD *))&xmmword_2414B0 + 1))(a2);
LABEL_11:
    **(_DWORD **)(a1 + 760) += v2;
    return;
  }
  if ( *(_QWORD *)(a1 + 488) <= (unsigned __int64)a2 )
  {
LABEL_8:
    sub_C91C0((__int64)a2, (__int64)a2);
    return;
  }
  if ( *(_QWORD *)(a1 + 472) > (unsigned __int64)a2 )
  {
    if ( *(_QWORD *)(a1 + 480) <= (unsigned __int64)a2 )
    {
      *a2 = *(_QWORD *)(a1 + 448);
      *(_QWORD *)(a1 + 448) = a2;
      return;
    }
    goto LABEL_8;
  }
  *a2 = *(_QWORD *)(a1 + 464);
  *(_QWORD *)(a1 + 464) = a2;
}
