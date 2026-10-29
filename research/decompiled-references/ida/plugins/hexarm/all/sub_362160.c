unsigned __int64 __fastcall sub_362160(__int64 *a1, int a2, int a3, int a4, char a5)
{
  __int64 v8; // r13
  int v9; // ebp
  __int64 v10; // rbx
  int v11; // eax
  int func_qty; // eax
  _BYTE v14[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  qstrftime();
  v8 = *a1;
  v9 = a3 - a2;
  if ( *(_QWORD *)(*a1 + 936) <= 1u )
  {
    func_qty = get_func_qty();
    sub_3838D0(
      v8,
      (unsigned int)"%s %5d %5zu %5d %5d %4d %4.1f %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d\n",
      (unsigned int)v14,
      v9,
      func_qty,
      a4,
      a4 - a5);
  }
  else
  {
    v10 = *(_QWORD *)(v8 + 416);
    if ( v10 == -1 )
      v10 = *(_QWORD *)(v8 + 408);
    v11 = get_func_qty();
    sub_3838D0(v8, (unsigned int)"%s %5d %5zu %5d INTERR AT %a: %s\n", (unsigned int)v14, v9, v11, a4, v10);
  }
  return v15 - __readfsqword(0x28u);
}

