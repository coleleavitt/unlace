__int64 __fastcall sub_106E0(__int64 a1, __int64 a2, __int64 a3, const char *a4, const char *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+28h] [rbp-D0h]
  __int64 selector; // [rsp+30h] [rbp-C8h]
  __int64 v21; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v22; // [rsp+C8h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( !strcmp(a4, "REGISTERS") )
  {
    selector = allocate_selector(
                 0,
                 "REGISTERS",
                 v8,
                 v9,
                 v10,
                 v11,
                 a2,
                 a3,
                 0,
                 0,
                 0,
                 17170432,
                 0,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 -1,
                 0xFFFFFFFF00000000LL);
    LOBYTE(v21) = 12;
    BYTE1(v19) = 2;
    add_segm_ex(&v18, a4, 0, 35);
    netnode_supset(**(_QWORD **)(a1 + 88), 1, a4, 0, 83);
  }
  else
  {
    v12 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 361LL);
    if ( !(_BYTE)v12 )
    {
      if ( strcmp(a5, "SPRS") )
        return v12;
      selector = allocate_selector(
                   0,
                   "SPRS",
                   v14,
                   v15,
                   v16,
                   v17,
                   a2,
                   a3,
                   0,
                   0,
                   0,
                   0,
                   0,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   0xFFFFFFFF00000000LL);
      BYTE1(v19) = 2;
      add_segm_ex(&v18, a4, "DATA", 35);
    }
  }
  return 1;
}

