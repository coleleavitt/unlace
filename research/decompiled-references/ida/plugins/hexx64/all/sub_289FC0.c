__int64 __fastcall sub_289FC0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  _QWORD *v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)(v3 + 8) - 17) <= 1
    && (v6 = *(_QWORD **)(v3 + 24),
        sub_283C00(&v9, a1, a2, a3),
        v4 = sub_289DE0((__int64)a1, &v9, *(_QWORD *)(v3 + 24), a3),
        (_BYTE)v4) )
  {
    v7 = v10;
    **(_QWORD **)(v10 + 40) = *v6;
    v8 = sub_2418B0(*(_QWORD *)(v7 + 40));
    if ( v8 != -1 )
      *(_QWORD *)(v7 + 16) = v8;
  }
  else
  {
    return 0;
  }
  return v4;
}

