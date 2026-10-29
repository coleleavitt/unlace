__int64 __fastcall sub_3E40(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        const char *a4,
        _QWORD *a5,
        double a6,
        double a7)
{
  __int64 result; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  char v13; // dl
  _DWORD v14[10]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( netnode_supval(*(_QWORD *)(a1 + 152), a2, v14, 40, 83) <= 0 )
    return 0xFFFFFFFFLL;
  v11 = a3[1];
  if ( *a3 >= v11 || v14[2] < v11 )
    return 0xFFFFFFFFLL;
  v12 = *(_QWORD *)(a1 + 144) + v14[3];
  *a5 = v12;
  v13 = add_sourcefile(v12 + *a3, v12 + a3[1], a4);
  result = 1;
  if ( !v13 )
  {
    if ( (debug & 0x400000) != 0 )
      sub_2AE0((__int64)"TDS: can't set source '%s' to %a-%a\n", a4, a6, a7);
    return 0;
  }
  return result;
}

