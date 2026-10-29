unsigned __int64 __fastcall sub_D62A0(__int64 a1, unsigned int *a2, __int64 a3, _QWORD *a4, double a5)
{
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  int tinfo_size; // eax
  int v10; // r9d
  int v12; // [rsp+4h] [rbp-44h]
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  sub_D5020((__int64)a2, a3, *(_DWORD *)(a1 + 72));
  if ( a4[1] )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *a4 + 80 * v7;
      tinfo_size = get_tinfo_size();
      v10 = v6++;
      sub_D5260(a1, a2, v8 + 56, tinfo_size, v12, v10, a5, 1, 1);
      v7 = v6;
    }
    while ( (unsigned __int64)v6 < a4[1] );
  }
  return v13 - __readfsqword(0x28u);
}

