unsigned __int64 __fastcall sub_CFBE0(__int64 a1, unsigned int *a2, __int64 a3, _QWORD *a4)
{
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int tinfo_size; // eax
  int v9; // r9d
  int v11; // [rsp+4h] [rbp-44h]
  unsigned __int64 v12; // [rsp+8h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  sub_CE960((__int64)a2, a3, *(_DWORD *)(a1 + 72));
  if ( a4[1] )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = *a4 + 80 * v6;
      tinfo_size = get_tinfo_size();
      v9 = v5++;
      sub_CEBA0(a1, a2, v7 + 56, tinfo_size, v11, v9, 1, 1);
      v6 = v5;
    }
    while ( (unsigned __int64)v5 < a4[1] );
  }
  return v12 - __readfsqword(0x28u);
}

