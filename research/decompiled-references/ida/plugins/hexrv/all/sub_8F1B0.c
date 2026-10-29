__int64 __fastcall sub_8F1B0(__int64 a1, int a2, __int64 a3, int a4, int a5, _DWORD *a6)
{
  __int64 v7; // r15
  unsigned int v9; // ebx
  int v11; // eax
  __int64 v12; // rax
  __int64 v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v15[1] = __readfsqword(0x28u);
  v9 = sub_1216D0(a3, v7, a6, 0);
  if ( !(_BYTE)v9 )
  {
    if ( *a6 != 14 )
    {
      if ( *a6 != 12 )
        return v9;
      v11 = sub_12BFC0(v7, a1, a4, a5, a2, (int)a3 + 32, a3 + 48, 2);
LABEL_6:
      LOBYTE(v9) = v11 != 0;
      return v9;
    }
    v12 = sub_1183E0(a3, v15);
    if ( v12 && sub_325910(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL), *(unsigned int *)(v12 + 4), 0) == 2 )
    {
      v11 = sub_12BFC0(v7, a1, a4, a5, a2, v15[0], v15[0], 0);
      goto LABEL_6;
    }
  }
  return v9;
}

