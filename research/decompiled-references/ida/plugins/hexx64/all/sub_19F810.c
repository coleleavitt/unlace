__int64 __fastcall sub_19F810(_QWORD *a1)
{
  unsigned int v2; // ebp
  __int64 v4; // rdi
  int v5; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
  if ( (_BYTE)v2 && *((_DWORD *)a1 + 12) == -1 && (*((_BYTE *)a1 + 52) & 2) == 0 )
  {
    v4 = a1[3];
    if ( v4 )
    {
      a1[4] = 0;
      qfree(v4);
      a1[3] = 0;
      a1[5] = 0;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 48LL))(a1, a1 + 3);
    *((_DWORD *)a1 + 13) |= 2u;
    *((_DWORD *)a1 + 12) = v5;
  }
  return v2;
}

