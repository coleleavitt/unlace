__int64 __fastcall sub_116650(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 ph; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax

  if ( *(_BYTE *)a1 == 1
    && (v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 200LL))(a2, *(unsigned int *)(a1 + 8)),
        (_BYTE)v2) )
  {
    if ( ((*(_DWORD *)(a1 + 4) - 4) & 0xFFFFFFFB) != 0 )
    {
      ph = get_ph();
      v5 = *(int *)(a1 + 4);
      v6 = ph;
      if ( (unsigned __int8)getinf() )
        v7 = (unsigned __int8)getinf();
      else
        v7 = *(_QWORD *)(v6 + 120);
      if ( v5 != v7 )
        LOBYTE(v2) = *(int *)(a1 + 4) == *(_QWORD *)(v6 + 120);
    }
  }
  else
  {
    return 0;
  }
  return v2;
}

