__int64 __fastcall sub_FD00(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4, int a5)
{
  __int64 v5; // rax
  unsigned int v7; // edi
  __int64 v8; // r10

  v5 = *a4;
  v7 = 0;
  if ( *a4 != -1 )
  {
    v8 = a4[1];
    if ( v8 != -1
      && (*((_BYTE *)a4 + 25) & 1) == 0
      && (((_DWORD)v5 + (unsigned int)a4[2] - (_DWORD)v8) & 0xFFFFFC00) == a5 )
    {
      *a1 = v5;
      v7 = 1;
      *a2 = a4[1];
    }
  }
  return v7;
}

