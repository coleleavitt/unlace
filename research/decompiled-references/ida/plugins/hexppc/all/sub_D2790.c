unsigned __int64 __fastcall sub_D2790(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  char v5; // r12
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int tinfo_size; // eax
  int v10; // r9d
  int v12; // [rsp+14h] [rbp-44h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  sub_D15E0((__int64)a2, a3, *(_DWORD *)(a1 + 72));
  v5 = (*(_BYTE *)(a4 + 25) & 2) == 0;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)a4 + 80 * v7;
      tinfo_size = get_tinfo_size();
      v10 = v6++;
      sub_D1820(a1, a2, v8, tinfo_size, v12, v10, 1, v5);
      v7 = v6;
    }
    while ( (unsigned __int64)v6 < *(_QWORD *)(a4 + 8) );
  }
  return v13 - __readfsqword(0x28u);
}

