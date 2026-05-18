__int64 __fastcall sub_C3700(int a1, char *a2, int a3, int *a4, _DWORD *a5)
{
  char *v5; // rbx
  int v6; // edx
  __int64 result; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ebp

  v5 = &a2[a3];
  if ( a4 )
  {
    v6 = *a4;
    LODWORD(result) = a4[1];
  }
  else
  {
    LODWORD(result) = 0;
    v6 = 0;
  }
  if ( a1 )
  {
    do
    {
      v8 = *(_DWORD *)a2;
      a2 += 8;
      v6 += result + v8;
      result = (unsigned int)(v6 + *((_DWORD *)a2 - 1) + result);
    }
    while ( v5 > a2 );
  }
  else
  {
    do
    {
      v9 = *(_DWORD *)a2;
      a2 += 8;
      v6 += HIBYTE(v9) + (v9 << 24) + result + ((v9 << 8) & 0xFF0000) + ((v9 >> 8) & 0xFF00);
      result = v6
             + HIBYTE(*((_DWORD *)a2 - 1))
             + (*((_DWORD *)a2 - 1) << 24)
             + (_DWORD)result
             + ((*((_DWORD *)a2 - 1) << 8) & 0xFF0000)
             + ((*((_DWORD *)a2 - 1) >> 8) & 0xFF00u);
    }
    while ( v5 > a2 );
  }
  *a5 = v6;
  a5[1] = result;
  return result;
}
