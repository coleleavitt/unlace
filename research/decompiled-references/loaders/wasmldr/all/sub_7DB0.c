__int64 __fastcall sub_7DB0(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v9; // [rsp+8h] [rbp-50h] BYREF
  __m128i v10; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 8);
  v11 = __readfsqword(0x28u);
  v3 = v1 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, a1 + 56)) == 0 )
    sub_3890((__int64)"table section: couldn't read table count");
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0;
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  create_data(v6, 0, v5, -1);
  set_cmt(*(_QWORD *)(a1 + 40), "table count", 0);
  if ( *(_DWORD *)(a1 + 56) )
  {
    do
    {
      ++v7;
      sub_79E0((_QWORD *)a1, &v9, &v10);
    }
    while ( v7 < *(_DWORD *)(a1 + 56) );
  }
  return 1;
}
