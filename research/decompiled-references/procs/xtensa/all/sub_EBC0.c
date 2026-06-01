__int64 __fastcall sub_EBC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // ebp
  char v11; // [rsp+0h] [rbp-28h]

  v7 = *(_QWORD *)(a3 + 72);
  if ( v7 != 3 && v7 != 16 )
    sub_C250((__int64)"create_switch_xrefs: wrong custom switch id %llu", v7, a3, a4, a5, a6, v11);
  v8 = *(_QWORD *)(a3 + 8) + (*(_QWORD *)(a3 + 16) << ((*(_DWORD *)a3 >> 7) & 3));
  if ( *(_WORD *)(a3 + 4) )
  {
    v9 = 0;
    do
    {
      ++v9;
      add_cref();
      v8 += *(_QWORD *)(a3 + 72);
    }
    while ( *(unsigned __int16 *)(a3 + 4) > v9 );
  }
  return 1;
}
