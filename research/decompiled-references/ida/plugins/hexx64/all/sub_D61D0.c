unsigned __int64 __fastcall sub_D61D0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, double a5)
{
  char v6; // r12
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rbx
  int tinfo_size; // eax
  int v11; // r9d
  int v13; // [rsp+14h] [rbp-44h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  sub_D5020((__int64)a2, a3, *(_DWORD *)(a1 + 72));
  v6 = (*(_BYTE *)(a4 + 25) & 2) == 0;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)a4 + 80 * v8;
      tinfo_size = get_tinfo_size();
      v11 = v7++;
      sub_D5260(a1, a2, v9, tinfo_size, v13, v11, a5, 1, v6);
      v8 = v7;
    }
    while ( (unsigned __int64)v7 < *(_QWORD *)(a4 + 8) );
  }
  return v14 - __readfsqword(0x28u);
}

