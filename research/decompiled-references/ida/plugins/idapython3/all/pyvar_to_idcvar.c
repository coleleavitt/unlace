__int64 __fastcall pyvar_to_idcvar(__int64 *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v5 = 0;
  v6 = 0;
  v3 = sub_14AF0(a1, a2, a3, &v5);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v3;
}

