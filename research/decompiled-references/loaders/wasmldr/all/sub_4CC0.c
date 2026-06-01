unsigned __int64 __fastcall sub_4CC0(__int64 a1)
{
  __int64 v1; // rax
  unsigned int *v2; // rbx
  unsigned int *i; // rbp
  __int64 v4; // rsi
  void *v5; // rdx
  void *v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 272);
  v9 = __readfsqword(0x28u);
  v2 = *(unsigned int **)(a1 + 264);
  for ( i = &v2[6 * v1]; i != v2; v2 += 6 )
  {
    if ( !*((_BYTE *)v2 + 4) )
    {
      v4 = *((_QWORD *)v2 + 2);
      v7 = nullptr;
      v8 = 0;
      get_ea_name(&v7, v4, 0, 0);
      v5 = &unk_10F58;
      if ( (_QWORD)v8 )
        v5 = v7;
      add_entry(*v2, *((_QWORD *)v2 + 2), v5, 0, 0);
      if ( v7 )
      {
        *(_QWORD *)&v8 = 0;
        qfree(v7);
      }
    }
  }
  return v9 - __readfsqword(0x28u);
}
