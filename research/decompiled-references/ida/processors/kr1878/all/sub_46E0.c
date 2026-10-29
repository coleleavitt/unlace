__int64 __fastcall sub_46E0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 *v3; // rbx
  unsigned int wide_byte; // r12d

  v2 = 0;
  v3 = qword_A340;
  wide_byte = get_wide_byte();
  *(_QWORD *)(a1 + 184) = a2 + 40;
  do
  {
    if ( (_BYTE)byte_A328 || !__cxa_guard_acquire(&byte_A328) )
    {
      if ( (wide_byte & (_DWORD)v3[11]) != *((_DWORD *)v3 + 23) )
        goto LABEL_3;
    }
    else
    {
      sub_3A00(qword_A340);
      __cxa_guard_release(&byte_A328);
      if ( (wide_byte & (_DWORD)v3[11]) != *((_DWORD *)v3 + 23) )
        goto LABEL_3;
    }
    *(_WORD *)(a2 + 24) = *(_WORD *)v3;
    *(_WORD *)(a2 + 26) = 1;
    if ( (unsigned __int8)sub_45D0(a1, a2, wide_byte, v2, 0, 2) )
      return *(unsigned __int16 *)(a2 + 26);
LABEL_3:
    ++v2;
    v3 += 12;
  }
  while ( v2 != 52 );
  return 0;
}

