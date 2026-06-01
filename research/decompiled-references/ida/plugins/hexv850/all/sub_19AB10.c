__int64 __fastcall sub_19AB10(_QWORD *a1)
{
  unsigned int v1; // ebp
  int v3; // eax

  v1 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
  if ( (_BYTE)v1 && *((_DWORD *)a1 + 12) == -1 && (*((_BYTE *)a1 + 52) & 2) == 0 )
  {
    if ( a1[3] )
    {
      a1[4] = 0;
      qfree();
      a1[3] = 0;
      a1[5] = 0;
    }
    v3 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 48LL))(a1, a1 + 3);
    *((_DWORD *)a1 + 13) |= 2u;
    *((_DWORD *)a1 + 12) = v3;
  }
  return v1;
}

