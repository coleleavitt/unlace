__int64 __fastcall sub_1EBE0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4, int a5)
{
  __int64 v6; // rdi
  unsigned int v7; // r10d
  __int64 v8; // r9

  v6 = *a4;
  v7 = 0;
  if ( *a4 != -1 )
  {
    v8 = a4[1];
    if ( v8 != -1
      && (*((_BYTE *)a4 + 25) & 1) == 0
      && (_DWORD)v6
       + *((_DWORD *)a4 + 4)
       - (_DWORD)v8
       - ((unsigned int)((unsigned __int64)(v6 + a4[2] - v8 + 2048) >> 12) << 12) == a5 )
    {
      *a1 = v6;
      v7 = 1;
      *a2 = a4[1];
    }
  }
  return v7;
}

