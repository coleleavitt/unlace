__int64 __fastcall sub_5820(__int64 a1, unsigned int a2, const char *a3, unsigned __int8 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v5 = a4;
  v6 = *(_QWORD *)(a1 + 616);
  v15 = __readfsqword(0x28u);
  v13 = 0;
  v8 = *(_QWORD *)(v6 + 144);
  v14 = 0;
  v9 = netnode_altval(v8, a2, a4);
  v10 = netnode_qgetblob(v9, &v13, 1, 0, v5);
  v11 = 0;
  if ( v10 > 0 )
  {
    v11 = sub_4D60(a1, 0, (__int64)"%s", a3);
    if ( !(_BYTE)v11 )
      v11 = sub_5480(a1, &v13, 0);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v11;
}
