unsigned __int64 __fastcall sub_5370(__int64 a1, unsigned int a2, int a3, _BYTE *a4, __int64 a5)
{
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+4h] [rbp-454h] BYREF
  int v11; // [rsp+Ch] [rbp-44Ch]
  _BYTE v12[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v13; // [rsp+418h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  *a4 = 0;
  if ( netnode_supval(*(_QWORD *)(a1 + 144), a2, v10, 12, 109) == 12
    && netnode_supval(*(_QWORD *)(a1 + 144), a2, v12, 1024, 110) == 1024
    && v11 )
  {
    v9 = 0;
    while ( *(_DWORD *)&v12[8 * v9] != a3 )
    {
      if ( v11 == ++v9 )
        return v13 - __readfsqword(0x28u);
    }
    qsnprintf(a4, a5, " [%u]", *(_DWORD *)&v12[8 * (int)v9 + 4]);
  }
  return v13 - __readfsqword(0x28u);
}
