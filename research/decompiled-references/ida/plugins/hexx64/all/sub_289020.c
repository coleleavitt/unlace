__int64 __fastcall sub_289020(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  unsigned int v4; // ebp
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 12) == -1
    && (v3 = *(_QWORD *)(a2 + 24), *(_DWORD *)(v3 + 12) == -1)
    && ((v6 = *(_DWORD *)(v3 + 8), v6 == 65) || v6 == 49 && *(_DWORD *)(*(_QWORD *)(v3 + 24) + 8LL) == 65)
    && (sub_283C00(&v9, a1, a2, a3), *v9 != v10)
    && (v7 = *(_QWORD *)(v10 + 8) + 16LL, v4 = sub_288E90(a1[8], v3, v7, a3), (_BYTE)v4) )
  {
    sub_255050(v7, a3);
    v8 = sub_2418B0(*(_QWORD *)(a2 + 24));
    if ( v8 != -1 )
      *(_QWORD *)a2 = v8;
  }
  else
  {
    return 0;
  }
  return v4;
}

